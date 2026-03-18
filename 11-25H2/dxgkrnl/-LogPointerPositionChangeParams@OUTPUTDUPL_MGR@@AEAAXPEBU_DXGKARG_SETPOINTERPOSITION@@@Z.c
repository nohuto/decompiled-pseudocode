/*
 * XREFs of ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FD63C
 * Callers:
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1402FC2D0 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402FD190 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x140023A1C (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FD6F4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1402FEBCC (-LogEtw@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::LogPointerPositionChangeParams(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  OUTPUTDUPL_MGR *v4; // rcx
  OUTPUTDUPL_MGR *v5; // rcx
  UINT v6; // eax
  DXGDIAGNOSTICS *v7; // rcx
  _DWORD v8[20]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, 0x48uLL);
  OUTPUTDUPL_MGR::InitializePacketHeader(v4, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v8);
  v8[13] = a2->VidPnSourceId;
  v8[14] = a2->X;
  v8[15] = a2->Y;
  v6 = a2->Flags.Value & 1;
  v8[1] = 72;
  v8[12] = 4;
  v8[16] = v6;
  if ( bTracingEnabled )
    OUTPUTDUPL_MGR::LogEtw(v5, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v8);
  v7 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 10);
  if ( v7 )
    DXGDIAGNOSTICS::WriteDiagnosticEntry(v7, (struct _DXGK_DIAG_HEADER *)v8);
}
