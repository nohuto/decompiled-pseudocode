/*
 * XREFs of ?Delete@CRecalcProp@@UEAAXXZ @ 0x1C005BD80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C005CF9C (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 */

void __fastcall CRecalcProp::Delete(CRecalcProp *this)
{
  char v2; // r8
  char v3; // dl

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v3 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      v2,
      53,
      5,
      7,
      53,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
  if ( this )
    CRecalcProp::`scalar deleting destructor'(this, v3);
}
