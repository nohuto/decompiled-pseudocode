/*
 * XREFs of RootHub_HandlePortStatusChangeEvent @ 0x14000AEBC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 * Callees:
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DetectAndAcknowledgePortResume @ 0x140008F4C (RootHub_DetectAndAcknowledgePortResume.c)
 *     RootHub_DumpPortData @ 0x140009750 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x14000B0AC (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  char result; // al
  int v10; // edx
  unsigned int *v11; // rsi
  int Ulong; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // edx
  char v16; // [rsp+28h] [rbp-30h]

  v2 = *(unsigned __int8 *)(a2 + 3);
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(_BYTE *)(a2 + 3);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), a2, 11, 213, (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids, v16);
  }
  v6 = v2 - 1;
  v7 = 16LL * (v2 - 1);
  RootHub_DumpPortData(v7 + a1[5], a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v8,
        11,
        214,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v2);
    }
    RootHub_AcquireReadModifyWriteLock((__int64)a1, v6);
    v11 = (unsigned int *)(a1[5] + v7);
    Ulong = XilRegister_ReadUlong(v5, v11);
    v14 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        215,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        Ulong);
    }
    XilRegister_WriteUlong(v5, v11, v14 & 0xE00C200 | 0xFA0000u);
    RootHub_ReleaseReadModifyWriteLock((__int64)a1, v6);
    result = XilRegister_ReadUlong(v5, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 72LL),
               v15,
               11,
               216,
               (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
               result);
    }
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v2, 0);
    if ( !result )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v10) = 5;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1[1] + 72LL),
            v10,
            11,
            217,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
        }
      }
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_14006BDB0)(UcxDriverGlobals, *a1);
    }
  }
  return result;
}
