/*
 * XREFs of ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x14000F00C
 * Callers:
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAPOProcessingHost@@@Z @ 0x14000E60C (--0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUI.c)
 *     ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140032CF4 (-RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREA.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetMaxSupportedConnectionVersion(struct IAudioProcessingObject *a1)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
    a1,
    &GUID_25385759_3236_4101_a943_25693dfb5d2d,
    &v9);
  v8 = 0LL;
  ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
    a1,
    &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
    &v8);
  v2 = 0;
  v7 = 0;
  v3 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v7);
    v3 = v8;
    v2 = v7;
  }
  v4 = v9;
  if ( (v2 & 2) != 0 )
  {
    v5 = 0x7FFFFFFF;
  }
  else if ( v9 || (v5 = 1, (v2 & 1) != 0) )
  {
    v5 = 2;
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = v9;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
