/*
 * XREFs of _anonymous_namespace_::GetArrangedOptions @ 0x1C023AE08
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C005CB44 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023C18C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C005E8D8 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F28A0 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::GetArrangedOptions(
        struct tagWND *a1,
        struct tagRECT *a2,
        CMonitorTopology::MonitorData *this)
{
  struct tagRECT v5; // xmm6
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // edi
  char v10; // bl
  struct tagRECT v12; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v13; // [rsp+50h] [rbp-38h] BYREF

  v5 = *WindowMargins::ReduceRect(&v13, a2, a1, (const struct tagRECT *)*((unsigned __int16 *)this + 20));
  v13 = v5;
  CMonitorTopology::MonitorData::LogicalWorkArea(this, &v12, (const struct tagWND *)a2);
  v9 = 0;
  v10 = 1;
  if ( _mm_cvtsi128_si32((__m128i)v5) == v12.left )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v6 || (_BYTE)v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        5,
        4,
        29,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v9 = 2;
  }
  if ( v13.right == v12.right )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v6 || (_BYTE)v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        5,
        4,
        30,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v9 |= 8u;
  }
  if ( v13.top == v12.top )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v6 || (_BYTE)v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        5,
        4,
        31,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v9 |= 4u;
  }
  if ( v13.bottom == v12.bottom )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v6 || v10 )
    {
      LOBYTE(v7) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        v8,
        5,
        4,
        32,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
    v9 |= 0x10u;
  }
  return v9;
}
