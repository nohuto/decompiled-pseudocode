/*
 * XREFs of HalpIumGetVariable @ 0x14049B570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalpIumGetVariable(_WORD *Src, __int128 *a2, _DWORD *a3, size_t *a4, void *a5)
{
  __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // rcx
  ULONG_PTR v14; // rsi
  __int64 *Pool2; // rax
  __int64 *v16; // rdi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  size_t v21; // r8

  if ( !qword_140FC11F0 )
    return 0x8000000000000003uLL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9 + 2;
  v11 = 2 * v9 + 58;
  if ( v11 >= 0x1FA000 )
    return 0x8000000000000004uLL;
  v13 = *a4;
  if ( *a4 >= 2072576 - v11 )
    v13 = 2072576 - v11;
  *a4 = v13;
  v14 = (v11 + v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, v14, 0x77466B53u);
  v16 = Pool2;
  if ( !Pool2 )
    return 0x8000000000000009uLL;
  *Pool2 = (__int64)(Pool2 + 7);
  memmove(Pool2 + 7, Src, v10);
  v17 = *v16;
  v16[1] = v10;
  v18 = *a2;
  v16[6] = v10 + v17;
  *((_OWORD *)v16 + 1) = v18;
  v16[5] = *a4;
  v19 = guard_dispatch_icall_no_overrides(3LL, v16);
  v20 = v19;
  if ( a3 )
    *a3 = *((_DWORD *)v16 + 8);
  v21 = v16[5];
  *a4 = v21;
  if ( v19 )
  {
    if ( v19 == 0x8000000000000005uLL && v14 == 2072576 )
      v20 = 0x8000000000000004uLL;
  }
  else
  {
    memmove(a5, (const void *)v16[6], v21);
  }
  ExFreePoolWithTag(v16, 0);
  return v20;
}
