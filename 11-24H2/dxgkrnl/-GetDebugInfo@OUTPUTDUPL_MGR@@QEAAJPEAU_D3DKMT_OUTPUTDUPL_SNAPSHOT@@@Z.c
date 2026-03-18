/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401E4FEC
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1401E67E8 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401E42E8 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1401E5418 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 *     ?GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z @ 0x1401E6EA0 (-GetDebugInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_OUTPUTDUPL_CONTEXT_DEBUG_INFO@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v5; // edx
  __int64 v6; // rsi
  struct DXGFASTMUTEX *v7; // rbx
  OUTPUTDUPL_CONTEXT **v8; // r14
  UINT v9; // ebx
  UINT NumOutputDuplContexts; // eax
  char *v11; // rax
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v14; // rax
  const wchar_t *v15; // r9
  OUTPUTDUPL_SESSION_MGR *v16; // rcx
  _BYTE v17[16]; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v5 = this[19];
  if ( a2->Size < (unsigned __int64)(56 * this[2] * v5) + 24 )
  {
    a2->Size = 56 * this[2] * this[19] + 24;
    return 1075707914LL;
  }
  v6 = 0LL;
  a2->NumVidPnSources = v5;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v6 < a2->NumVidPnSources; v6 = (unsigned int)(v6 + 1) )
  {
    v7 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72 * v6);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, v7, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v8 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v7 + 6);
    v9 = 0;
    NumOutputDuplContexts = a2->NumOutputDuplContexts;
    if ( NumOutputDuplContexts )
    {
      do
      {
        v11 = (char *)a2 + 56 * v9 + 56 * (_DWORD)v6 * NumOutputDuplContexts;
        if ( *v8 )
        {
          OUTPUTDUPL_CONTEXT::GetDebugInfo(*v8, (struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO *)(v11 + 24));
        }
        else
        {
          *(_OWORD *)(v11 + 24) = 0LL;
          *(_OWORD *)(v11 + 40) = 0LL;
          *(_OWORD *)(v11 + 56) = 0LL;
          *((_QWORD *)v11 + 9) = 0LL;
        }
        NumOutputDuplContexts = a2->NumOutputDuplContexts;
        ++v9;
        ++v8;
      }
      while ( v9 < NumOutputDuplContexts );
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  }
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(2LL);
    v14 = 2241LL;
    v15 = L"DXGSESSIONDATA is NULL";
LABEL_14:
    WdLogGlobalForLineNumber = v14;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v16 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
  if ( !v16 )
  {
    WdLogSingleEntry0(2LL);
    v14 = 2248LL;
    v15 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_14;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v16, a2);
  return 0LL;
}
