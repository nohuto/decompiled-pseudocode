/*
 * XREFs of ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009EF2C
 * Callers:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009F2A8 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x1400792CC (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1403313E0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipManager::IssueAndFreeSignal(
        CFlipManager *this,
        struct CFlipManagerSignal *a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v4; // r13
  int SessionTokenManager; // r15d
  __int64 v7; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  char v11; // cl
  unsigned __int64 v12; // rax
  __int64 *v13; // r12
  char *v14; // rcx
  char *v15; // rdx
  __int64 Win32kImportTable; // rax
  __int64 v17; // rbx
  void (__fastcall *v18)(_QWORD, __int64, __int64, _QWORD); // rdi
  unsigned int TracingId; // eax
  __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rax
  char v23; // bl
  void (__fastcall *v24)(_QWORD, unsigned __int64, bool, _QWORD); // rdi
  unsigned int v25; // eax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rsi
  int v28; // eax
  unsigned int v29; // r15d
  struct _KEVENT *v30; // rbx
  __int64 v31; // rax
  char v32; // bl
  void (__fastcall *v33)(_QWORD, unsigned __int64, bool, _QWORD); // rdi
  unsigned int v34; // eax
  CFlipManager::PresentHistory *v35; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  __int64 *v37; // [rsp+80h] [rbp+8h] BYREF
  __int64 v38; // [rsp+90h] [rbp+18h]

  v38 = a3;
  v4 = 0LL;
  SessionTokenManager = 0;
  v7 = a3;
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  v11 = *((_BYTE *)a2 + 64);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( !v11 )
      goto LABEL_14;
    v12 = *((_QWORD *)a2 + 7);
    if ( v12 <= 1 )
      goto LABEL_14;
    v37 = 0LL;
    v4 = v12 - 1;
    if ( !v7 )
    {
      SessionTokenManager = -1073741823;
      goto LABEL_13;
    }
    SessionTokenManager = DxgkGetSessionTokenManager(&v37);
    if ( SessionTokenManager < 0 )
    {
LABEL_13:
      CFlipManager::MarkAsLost(this, (unsigned int)SessionTokenManager, 18LL);
      goto LABEL_14;
    }
    v13 = v37;
    v14 = (char *)this + 328;
    v15 = (char *)this - 32;
    if ( a4 )
    {
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64 *, char *, __int64, char *))(*v37 + 224))(
                              v37,
                              v15,
                              v7 - 1,
                              (char *)this + 328);
      Win32kImportTable = DxgkGetWin32kImportTable();
      v17 = *((_QWORD *)a2 + 7);
      v18 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(Win32kImportTable + 384);
      TracingId = CFlipManager::GetTracingId(this);
      v18(TracingId, v17, v7 - 1, (unsigned int)SessionTokenManager);
      if ( SessionTokenManager < 0 )
        goto LABEL_10;
      v14 = (char *)this + 328;
      v15 = (char *)this - 32;
    }
    v20 = *v13;
    v21 = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0LL;
    SessionTokenManager = (*(__int64 (__fastcall **)(__int64 *, char *, char *, _QWORD, __int64, unsigned __int64))(v20 + 240))(
                            v13,
                            v15,
                            v14,
                            *((_QWORD *)this + 38),
                            v21,
                            v4);
LABEL_10:
    (*(void (__fastcall **)(__int64 *))(*v13 + 8))(v13);
    if ( SessionTokenManager >= 0 )
    {
LABEL_14:
      *((_QWORD *)this + 32) = *((_QWORD *)a2 + 7);
      v22 = DxgkGetWin32kImportTable();
      v23 = *((_BYTE *)a2 + 64);
      v24 = *(void (__fastcall **)(_QWORD, unsigned __int64, bool, _QWORD))(v22 + 216);
      v25 = CFlipManager::GetTracingId(this);
      v24(v25, v4, v23 == 0, (unsigned int)SessionTokenManager);
      goto LABEL_23;
    }
    goto LABEL_13;
  }
  if ( !v11 )
    goto LABEL_24;
  v26 = *((_QWORD *)a2 + 7);
  if ( v26 > 1 )
  {
    v27 = v26 - 1;
    v28 = DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 38), v27);
    v29 = v28;
    if ( v28 < 0 )
      CFlipManager::MarkAsLost(this, (unsigned int)v28, 18LL);
    v30 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0LL;
    if ( v30 )
    {
      KeSetEvent(v30, 1, 0);
      ObfDereferenceObject(v30);
    }
    v31 = DxgkGetWin32kImportTable();
    v32 = *((_BYTE *)a2 + 64);
    v33 = *(void (__fastcall **)(_QWORD, unsigned __int64, bool, _QWORD))(v31 + 216);
    v34 = CFlipManager::GetTracingId(this);
    v33(v34, v27, v32 == 0, v29);
  }
  *((_QWORD *)this + 32) = *((_QWORD *)a2 + 7);
LABEL_23:
  v7 = v38;
LABEL_24:
  ++*((_QWORD *)this + 33);
  v35 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v35 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v35);
    *(_QWORD *)NextEntry = v7;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 7);
    *((_DWORD *)NextEntry + 10) = (*((_BYTE *)a2 + 64) != 0) + 13;
  }
  if ( a2 )
    (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
}
