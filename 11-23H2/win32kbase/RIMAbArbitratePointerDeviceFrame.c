/*
 * XREFs of RIMAbArbitratePointerDeviceFrame @ 0x1C017D2E4
 * Callers:
 *     RIMSuppressAllActiveContacts @ 0x1C018C27C (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E454 (rimEndAllActiveContactsWorker.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01A7EB8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8308 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A890C (rimEndPointerDeviceStaleContacts.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00E0BDA (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1C00E0CE0 (RIMAbIsDeviceArbitrationEnabled.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C920 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CD64 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 */

__int64 __fastcall RIMAbArbitratePointerDeviceFrame(struct RawInputManagerObject *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PDEVICE_OBJECT v5; // rcx
  void *v6; // r9
  __int64 v7; // rbp
  _QWORD **v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  __int64 *v16; // rax
  char v17; // dl

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v6 = &WPP_d0136f6132203aac44a878359d3f87a2_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      28,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  v7 = *(_QWORD *)(v3 + 472);
  v8 = (_QWORD **)((char *)a1 + 448);
  v9 = 1;
  if ( RIMAbIsDeviceArbitrationEnabled((__int64)v5, a2, a3, (__int64)v6) )
  {
    rimAbRemoveGlobalPenDeadzoneIfExpired((__int64)a1, v10, v11, v12);
    rimAbUpdateDeadzonesAndResurrectContacts((__int64)a1, v3, v13, v14);
    v15 = *v8;
    while ( v15 != v8 )
    {
      v16 = v15 - 1;
      v15 = (_QWORD *)*v15;
      if ( *v16 != v7 )
        v9 &= rimAbSuppressLowerRankActivityForFrame(a1, *v16, v7);
    }
    rimAbSuppressLowerRankActivityInFrame((__int64)a1, v7);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v17 = 0;
    }
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v17,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x1Eu,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
        v9);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (_DWORD)gRimLog,
        4,
        1,
        29,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      31,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  return v9;
}
