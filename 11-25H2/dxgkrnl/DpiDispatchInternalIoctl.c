/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1403A3500
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     LoadEtwStackLocation @ 0x14003B954 (LoadEtwStackLocation.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x14003BB08 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2, __int64 a3)
{
  bool v3; // r15
  _BYTE *EtwStackLocation; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(__int64, IRP *); // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 RemlockSize; // [rsp+20h] [rbp-A9h]
  int v18; // [rsp+40h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-81h]
  char v20; // [rsp+50h] [rbp-79h]
  _BYTE v21[72]; // [rsp+58h] [rbp-71h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-29h]
  __int128 v23; // [rsp+B0h] [rbp-19h]
  __int128 v24; // [rsp+C0h] [rbp-9h]
  __int128 v25; // [rsp+D0h] [rbp+7h]
  __int64 v26; // [rsp+E0h] [rbp+17h]

  v18 = -1;
  v3 = 0;
  v19 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 1003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 1003);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v18, 1003);
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v21, (__int64)a2);
    v22 = *(_OWORD *)EtwStackLocation;
    v23 = *((_OWORD *)EtwStackLocation + 1);
    v24 = *((_OWORD *)EtwStackLocation + 2);
    v25 = *((_OWORD *)EtwStackLocation + 3);
    v26 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v7, &EventEnterDpiDispatchInternalIoctl, v8, a1);
  }
  v9 = *(_QWORD *)(a1 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, File, 1u, 0x20u);
  v11 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 2808;
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(__int64, IRP *))(v9 + 112);
    v3 = 1;
    if ( v12 )
    {
      v11 = v12(a1, a2);
      v3 = v11 != -1073741738;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v9 + 56) == 1 && *(_QWORD *)(v9 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v11 = IofCallDriver(*(PDEVICE_OBJECT *)(v9 + 160), a2);
      goto LABEL_10;
    }
    v11 = -1073741637;
  }
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
LABEL_9:
  if ( v3 )
LABEL_10:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 64), a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v11;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventExitDpiDispatchInternalIoctl,
      v13,
      a1,
      RemlockSize);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit, v15, v18);
  return v11;
}
