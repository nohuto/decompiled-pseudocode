/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___ @ 0x1401003D0
 * Callers:
 *     ?EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1401002D0 (-EmitUpdateCommands@CContainerShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_74734bdf69b91fcc75a9bbf9d319e20e___lambda_c8e4717179366f347b5fcb735f2cbba9___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r12
  struct DirectComposition::CBatch *v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r15
  char *v14; // rcx
  _DWORD *v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rdx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v20; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  do
  {
    v11 = *a2;
    v12 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    if ( v12 < 0x18 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        *((DirectComposition::CApplicationChannel **)v11 + 1),
                        *((_DWORD *)v11 + 4),
                        *((_BYTE *)v11 + 32) & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return (char)BatchFragment;
      *(_BYTE *)(*((_QWORD *)v11 + 17) + 64LL) = 0;
      *(_QWORD *)v11 = BatchFragment;
      *a2 = BatchFragment;
      v12 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v13 = a4 - *a3;
    if ( v13 >= (v12 - 20) >> 2 )
      LODWORD(v13) = (v12 - 20) >> 2;
    v20 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v13 + 20), &v20);
    v14 = (char *)v20;
    *(_DWORD *)v20 = 4 * v13 + 20;
    v15 = v14 + 20;
    *(_OWORD *)(v14 + 4) = 0LL;
    *((_DWORD *)v14 + 1) = 116;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v14 + 4) = 4 * v13;
    v16 = 0;
    for ( v14[12] = *a3 != 0; v16 < (unsigned int)v13; ++v15 )
    {
      ++v16;
      v17 = *a3;
      *a3 = v17 + 1;
      *v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 64LL) + 8 * v17) + 32LL);
    }
  }
  while ( *a3 < a4 );
  LOBYTE(BatchFragment) = 1;
  return (char)BatchFragment;
}
