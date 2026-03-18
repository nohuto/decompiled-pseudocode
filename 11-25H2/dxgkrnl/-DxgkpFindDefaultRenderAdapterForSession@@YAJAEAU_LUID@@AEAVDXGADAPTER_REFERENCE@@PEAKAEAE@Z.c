/*
 * XREFs of ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1401CE654
 * Callers:
 *     DxgkGetAdapter @ 0x1401D1E10 (DxgkGetAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x140063354 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkpFindDefaultRenderAdapterForSession(
        struct _LUID *a1,
        struct DXGADAPTER_REFERENCE *a2,
        unsigned int *a3,
        bool *a4)
{
  char v8; // bp
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rax
  const wchar_t *v14; // r9
  LONG *p_HighPart; // rdi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v17; // rax
  struct DXGADAPTER *v18; // rdx
  _QWORD v20[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v22[16]; // [rsp+70h] [rbp-38h] BYREF

  v8 = 1;
  if ( a3 )
  {
    v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
      v13 = 4684LL;
      v14 = L"Failed to find session manager";
      WdLogGlobalForLineNumber = 4684;
      goto LABEL_10;
    }
    v10 = *a3;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(v9 + 88), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    if ( (unsigned int)v10 < *(_DWORD *)(v9 + 80) && *(_QWORD *)(*(_QWORD *)(v9 + 48) + 8 * v10) )
    {
      _mm_lfence();
      v11 = *(_QWORD *)(v9 + 48);
      v12 = 0;
      v8 = *(_BYTE *)(*(_QWORD *)(v11 + 8 * v10) + 18505LL);
    }
    else
    {
      v12 = -1073741275;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, *a3);
      v13 = *a3;
      v14 = L"Failed to get remote GPU preference for session %u, default to hw GPU";
      WdLogGlobalForLineNumber = 4679;
LABEL_10:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
    }
  }
  DXGADAPTER_REFERENCE::Assign(a2, 0LL);
  *a4 = v8 == 0;
  if ( v8 )
  {
    p_HighPart = &a1->HighPart;
    v20[0] = a1;
    v20[1] = a2;
    if ( a1->LowPart || *p_HighPart )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(Global, FindHWRenderAdapterByLuid, v20, 2LL);
    }
    if ( *(_QWORD *)a2 )
      return 0LL;
    WdLogSingleEntry2(4LL, *p_HighPart, a1->LowPart);
    WdLogGlobalForLineNumber = 4707;
    v17 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v17, FindFirstHWRenderAdapter, v20, 2LL);
    if ( *(_QWORD *)a2 )
      return 0LL;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 4716;
  }
  if ( !*(_QWORD *)a2 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v21);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    if ( IsCurrentConsoleSession() )
      v18 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 121);
    else
      v18 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 119);
    DXGADAPTER_REFERENCE::Assign(a2, v18);
    if ( !*(_QWORD *)a2 )
    {
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 4738;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkGetAdapter(): BRD WARP is not available, returning 0x%I64x.",
        -1073741275LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
      return 3221226021LL;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  }
  return 0LL;
}
