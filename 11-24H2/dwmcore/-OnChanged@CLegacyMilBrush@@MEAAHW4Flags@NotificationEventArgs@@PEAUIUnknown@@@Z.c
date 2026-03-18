/*
 * XREFs of ?OnChanged@CLegacyMilBrush@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180204270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyMilBrush::OnChanged(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)(a1 + 40) |= 1u;
  return result;
}
