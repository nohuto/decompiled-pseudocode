/*
 * XREFs of ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401E42E8
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401E4FEC (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v4; // edi
  UINT v5; // esi
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v6 = **((_QWORD **)this + 7);
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4180;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcesses", 4180LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = *((_DWORD *)this + 1);
  if ( v7 )
  {
    v8 = v7;
    do
    {
      if ( *(_QWORD *)(v6 + 8) && *(_DWORD *)v6 )
      {
        ++v4;
        v5 += *(_DWORD *)v6;
      }
      v6 += 32LL;
      --v8;
    }
    while ( v8 );
  }
  a2->SessionProcessCount = v4;
  a2->SessionActiveConnectionsCount = v5;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
}
