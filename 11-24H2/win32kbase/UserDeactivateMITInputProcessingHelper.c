/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1402151A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x1402136DC (UninitializeInputSensorsOnSharedThread.c)
 */

__int64 UserDeactivateMITInputProcessingHelper()
{
  CTouchProcessor *v0; // rcx
  char v1; // bl
  bool v2; // dl
  bool v3; // r8
  __int64 result; // rax
  bool v5; // dl

  v0 = WPP_GLOBAL_Control;
  v1 = 1;
  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36);
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      19,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  result = UninitializeInputSensorsOnSharedThread((__int64)v0);
  v5 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      v5 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v1 = 0;
  if ( v5 || v1 )
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v5,
             v1,
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             5,
             2,
             20,
             (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return result;
}
