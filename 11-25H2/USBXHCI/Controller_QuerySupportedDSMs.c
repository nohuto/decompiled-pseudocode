/*
 * XREFs of Controller_QuerySupportedDSMs @ 0x140042160
 * Callers:
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 * Callees:
 *     Controller_ExecuteDSM @ 0x140081BA8 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_QuerySupportedDSMs(__int64 a1)
{
  __int64 result; // rax

  if ( (Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL) & 7) == 7 )
    *(_BYTE *)(a1 + 1041) = 1;
  result = Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL) & 3;
  if ( (_BYTE)result == 3 )
    *(_BYTE *)(a1 + 1040) = 1;
  return result;
}
