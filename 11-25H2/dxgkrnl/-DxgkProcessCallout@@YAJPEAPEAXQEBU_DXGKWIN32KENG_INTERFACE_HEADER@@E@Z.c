/*
 * XREFs of ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1402DDDD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140021E58 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400266E0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400267C0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1400389E4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x14003B7FC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1402DE034 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1402DE3B0 (-SetWin32kInterface@DXGPROCESS@@QEAAXQEBU_DXGKWIN32KENG_INTERFACE@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402DE404 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

__int64 __fastcall DxgkProcessCallout(
        DXGPROCESS **a1,
        const struct _DXGKWIN32KENG_INTERFACE_HEADER *const a2,
        __int64 a3)
{
  char v3; // di
  _WORD *v6; // rdi
  DXGPROCESS *v7; // rcx
  const struct _DXGKWIN32KENG_INTERFACE *v8; // rdx
  DXGPROCESS *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  char v19; // [rsp+60h] [rbp-A0h]
  _BYTE v20[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[256]; // [rsp+80h] [rbp-80h] BYREF
  DXGPROCESS *v22; // [rsp+1C8h] [rbp+C8h] BYREF

  v17 = -1;
  v3 = a3;
  v18 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2000);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2000);
  if ( v3 != 1 )
  {
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    v9 = *a1;
    if ( *a1 )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v21);
      *((_DWORD *)v9 + 102) |= 0x800u;
      DXGPROCESS::AcquireReference(v9);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
      DXGPROCESS::DestroyDxgProcess(v9);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
      DXGPROCESS::ReleaseReference(v9);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v21);
    }
    *a1 = 0LL;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    goto LABEL_14;
  }
  v6 = (_WORD *)((char *)a2 + 2);
  if ( *(_WORD *)a2 )
  {
    if ( *(_WORD *)a2 == 480 && *((_WORD *)a2 + 1) == 12 )
    {
LABEL_7:
      v22 = 0LL;
      if ( DXGPROCESS::CreateDxgProcess(&v22, 0LL, 0LL, 0, 0LL) >= 0 )
      {
        v7 = v22;
        v8 = (const struct _DXGKWIN32KENG_INTERFACE *)&gDxgkWin32kEngInterface;
        *a1 = v22;
        if ( *(_WORD *)a2 )
          v8 = a2;
        DXGPROCESS::SetWin32kInterface(v7, v8);
      }
LABEL_14:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit, v11, v17);
      }
      return 0LL;
    }
  }
  else if ( !*v6 )
  {
    goto LABEL_7;
  }
  WdLogSingleEntry4(1LL, (unsigned __int16)*v6, *(unsigned __int16 *)a2, 12LL, 480LL);
  v16 = *(unsigned __int16 *)a2;
  v15 = (unsigned __int16)*v6;
  WdLogGlobalForLineNumber = 342;
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    0xFFFFFFFFLL,
    L"Interface mismatch between Win32k (0x%I64x, 0x%I64x) and Dxgkrnl (0x%I64x, 0x%I64x).",
    v15,
    v16,
    12LL,
    480LL,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit, v14, v17);
  return 3221225485LL;
}
