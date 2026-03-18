/*
 * XREFs of ?EmitUpdateMotionParameters@CNaturalAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14019D598
 * Callers:
 *     ?EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE060 (-EmitUpdateCommands@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_82a12b1bd6d405ea304fb103b341a057___ @ 0x1402377B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_82a12b1bd6d405ea304f.c)
 */

char __fastcall DirectComposition::CNaturalAnimationMarshaler::EmitUpdateMotionParameters(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  char v4; // di
  int v5; // ecx
  char *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x10000) != 0 )
  {
    v5 = *((_DWORD *)this + 41) - 1;
    if ( v5 )
    {
      if ( v5 == 1 && (v8 = 0LL, DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8)) )
      {
        v6 = (char *)v8;
        *(_DWORD *)v8 = 20;
        *(_OWORD *)(v6 + 4) = 0LL;
        *((_DWORD *)v6 + 1) = 254;
        *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
        *((_DWORD *)v6 + 1) = 254;
        *((_DWORD *)v6 + 2) = *((_DWORD *)this + 8);
        *(_QWORD *)(v6 + 12) = *((_QWORD *)this + 21);
        *((_DWORD *)this + 4) &= ~0x10000u;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_82a12b1bd6d405ea304fb103b341a057___(
               this,
               a2,
               a3,
               this);
    }
  }
  return v4;
}
