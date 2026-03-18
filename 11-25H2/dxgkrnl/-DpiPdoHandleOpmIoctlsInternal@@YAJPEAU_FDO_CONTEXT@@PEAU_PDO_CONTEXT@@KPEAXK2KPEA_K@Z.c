/*
 * XREFs of ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004ACB4
 * Callers:
 *     DpiProcessOpmVmBusRequest @ 0x140089D4C (DpiProcessOpmVmBusRequest.c)
 *     DpiPdoHandleOpmIoctls @ 0x1403B37C4 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     McTemplateK0ptpqqq_EtwWriteTransfer @ 0x14004BF30 (McTemplateK0ptpqqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpjq_EtwWriteTransfer @ 0x14004BFE8 (McTemplateK0ptpjq_EtwWriteTransfer.c)
 *     ?DpiOpmLogCreateContext@@YAXJI@Z @ 0x1400634D8 (-DpiOpmLogCreateContext@@YAXJI@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089740 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x1400899D0 (-DpiOpmLogSetLevel@@YAXJII@Z.c)
 *     McTemplateK0ptpjqq_EtwWriteTransfer @ 0x140089E3C (McTemplateK0ptpjqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpq_EtwWriteTransfer @ 0x140089EFC (McTemplateK0ptpq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqq_EtwWriteTransfer @ 0x140089F94 (McTemplateK0ptpqq_EtwWriteTransfer.c)
 *     McTemplateK0ptqppq_EtwWriteTransfer @ 0x14008A03C (McTemplateK0ptqppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkOpmCreateHandle @ 0x14019DD38 (DxgkOpmCreateHandle.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmTranslateHandle @ 0x1403C9DE0 (DxgkOpmTranslateHandle.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403D12F8 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403D1690 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403D5F64 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1403E4168 (DpiPdoVerifyOpmParameters.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1403FB6F4 (DxgkOpmTranslateAndDestroyHandle.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctlsInternal(
        struct _FDO_CONTEXT *RenderAdapterForSession,
        struct _PDO_CONTEXT *a2,
        int a3,
        char *a4,
        unsigned int a5,
        void **a6,
        PLARGE_INTEGER a7,
        unsigned __int64 *a8)
{
  int v9; // ecx
  struct _PDO_CONTEXT *v12; // r14
  __int64 v13; // rdi
  unsigned int v14; // r12d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  int v20; // r15d
  char v21; // r15
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rcx
  int v26; // eax
  void **v27; // r15
  __int64 (__fastcall *v28)(__int64, void *, char *, void **); // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r15d
  unsigned int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // r15
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v42; // esi
  __int64 (__fastcall *v43)(_QWORD, _QWORD, _QWORD, void **); // rax
  int v44; // r15d
  int v45; // r15d
  char v46; // r15
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  unsigned int v54; // esi
  __int64 v55; // rcx
  __int64 v56; // r8
  char v57; // r15
  int v58; // ecx
  int v59; // r8d
  void *v60; // rsi
  int v61; // eax
  char v62; // r15
  int v63; // ecx
  int v64; // r8d
  void *v65; // rsi
  int v66; // eax
  __int64 (__fastcall *v67)(__int64, void **, char *, _QWORD, char *); // rax
  __int64 v68; // rcx
  char v69; // r15
  int v70; // ecx
  int v71; // r8d
  int v72; // eax
  int v73; // eax
  unsigned int v74; // r8d
  unsigned int v75; // edx
  char v76; // r15
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // eax
  __int64 (__fastcall *v81)(__int64, void *, char *, void **); // rax
  __int64 v82; // rcx
  void *v83; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A1h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-A1h]
  void **v86; // [rsp+28h] [rbp-99h]
  void **v87; // [rsp+28h] [rbp-99h]
  __int64 v88; // [rsp+30h] [rbp-91h]
  __int64 v89; // [rsp+30h] [rbp-91h]
  int v90; // [rsp+50h] [rbp-71h]
  void *v91; // [rsp+58h] [rbp-69h] BYREF
  void **v92; // [rsp+60h] [rbp-61h] BYREF
  struct _PDO_CONTEXT *v93; // [rsp+68h] [rbp-59h]
  int v94; // [rsp+70h] [rbp-51h]
  void *v95; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 *v96; // [rsp+80h] [rbp-41h]
  __int128 v97; // [rsp+88h] [rbp-39h] BYREF
  struct _FDO_CONTEXT *v98[2]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v99; // [rsp+A8h] [rbp-19h] BYREF

  v9 = (int)a6;
  v92 = a6;
  v96 = a8;
  *a8 = 0LL;
  v12 = a2;
  LODWORD(v13) = -1073741637;
  v90 = 0;
  v14 = 0;
  LODWORD(v91) = 1;
  v94 = 0;
  v93 = a2;
  v98[0] = RenderAdapterForSession;
  if ( *((_BYTE *)RenderAdapterForSession + 1158) )
  {
    v73 = *((_DWORD *)RenderAdapterForSession + 291);
    if ( v73 == 2 )
    {
      v12 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = (struct _FDO_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_167:
        ReleaseMiniportListMutex();
        return (unsigned int)v13;
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)RenderAdapterForSession + 484) )
        DpiCheckForOutstandingD3Requests((__int64)RenderAdapterForSession);
      ExAcquireResourceSharedLite(*((PERESOURCE *)RenderAdapterForSession + 21), 1u);
      v14 = 1;
      if ( a3 == 2303115 )
        v94 = 1;
      else
        ReleaseMiniportListMutex();
      v9 = (int)v92;
    }
    else
    {
      if ( v73 != 1 )
      {
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 393;
        return (unsigned int)v13;
      }
      LODWORD(v91) = 0;
    }
  }
  if ( *((_QWORD *)RenderAdapterForSession + 399) )
  {
    v15 = a3 - 2303107;
    if ( !v15 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303107, (_DWORD)a4, a5, v9, (_DWORD)a7, 4, 4);
      if ( (int)v13 < 0 )
        goto LABEL_35;
      v35 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_35;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, void **))RenderAdapterForSession + 399))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v35,
              v92);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v88) = *(_DWORD *)v92;
        LODWORD(v86) = v35;
        LODWORD(Timeout) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v36,
          &EventOpmGetCertificateSize,
          v37,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeout,
          v86,
          v88,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 455;
      v33 = 4;
      goto LABEL_31;
    }
    v16 = v15 - 4;
    if ( !v16 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303111, (_DWORD)a4, a5, v9, (_DWORD)a7, 4, (_DWORD)a7);
      if ( (int)v13 < 0 )
        goto LABEL_35;
      v54 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_35;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v33 = (unsigned int)a7;
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 400))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v54,
              (unsigned int)a7,
              v92);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v89) = (_DWORD)a7;
        LODWORD(v87) = v54;
        LODWORD(Timeouta) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v55,
          &EventOpmGetCertificate,
          v56,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeouta,
          v87,
          v89,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 505;
      goto LABEL_31;
    }
    v17 = v16 - 4;
    if ( !v17 )
    {
      v95 = 0LL;
      *(_QWORD *)&v97 = 0LL;
      v38 = -1;
      v90 = 8;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303115, (_DWORD)a4, a5, v9, (_DWORD)a7, 4, 8);
      if ( (int)v13 >= 0 )
      {
        v42 = *(_DWORD *)a4;
        if ( (_DWORD)v91 && v42 == DXGKMDT_OPM_VOS_OPM_INDIRECT_DISPLAY )
        {
          LODWORD(v13) = -1073741198;
          WdLogSingleEntry4(4LL, -1073741198LL, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          WdLogGlobalForLineNumber = 540;
          goto LABEL_35;
        }
        *(_QWORD *)&v97 = v92;
        if ( v14 )
        {
          LODWORD(v93) = *((_DWORD *)v93 + 126);
          LODWORD(v13) = CreateProtectedOutputIndirectDisplay(
                           RenderAdapterForSession,
                           v98[0],
                           v42,
                           (unsigned int)v93,
                           v92,
                           &v95);
        }
        else
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_35;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
          v43 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, void **))*((_QWORD *)RenderAdapterForSession + 401);
          LODWORD(v93) = *((_DWORD *)v12 + 126);
          LODWORD(v13) = v43(*((_QWORD *)RenderAdapterForSession + 6), (unsigned int)v93, (unsigned int)v42, &v95);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DxgkOpmCreateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), v95, v92);
            if ( (int)v13 < 0 )
            {
              (*((void (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 407))(
                *((_QWORD *)RenderAdapterForSession + 6),
                v95);
              if ( (_DWORD)v13 == -1073741198 )
                LODWORD(v13) = -1073741637;
            }
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        DpiOpmLogCreateContext(v13, v42);
        v38 = (char)v93;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptqppq_EtwWriteTransfer(
          v40,
          v39,
          v41,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v38,
          (char)v95,
          *(_QWORD *)v97,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 608;
      goto LABEL_30;
    }
    v18 = v17 - 4;
    if ( !v18 )
    {
      v57 = 0;
      v91 = 0LL;
      v90 = 16;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303119, (_DWORD)a4, a5, v9, (_DWORD)a7, 8, 16);
      if ( (int)v13 >= 0 )
      {
        v60 = *(void **)a4;
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_35;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
        v61 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), v60, &v91);
        v57 = (char)v91;
        LODWORD(v13) = v61;
        if ( v61 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void *, void **))RenderAdapterForSession + 402))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v91,
                           v92);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v58,
          (unsigned int)&EventOPMGetRandomNumber,
          v59,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v57,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 663;
      goto LABEL_30;
    }
    v19 = v18 - 4;
    if ( !v19 )
    {
      v69 = 0;
      v92 = 0LL;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303123, (_DWORD)a4, a5, v9, (_DWORD)a7, 264, 0);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_35;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
        v72 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), *(void **)a4, (void **)&v92);
        v69 = (char)v92;
        LODWORD(v13) = v72;
        if ( v72 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void **, char *))RenderAdapterForSession + 403))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v92,
                           a4 + 8);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v70,
          (unsigned int)&EventOPMSetSigningKeyAndSequenceNumbers,
          v71,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v69,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 713;
      goto LABEL_30;
    }
    v20 = v19 - 4;
    if ( v20 )
    {
      v44 = v20 - 4;
      if ( v44 )
      {
        v45 = v44 - 4;
        if ( v45 )
        {
          if ( v45 != 4 )
            goto LABEL_35;
          v62 = 0;
          v92 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303139, (_DWORD)a4, a5, v9, (_DWORD)a7, 8, 0);
          if ( (int)v13 >= 0 )
          {
            v65 = *(void **)a4;
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_35;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
            v66 = DxgkOpmTranslateAndDestroyHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), v65, (void **)&v92);
            v62 = (char)v92;
            LODWORD(v13) = v66;
            if ( v66 >= 0 )
              LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, void **))RenderAdapterForSession + 407))(
                               *((_QWORD *)RenderAdapterForSession + 6),
                               v92);
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpq_EtwWriteTransfer(
              v63,
              (unsigned int)&EventOPMDestroyProtectedOutput,
              v64,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v62,
              v13);
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          WdLogGlobalForLineNumber = 995;
        }
        else
        {
          v46 = 0;
          LODWORD(v93) = -1;
          v92 = 0LL;
          LODWORD(v91) = 0;
          *(_OWORD *)v98 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303135, (_DWORD)a4, a5, v9, (_DWORD)a7, 4112, 0);
          if ( (int)v13 >= 0 )
          {
            v50 = *((_QWORD *)RenderAdapterForSession + 3);
            LODWORD(v91) = *((_DWORD *)a4 + 1026);
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(v50, 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_35;
            v51 = *((_QWORD *)RenderAdapterForSession + 504);
            LODWORD(v93) = *((_DWORD *)a4 + 6);
            DxgkAcquireAdapterOpmI2CSync(v51);
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
            v52 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), *(void **)a4, (void **)&v92);
            v46 = (char)v92;
            LODWORD(v13) = v52;
            if ( v52 >= 0 )
            {
              v67 = (__int64 (__fastcall *)(__int64, void **, char *, _QWORD, char *))*((_QWORD *)RenderAdapterForSession
                                                                                      + 406);
              v68 = *((_QWORD *)RenderAdapterForSession + 6);
              *(_OWORD *)v98 = *(_OWORD *)(a4 + 24);
              LODWORD(v13) = v67(v68, v92, a4 + 8, (unsigned int)v91, a4 + 4108);
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            v53 = *((_QWORD *)a4 + 3) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
            if ( !v53 )
              v53 = *((_QWORD *)a4 + 4) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
            if ( !v53 && *((_DWORD *)a4 + 11) >= 0x10u )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0ptpqqq_EtwWriteTransfer(
                  v48,
                  (unsigned int)&EventOPMSetProtectionLevel,
                  v49,
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v14,
                  v46,
                  *((_DWORD *)a4 + 12),
                  *((_DWORD *)a4 + 13),
                  v13);
              WdLogSingleEntry4(
                4LL,
                (int)v13,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                *((unsigned int *)a4 + 12));
              v74 = *((_DWORD *)a4 + 13);
              v75 = *((_DWORD *)a4 + 12);
              WdLogGlobalForLineNumber = 936;
              DpiOpmLogSetLevel(v13, v75, v74);
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpjqq_EtwWriteTransfer(
              v48,
              v47,
              v49,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              v46,
              (__int64)v98,
              (char)v91,
              v13);
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, (unsigned int)v93);
          WdLogGlobalForLineNumber = 948;
        }
      }
      else
      {
        v91 = 0LL;
        v76 = 0;
        v90 = 4096;
        v97 = 0LL;
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303131, (_DWORD)a4, a5, v9, (_DWORD)a7, 4104, 4096);
        if ( (int)v13 >= 0 )
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_35;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
          v80 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), *(void **)a4, &v91);
          v76 = (char)v91;
          LODWORD(v13) = v80;
          if ( v80 >= 0 )
          {
            v81 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 405);
            v82 = *((_QWORD *)RenderAdapterForSession + 6);
            v97 = *(_OWORD *)(a4 + 24);
            LODWORD(v13) = v81(v82, v91, a4 + 8, v92);
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpjq_EtwWriteTransfer(
            v78,
            v77,
            v79,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            v76,
            (__int64)&v97,
            v13);
        WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
        WdLogGlobalForLineNumber = 868;
      }
      goto LABEL_30;
    }
    LODWORD(v93) = -1;
    v21 = 0;
    v90 = 4096;
    v91 = 0LL;
    v99 = 0LL;
    LODWORD(v13) = DpiPdoVerifyOpmParameters(2303127, (_DWORD)a4, a5, v9, (_DWORD)a7, 4120, 4096);
    if ( (int)v13 >= 0 )
    {
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_35;
      v25 = *((_QWORD *)RenderAdapterForSession + 504);
      LODWORD(v93) = *((_DWORD *)a4 + 10);
      DxgkAcquireAdapterOpmI2CSync(v25);
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v26 = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504), *(void **)a4, &v91);
      v27 = v92;
      LODWORD(v13) = v26;
      if ( v26 >= 0 )
      {
        v28 = (__int64 (__fastcall *)(__int64, void *, char *, void **))*((_QWORD *)RenderAdapterForSession + 404);
        v29 = *((_QWORD *)RenderAdapterForSession + 6);
        v99 = *(_OWORD *)(a4 + 40);
        LODWORD(v13) = v28(v29, v91, a4 + 8, v92);
      }
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      v30 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
      if ( !v30 )
        v30 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
      if ( !v30 && *((_DWORD *)v27 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        {
LABEL_29:
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, (unsigned int)v93);
          WdLogGlobalForLineNumber = 810;
LABEL_30:
          v33 = v90;
LABEL_31:
          if ( (int)v13 >= 0 )
          {
            *v96 = v33;
            goto LABEL_33;
          }
LABEL_35:
          WdLogSingleEntry1(3LL, (int)v13);
          WdLogGlobalForLineNumber = 1009;
          goto LABEL_33;
        }
        v83 = &EventOPMGetConnectorType;
LABEL_153:
        McTemplateK0ptpqq_EtwWriteTransfer(
          v23,
          (_DWORD)v83,
          v24,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          (char)v91,
          *((_DWORD *)v27 + 10),
          v13);
        goto LABEL_29;
      }
      v31 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
      if ( !v31 )
        v31 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
      if ( !v31 && *((_DWORD *)v27 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_29;
        v83 = &EventOPMGetSupportedProtectionTypes;
        goto LABEL_153;
      }
      v32 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
      if ( !v32 )
        v32 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
      if ( !v32 && *((_DWORD *)a4 + 15) >= 4u && *((_DWORD *)v27 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpqqq_EtwWriteTransfer(
            v23,
            (unsigned int)&EventOPMGetActualProtectionLevel,
            v24,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            (char)v91,
            *((_DWORD *)a4 + 16),
            *((_DWORD *)v27 + 10),
            v13);
        goto LABEL_29;
      }
      v21 = (char)v91;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ptpjq_EtwWriteTransfer(
        v23,
        v22,
        v24,
        *((_QWORD *)RenderAdapterForSession + 6),
        v14,
        v21,
        (__int64)&v99,
        v13);
    goto LABEL_29;
  }
LABEL_33:
  if ( v14 )
  {
    if ( *((_BYTE *)RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*((_QWORD *)RenderAdapterForSession + 3));
    ExReleaseResourceLite(*((PERESOURCE *)RenderAdapterForSession + 21));
    KeLeaveCriticalRegion();
    if ( v94 )
      goto LABEL_167;
  }
  return (unsigned int)v13;
}
