/*
 * XREFs of ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14019FBD0
 * Callers:
 *     xxxKENLSProcs @ 0x1400FB32C (xxxKENLSProcs.c)
 * Callees:
 *     GetModifierBits @ 0x1400F0240 (GetModifierBits.c)
 *     GetModificationNumber @ 0x14010F4DC (GetModificationNumber.c)
 *     ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x140214598 (-GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z.c)
 */

__int64 __fastcall KbdNlsFuncTypeNormal(struct _VK_TO_FUNCTION_TABLE *a1, struct tagKE *a2, unsigned __int64 a3)
{
  __int64 UserSessionState; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax

  if ( !a2 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1);
  ModifierBits = GetModifierBits((unsigned __int8 **)&off_140259110, UserSessionState + 14400);
  ModificationNumber = GetModificationNumber((__int64)&off_140259110, ModifierBits);
  if ( ModificationNumber == 15 )
    return 0LL;
  else
    return GenerateNlsVkKey(a1, ModificationNumber, a2, a3);
}
