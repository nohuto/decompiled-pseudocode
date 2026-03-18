/*
 * XREFs of ImpProcessSequence @ 0x140012674
 * Callers:
 *     ImpWorkerRoutine @ 0x140011DF0 (ImpWorkerRoutine.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcSendString @ 0x140012944 (ImpRpcSendString.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall ImpProcessSequence(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 InputMonitorSessionState; // rdi
  int v13; // eax
  int v14; // ebx
  __int64 v16; // r8
  unsigned __int16 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+62h] [rbp-9Eh]
  __int16 v26; // [rsp+66h] [rbp-9Ah]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  unsigned int *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  _DWORD *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  __int16 *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]

  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v26 = 0;
  v24 = 2 * a4;
  v25 = (unsigned __int16)(2 * a4);
  v27 = a3;
  v13 = ImpRpcSendString(a1, a2, (unsigned int)&v24, a5, a6, a7, a8);
  v14 = 0;
  if ( v13 != 261 )
    v14 = v13;
  if ( v14 < 0 )
  {
    if ( (unsigned int)dword_14029B1B0 > 2 && (unsigned __int8)tlgKeywordOn(&dword_14029B1B0, 0x400000000000LL) )
    {
      v20 = *(_DWORD *)InputMonitorSessionState;
      v36 = 4LL;
      v35 = &v20;
      v19 = v14;
      v37 = &v19;
      v39 = &v23;
      v38 = 4LL;
      v23 = 0x1000000LL;
      v40 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(&dword_14029B1B0, &unk_140281409, v16, 0LL, 5, &UserData);
    }
  }
  else if ( (unsigned int)dword_14029B1B0 > 5 )
  {
    v21 = *(unsigned __int8 *)(InputMonitorSessionState + 561);
    v41 = &v29;
    v35 = (unsigned int *)&v21;
    v22 = *(_DWORD *)InputMonitorSessionState;
    v37 = &v22;
    v39 = &v28;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_14029B1B8;
    v17 = a5;
    v43 = &v17;
    v45 = &v18;
    v49 = &v23;
    v47 = &v19;
    v36 = 4LL;
    v38 = 4LL;
    v28 = a1;
    v40 = 8LL;
    v29 = a2;
    v42 = 8LL;
    v44 = 2LL;
    v18 = a4;
    v46 = 2LL;
    v19 = a6;
    v48 = 4LL;
    v23 = a7;
    v50 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_14029B1B8;
    v32 = &unk_140281554;
    UserData.Reserved = 2;
    v33 = 123;
    v34 = 1;
    v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return (unsigned int)v14;
}
