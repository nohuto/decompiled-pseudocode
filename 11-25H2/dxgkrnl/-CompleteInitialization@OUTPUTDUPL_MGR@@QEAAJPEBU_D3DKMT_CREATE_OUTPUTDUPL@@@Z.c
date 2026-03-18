/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1401DF64C
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FB5E4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z @ 0x1401E038C (-NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1403B7828 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  struct DXGFASTMUTEX *v3; // rdi
  __int64 v4; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int v7; // ebx
  unsigned int CurrentProcessSessionId; // eax
  OUTPUTDUPL_MGR *v9; // rcx
  _BYTE v11[24]; // [rsp+50h] [rbp-18h] BYREF

  v3 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v4);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, v3, CurrentProcess, 0LL);
  v7 = 0;
  if ( ContextForProcess )
  {
    *((_DWORD *)*ContextForProcess + 79) = 1;
    if ( *((_DWORD *)v3 + 16) >= *((_DWORD *)this + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1606;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pContextList->cActiveContexts < m_MaxActiveOutputDuplApps",
        1606LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ++*((_DWORD *)v3 + 16);
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    OUTPUTDUPL_MGR::NotifyDWMOfDDAChange(v9, CurrentProcessSessionId);
  }
  else
  {
    v7 = -1073741275;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return v7;
}
