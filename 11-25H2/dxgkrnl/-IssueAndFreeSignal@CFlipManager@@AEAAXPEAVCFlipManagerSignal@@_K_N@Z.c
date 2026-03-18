/*
 * XREFs of ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CBD4
 * Callers:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z @ 0x14009CF6C (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K_N@Z.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140009F2C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x14033C7E8 (DxgkImmediateSignalSynchronizationObjectByReference.c)
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
  __int64 v13; // r12
  __int64 Win32kImportTable; // rax
  __int64 v15; // rbx
  void (__fastcall *v16)(_QWORD, __int64, __int64, _QWORD); // rdi
  unsigned int TracingId; // eax
  bool v18; // zf
  char *v19; // r8
  char *v20; // rdx
  __int64 (__fastcall *v21)(__int64, char *, char *, _QWORD, __int64, unsigned __int64); // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  char v25; // bl
  void (__fastcall *v26)(_QWORD, unsigned __int64, bool, _QWORD); // rdi
  unsigned int v27; // eax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rsi
  int v30; // eax
  unsigned int v31; // r15d
  struct _KEVENT *v32; // rbx
  __int64 v33; // rax
  char v34; // bl
  void (__fastcall *v35)(_QWORD, unsigned __int64, bool, _QWORD); // rdi
  unsigned int v36; // eax
  CFlipManager::PresentHistory *v37; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  __int64 v39; // [rsp+80h] [rbp+8h] BYREF
  __int64 v40; // [rsp+90h] [rbp+18h]

  v40 = a3;
  v4 = 0LL;
  SessionTokenManager = 0;
  v7 = a3;
  IsEnabledDeviceUsageNoInline = Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline();
  v11 = *((_BYTE *)a2 + 64);
  if ( IsEnabledDeviceUsageNoInline )
  {
    if ( v11 )
    {
      v12 = *((_QWORD *)a2 + 7);
      if ( v12 > 1 )
      {
        v39 = 0LL;
        v4 = v12 - 1;
        if ( v7 )
        {
          SessionTokenManager = DxgkGetSessionTokenManager(&v39);
          if ( SessionTokenManager >= 0 )
          {
            v13 = v39;
            if ( !a4
              || (SessionTokenManager = (*(__int64 (__fastcall **)(__int64, char *, __int64, char *))(*(_QWORD *)v39 + 224LL))(
                                          v39,
                                          (char *)this - 32,
                                          v7 - 1,
                                          (char *)this + 328),
                  Win32kImportTable = DxgkGetWin32kImportTable(),
                  v15 = *((_QWORD *)a2 + 7),
                  v16 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(Win32kImportTable + 384),
                  TracingId = CFlipManager::GetTracingId(this),
                  v16(TracingId, v15, v7 - 1, (unsigned int)SessionTokenManager),
                  SessionTokenManager >= 0) )
            {
              v18 = (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() == 0;
              v19 = (char *)this + 328;
              v20 = (char *)this - 32;
              v21 = *(__int64 (__fastcall **)(__int64, char *, char *, _QWORD, __int64, unsigned __int64))(*(_QWORD *)v13 + 240LL);
              if ( v18 )
              {
                v23 = v21(v13, v20, v19, *((_QWORD *)this + 38), 0LL, v4);
              }
              else
              {
                v22 = *((_QWORD *)a2 + 3);
                *((_QWORD *)a2 + 3) = 0LL;
                v23 = v21(v13, v20, v19, *((_QWORD *)this + 38), v22, v4);
              }
              SessionTokenManager = v23;
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
            if ( SessionTokenManager >= 0 )
              goto LABEL_16;
          }
        }
        else
        {
          SessionTokenManager = -1073741823;
        }
        CFlipManager::MarkAsLost(this, (unsigned int)SessionTokenManager, 18LL);
      }
    }
LABEL_16:
    *((_QWORD *)this + 32) = *((_QWORD *)a2 + 7);
    v24 = DxgkGetWin32kImportTable();
    v25 = *((_BYTE *)a2 + 64);
    v26 = *(void (__fastcall **)(_QWORD, unsigned __int64, bool, _QWORD))(v24 + 216);
    v27 = CFlipManager::GetTracingId(this);
    v26(v27, v4, v25 == 0, (unsigned int)SessionTokenManager);
    goto LABEL_26;
  }
  if ( !v11 )
    goto LABEL_27;
  v28 = *((_QWORD *)a2 + 7);
  if ( v28 > 1 )
  {
    v29 = v28 - 1;
    v30 = DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 38), v29);
    v31 = v30;
    if ( v30 < 0 )
      CFlipManager::MarkAsLost(this, (unsigned int)v30, 18LL);
    if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      v32 = (struct _KEVENT *)*((_QWORD *)a2 + 3);
      *((_QWORD *)a2 + 3) = 0LL;
      if ( v32 )
      {
        KeSetEvent(v32, 1, 0);
        ObfDereferenceObject(v32);
      }
    }
    v33 = DxgkGetWin32kImportTable();
    v34 = *((_BYTE *)a2 + 64);
    v35 = *(void (__fastcall **)(_QWORD, unsigned __int64, bool, _QWORD))(v33 + 216);
    v36 = CFlipManager::GetTracingId(this);
    v35(v36, v29, v34 == 0, v31);
  }
  *((_QWORD *)this + 32) = *((_QWORD *)a2 + 7);
LABEL_26:
  v7 = v40;
LABEL_27:
  ++*((_QWORD *)this + 33);
  v37 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v37 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v37);
    *(_QWORD *)NextEntry = v7;
    *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 7);
    *((_DWORD *)NextEntry + 10) = (*((_BYTE *)a2 + 64) != 0) + 13;
  }
  if ( a2 )
    (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
}
