/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x140751240
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline @ 0x1404F1730 (Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEtEnergyTrackerInitialize @ 0x1407516C0 (PopEtEnergyTrackerInitialize.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     PsEnumProcesses @ 0x1408DECE4 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(int *a1, HANDLE *a2)
{
  int v2; // eax
  int Object; // edi
  int v6; // r9d
  bool v7; // cf
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // esi
  __int128 v12; // [rsp+50h] [rbp-19h] BYREF
  __int128 v13; // [rsp+60h] [rbp-9h]
  _DWORD v14[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  __int128 v19; // [rsp+90h] [rbp+27h]
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1;
  Handle = 0LL;
  v14[1] = 0;
  v18 = 0;
  v12 = 0LL;
  v13 = 0LL;
  if ( (unsigned int)(v2 - 1) > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    if ( (unsigned int)Feature_NpuProcessAttribution__private_IsEnabledDeviceUsageNoInline()
      && (a1[2] & 0xF0000000) > 0x10000000 )
    {
      Object = -1073741811;
    }
    else
    {
      v14[0] = 48;
      v15 = 0LL;
      v7 = KeGetCurrentThread()->PreviousMode != 0;
      v16 = 0LL;
      v19 = 0LL;
      v17 = v7 ? 0 : 0x200;
      LOBYTE(v6) = KeGetCurrentThread()->PreviousMode;
      Object = ObCreateObjectEx(0, *(_QWORD *)(PopEtGlobals + 32), (unsigned int)v14, v6);
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
        v8 = PopEtGlobals;
        v9 = *(_QWORD **)(PopEtGlobals + 8);
        if ( *v9 != PopEtGlobals )
          __fastfail(3u);
        MEMORY[0] = PopEtGlobals;
        MEMORY[8] = v9;
        *v9 = 0LL;
        *(_QWORD *)(v8 + 8) = 0LL;
        PopReleaseRwLock((signed __int64 *)(v8 + 16));
        v12 = 1uLL;
        v13 = 0uLL;
        Object = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, &v12);
        if ( Object >= 0 )
        {
          PopAcquireRwLockExclusive((unsigned __int64 *)0x10);
          v10 = MEMORY[0x26C];
          if ( !MEMORY[0x26C] )
            MEMORY[0x284] &= ~1u;
          PopReleaseRwLock((signed __int64 *)0x10);
          if ( v10 )
          {
            Object = -1073741670;
          }
          else
          {
            Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&Handle);
            if ( Object >= 0 )
            {
              Object = 0;
              *a2 = Handle;
              Handle = 0LL;
            }
          }
        }
      }
    }
    if ( Handle )
      NtClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)Object;
}
