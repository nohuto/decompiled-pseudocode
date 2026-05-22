/*
 * XREFs of ?OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801C67C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801975D8 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TextInputStateAdapter::OnProxyCreated(TextInputStateAdapter *this, struct IMessageProxy *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, char *))a2)(
         a2,
         &GUID_cf1538c5_01ef_4a39_acb7_1b68f01b7ef4,
         (char *)this + 40);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    FailFastWithHR(v3, retaddr, 0x3BuLL);
  }
  return v3;
}
