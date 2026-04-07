/*
 * XREFs of ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x18001E584
 * Callers:
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18003B168 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18003D8E0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetRTLMirror(CVisual *this, char a2)
{
  __int64 v2; // rax

  if ( a2 != (*((_BYTE *)this + 92) & 1) )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 92) = a2 | *((_BYTE *)this + 92) & 0xFE;
    (*(void (__fastcall **)(CVisual *, __int64))(v2 + 24))(this, 16LL);
  }
}
