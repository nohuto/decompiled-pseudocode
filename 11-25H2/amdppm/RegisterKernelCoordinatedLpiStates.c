/*
 * XREFs of RegisterKernelCoordinatedLpiStates @ 0x140034938
 * Callers:
 *     RegisterIdleComplete @ 0x140034408 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 *     AcpiGetCoordinatedLpiStates @ 0x140029AC8 (AcpiGetCoordinatedLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x140037930 (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003C88C (LpiTranslateCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedLpiStates(__int64 a1)
{
  int v2; // edx
  int CoordinatedLpiStates; // ebx
  int v4; // r9d
  __int64 v5; // rsi
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v8; // rbp
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  CoordinatedLpiStates = AcpiGetCoordinatedLpiStates(a1, &qword_140014C68);
  if ( CoordinatedLpiStates >= 0 )
  {
    v5 = qword_140014C68;
    if ( !*(_DWORD *)qword_140014C68 )
      return 0;
    CoordinatedLpiStates = LpiTranslateCoordinatedIdleStates(
                             a1,
                             qword_140014C68,
                             (unsigned int)&v11,
                             (unsigned int)&v12,
                             (__int64)&v13);
    if ( CoordinatedLpiStates < 0 )
      return (unsigned int)CoordinatedLpiStates;
    v6 = v11;
    *(_QWORD *)(v11 + 32) = PepQueryPlatformStateResidency;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(v6 + 16) = PepNotifyLpiPreExecute;
      v7 = PepNotifyLpiComplete;
    }
    else
    {
      v7 = AcpiCStateIdleComplete;
    }
    v8 = v12;
    *(_QWORD *)(v6 + 24) = v7;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
      PepNotifyCoordinatedLpiStates(a1, v5, v6, v8);
    qword_140014C60 = v13;
    qword_140014C50 = v6;
    qword_140014C58 = v8;
    CoordinatedLpiStates = ((__int64 (__fastcall *)(__int64))qword_1400148F0)(v6);
    if ( CoordinatedLpiStates >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)CoordinatedLpiStates;
    v4 = 22;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 21;
LABEL_4:
    v10 = CoordinatedLpiStates;
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      3,
      v4,
      (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
      v10);
  }
  return (unsigned int)CoordinatedLpiStates;
}
