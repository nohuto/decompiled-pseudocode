/*
 * XREFs of DpiDispatchPnp @ 0x1403B7200
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     LoadEtwStackLocation @ 0x14003B954 (LoadEtwStackLocation.c)
 *     McTemplateK0phbr1q_EtwWriteTransfer @ 0x14003BB08 (McTemplateK0phbr1q_EtwWriteTransfer.c)
 *     DpiGdoDispatchGdiPnp @ 0x1400577E0 (DpiGdoDispatchGdiPnp.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDispatchPnp(__int64 a1, IRP *a2)
{
  bool v2; // r14
  _BYTE *EtwStackLocation; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  struct _IO_REMOVE_LOCK *v9; // r15
  NTSTATUS v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 (__fastcall *v14)(__int64, IRP *); // rax
  UCHAR MinorFunction; // bl
  __int64 v16; // r8
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v19[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v20; // [rsp+90h] [rbp-88h]
  __int128 v21; // [rsp+A0h] [rbp-78h]
  __int128 v22; // [rsp+B0h] [rbp-68h]
  __int128 v23; // [rsp+C0h] [rbp-58h]
  __int64 v24; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation(v19, (__int64)a2);
    v20 = *(_OWORD *)EtwStackLocation;
    v21 = *((_OWORD *)EtwStackLocation + 1);
    v22 = *((_OWORD *)EtwStackLocation + 2);
    v23 = *((_OWORD *)EtwStackLocation + 3);
    v24 = *((_QWORD *)EtwStackLocation + 8);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0phbr1q_EtwWriteTransfer(v6, &EventEnterDpiDispatchPnp, v7, a1);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (struct _IO_REMOVE_LOCK *)(v8 + 64);
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 64), a2, File, 1u, 0x20u);
  v13 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 3067;
  }
  else
  {
    v14 = *(__int64 (__fastcall **)(__int64, IRP *))(v8 + 128);
    v2 = 1;
    if ( v14 )
    {
      MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
      v13 = v14(a1, a2);
      v2 = MinorFunction != 2;
      goto LABEL_7;
    }
    v13 = -1073741637;
    if ( *(_BYTE *)(v8 + 56) == 1 && *(_QWORD *)(v8 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v13 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 160), a2);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v8 + 16) == 1953656900 && *(_DWORD *)(v8 + 20) == 6 )
      v13 = DpiGdoDispatchGdiPnp(a1, (__int64)a2, v11, v12);
  }
  a2->IoStatus.Status = v13;
  IofCompleteRequest(a2, 0);
LABEL_7:
  if ( v2 )
LABEL_8:
    IoReleaseRemoveLockEx(v9, a2, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(RemlockSize) = v13;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventExitDpiDispatchPnp,
      v16,
      a1,
      RemlockSize);
  }
  return v13;
}
