/*
 * XREFs of ?SetSnapAssistTabEnablement@CMultitaskingViewFrame@@UEAAJHH@Z @ 0x1804BD8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewFrame::SetSnapAssistTabEnablement(CMultitaskingViewFrame *this, int a2, int a3)
{
  __int64 result; // rax

  *((_DWORD *)this + 650) = a2;
  result = 0LL;
  *((_DWORD *)this + 651) = a3;
  return result;
}
