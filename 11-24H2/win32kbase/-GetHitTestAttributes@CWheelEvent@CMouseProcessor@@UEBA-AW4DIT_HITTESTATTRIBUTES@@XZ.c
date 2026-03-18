/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@UEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x14021CF90
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1)
{
  int v1; // edi
  int v3; // eax
  unsigned int v4; // ebx
  char v5; // cl
  int result; // eax

  v1 = *(__int16 *)(a1 + 32);
  if ( !*(_WORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7978);
  v3 = *(_DWORD *)(a1 + 28);
  v4 = (((v1 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( v3 != 1 )
    v4 = ((v1 >> 15) & 0xFFFFFFFE) + 3;
  v5 = *(_BYTE *)(W32GetUserSessionState(((v1 >> 15) & 0xFFFFFFFE) + 3) + 14340);
  result = v4 | 0x100;
  if ( (v5 & 4) == 0 )
    return v4;
  return result;
}
