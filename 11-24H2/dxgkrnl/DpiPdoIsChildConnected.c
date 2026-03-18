/*
 * XREFs of DpiPdoIsChildConnected @ 0x14031D668
 * Callers:
 *     DpiFdoHandleDisplayDetectControl @ 0x140027534 (DpiFdoHandleDisplayDetectControl.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x140028BA8 (DpiFdoGetChildDescriptor.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x14024A3D0 (DpiFdoPendingCreatePdoCompletion.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiQueryChildStatus @ 0x14031E888 (DpiDxgkDdiQueryChildStatus.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  char v6; // r12
  __int64 v9; // r14
  __int64 ChildStatus; // r15
  _QWORD *ChildDescriptor; // rax
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  bool v16; // cf
  __int64 v17; // r13
  int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rax
  _DWORD v27[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v28; // [rsp+50h] [rbp-59h]
  _DWORD v29[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v30; // [rsp+68h] [rbp-41h]
  __int128 v31; // [rsp+70h] [rbp-39h]
  __int64 v32; // [rsp+80h] [rbp-29h]
  int v33; // [rsp+88h] [rbp-21h]
  int v34; // [rsp+8Ch] [rbp-1Dh]
  int v35; // [rsp+90h] [rbp-19h]
  int v36; // [rsp+94h] [rbp-15h]
  int v37; // [rsp+98h] [rbp-11h]
  int v38; // [rsp+9Ch] [rbp-Dh]
  __int64 v39; // [rsp+A0h] [rbp-9h]

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 3440), 1u);
  ChildDescriptor = DpiFdoGetChildDescriptor(v9, a2);
  v14 = (__int64)ChildDescriptor;
  if ( !ChildDescriptor )
  {
    WdLogSingleEntry1(2LL, 0LL);
    WdLogGlobalForLineNumber = 6101;
    v18 = a2;
    goto LABEL_11;
  }
  if ( *(_DWORD *)ChildDescriptor == 1
    && (*((_DWORD *)ChildDescriptor + 1) == 15 || (unsigned int)(*((_DWORD *)ChildDescriptor + 1) - 16) <= 1) )
  {
    v6 = 1;
  }
  switch ( *((_DWORD *)ChildDescriptor + 4) )
  {
    case 1:
      *a5 = 1;
LABEL_16:
      v18 = v12;
      goto LABEL_7;
    case 3:
LABEL_5:
      v28 = 0LL;
      v15 = *(_QWORD *)(v9 + 4032);
      v16 = v6 != 0;
      v17 = *(_QWORD *)(v9 + 40);
      v18 = v12;
      v27[1] = v12;
      v27[0] = v16 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v15, 1, v13);
      KeWaitForSingleObject(*(PVOID *)(v14 + 72), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 4032), 1LL);
      LOBYTE(v19) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v17, *(_QWORD *)(v9 + 48), v27, v19);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v9 + 4032));
      KeReleaseMutex(*(PRKMUTEX *)(v14 + 72), 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v9 + 4032), 1u, v20);
      if ( (int)ChildStatus < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v17 + 208), ChildStatus);
        WdLogGlobalForLineNumber = 6193;
        goto LABEL_11;
      }
      *a5 = v28;
      goto LABEL_7;
    case 4:
      if ( (!v6 || *((_DWORD *)ChildDescriptor + 1) != 15 || *(_QWORD *)(v9 + 3368)) && a3 )
        goto LABEL_5;
      *a5 = *((_BYTE *)ChildDescriptor + 65);
      goto LABEL_16;
  }
  WdLogSingleEntry1(2LL, 0LL);
  v18 = a2;
  WdLogGlobalForLineNumber = 6212;
LABEL_7:
  v21 = *a5;
  if ( !*a5 && *(_BYTE *)(v14 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3544), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, v14);
    KeReleaseMutex((PRKMUTEX)(v9 + 3544), 0);
    v21 = *a5;
  }
  *a6 = v21 == (*(_QWORD *)(v14 + 48) == 0LL);
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(v9 + 3440));
  KeLeaveCriticalRegion();
  v30 = 0LL;
  v34 = 0;
  v31 = 0LL;
  v22 = *(_QWORD *)(v9 + 2696);
  v33 = 0;
  v32 = 0LL;
  v30 = 0LL;
  v38 = (unsigned __int8)*a5;
  v29[0] = 30;
  v29[1] = 72;
  v31 = 0LL;
  v35 = 38;
  v36 = v18;
  v37 = ChildStatus;
  v39 = v22;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, *(_QWORD *)(v9 + 5888));
  return (unsigned int)ChildStatus;
}
