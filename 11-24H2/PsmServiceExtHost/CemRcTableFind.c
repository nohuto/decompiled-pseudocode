/*
 * XREFs of CemRcTableFind @ 0x180004230
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005F9C (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x1800782FC (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CemRcTableFind(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rax

  RtlAcquireSRWLockShared(a1 + 16);
  v6 = *(_QWORD *)a1;
  v7 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_15;
    v6 ^= a1;
  }
  if ( !v6 )
  {
LABEL_15:
    v6 = 0LL;
    goto LABEL_11;
  }
  do
  {
    v8 = a3(a2, v6);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)v6;
      if ( !v7 )
        goto LABEL_6;
    }
    else
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( !v7 )
      {
LABEL_6:
        v6 = v9;
        continue;
      }
    }
    if ( !v9 )
      goto LABEL_6;
    v6 ^= v9;
  }
  while ( v6 );
  if ( !v6 || !*(_QWORD *)(v6 + 24) )
    goto LABEL_15;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_11:
  RtlReleaseSRWLockShared(a1 + 16);
  return v6;
}
