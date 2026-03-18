/*
 * XREFs of RIMCmIsContactSuppressedByArbitrationOnly @ 0x1401057F8
 * Callers:
 *     rimProcessPointerDeviceButtonContact @ 0x1400571D4 (rimProcessPointerDeviceButtonContact.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x140057F58 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     rimProcessPointerDeviceContact @ 0x140181B78 (rimProcessPointerDeviceContact.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1401D96B0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmIsContactSuppressedByArbitrationOnly(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 0xFFFFFFFE) != 0 )
    return 0LL;
  return result;
}
