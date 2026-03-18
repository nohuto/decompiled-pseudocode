/*
 * XREFs of ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x18017BC40
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800C0AF0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCHitTestContext@@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoSibling(__int64 a1, unsigned __int64 **a2)
{
  __int64 v2; // r9
  int v3; // r8d
  int v4; // r11d
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // r10
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  if ( !v2 )
    return 1LL;
  v3 = *(_DWORD *)(a1 + 28);
  if ( v3 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 != -1 )
    {
      v5 = *(_QWORD *)(v2 + 80);
      if ( (v5 & 2) != 0 )
        v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v5) = v5 & 1;
      if ( v4 + 1 < (unsigned int)v5 )
        goto LABEL_7;
    }
    return 1LL;
  }
  if ( v3 )
    return 1LL;
  v4 = *(_DWORD *)(a1 + 24);
  if ( !v4 )
    return 1LL;
LABEL_7:
  v6 = v4 - 1;
  v7 = (unsigned int)(v4 + 1);
  if ( v3 != 1 )
    v7 = v6;
  v8 = *(_QWORD *)(v2 + 80) & 2LL;
  v9 = *(_QWORD *)(v2 + 80) & 1LL;
  v10 = (unsigned __int64 *)(*(_QWORD *)(v2 + 80) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v8 )
    v11 = *v10;
  else
    v11 = *(_QWORD *)(v2 + 80) & 1LL;
  if ( v11 <= (unsigned int)v7 )
    goto LABEL_20;
  if ( v8 )
    v9 = *v10;
  if ( (unsigned int)v7 >= v9 )
  {
LABEL_20:
    v10 = 0LL;
  }
  else if ( v9 != 1 )
  {
    v10 = (unsigned __int64 *)v10[v7 + 2];
  }
  *(_QWORD *)(a1 + 8) = v10;
  *a2 = v10;
  result = 0LL;
  *(_DWORD *)(a1 + 24) = v7;
  return result;
}
