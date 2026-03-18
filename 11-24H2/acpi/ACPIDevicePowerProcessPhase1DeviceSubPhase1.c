/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x14001D100
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x14003AD20 (WPP_RECORDER_SF_qLdqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  int v5; // ecx
  unsigned int v6; // r15d
  __int64 *v7; // r14
  int v8; // eax
  _DWORD *v9; // rbx
  __int64 *v10; // rdi
  char v11; // r10
  const char *v12; // rax
  const char *v13; // rdx
  const char *v15; // rax
  const char *v16; // rdx
  int v17; // [rsp+20h] [rbp-58h]

  v3 = *(_QWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 104);
  v6 = 0;
  v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v5 == 1 || (v8 & 0x10) != 0 )
  {
    v9 = (_DWORD *)(a1 + 212);
    *(_DWORD *)(a1 + 212) = 6;
    v10 = (__int64 *)(v3 + 8);
    goto LABEL_3;
  }
  v10 = (__int64 *)(v3 + 8);
  v9 = (_DWORD *)(a1 + 212);
  if ( _bittest64((const signed __int64 *)(v3 + 8), 0x33u) )
  {
    *v9 = 5;
LABEL_3:
    v11 = 0;
    v12 = byte_1400753E8;
    v13 = byte_1400753E8;
    if ( v3 )
    {
      a3 = *v10;
      v11 = v3;
      if ( (*v10 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(v3 + 608);
        if ( (a3 & 0x400000000000LL) != 0 )
          v13 = *(const char **)(v3 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v13,
        a3,
        56,
        v17,
        a1,
        v6,
        *v9,
        v11,
        (__int64)v12,
        (__int64)v13);
    ACPIDeviceCompleteGenericPhase(v7, v6, 0LL, a1);
    if ( v7 )
      AMLIDereferenceHandleEx((__int64)v7);
    return 0LL;
  }
  *v9 = 4;
  if ( v5 != 4 )
    goto LABEL_3;
  v7 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v3 + 760), 1397310559LL);
  if ( !v7 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1120LL), 0x100uLL);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v3 + 1120) & 0x100LL) != 0 )
    goto LABEL_3;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1120LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v6 = AMLIAsyncEvalObject(v7, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v7);
  v7 = 0LL;
  if ( v6 != 259 )
    goto LABEL_3;
  v15 = byte_1400753E8;
  v16 = byte_1400753E8;
  if ( (*v10 & 0x200000000000LL) != 0 )
  {
    v15 = *(const char **)(v3 + 608);
    if ( (*v10 & 0x400000000000LL) != 0 )
      v16 = *(const char **)(v3 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v16,
      10,
      55,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      *v9,
      v3,
      (__int64)v15,
      (__int64)v16);
  return 259LL;
}
