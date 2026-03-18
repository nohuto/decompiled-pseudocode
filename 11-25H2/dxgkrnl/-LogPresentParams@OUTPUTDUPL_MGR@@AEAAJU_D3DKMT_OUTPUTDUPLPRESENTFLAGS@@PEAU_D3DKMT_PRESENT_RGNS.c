/*
 * XREFs of ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJU_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@PEAU_D3DKMT_PRESENT_RGNS@@IPEAVAUTOEXPANDALLOCATION@@@Z @ 0x1403004E0
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402FFB70 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FD6F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FEBCC (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::LogPresentParams(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS a2,
        struct _D3DKMT_PRESENT_RGNS *a3,
        int a4,
        struct AUTOEXPANDALLOCATION *a5)
{
  __int64 v8; // rdi
  UINT v10; // ebp
  char *Buffer; // rax
  char *v12; // rsi
  OUTPUTDUPL_MGR *v13; // rcx
  OUTPUTDUPL_MGR *v14; // rcx
  __int64 v15; // r8
  DXGDIAGNOSTICS *v16; // rcx

  v8 = 16 * a3->DirtyRectCount;
  v10 = 24 * a3->MoveRectCount;
  Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(a5, v10 + v8 + 72, 0);
  v12 = Buffer;
  if ( Buffer )
  {
    memset(Buffer, 0, 0x48uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v13, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12);
    *((struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS *)v12 + 14) = a2;
    *((_DWORD *)v12 + 1) = v10 + v8 + 72;
    *((_DWORD *)v12 + 12) = 2;
    *((_DWORD *)v12 + 13) = a4;
    *((_DWORD *)v12 + 15) = a3->DirtyRectCount;
    *((_DWORD *)v12 + 16) = a3->MoveRectCount;
    memmove(v12 + 72, a3->pDirtyRects, (unsigned int)v8);
    memmove(&v12[(v8 & 0xFFFFFFFFFFFFFFF0uLL) + 72], a3->pMoveRects, v10);
    if ( bTracingEnabled )
      OUTPUTDUPL_MGR::LogEtw(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v12, v15);
    v16 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 10);
    if ( v16 )
      DXGDIAGNOSTICS::WriteDiagnosticEntry(v16, (struct _DXGK_DIAG_HEADER *)v12);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1188;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to expand tmp buffer for present logging packet.",
      1188LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
