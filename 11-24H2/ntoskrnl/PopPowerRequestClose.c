/*
 * XREFs of PopPowerRequestClose @ 0x140A80480
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestHandleClose @ 0x140464CC4 (PopPowerRequestHandleClose.c)
 */

void __fastcall PopPowerRequestClose(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
    PopPowerRequestHandleClose(a2);
}
