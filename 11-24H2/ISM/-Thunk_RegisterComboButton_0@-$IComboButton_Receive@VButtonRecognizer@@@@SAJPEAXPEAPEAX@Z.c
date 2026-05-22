/*
 * XREFs of ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1801A6A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IComboButton_Receive<ButtonRecognizer>::Thunk_RegisterComboButton_0(
        ButtonRecognizer *a1,
        __int64 a2)
{
  _BYTE *v2; // r8

  v2 = *(_BYTE **)(a2 + 8);
  LOBYTE(v2) = *v2;
  return ButtonRecognizer::RegisterComboButton(
           a1,
           *(struct tagMsgRoutingInfo **)a2,
           (__int64)v2,
           *(struct ButtonRegistrationABI **)(a2 + 16));
}
