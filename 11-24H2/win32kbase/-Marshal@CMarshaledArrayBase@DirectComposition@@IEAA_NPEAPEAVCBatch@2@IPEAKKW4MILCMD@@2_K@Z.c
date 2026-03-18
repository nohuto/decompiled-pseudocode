/*
 * XREFs of ?Marshal@CMarshaledArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2_K@Z @ 0x1400EDE00
 * Callers:
 *     ?EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227040 (-EmitUpdateCommands@CCaptureControllerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x140227140 (-EmitUpdateCommands@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2.c)
 *     ?Marshal@?$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CDC@$0CDD@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402295B0 (-Marshal@-$CMarshaledArray@H$0GHGNEDEE@$0BAA@$0CDC@$0CDD@@DirectComposition@@QEAA_NPEAPEAVCBatch.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CDA@$0CDB@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402295E8 (-Marshal@-$CMarshaledArray@UD2D_POINT_2F@@$0GHGNEDEE@$0IA@$0CDA@$0CDB@@DirectComposition@@QEAA_N.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCO@$0CCP@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229620 (-Marshal@-$CMarshaledArray@UD2D_POINT_3F@@$0GHGNEDEE@$0EA@$0CCO@$0CCP@@DirectComposition@@QEAA_N.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BOI@$0BOJ@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229658 (-Marshal@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0BAA@$0BOI@$0BOJ@@DirectComposition@@QEAA_NP.c)
 *     ?Marshal@?$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BOG@$0BOH@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229690 (-Marshal@-$CMarshaledArray@UD2D_RECT_F@@$0DAGBEDEE@$0IA@$0BOG@$0BOH@@DirectComposition@@QEAA_NPE.c)
 *     ?Marshal@?$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x1402296C8 (-Marshal@-$CMarshaledArray@UMilGradientStop@@$0GCGHEDEE@$0BAAA@$0CBH@$0CBI@@DirectComposition@@Q.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229700 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GEGHEDEE@$0CA@$0CAI@$0CAJ@@DirectComposition@@QEAA_NPEAPE.c)
 *     ?Marshal@?$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAA_NPEAPEAVCBatch@2@IPEAK@Z @ 0x140229738 (-Marshal@-$CMarshaledArray@UtagRECT@@$0GHHCEDEE@$0IAA@$0CDE@$0CDF@@DirectComposition@@QEAA_NPEAP.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

bool __fastcall DirectComposition::CMarshaledArrayBase::Marshal(
        _QWORD *a1,
        struct DirectComposition::CBatch **a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        unsigned __int64 a8)
{
  int v8; // r15d
  unsigned __int64 v13; // r13
  bool v14; // dl
  struct DirectComposition::CBatch *v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  char *v18; // rcx
  int v19; // eax
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+80h] [rbp+18h]

  v22 = a3;
  v8 = a5;
  if ( (*a4 & a5) != 0 )
  {
    v13 = a8;
    *a4 &= ~a5;
    v14 = a1[2] == 0LL;
    while ( a1[2] != *a1 || v14 )
    {
      v15 = *a2;
      LOBYTE(a5) = 0;
      v16 = 4096LL - *(_QWORD *)(*((_QWORD *)v15 + 17) + 40LL);
      if ( v16 < v13 + 16 )
      {
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          *((DirectComposition::CApplicationChannel **)v15 + 1),
                          *((_DWORD *)v15 + 4),
                          *((_BYTE *)v15 + 32) & 1,
                          1,
                          0);
        if ( !BatchFragment )
        {
          *a4 |= v8;
          return a1[2] == *a1;
        }
        *(_BYTE *)(*((_QWORD *)v15 + 17) + 64LL) = 0;
        *(_QWORD *)v15 = BatchFragment;
        *a2 = BatchFragment;
        v16 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
      }
      v17 = (v16 - 16) / v13;
      if ( a1[2] - *a1 < v17 )
        LODWORD(v17) = *((_DWORD *)a1 + 4) - *(_DWORD *)a1;
      v21 = 0LL;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(v17 * v13 + 16), &v21);
      v18 = (char *)v21;
      *(_DWORD *)v21 = v17 * v13 + 16;
      *(_QWORD *)(v18 + 4) = 0LL;
      *((_DWORD *)v18 + 3) = 0;
      v19 = a6;
      if ( *a1 )
        v19 = a7;
      *((_DWORD *)v18 + 1) = v19;
      *((_DWORD *)v18 + 2) = v22;
      *((_DWORD *)v18 + 3) = v17 * v13;
      memmove(v18 + 16, (const void *)(a1[1] + *a1 * v13), (unsigned int)(v17 * v13));
      v14 = a5;
      *a1 += (unsigned int)v17;
    }
  }
  return a1[2] == *a1;
}
