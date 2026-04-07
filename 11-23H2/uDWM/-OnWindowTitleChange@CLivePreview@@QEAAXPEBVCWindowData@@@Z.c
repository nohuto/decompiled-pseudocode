/*
 * XREFs of ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800C6CC8
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C705C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x1800E69BC (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 */

void __fastcall CLivePreview::OnWindowTitleChange(CLivePreview *this, unsigned __int16 **a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *((_DWORD *)this + 92);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *((_QWORD *)this + 43);
    while ( *(unsigned __int16 ***)(v4 + 48 * v3 + 8) != a2 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v2 )
        return;
    }
    CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v4 + 48 * v3), a2[2]);
  }
}
