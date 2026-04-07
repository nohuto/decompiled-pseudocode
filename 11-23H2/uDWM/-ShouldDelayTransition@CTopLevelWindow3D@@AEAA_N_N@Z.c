/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18004DF3C
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18004F364 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18001DB30 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18001DB64 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x1800E7648 (McTemplateU0pq_EtwEventWriteTransfer.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // r8
  bool v3; // bl
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v9; // eax
  int v10; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v12; // rcx
  struct CTransitionWindowSnapshot *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 42);
  v3 = 0;
  v4 = a2;
  if ( (*(_BYTE *)(v2 + 676) & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v2 + 680) & 0xFFF) == 0xFFF )
      return v3;
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                      *(HWND *)(v2 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v12, SnapshotIndex, &v13) < 0 )
      return v3;
    v3 = 1;
    goto LABEL_12;
  }
  v6 = 0x100000LL;
  do
  {
    v7 = (unsigned int)v6;
    if ( !v2 )
      break;
    v9 = *(_DWORD *)(v2 + 680);
    v2 = *(_QWORD *)(v2 + 600);
    v10 = v6 & v9;
    LODWORD(v6) = v6 | 0x10000000;
    v3 = v10 == (_DWORD)v7;
  }
  while ( v10 != (_DWORD)v7 );
  if ( v3 )
  {
LABEL_12:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pq_EtwEventWriteTransfer(v6, v7, *(_QWORD *)(*((_QWORD *)this + 42) + 40LL), v4);
  }
  return v3;
}
