/*
 * XREFs of ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140148BB8
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140147DA0 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 ndisIfNsiClientSubsystemInitialize(void)
{
  int v0; // edx
  int v1; // edx
  int v2; // ebx
  _QWORD v4[10]; // [rsp+30h] [rbp-50h] BYREF

  HIDWORD(v4[0]) = 0;
  memset(&v4[1], 0, 0x40uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      22,
      17,
      (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids);
  }
  LODWORD(v4[0]) = 0;
  v4[1] = &NPI_MS_NDIS_MODULEID;
  LOBYTE(v4[4]) = 1;
  v4[3] = ndisNsiClientParameterChangeHandler;
  LODWORD(v4[2]) = 7;
  v4[5] = 7LL;
  v4[8] = &unk_14011D560;
  v2 = NsiRegisterChangeNotificationEx(v4);
  if ( v2 >= 0 )
  {
    LODWORD(v4[2]) = 6;
    v4[5] = 6LL;
    v4[8] = &unk_14011D558;
    v2 = NsiRegisterChangeNotificationEx(v4);
    if ( v2 >= 0 )
    {
      LODWORD(v4[2]) = 1;
      v4[8] = &unk_14011D578;
      v4[5] = 1LL;
      v2 = NsiRegisterChangeNotificationEx(v4);
      if ( v2 >= 0 )
      {
        LODWORD(v4[2]) = 0;
        v4[5] = 0LL;
        v4[8] = &unk_14011D568;
        v2 = NsiRegisterChangeNotificationEx(v4);
        if ( v2 >= 0 )
        {
          LODWORD(v4[2]) = 17;
          v4[8] = &unk_14011D570;
          v4[5] = 17LL;
          v2 = NsiRegisterChangeNotificationEx(v4);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      22,
      18,
      (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
