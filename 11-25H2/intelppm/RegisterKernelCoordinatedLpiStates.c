/*
 * XREFs of RegisterKernelCoordinatedLpiStates @ 0x140037DB4
 * Callers:
 *     RegisterIdleComplete @ 0x140037B28 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     AcpiGetCoordinatedLpiStates @ 0x1400326D4 (AcpiGetCoordinatedLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1400394DC (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003CE60 (LpiTranslateCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedLpiStates(__int64 a1)
{
  int CoordinatedLpiStates; // ebx
  unsigned __int16 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rbp
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  CoordinatedLpiStates = AcpiGetCoordinatedLpiStates(a1, &qword_140019848);
  if ( CoordinatedLpiStates >= 0 )
  {
    v4 = qword_140019848;
    if ( !*(_DWORD *)qword_140019848 )
      return 0;
    CoordinatedLpiStates = LpiTranslateCoordinatedIdleStates(
                             a1,
                             qword_140019848,
                             (unsigned int)&v10,
                             (unsigned int)&v11,
                             (__int64)&v12);
    if ( CoordinatedLpiStates < 0 )
      return (unsigned int)CoordinatedLpiStates;
    v5 = v10;
    *(_QWORD *)(v10 + 32) = PepQueryPlatformStateResidency;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(v5 + 16) = PepNotifyLpiPreExecute;
      v6 = PepNotifyLpiComplete;
    }
    else
    {
      v6 = AcpiCStateIdleComplete;
    }
    v7 = v11;
    *(_QWORD *)(v5 + 24) = v6;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
      PepNotifyCoordinatedLpiStates(a1, v4, v5, v7);
    qword_140019840 = v12;
    qword_140019830 = v5;
    qword_140019838 = v7;
    CoordinatedLpiStates = ((__int64 (__fastcall *)(__int64))qword_1400194D0)(v5);
    if ( CoordinatedLpiStates >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)CoordinatedLpiStates;
    v3 = 22;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 21;
LABEL_4:
    v9 = CoordinatedLpiStates;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v3,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v9);
  }
  return (unsigned int)CoordinatedLpiStates;
}
