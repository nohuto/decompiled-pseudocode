/*
 * XREFs of ??1init_once_completer@details@wil@@QEAA@XZ @ 0x14004E3C4
 * Callers:
 *     _wil::init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c____::_1_::dtor$0 @ 0x1400950B1 (_wil--init_once__lambda_171c398c6aabaca0f0574d3dc33ce85c____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::init_once_completer::~init_once_completer(wil::details::init_once_completer *this)
{
  InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL);
}
