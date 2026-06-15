/*
 * XREFs of ?GetStreamInstanceProxy@CAudioStream@@UEAAJPEAPEAUIStreamInstanceProxy@@@Z @ 0x180060340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::GetStreamInstanceProxy(CAudioStream *this, struct IStreamInstanceProxy **a2)
{
  struct IStreamInstanceProxy *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct IStreamInstanceProxy *)*((_QWORD *)this + 72);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct IStreamInstanceProxy *))(*(_QWORD *)v2 + 8LL))(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x812,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
