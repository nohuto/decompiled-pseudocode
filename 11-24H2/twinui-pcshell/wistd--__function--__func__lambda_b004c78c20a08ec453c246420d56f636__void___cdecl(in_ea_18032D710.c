/*
 * XREFs of wistd::__function::__func__lambda_b004c78c20a08ec453c246420d56f636__void___cdecl(int_const_&)_::operator() @ 0x18032D710
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_b004c78c20a08ec453c246420d56f636__void___cdecl_int_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  wil::details *v3; // rcx
  wil::details **v4; // rax

  v3 = 0LL;
  if ( *a2 )
  {
    v4 = *(wil::details ***)(a1 + 8);
    if ( v4 )
      v3 = *v4;
    wil::details::SetEvent(v3, a2);
  }
}
