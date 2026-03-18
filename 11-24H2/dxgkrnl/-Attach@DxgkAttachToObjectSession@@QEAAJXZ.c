/*
 * XREFs of ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x140026D68
 * Callers:
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x140026CA0 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018CA00 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403C43D0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkAttachToObjectSession::Attach(DxgkAttachToObjectSession *this)
{
  unsigned int v1; // ebp
  int v3; // edi
  __int64 CurrentProcess; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v1 = *((_DWORD *)this + 4);
  v3 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v1 )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2605;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(2605LL, v7, v8, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
      }
    }
    SessionMgr = DXGGLOBAL::GetSessionMgr(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
    v3 = DXGSESSIONMGR::ReferenceSessionCSRSSProcess(SessionMgr, v1, (struct _KPROCESS **)this + 1);
    if ( v3 >= 0 )
    {
      KeStackAttachProcess(*((PRKPROCESS *)this + 1), (PRKAPC_STATE)((char *)this + 24));
      *(_BYTE *)this = 1;
    }
  }
  return (unsigned int)v3;
}
