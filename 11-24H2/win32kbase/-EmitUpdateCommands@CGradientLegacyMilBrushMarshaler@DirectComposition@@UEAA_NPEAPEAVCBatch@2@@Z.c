/*
 * XREFs of ?EmitUpdateCommands@CGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227784
 * Callers:
 *     ?EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227DD0 (-EmitUpdateCommands@CLinearGradientLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatc.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227D18 (-EmitUpdateCommands@CLegacyMilBrushMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?Marshal@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402296C8 (-Marshal@-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@Q.c)
 */

char __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  int *v5; // rsi
  int v6; // eax
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CLegacyMilBrushMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (int *)((char *)this + 16);
    v6 = *((_DWORD *)this + 4);
    if ( (v6 & 0x200) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
        return v4;
      v7 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 532;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 22);
      *v5 &= ~0x200u;
      v6 = *v5;
    }
    if ( (v6 & 0x400) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
        return v4;
      v8 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 533;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v8 + 3) = *((_DWORD *)this + 23);
      *v5 &= ~0x400u;
      v6 = *v5;
    }
    if ( (v6 & 0x800) != 0 )
    {
      v11 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v11) )
        return v4;
      v9 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 534;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v9 + 3) = *((_DWORD *)this + 24);
      *v5 &= ~0x800u;
    }
    if ( (unsigned __int8)DirectComposition::CMarshaledArray<MilGradientStop,1650934596,4096,535,536>::Marshal(
                            (char *)this + 104,
                            a2,
                            *((unsigned int *)this + 8),
                            (char *)this + 16) )
      return 1;
  }
  return v4;
}
