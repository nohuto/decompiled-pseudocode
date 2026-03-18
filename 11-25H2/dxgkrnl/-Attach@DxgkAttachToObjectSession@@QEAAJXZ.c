/*
 * XREFs of ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1400265C8
 * Callers:
 *     ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x140026500 (-Delete@DxgkCompositionObject@@SAXPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x14018AA10 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 *     ?ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z @ 0x1403D08F0 (-ReferenceSessionCSRSSProcess@DXGSESSIONMGR@@QEAAJKPEAPEAU_KPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkAttachToObjectSession::Attach(DxgkAttachToObjectSession *this)
{
  unsigned int v1; // ebp
  int v3; // edi
  __int64 CurrentProcess; // rax
  DXGSESSIONMGR *SessionMgr; // rax
  int v7; // edx
  __int64 v8; // r8

  v1 = *((_DWORD *)this + 4);
  v3 = 0;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != v1 )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2604;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            2604,
            v7,
            v8,
            0LL,
            2,
            -1,
            L"m_pGlobal != NULL",
            2604LL,
            0LL,
            0LL,
            0LL,
            0LL);
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
