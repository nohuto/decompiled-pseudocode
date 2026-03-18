/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18012F1D4
 * Callers:
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18012F074 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x1801FD210 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  _BYTE *v3; // rdx
  unsigned int i; // eax
  _QWORD ***v5; // rcx
  _QWORD **v6; // rcx
  _QWORD *j; // rax

  *((_QWORD *)this + 69) = 0LL;
  v1 = *((_QWORD *)this + 29);
  if ( *(int *)v1 < 0 )
  {
    v2 = *(unsigned int *)(v1 + 4);
    v3 = (_BYTE *)(v1 + 8);
    for ( i = 0; i < (unsigned int)v2; ++v3 )
    {
      if ( *v3 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v2 )
      v5 = 0LL;
    else
      v5 = (_QWORD ***)(v2 + 15 + v1 + 8LL * i - (((_BYTE)v2 + 15) & 7));
    v6 = *v5;
    if ( v6 )
    {
      for ( j = *v6; j != v6; j = (_QWORD *)*j )
        *(j - 15) = 0LL;
    }
  }
}
