/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x14075DC60
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopEtEnergyTrackerInitialize @ 0x14075E0CC (PopEtEnergyTrackerInitialize.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(int *a1, HANDLE *a2)
{
  int v2; // eax
  int Object; // edi
  bool v6; // cf
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // esi
  __int128 v11; // [rsp+50h] [rbp-19h] BYREF
  __int128 v12; // [rsp+60h] [rbp-9h]
  _DWORD v13[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  __int128 v18; // [rsp+90h] [rbp+27h]
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1;
  Handle = 0LL;
  v13[1] = 0;
  v17 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)(v2 - 1) > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    if ( (a1[2] & 0xF0000000) <= 0x10000000 )
    {
      v13[0] = 48;
      v14 = 0LL;
      v6 = KeGetCurrentThread()->PreviousMode != 0;
      v15 = 0LL;
      v18 = 0LL;
      v16 = v6 ? 0 : 0x200;
      Object = ObCreateObjectEx(
                 0,
                 *(_QWORD *)(PopEtGlobals + 32),
                 (unsigned int)v13,
                 KeGetCurrentThread()->PreviousMode);
      if ( Object >= 0 )
      {
        PopEtEnergyTrackerInitialize(0LL);
        MEMORY[0x20] = *(_QWORD *)a1;
        MEMORY[0x28] = a1[2];
        MEMORY[0x284] |= 1u;
        MEMORY[0x258] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        MEMORY[0x25C] = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
        MEMORY[0x260] = 1;
        PopAcquireRwLockExclusive((unsigned __int64 *)(PopEtGlobals + 16));
        v7 = PopEtGlobals;
        v8 = *(_QWORD **)(PopEtGlobals + 8);
        if ( *v8 != PopEtGlobals )
          __fastfail(3u);
        MEMORY[0] = PopEtGlobals;
        MEMORY[8] = v8;
        *v8 = 0LL;
        *(_QWORD *)(v7 + 8) = 0LL;
        PopReleaseRwLock((signed __int64 *)(v7 + 16));
        v11 = 1uLL;
        v12 = 0uLL;
        Object = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, &v11);
        if ( Object >= 0 )
        {
          PopAcquireRwLockExclusive((unsigned __int64 *)0x10);
          v9 = MEMORY[0x26C];
          if ( !MEMORY[0x26C] )
            MEMORY[0x284] &= ~1u;
          PopReleaseRwLock((signed __int64 *)0x10);
          if ( v9 )
          {
            Object = -1073741670;
          }
          else
          {
            Object = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&Handle);
            if ( Object >= 0 )
            {
              Object = 0;
              *a2 = Handle;
              Handle = 0LL;
            }
          }
        }
      }
      if ( Handle )
        NtClose(Handle);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)Object;
}
