/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1401E00D0
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403E21A8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int v6; // edi
  void **v7; // rax
  void **v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v10; // eax
  const wchar_t *v11; // r9
  unsigned int v13; // eax

  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v6 = 32 * v4;
  v7 = (void **)operator new(0x10uLL, 0x674D444Fu, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    *((_DWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v7, v6, 0);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 7) = v8;
  if ( !v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), CurrentProcessSessionId);
    WdLogGlobalForLineNumber = 4105;
    v10 = PsGetCurrentProcessSessionId();
    v11 = L"Failed to allocate session data for output duplication with 0x%I64x apps in session 0x%I64x.";
LABEL_6:
    DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v11, *((unsigned int *)this + 1), v10, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  if ( !*v8 )
  {
    v13 = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), v13);
    WdLogGlobalForLineNumber = 4112;
    v10 = PsGetCurrentProcessSessionId();
    v11 = L"Failed to get session data buffer for output duplication with 0x%I64x apps in session 0x%I64x.";
    goto LABEL_6;
  }
  memset(*v8, 0, v6);
  return 0LL;
}
