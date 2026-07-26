/*
 * XREFs of WPP_RECORDER_SF_qLLLL @ 0x14007F530
 * Callers:
 *     ?EvtLogTransition@NdisWdfIdle@@AEAAXW4TransitionType@SmFx@@W4StateId@?$IdleStateMachine@VNdisWdfIdle@@@@W4EventId@5@1@Z @ 0x14007F4B0 (-EvtLogTransition@NdisWdfIdle@@AEAAXW4TransitionType@SmFx@@W4StateId@-$IdleStateMachine@VNdisWdf.c)
 *     NdisMConfigMSIXTableEntry @ 0x1400851C0 (NdisMConfigMSIXTableEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qLLLL(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        ...)
{
  unsigned __int64 v11; // r11
  int v13; // eax
  int v15; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va, a9);
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, &a8, 4LL, &a9, 4LL, va, 4LL, 0LL);
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v15, &a6, 8LL, &a7);
}
