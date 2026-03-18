/*
 * XREFs of ?CanReleaseAnalogToken@CToken@@UEAAJPEA_N@Z @ 0x14009AEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CToken::CanReleaseAnalogToken(CToken *this, bool *a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 6) = 3;
  result = 0LL;
  *a2 = 0;
  return result;
}
