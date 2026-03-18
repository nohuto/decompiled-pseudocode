/*
 * XREFs of ?HasProjectedShadowReceivers@CVisual@@QEBA_NXZ @ 0x18019DED0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasProjectedShadowReceivers(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  _BYTE *v4; // r8
  __int64 v5; // rdx
  unsigned int i; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v1 & 0x40000) == 0 )
    return 0;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 14 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (__int64)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return **(_QWORD **)v5 != *(_QWORD *)(*(_QWORD *)v5 + 8LL);
}
