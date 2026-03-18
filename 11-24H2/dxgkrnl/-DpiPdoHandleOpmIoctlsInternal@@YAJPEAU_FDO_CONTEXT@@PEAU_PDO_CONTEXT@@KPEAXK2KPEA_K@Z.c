/*
 * XREFs of ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800
 * Callers:
 *     DpiProcessOpmVmBusRequest @ 0x14008A42C (DpiProcessOpmVmBusRequest.c)
 *     DpiPdoHandleOpmIoctls @ 0x1403A4314 (DpiPdoHandleOpmIoctls.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     McTemplateK0ptpqqq_EtwWriteTransfer @ 0x14004BA7C (McTemplateK0ptpqqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpjq_EtwWriteTransfer @ 0x14004BB34 (McTemplateK0ptpjq_EtwWriteTransfer.c)
 *     ?DpiOpmLogCreateContext@@YAXJI@Z @ 0x140063DC8 (-DpiOpmLogCreateContext@@YAXJI@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089E28 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     ?DpiOpmLogSetLevel@@YAXJII@Z @ 0x14008A0B8 (-DpiOpmLogSetLevel@@YAXJII@Z.c)
 *     McTemplateK0ptpjqq_EtwWriteTransfer @ 0x14008A51C (McTemplateK0ptpjqq_EtwWriteTransfer.c)
 *     McTemplateK0ptpq_EtwWriteTransfer @ 0x14008A5DC (McTemplateK0ptpq_EtwWriteTransfer.c)
 *     McTemplateK0ptpqq_EtwWriteTransfer @ 0x14008A674 (McTemplateK0ptpqq_EtwWriteTransfer.c)
 *     McTemplateK0ptqppq_EtwWriteTransfer @ 0x14008A71C (McTemplateK0ptqppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkOpmCreateHandle @ 0x1401A0260 (DxgkOpmCreateHandle.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1403C4E78 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkOpmTranslateHandle @ 0x1403C894C (DxgkOpmTranslateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1403DBC5C (DpiPdoVerifyOpmParameters.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1403F54D4 (DxgkOpmTranslateAndDestroyHandle.c)
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
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 (__fastcall *v24)(__int64, _QWORD, char *, void **); // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r15d
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // r8
  char v34; // r15
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v38; // esi
  int v39; // r15d
  int v40; // r15d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rax
  unsigned int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // ecx
  int v49; // r8d
  int v50; // ecx
  int v51; // r8d
  __int64 (__fastcall *v52)(__int64, _QWORD, char *, _QWORD, char *); // rax
  __int64 v53; // rcx
  int v54; // ecx
  int v55; // r8d
  int v56; // eax
  unsigned int v57; // r8d
  unsigned int v58; // edx
  int v59; // edx
  int v60; // ecx
  int v61; // r8d
  __int64 (__fastcall *v62)(__int64, _QWORD, char *, void **); // rax
  __int64 v63; // rcx
  void *v64; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A1h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-A1h]
  void **v67; // [rsp+28h] [rbp-99h]
  void **v68; // [rsp+28h] [rbp-99h]
  __int64 v69; // [rsp+30h] [rbp-91h]
  __int64 v70; // [rsp+30h] [rbp-91h]
  int v71; // [rsp+50h] [rbp-71h]
  int v72; // [rsp+58h] [rbp-69h]
  unsigned int v73; // [rsp+58h] [rbp-69h]
  unsigned int v75; // [rsp+68h] [rbp-59h]
  unsigned int v76; // [rsp+68h] [rbp-59h]
  unsigned int v77; // [rsp+68h] [rbp-59h]
  int v78; // [rsp+70h] [rbp-51h]
  void *v79; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 *v80; // [rsp+80h] [rbp-41h]
  __int128 v81; // [rsp+88h] [rbp-39h] BYREF
  struct _FDO_CONTEXT *v82[2]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v83; // [rsp+A8h] [rbp-19h] BYREF

  v9 = (int)a6;
  v80 = a8;
  *a8 = 0LL;
  v12 = a2;
  LODWORD(v13) = -1073741637;
  v71 = 0;
  v14 = 0;
  v72 = 1;
  v78 = 0;
  v82[0] = RenderAdapterForSession;
  if ( *((_BYTE *)RenderAdapterForSession + 1158) )
  {
    v56 = *((_DWORD *)RenderAdapterForSession + 291);
    if ( v56 == 2 )
    {
      v12 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = (struct _FDO_CONTEXT *)DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_166:
        ReleaseMiniportListMutex();
        return (unsigned int)v13;
      }
      KeEnterCriticalRegion();
      if ( *((_BYTE *)RenderAdapterForSession + 484) )
        DpiCheckForOutstandingD3Requests((__int64)RenderAdapterForSession);
      ExAcquireResourceSharedLite(*((PERESOURCE *)RenderAdapterForSession + 21), 1u);
      v14 = 1;
      if ( a3 == 2303115 )
        v78 = 1;
      else
        ReleaseMiniportListMutex();
      v9 = (int)a6;
    }
    else
    {
      if ( v56 != 1 )
      {
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 393;
        return (unsigned int)v13;
      }
      v72 = 0;
    }
  }
  if ( *((_QWORD *)RenderAdapterForSession + 399) )
  {
    v15 = a3 - 2303107;
    if ( !v15 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303107, (_DWORD)a4, a5, v9, (_DWORD)a7, 4, 4);
      if ( (int)v13 < 0 )
        goto LABEL_34;
      v31 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_34;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, void **))RenderAdapterForSession + 399))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v31,
              a6);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v69) = *(_DWORD *)a6;
        LODWORD(v67) = v31;
        LODWORD(Timeout) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v32,
          &EventOpmGetCertificateSize,
          v33,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeout,
          v67,
          v69,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 455;
      v29 = 4;
      goto LABEL_30;
    }
    v16 = v15 - 4;
    if ( !v16 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303111, (_DWORD)a4, a5, v9, (_DWORD)a7, 4, (_DWORD)a7);
      if ( (int)v13 < 0 )
        goto LABEL_34;
      v45 = *(_DWORD *)a4;
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_34;
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      v29 = (unsigned int)a7;
      v13 = (*((int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 400))(
              *((_QWORD *)RenderAdapterForSession + 6),
              v45,
              (unsigned int)a7,
              a6);
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v70) = (_DWORD)a7;
        LODWORD(v68) = v45;
        LODWORD(Timeouta) = v14;
        McTemplateK0pqtqq_EtwWriteTransfer(
          v46,
          &EventOpmGetCertificate,
          v47,
          *((_QWORD *)RenderAdapterForSession + 6),
          Timeouta,
          v68,
          v70,
          v13);
      }
      WdLogSingleEntry4(4LL, v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 505;
      goto LABEL_30;
    }
    v17 = v16 - 4;
    if ( !v17 )
    {
      v79 = 0LL;
      *(_QWORD *)&v81 = 0LL;
      v34 = -1;
      v71 = 8;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303115, (_DWORD)a4, a5, v9, (_DWORD)a7, 4, 8);
      if ( (int)v13 >= 0 )
      {
        v38 = *(_DWORD *)a4;
        if ( v72 && v38 == DXGKMDT_OPM_VOS_OPM_INDIRECT_DISPLAY )
        {
          LODWORD(v13) = -1073741198;
          WdLogSingleEntry4(4LL, -1073741198LL, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          WdLogGlobalForLineNumber = 540;
          goto LABEL_34;
        }
        *(_QWORD *)&v81 = a6;
        if ( v14 )
        {
          v76 = *((_DWORD *)a2 + 126);
          LODWORD(v13) = CreateProtectedOutputIndirectDisplay(RenderAdapterForSession, v82[0], v38, v76, a6, &v79);
        }
        else
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_34;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
          v76 = *((_DWORD *)v12 + 126);
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))RenderAdapterForSession + 401))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           v76,
                           (unsigned int)v38,
                           &v79);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DxgkOpmCreateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
            if ( (int)v13 < 0 )
            {
              (*((void (__fastcall **)(_QWORD, void *))RenderAdapterForSession + 407))(
                *((_QWORD *)RenderAdapterForSession + 6),
                v79);
              if ( (_DWORD)v13 == -1073741198 )
                LODWORD(v13) = -1073741637;
            }
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        DpiOpmLogCreateContext(v13, v38);
        v34 = v76;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptqppq_EtwWriteTransfer(
          v36,
          v35,
          v37,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          v34,
          (char)v79,
          *(_QWORD *)v81,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 608;
      goto LABEL_29;
    }
    v18 = v17 - 4;
    if ( !v18 )
    {
      v71 = 16;
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303119, (_DWORD)a4, a5, v9, (_DWORD)a7, 8, 16);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_34;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
        LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
        if ( (int)v13 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, void **))RenderAdapterForSession + 402))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           0LL,
                           a6);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v48,
          (unsigned int)&EventOPMGetRandomNumber,
          v49,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          0,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 663;
      goto LABEL_29;
    }
    v19 = v18 - 4;
    if ( !v19 )
    {
      LODWORD(v13) = DpiPdoVerifyOpmParameters(2303123, (_DWORD)a4, a5, v9, (_DWORD)a7, 264, 0);
      if ( (int)v13 >= 0 )
      {
        LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        if ( (int)v13 < 0 )
          goto LABEL_34;
        DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
        LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
        if ( (int)v13 >= 0 )
          LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD, char *))RenderAdapterForSession + 403))(
                           *((_QWORD *)RenderAdapterForSession + 6),
                           0LL,
                           a4 + 8);
        DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
        if ( v12 )
          KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
        DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ptpq_EtwWriteTransfer(
          v54,
          (unsigned int)&EventOPMSetSigningKeyAndSequenceNumbers,
          v55,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          0,
          v13);
      WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
      WdLogGlobalForLineNumber = 713;
      goto LABEL_29;
    }
    v20 = v19 - 4;
    if ( v20 )
    {
      v39 = v20 - 4;
      if ( v39 )
      {
        v40 = v39 - 4;
        if ( v40 )
        {
          if ( v40 != 4 )
            goto LABEL_34;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303139, (_DWORD)a4, a5, v9, (_DWORD)a7, 8, 0);
          if ( (int)v13 >= 0 )
          {
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_34;
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
            LODWORD(v13) = DxgkOpmTranslateAndDestroyHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
            if ( (int)v13 >= 0 )
              LODWORD(v13) = (*((__int64 (__fastcall **)(_QWORD, _QWORD))RenderAdapterForSession + 407))(
                               *((_QWORD *)RenderAdapterForSession + 6),
                               0LL);
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpq_EtwWriteTransfer(
              v50,
              (unsigned int)&EventOPMDestroyProtectedOutput,
              v51,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              0,
              v13);
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
          WdLogGlobalForLineNumber = 995;
        }
        else
        {
          v77 = -1;
          LOBYTE(v73) = 0;
          *(_OWORD *)v82 = 0LL;
          LODWORD(v13) = DpiPdoVerifyOpmParameters(2303135, (_DWORD)a4, a5, v9, (_DWORD)a7, 4112, 0);
          if ( (int)v13 >= 0 )
          {
            v73 = *((_DWORD *)a4 + 1026);
            LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            if ( (int)v13 < 0 )
              goto LABEL_34;
            v77 = *((_DWORD *)a4 + 6);
            DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
            LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
            if ( (int)v13 >= 0 )
            {
              v52 = (__int64 (__fastcall *)(__int64, _QWORD, char *, _QWORD, char *))*((_QWORD *)RenderAdapterForSession
                                                                                     + 406);
              v53 = *((_QWORD *)RenderAdapterForSession + 6);
              *(_OWORD *)v82 = *(_OWORD *)(a4 + 24);
              LODWORD(v13) = v52(v53, 0LL, a4 + 8, v73, a4 + 4108);
            }
            DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
            if ( v12 )
              KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
            DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
            v44 = *((_QWORD *)a4 + 3) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
            if ( !v44 )
              v44 = *((_QWORD *)a4 + 4) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
            if ( !v44 && *((_DWORD *)a4 + 11) >= 0x10u )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0ptpqqq_EtwWriteTransfer(
                  v42,
                  (unsigned int)&EventOPMSetProtectionLevel,
                  v43,
                  *((_QWORD *)RenderAdapterForSession + 6),
                  v14,
                  0,
                  *((_DWORD *)a4 + 12),
                  *((_DWORD *)a4 + 13),
                  v13);
              WdLogSingleEntry4(
                4LL,
                (int)v13,
                *((_QWORD *)RenderAdapterForSession + 6),
                v14,
                *((unsigned int *)a4 + 12));
              v57 = *((_DWORD *)a4 + 13);
              v58 = *((_DWORD *)a4 + 12);
              WdLogGlobalForLineNumber = 936;
              DpiOpmLogSetLevel(v13, v58, v57);
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0ptpjqq_EtwWriteTransfer(
              v42,
              v41,
              v43,
              *((_QWORD *)RenderAdapterForSession + 6),
              v14,
              0,
              (__int64)v82,
              v73,
              v13);
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, v77);
          WdLogGlobalForLineNumber = 948;
        }
      }
      else
      {
        v71 = 4096;
        v81 = 0LL;
        LODWORD(v13) = DpiPdoVerifyOpmParameters(2303131, (_DWORD)a4, a5, v9, (_DWORD)a7, 4104, 4096);
        if ( (int)v13 >= 0 )
        {
          LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
          if ( (int)v13 < 0 )
            goto LABEL_34;
          DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
          LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
          if ( (int)v13 >= 0 )
          {
            v62 = (__int64 (__fastcall *)(__int64, _QWORD, char *, void **))*((_QWORD *)RenderAdapterForSession + 405);
            v63 = *((_QWORD *)RenderAdapterForSession + 6);
            v81 = *(_OWORD *)(a4 + 24);
            LODWORD(v13) = v62(v63, 0LL, a4 + 8, a6);
          }
          DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
          if ( v12 )
            KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
          DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpjq_EtwWriteTransfer(
            v60,
            v59,
            v61,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            0,
            (__int64)&v81,
            v13);
        WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, 0LL);
        WdLogGlobalForLineNumber = 868;
      }
      goto LABEL_29;
    }
    v75 = -1;
    v71 = 4096;
    v83 = 0LL;
    LODWORD(v13) = DpiPdoVerifyOpmParameters(2303127, (_DWORD)a4, a5, v9, (_DWORD)a7, 4120, 4096);
    if ( (int)v13 >= 0 )
    {
      LODWORD(v13) = DpiAcquireCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      if ( (int)v13 < 0 )
        goto LABEL_34;
      v75 = *((_DWORD *)a4 + 10);
      DxgkAcquireAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)v12 + 117) + 72LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504), 1LL);
      LODWORD(v13) = DxgkOpmTranslateHandle(*((DXGADAPTER **)RenderAdapterForSession + 504));
      if ( (int)v13 >= 0 )
      {
        v24 = (__int64 (__fastcall *)(__int64, _QWORD, char *, void **))*((_QWORD *)RenderAdapterForSession + 404);
        v25 = *((_QWORD *)RenderAdapterForSession + 6);
        v83 = *(_OWORD *)(a4 + 40);
        LODWORD(v13) = v24(v25, 0LL, a4 + 8, a6);
      }
      DxgkReleaseAdapterDdiSync(*((_QWORD *)RenderAdapterForSession + 504));
      if ( v12 )
        KeReleaseMutex(*(PRKMUTEX *)(*((_QWORD *)v12 + 117) + 72LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*((_QWORD *)RenderAdapterForSession + 504));
      DpiReleaseCoreSyncAccessSafe(*((_QWORD *)RenderAdapterForSession + 3), 0LL);
      v26 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
      if ( !v26 )
        v26 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
      if ( !v26 && *((_DWORD *)a6 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        {
LABEL_28:
          WdLogSingleEntry4(4LL, (int)v13, *((_QWORD *)RenderAdapterForSession + 6), v14, v75);
          WdLogGlobalForLineNumber = 810;
LABEL_29:
          v29 = v71;
LABEL_30:
          if ( (int)v13 >= 0 )
          {
            *v80 = v29;
            goto LABEL_32;
          }
LABEL_34:
          WdLogSingleEntry1(3LL, (int)v13);
          WdLogGlobalForLineNumber = 1009;
          goto LABEL_32;
        }
        v64 = &EventOPMGetConnectorType;
LABEL_152:
        McTemplateK0ptpqq_EtwWriteTransfer(
          v22,
          (_DWORD)v64,
          v23,
          *((_QWORD *)RenderAdapterForSession + 6),
          v14,
          0,
          *((_DWORD *)a6 + 10),
          v13);
        goto LABEL_28;
      }
      v27 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
      if ( !v27 )
        v27 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
      if ( !v27 && *((_DWORD *)a6 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_28;
        v64 = &EventOPMGetSupportedProtectionTypes;
        goto LABEL_152;
      }
      v28 = *((_QWORD *)a4 + 5) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
      if ( !v28 )
        v28 = *((_QWORD *)a4 + 6) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
      if ( !v28 && *((_DWORD *)a4 + 15) >= 4u && *((_DWORD *)a6 + 4) >= 0x20u )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ptpqqq_EtwWriteTransfer(
            v22,
            (unsigned int)&EventOPMGetActualProtectionLevel,
            v23,
            *((_QWORD *)RenderAdapterForSession + 6),
            v14,
            0,
            *((_DWORD *)a4 + 16),
            *((_DWORD *)a6 + 10),
            v13);
        goto LABEL_28;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ptpjq_EtwWriteTransfer(
        v22,
        v21,
        v23,
        *((_QWORD *)RenderAdapterForSession + 6),
        v14,
        0,
        (__int64)&v83,
        v13);
    goto LABEL_28;
  }
LABEL_32:
  if ( v14 )
  {
    if ( *((_BYTE *)RenderAdapterForSession + 484) )
      DpiEnableD3Requests(*((_QWORD *)RenderAdapterForSession + 3));
    ExReleaseResourceLite(*((PERESOURCE *)RenderAdapterForSession + 21));
    KeLeaveCriticalRegion();
    if ( v78 )
      goto LABEL_166;
  }
  return (unsigned int)v13;
}
