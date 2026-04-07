/*
 * XREFs of ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C7E88
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800132D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001A6A4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_IsInLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  __int64 v2; // r8
  char v3; // r9

  LODWORD(v2) = *((_DWORD *)this + 72);
  v3 = 0;
  while ( 1 )
  {
    v2 = (unsigned int)(v2 - 1);
    if ( (int)v2 < 0 )
      break;
    if ( *(const struct CWindowData **)(*((_QWORD *)this + 33) + 40 * v2) == a2 )
      return 1;
  }
  return v3;
}
