/*
 * XREFs of MouConfiguration @ 0x1C0011A90
 * Callers:
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000103C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00047D0 (WPP_RECORDER_SF_S.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C0004E00 (RtlWideCharArrayCopyStringWorker.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x1C0005CFC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0005DA8 (WPP_RECORDER_SF_Dd.c)
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

void __fastcall MouConfiguration(__int64 a1)
{
  void *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  int v5; // r8d
  int v6; // r9d
  int v7; // r9d
  __int64 Pool2; // rax
  HANDLE v9; // rbx
  __int64 (__fastcall *SystemRoutineAddress)(__int64, HANDLE, void *, _QWORD); // rax
  int v11; // eax
  int v12; // ecx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG v17[2]; // [rsp+20h] [rbp-69h]
  HANDLE *p_Handle; // [rsp+20h] [rbp-69h]
  int v19; // [rsp+40h] [rbp-49h] BYREF
  int Lock_high; // [rsp+44h] [rbp-45h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+48h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+60h] [rbp-29h] BYREF
  int *v24; // [rsp+80h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp-1h]
  int *p_Lock_high; // [rsp+90h] [rbp+7h]
  __int64 v27; // [rsp+98h] [rbp+Fh]
  _DWORD *v28; // [rsp+A0h] [rbp+17h]
  __int64 v29; // [rsp+A8h] [rbp+1Fh]
  PWSTR Buffer; // [rsp+B0h] [rbp+27h]
  _DWORD v31[2]; // [rsp+B8h] [rbp+2Fh] BYREF
  size_t *v32; // [rsp+C0h] [rbp+37h]
  __int64 v33; // [rsp+C8h] [rbp+3Fh]

  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = 100;
  Handle = 0LL;
  v2 = 0LL;
  WPP_MAIN_CB.DeviceQueue.Lock = 0x100000000LL;
  if ( (stru_1C000B370.Length & 1) == 0
    && (stru_1C000B370.MaximumLength & 1) == 0
    && stru_1C000B370.Length <= stru_1C000B370.MaximumLength
    && stru_1C000B370.MaximumLength != 0xFFFF
    && (stru_1C000B370.Buffer || !stru_1C000B370.Length && !stru_1C000B370.MaximumLength) )
  {
    pcchNewDestLength[0] = 0LL;
    RtlWideCharArrayCopyStringWorker(
      stru_1C000B370.Buffer,
      (unsigned __int64)stru_1C000B370.MaximumLength >> 1,
      pcchNewDestLength,
      stru_1C000B370.Buffer,
      *(size_t *)v17);
    stru_1C000B370.Length = 2 * LOWORD(pcchNewDestLength[0]);
  }
  p_Handle = &Handle;
  v3 = IoOpenDriverRegistryKey(a1, 0LL, 131097LL, 0LL);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v7 = 61;
LABEL_12:
    LOBYTE(v4) = 3;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v7, (_DWORD)p_Handle, v3);
    goto LABEL_21;
  }
  Pool2 = ExAllocatePool2(256LL, 280LL, 1131769677LL);
  v2 = (void *)Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v4, 1LL);
    goto LABEL_21;
  }
  *(_DWORD *)(Pool2 + 8) = 288;
  *(_DWORD *)(Pool2 + 32) = 67108868;
  *(_QWORD *)(Pool2 + 16) = L"MouseDataQueueSize";
  *(_DWORD *)(Pool2 + 64) = 288;
  *(_QWORD *)(Pool2 + 24) = &WPP_MAIN_CB.Reserved + 1;
  *(_DWORD *)(Pool2 + 88) = 67108868;
  *(_QWORD *)(Pool2 + 72) = L"MaximumPortsServiced";
  *(_QWORD *)(Pool2 + 80) = (char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4;
  *(_QWORD *)(Pool2 + 128) = L"PointerDeviceBaseName";
  *(_QWORD *)(Pool2 + 136) = &stru_1C000B370;
  *(_QWORD *)(Pool2 + 184) = L"ConnectMultiplePorts";
  *(_QWORD *)(Pool2 + 192) = &WPP_MAIN_CB.DeviceQueue.Lock;
  *(_DWORD *)(Pool2 + 120) = 288;
  *(_DWORD *)(Pool2 + 144) = 16777217;
  *(_DWORD *)(Pool2 + 176) = 288;
  *(_DWORD *)(Pool2 + 200) = 67108868;
  v9 = Handle;
  *(_OWORD *)pcchNewDestLength = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)pcchNewDestLength, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))MmGetSystemRoutineAddress((PUNICODE_STRING)pcchNewDestLength);
  LODWORD(p_Handle) = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, HANDLE, void *, _QWORD))RtlQueryRegistryValues;
  v3 = SystemRoutineAddress(3221225472LL, v9, v2, 0LL);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v7 = 63;
    goto LABEL_12;
  }
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_S(WPP_GLOBAL_Control->DeviceExtension, v4, 1, 64, (_DWORD)p_Handle, (__int64)stru_1C000B370.Buffer);
  }
LABEL_23:
  v11 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
  if ( !*((_DWORD *)&WPP_MAIN_CB.Reserved + 2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, (_DWORD)p_Handle, 0);
    v11 = 100;
    goto LABEL_27;
  }
  if ( *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) <= 0xAAAAAAAu )
  {
LABEL_27:
    v12 = 24 * v11;
    goto LABEL_28;
  }
  v12 = 2400;
LABEL_28:
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 2) = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v5,
      v6,
      (_DWORD)p_Handle,
      v12,
      SBYTE4(WPP_MAIN_CB.DeviceQueue.Lock));
  v13 = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) == 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v4, v5, 67, (_DWORD)p_Handle, v13);
  }
  if ( (unsigned int)dword_1C000B000 > 5 && tlgKeywordOn() )
  {
    v19 = *((_DWORD *)&WPP_MAIN_CB.Reserved + 2);
    v24 = &v19;
    Lock_high = HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock);
    p_Lock_high = &Lock_high;
    v28 = v31;
    Buffer = stru_1C000B370.Buffer;
    v31[0] = stru_1C000B370.Length;
    LODWORD(pcchNewDestLength[0]) = WPP_MAIN_CB.DeviceQueue.Lock;
    v32 = pcchNewDestLength;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 2LL;
    v31[1] = 0;
    v33 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v14, (unsigned __int8 *)dword_1C000962C, v15, v16, 7u, &v23);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( Handle )
    ZwClose(Handle);
}
