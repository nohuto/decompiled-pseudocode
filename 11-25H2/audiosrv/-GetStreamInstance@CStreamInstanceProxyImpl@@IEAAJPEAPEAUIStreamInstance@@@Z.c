/*
 * XREFs of ?GetStreamInstance@CStreamInstanceProxyImpl@@IEAAJPEAPEAUIStreamInstance@@@Z @ 0x180072020
 * Callers:
 *     ?GetStreamInstance@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUIStreamInstance@@@Z @ 0x1800885E0 (-GetStreamInstance@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::GetStreamInstance(
        CStreamInstanceProxyImpl *this,
        struct IStreamInstance **a2)
{
  struct IStreamInstance *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IStreamInstance *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct IStreamInstance *))(*(_QWORD *)v2 + 8LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
