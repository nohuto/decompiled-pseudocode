/*
 * XREFs of ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140153888
 * Callers:
 *     ndisIfInitializePhase2 @ 0x140152A70 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 ndisIfNsiClientSubsystemInitialize(void)
{
  int v0; // edx
  int v1; // ebx
  char v3[4]; // [rsp+28h] [rbp-58h]
  _QWORD v4[10]; // [rsp+30h] [rbp-50h] BYREF

  HIDWORD(v4[0]) = 0;
  memset(&v4[1], 0, 0x40uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
  v4[8] = &unk_140127610;
  v1 = NsiRegisterChangeNotificationEx(v4);
  if ( v1 >= 0 )
  {
    LODWORD(v4[2]) = 6;
    v4[5] = 6LL;
    v4[8] = &unk_140127608;
    v1 = NsiRegisterChangeNotificationEx(v4);
    if ( v1 >= 0 )
    {
      LODWORD(v4[2]) = 1;
      v4[8] = &unk_140127628;
      v4[5] = 1LL;
      v1 = NsiRegisterChangeNotificationEx(v4);
      if ( v1 >= 0 )
      {
        LODWORD(v4[2]) = 0;
        v4[5] = 0LL;
        v4[8] = &unk_140127618;
        v1 = NsiRegisterChangeNotificationEx(v4);
        if ( v1 >= 0 )
        {
          LODWORD(v4[2]) = 17;
          v4[8] = &unk_140127620;
          v4[5] = 17LL;
          v1 = NsiRegisterChangeNotificationEx(v4);
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v1;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_6b68bced203d37be22ae4726b477fac7_Traceguids,
      *(_DWORD *)v3);
  }
  return (unsigned int)v1;
}
