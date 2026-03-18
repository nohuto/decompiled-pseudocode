/*
 * XREFs of SmcProcessCreateRequest @ 0x140798E7C
 * Callers:
 *     SmSetStoreInformation @ 0x140A5F8F0 (SmSetStoreInformation.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x140498A6C (SmpGetProcessPartition.c)
 *     StEtaInitialize @ 0x1404BAFA4 (StEtaInitialize.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SmcCacheCreatePrepare @ 0x140798D7C (SmcCacheCreatePrepare.c)
 *     SmcCacheAdd @ 0x14079CEA0 (SmcCacheAdd.c)
 *     SmcCacheCleanup @ 0x14079CFE4 (SmcCacheCleanup.c)
 *     SmcCacheDelete @ 0x14079D07C (SmcCacheDelete.c)
 *     SmcCacheDereference @ 0x14079D0D8 (SmcCacheDereference.c)
 *     SmcCacheStart @ 0x14079D478 (SmcCacheStart.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessCreateRequest(unsigned __int64 a1, int a2, char a3)
{
  struct _PRIVILEGE_SET *v6; // rsi
  void *v7; // r14
  int Prepare; // ebx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  struct _PRIVILEGE_SET *v13; // rax
  unsigned __int64 i; // rbx
  _DWORD v16[4]; // [rsp+20h] [rbp-478h] BYREF
  void *v17; // [rsp+30h] [rbp-468h]
  _DWORD v18[8]; // [rsp+40h] [rbp-458h] BYREF
  __int16 v19; // [rsp+45Eh] [rbp-3Ah]

  v6 = 0LL;
  v16[0] = -1;
  v7 = 0LL;
  memset_0(v18, 0, 0x420uLL);
  if ( a2 == 1056 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v9 = a1;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 1055) = *(_BYTE *)(v9 + 1055);
    }
    v10 = (_OWORD *)a1;
    v11 = v18;
    v12 = 8LL;
    do
    {
      *v11 = *v10;
      v11[1] = v10[1];
      v11[2] = v10[2];
      v11[3] = v10[3];
      v11[4] = v10[4];
      v11[5] = v10[5];
      v11[6] = v10[6];
      v11 += 8;
      *(v11 - 1) = v10[7];
      v10 += 8;
      --v12;
    }
    while ( v12 );
    *v11 = *v10;
    v11[1] = v10[1];
    if ( LOBYTE(v18[0]) != 3 || (v18[0] & 0xFFFFFF00) != 0 || v18[5] )
    {
      Prepare = -1073741811;
    }
    else
    {
      v7 = (void *)(SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 2288);
      v17 = v7;
      Prepare = SmcCacheCreatePrepare((__int64)v7);
      if ( Prepare >= 0 )
      {
        v13 = (struct _PRIVILEGE_SET *)SmAllocEx(1064LL, 1631808883LL, -1);
        v6 = v13;
        if ( v13 )
        {
          memset_0(v13, 0, 0x428uLL);
          StEtaInitialize((__int64)&v6[5].Control);
          *(_QWORD *)&v6[8].PrivilegeCount = 0LL;
          for ( i = (unsigned __int64)v6[8].Privilege; i < (unsigned __int64)&v6[27].Privilege[0].Luid.HighPart; i += 24LL )
          {
            *(_DWORD *)i = -1;
            *(_QWORD *)(i + 16) = 0LL;
            ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(i + 16));
          }
          v19 = 0;
          Prepare = SmcCacheStart(v7);
          if ( Prepare >= 0 )
          {
            Prepare = SmcCacheAdd(v7, v6, v16);
            if ( Prepare >= 0 )
            {
              v6 = 0LL;
              v16[1] = 1;
              Prepare = 0;
              *(_DWORD *)(a1 + 4) = v16[0];
            }
          }
        }
        else
        {
          Prepare = -1073741670;
        }
      }
    }
  }
  else
  {
    Prepare = -1073741306;
  }
  if ( v16[0] != -1 )
    SmcCacheDereference(v7);
  if ( v6 )
  {
    SmcCacheCleanup(v7, v6);
    CmSiFreeMemory(v6);
  }
  return (unsigned int)Prepare;
}
