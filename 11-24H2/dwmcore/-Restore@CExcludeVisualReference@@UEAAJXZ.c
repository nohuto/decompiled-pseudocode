/*
 * XREFs of ?Restore@CExcludeVisualReference@@UEAAJXZ @ 0x1801E9720
 * Callers:
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x180096404 (--1CExcludeVisualReference@@QEAA@XZ.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x1800B0A10 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CExcludeVisualReference::Restore(CExcludeVisualReference *this)
{
  __int64 v2; // rcx
  __int64 TargetResource; // rax

  v2 = *((_QWORD *)this + 1);
  if ( !v2 )
    return 2291674884LL;
  TargetResource = CWeakReference<CVisual>::GetTargetResource(v2);
  if ( !TargetResource )
    return 2291674884LL;
  if ( *((_DWORD *)this + 4) )
  {
    *(_BYTE *)(TargetResource + 106) ^= (*((_BYTE *)this + 20) ^ *(_BYTE *)(TargetResource + 106)) & 1;
    *((_DWORD *)this + 4) = 0;
  }
  return 0LL;
}
