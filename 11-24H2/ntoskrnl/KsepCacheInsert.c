/*
 * XREFs of KsepCacheInsert @ 0x140A9B7FC
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x14073C2B4 (KsepDbCacheInsertDevice.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KsepCacheInsert(__int64 a1, __int64 a2)
{
  unsigned int v4; // r9d
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 ***v9; // rax
  __int64 **v10; // rcx
  __int64 ****v11; // rdx
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 **v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx

  v4 = guard_dispatch_icall_no_overrides(a2, a2);
  v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  if ( (_QWORD *)*v5 != v5 )
    ++*(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v4;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12));
  v8 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
    goto LABEL_12;
  *v6 = v8;
  *(_QWORD *)(a2 + 16) = v7;
  *(_QWORD *)(v8 + 8) = v6;
  v9 = (__int64 ***)(a2 + 24);
  *(_QWORD *)v7 = v6;
  v10 = (__int64 **)(a1 + 32);
  v11 = *(__int64 *****)(a1 + 40);
  if ( *v11 != (__int64 ***)(a1 + 32) )
    goto LABEL_12;
  *v9 = v10;
  *(_QWORD *)(a2 + 32) = v11;
  *v11 = v9;
  *(_QWORD *)(a1 + 40) = v9;
  ++*(_DWORD *)(a1 + 60);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( (unsigned int)result <= *(_DWORD *)(a1 + 24) )
    return result;
  v13 = *v10;
  v14 = **v10;
  v15 = (__int64)(*v10 - 3);
  if ( *(__int64 **)(v14 + 8) != *v10
    || (v16 = (__int64 **)v13[1], *v16 != v13)
    || (*v16 = (__int64 *)v14, *(_QWORD *)(v14 + 8) = v16, v17 = *(_QWORD *)(v15 + 8), *(_QWORD *)(v17 + 8) != v15 + 8)
    || (v18 = *(_QWORD **)(v15 + 16), *v18 != v15 + 8) )
  {
LABEL_12:
    __fastfail(3u);
  }
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  --*(_DWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 64);
  return guard_dispatch_icall_no_overrides(v15, v18);
}
