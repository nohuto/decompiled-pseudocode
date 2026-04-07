/*
 * XREFs of ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180021694
 * Callers:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021600 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180031890 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetRTLMirror(CVisual *this, char a2)
{
  __int64 v2; // rax

  if ( a2 != (*((_BYTE *)this + 36) & 1) )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 36) = a2 | *((_BYTE *)this + 36) & 0xFE;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 16LL);
  }
}
