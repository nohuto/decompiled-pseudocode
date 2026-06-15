/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x1800A6DF8
 * Callers:
 *     _wil::init_once__lambda_f00ad828a2d515e855b0de47f172bf9e____::_1_::dtor$0 @ 0x1801648AF (_wil--init_once__lambda_f00ad828a2d515e855b0de47f172bf9e____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
