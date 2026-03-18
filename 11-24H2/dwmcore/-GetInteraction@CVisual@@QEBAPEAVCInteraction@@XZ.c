/*
 * XREFs of ?GetInteraction@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1801BCF30
 * Callers:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180034E40 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CVisual::GetInteraction(CVisual *this)
{
  _DWORD *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE *v4; // r8
  unsigned int i; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 29);
  v2 = 0LL;
  if ( (*v1 & 0x1000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 8 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v2 = (__int64)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(struct CInteraction **)v2;
}
