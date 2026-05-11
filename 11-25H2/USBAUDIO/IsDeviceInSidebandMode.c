/*
 * XREFs of IsDeviceInSidebandMode @ 0x14000EF84
 * Callers:
 *     SidebandCapableDeferredFilterFactoryCreate @ 0x14002FA20 (SidebandCapableDeferredFilterFactoryCreate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D82C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

__int64 __fastcall IsDeviceInSidebandMode(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbp
  _DWORD *v3; // r14
  char v4; // di
  char v5; // r8
  unsigned int v6; // esi
  int v7; // edx
  void *v8; // r8
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  Timeout.QuadPart = -100000000LL;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, (_DWORD)a2, v5, WPP_GLOBAL_Control->DeviceExtension);
  Object[0] = (PVOID)(v2 + 816);
  Object[1] = (PVOID)(v2 + 840);
  v6 = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
  if ( v6 == 1 )
    v6 = -1073741536;
  KeWaitForSingleObject((PVOID)(v2 + 760), Executive, 0, 0, 0LL);
  *v3 = *(_DWORD *)(v2 + 864);
  KeReleaseMutex((PRKMUTEX)(v2 + 760), 0);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v7 || v4 )
  {
    v8 = &WPP_74de0be54ead3cda59d335c16d367676_Traceguids;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)v8,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v6;
}
