/*
 * XREFs of ?GetFlags@FxRequestMemory@@UEAAGXZ @ 0x140095CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxRequestMemory::GetFlags(FxRequestMemory *this)
{
  return LOWORD(this->m_ChildListHead.Blink);
}
