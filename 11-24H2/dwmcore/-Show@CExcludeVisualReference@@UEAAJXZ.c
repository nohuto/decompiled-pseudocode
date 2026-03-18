/*
 * XREFs of ?Show@CExcludeVisualReference@@UEAAJXZ @ 0x1801F6130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x1800B0A10 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Show(CExcludeVisualReference *this)
{
  __int64 v2; // rcx
  __int64 TargetResource; // rax
  char v4; // cl
  __int64 result; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
    return 2291674884LL;
  TargetResource = CWeakReference<CVisual>::GetTargetResource(v2);
  if ( !TargetResource )
    return 2291674884LL;
  v4 = *(_BYTE *)(TargetResource + 106);
  *(_BYTE *)(TargetResource + 106) = v4 & 0xFE;
  result = 0LL;
  *((_BYTE *)this + 20) = v4 & 1;
  *((_DWORD *)this + 4) = 1;
  return result;
}
