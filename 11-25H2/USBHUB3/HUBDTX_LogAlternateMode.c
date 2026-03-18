/*
 * XREFs of HUBDTX_LogAlternateMode @ 0x14002BA08
 * Callers:
 *     HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried @ 0x1400201B0 (HUBDSM_CheckingIfAlternateModeStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor @ 0x140025140 (HUBDSM_ValidatingAndLoggingAlternateModeStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     McTemplateK0phuzu_EtwWriteTransfer @ 0x14002E0D8 (McTemplateK0phuzu_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

_UNKNOWN **__fastcall HUBDTX_LogAlternateMode(_QWORD *a1, _BYTE *a2)
{
  __int64 *v2; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int8 v7; // r15
  __int64 v8; // rbx
  _UNKNOWN **result; // rax
  _BYTE v10[256]; // [rsp+40h] [rbp-138h] BYREF

  v2 = (__int64 *)a1[331];
  v5 = *((unsigned __int8 *)v2 + 8);
  v6 = *v2;
  v7 = (*(_BYTE *)((v5 >> 2) + *v2 + 8) >> (2 * (v2[1] & 3))) & 3;
  if ( a2 )
  {
    v8 = (unsigned __int8)(*a2 - 2);
    memset(v10, 0, v8 + 2);
    memmove(v10, a2 + 2, (unsigned int)v8);
  }
  if ( v7 == 3 )
  {
    *((_BYTE *)v2 + 10) = 1;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_UNKNOWN **)WPP_RECORDER_SF_dD(
                              *(_QWORD *)(a1[1] + 1432LL),
                              4u,
                              5u,
                              0x5Fu,
                              (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                              *(unsigned __int16 *)(v6 + 4 * v5 + 44),
                              *(unsigned __int8 *)(v6 + 4 * v5 + 46));
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      return (_UNKNOWN **)McTemplateK0phuzu_EtwWriteTransfer(
                            (unsigned int)v10,
                            (unsigned int)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_ENTERED,
                            (int)a1 + 1516,
                            a1[3],
                            *(_WORD *)(v6 + 4 * v5 + 44),
                            *(_BYTE *)(v6 + 4 * v5 + 46),
                            (unsigned __int64)v10 & -(__int64)(a2 != 0LL),
                            3);
  }
  else
  {
    *((_BYTE *)v2 + 9) = 1;
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      result = (_UNKNOWN **)WPP_RECORDER_SF_DDD(
                              *(_QWORD *)(a1[1] + 1432LL),
                              4u,
                              *(unsigned __int16 *)(v6 + 4 * v5 + 44),
                              0x60u,
                              (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                              *(unsigned __int16 *)(v6 + 4 * v5 + 44),
                              *(unsigned __int8 *)(v6 + 4 * v5 + 46),
                              v7);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      return (_UNKNOWN **)McTemplateK0phuzu_EtwWriteTransfer(
                            (unsigned int)v10,
                            (unsigned int)&USBHUB3_ETW_EVENT_ALTERNATE_MODE_FAILED,
                            (int)a1 + 1516,
                            a1[3],
                            *(_WORD *)(v6 + 4 * v5 + 44),
                            *(_BYTE *)(v6 + 4 * v5 + 46),
                            (unsigned __int64)v10 & -(__int64)(a2 != 0LL),
                            v7);
  }
  return result;
}
