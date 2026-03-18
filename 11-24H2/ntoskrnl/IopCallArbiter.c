/*
 * XREFs of IopCallArbiter @ 0x140A8D4E4
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1405A6878 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopSetupArbiterAndTranslators @ 0x140A6C1C8 (IopSetupArbiterAndTranslators.c)
 *     PnpReleaseResourcesInternal @ 0x140A8D290 (PnpReleaseResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopCallArbiter(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // esi
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 *v9; // r8
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  if ( !(_DWORD)a2 )
  {
    DWORD2(v11) = 0;
    a2 = 0LL;
    *(_QWORD *)&v12 = 0LL;
    goto LABEL_17;
  }
  if ( (_DWORD)a2 == 1 )
  {
    *(_QWORD *)&v11 = a3;
    DWORD2(v11) = 0;
    *(_QWORD *)&v12 = 0LL;
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 8), 1LL, &v11, a4);
LABEL_15:
    a2 = v6;
LABEL_17:
    *(_QWORD *)&v11 = a3;
    goto LABEL_18;
  }
  if ( (_DWORD)a2 != 2 )
  {
    if ( (_DWORD)a2 == 4 )
      return 3221225474LL;
    if ( (_DWORD)a2 != 5 )
    {
      if ( (_DWORD)a2 == 6 )
      {
        a2 = 6LL;
        v11 = *a3;
        v12 = a3[1];
LABEL_18:
        v9 = &v11;
        return guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 8), a2, v9, a4);
      }
      if ( (_DWORD)a2 == 7 )
      {
        v8 = *(__int128 *)((char *)a3 + 40);
        *((_QWORD *)a3 + 6) = &v10;
        *((_QWORD *)a3 + 5) = &v10;
        *(_QWORD *)&v11 = &v10;
        v10 = v8;
        result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 8), 7LL, &v11, a4);
        *(__int128 *)((char *)a3 + 40) = v10;
        return result;
      }
      if ( (_DWORD)a2 != 9 )
        return 3221225485LL;
      goto LABEL_15;
    }
  }
  v9 = 0LL;
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 8), a2, v9, a4);
}
