/*
 * XREFs of HUBDTX_LogBillboardEvent @ 0x14002BBD8
 * Callers:
 *     HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1400202C0 (HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried.c)
 *     HUBDSM_ValidatingAndLoggingBillboardStringDescriptor @ 0x1400252D0 (HUBDSM_ValidatingAndLoggingBillboardStringDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0puuhz_EtwWriteTransfer @ 0x14002E1AC (McTemplateK0puuhz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

_UNKNOWN **__fastcall HUBDTX_LogBillboardEvent(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _UNKNOWN **result; // rax
  int v7; // [rsp+28h] [rbp-140h]
  int v8; // [rsp+30h] [rbp-138h]
  _BYTE v9[256]; // [rsp+40h] [rbp-128h] BYREF

  v4 = **(_QWORD **)(a1 + 2648);
  if ( a2 )
  {
    v5 = (unsigned __int8)(*a2 - 2);
    memset(v9, 0, v5 + 2);
    memmove(v9, a2 + 2, (unsigned int)v5);
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = *(unsigned __int8 *)(v4 + 5);
    v7 = *(unsigned __int8 *)(v4 + 4);
    result = (_UNKNOWN **)WPP_RECORDER_SF_dD(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            4u,
                            5u,
                            0x5Eu,
                            (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
                            v7,
                            v8);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    return (_UNKNOWN **)McTemplateK0puuhz_EtwWriteTransfer(
                          (unsigned int)v9,
                          (_DWORD)a2,
                          (int)a1 + 1516,
                          *(_QWORD *)(a1 + 24),
                          *(_BYTE *)(v4 + 4),
                          *(_BYTE *)(v4 + 5),
                          *(_WORD *)(v4 + 6),
                          (unsigned __int64)v9 & -(__int64)(a2 != 0LL));
  return result;
}
