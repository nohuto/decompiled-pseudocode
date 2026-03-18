/*
 * XREFs of ?ClearUnusedTreeData@CVisual@@QEAAXXZ @ 0x1801D9FA8
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::ClearUnusedTreeData(CVisual *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // r8d
  _BYTE *v3; // rcx
  __int64 i; // rax

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x10000000) != 0 )
  {
    v2 = v1[1];
    v3 = v1 + 2;
    *v1 &= ~0x10000000u;
    for ( i = 0LL; (unsigned int)i < v2; ++v3 )
    {
      if ( *v3 == 4 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i < v2 )
      *((_BYTE *)v1 + i + 8) = 0;
  }
}
