/*
 * XREFs of KsepCacheInsert @ 0x140AA046C
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x14073E384 (KsepDbCacheInsertDevice.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KsepCacheInsert(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 ***v11; // rax
  __int64 **v12; // rcx
  __int64 ****v13; // rdx
  __int64 result; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 **v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdx

  v6 = guard_dispatch_icall_no_overrides(a2, a2, a3, a4);
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v6 % *(_DWORD *)(a1 + 12)));
  if ( (_QWORD *)*v7 != v7 )
    ++*(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v6;
  v8 = (_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 16) + 16LL * (v6 % *(_DWORD *)(a1 + 12));
  v10 = *(_QWORD *)v9;
  if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
    goto LABEL_12;
  *v8 = v10;
  *(_QWORD *)(a2 + 16) = v9;
  *(_QWORD *)(v10 + 8) = v8;
  v11 = (__int64 ***)(a2 + 24);
  *(_QWORD *)v9 = v8;
  v12 = (__int64 **)(a1 + 32);
  v13 = *(__int64 *****)(a1 + 40);
  if ( *v13 != (__int64 ***)(a1 + 32) )
    goto LABEL_12;
  *v11 = v12;
  *(_QWORD *)(a2 + 32) = v13;
  *v13 = v11;
  *(_QWORD *)(a1 + 40) = v11;
  ++*(_DWORD *)(a1 + 60);
  result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = result;
  if ( (unsigned int)result <= *(_DWORD *)(a1 + 24) )
    return result;
  v15 = *v12;
  v16 = **v12;
  v17 = (__int64)(*v12 - 3);
  if ( *(__int64 **)(v16 + 8) != *v12
    || (v18 = (__int64 **)v15[1], *v18 != v15)
    || (*v18 = (__int64 *)v16, *(_QWORD *)(v16 + 8) = v18, v19 = *(_QWORD *)(v17 + 8), *(_QWORD *)(v19 + 8) != v17 + 8)
    || (v20 = *(_QWORD **)(v17 + 16), *v20 != v17 + 8) )
  {
LABEL_12:
    __fastfail(3u);
  }
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  --*(_DWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 64);
  return guard_dispatch_icall_no_overrides(v17, v20, v19, v17);
}
