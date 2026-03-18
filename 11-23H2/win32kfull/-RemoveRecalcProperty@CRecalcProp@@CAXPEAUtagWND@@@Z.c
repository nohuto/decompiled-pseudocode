/*
 * XREFs of ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C005BDFC
 * Callers:
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C005D750 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C005CF9C (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::RemoveRecalcProperty(struct tagWND *a1)
{
  char v2; // dl
  char v3; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  CRecalcProp *v6; // rbx

  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v3 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v3 = 0;
  }
  if ( v2 || v3 )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      56LL,
      5u,
      7u,
      0x38u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      *(_QWORD *)a1);
  v4 = InternalRemoveProp((__int64)a1, CRecalcProp::s_atom, 1u);
  v6 = (CRecalcProp *)v4;
  if ( v4 )
    *(_QWORD *)(v4 + 16) = 0LL;
  if ( *(_DWORD *)(v4 + 24) == 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1670LL);
  *((_DWORD *)a1 + 80) &= ~0x80u;
  CRecalcProp::`scalar deleting destructor'(v6, v5);
}
