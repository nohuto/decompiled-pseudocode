/*
 * XREFs of ?EmitUpdateCommands@CSolidColorLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140228C40
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227D18 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSolidColorLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSolidColorLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v5; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
      return 1;
    v7 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
    {
      v5 = (char *)v7;
      *(_DWORD *)v7 = 28;
      *(_OWORD *)(v5 + 4) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *((_DWORD *)v5 + 1) = 626;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 8);
      *(_OWORD *)(v5 + 12) = *(_OWORD *)((char *)this + 88);
      *((_DWORD *)this + 4) &= ~0x200u;
      return 1;
    }
  }
  return v4;
}
