/*
 * XREFs of ?ndisStartNsiProvider@@YAJXZ @ 0x140148B0C
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140147DA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 */

__int64 ndisStartNsiProvider(void)
{
  NTSTATUS v0; // eax
  int v1; // edx
  unsigned int v2; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      16,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids);
  v0 = NmrRegisterProvider(&ProviderCharacteristics, 0LL, &NmrProviderHandle);
  v2 = v0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      17,
      (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
      v0);
  }
  return v2;
}
