/*
 * XREFs of IopCallArbiter @ 0x140A88588
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A305C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopSetupArbiterAndTranslators @ 0x140A699E8 (IopSetupArbiterAndTranslators.c)
 *     PnpReleaseResourcesInternal @ 0x140A88334 (PnpReleaseResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCallArbiter(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h]
  __int128 v9; // [rsp+40h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  if ( !a2 )
  {
    DWORD2(v8) = 0;
    *(_QWORD *)&v9 = 0LL;
LABEL_17:
    *(_QWORD *)&v8 = a3;
    return guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8));
  }
  if ( a2 == 1 )
  {
    *(_QWORD *)&v8 = a3;
    DWORD2(v8) = 0;
    *(_QWORD *)&v9 = 0LL;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8));
    goto LABEL_17;
  }
  if ( a2 != 2 )
  {
    if ( a2 == 4 )
      return 3221225474LL;
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
      {
        if ( a2 == 7 )
        {
          v6 = *(__int128 *)((char *)a3 + 40);
          *((_QWORD *)a3 + 6) = &v7;
          *((_QWORD *)a3 + 5) = &v7;
          *(_QWORD *)&v8 = &v7;
          v7 = v6;
          result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8));
          *(__int128 *)((char *)a3 + 40) = v7;
          return result;
        }
        if ( a2 != 9 )
          return 3221225485LL;
        goto LABEL_17;
      }
      v8 = *a3;
      v9 = a3[1];
    }
  }
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8));
}
