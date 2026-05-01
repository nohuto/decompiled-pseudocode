/*
 * XREFs of ?NextItem@CContainerIterator@@SAJPEAUIEnumShellItems@@PEAPEAUIShellItem2@@@Z @ 0x180196214
 * Callers:
 *     ?Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z @ 0x180196134 (-Next@CShallowContainerIterator@@QEAA_NPEAPEAUIShellItem2@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerIterator::NextItem(struct IEnumShellItems *a1, struct IShellItem2 **a2)
{
  struct IEnumShellItemsVtbl *lpVtbl; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v7 = 0LL;
  v6 = 0;
  v4 = ((__int64 (__fastcall *)(struct IEnumShellItems *, __int64, __int64 *, int *))lpVtbl->Next)(a1, 1LL, &v7, &v6);
  if ( !v4 )
  {
    v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IShellItem2 **))v7)(
           v7,
           &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
           a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
