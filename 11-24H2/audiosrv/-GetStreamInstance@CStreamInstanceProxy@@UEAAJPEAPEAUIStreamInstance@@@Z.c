/*
 * XREFs of ?GetStreamInstance@CStreamInstanceProxy@@UEAAJPEAPEAUIStreamInstance@@@Z @ 0x180060B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstanceProxy::GetStreamInstance(CStreamInstanceProxy *this, struct IStreamInstance **a2)
{
  struct IStreamInstance *v2; // rcx
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IStreamInstance *)*((_QWORD *)this - 3);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct IStreamInstance *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    v3 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF95,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)0x8000FFFFLL);
  }
  return v3;
}
