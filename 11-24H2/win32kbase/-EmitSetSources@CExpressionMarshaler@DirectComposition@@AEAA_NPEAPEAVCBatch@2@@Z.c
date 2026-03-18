/*
 * XREFs of ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1400E8ADC
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1401960B0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetSources(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  struct DirectComposition::CBatch *v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  unsigned int v8; // edx
  _DWORD *v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  for ( ; *((_DWORD *)this + 45) < *((_DWORD *)this + 44); *((_DWORD *)this + 45) += v6 )
  {
    v4 = *a2;
    v5 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    if ( v5 < 0x18 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        *((DirectComposition::CApplicationChannel **)v4 + 1),
                        *((_DWORD *)v4 + 4),
                        *((_BYTE *)v4 + 32) & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return *((_DWORD *)this + 45) == *((_DWORD *)this + 44);
      *(_BYTE *)(*((_QWORD *)v4 + 17) + 64LL) = 0;
      *(_QWORD *)v4 = BatchFragment;
      *a2 = BatchFragment;
      v5 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v6 = (unsigned int)(*((_DWORD *)this + 44) - *((_DWORD *)this + 45));
    if ( v6 >= (v5 - 20) >> 2 )
      LODWORD(v6) = (v5 - 20) >> 2;
    v14 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v6 + 20), &v14);
    v7 = (char *)v14;
    v8 = 0;
    *(_DWORD *)v14 = 4 * v6 + 20;
    v9 = v7 + 20;
    *(_OWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 1) = 137;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v7 + 3) = v6;
    for ( *((_DWORD *)v7 + 4) = *((_DWORD *)this + 44); v8 < (unsigned int)v6; ++v9 )
    {
      v10 = 0;
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL * (v8 + *((_DWORD *)this + 45))) + 16LL);
      if ( v11 )
        v10 = *(_DWORD *)(v11 + 32);
      *v9 = v10;
      ++v8;
    }
  }
  return *((_DWORD *)this + 45) == *((_DWORD *)this + 44);
}
