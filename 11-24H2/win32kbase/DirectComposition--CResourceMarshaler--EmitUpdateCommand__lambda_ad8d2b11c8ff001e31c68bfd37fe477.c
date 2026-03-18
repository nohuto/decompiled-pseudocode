/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1400BEA9C
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE1D0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  struct DirectComposition::CBatch *v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  char *v15; // r10
  unsigned int v16; // r11d
  _DWORD *v17; // r10
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v24; // [rsp+68h] [rbp+10h] BYREF

  v6 = a6;
  v8 = a5;
  do
  {
    v12 = *a2;
    v13 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    if ( v13 < 0x20 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        *((DirectComposition::CApplicationChannel **)v12 + 1),
                        *((_DWORD *)v12 + 4),
                        *((_BYTE *)v12 + 32) & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return (char)BatchFragment;
      *(_BYTE *)(*((_QWORD *)v12 + 17) + 64LL) = 0;
      *(_QWORD *)v12 = BatchFragment;
      *a2 = BatchFragment;
      v13 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v14 = a4 - *a3;
    if ( v14 >= (v13 - 20) / 0xC )
      LODWORD(v14) = (v13 - 20) / 0xC;
    v24 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * v14 + 20), &v24);
    v15 = (char *)v24;
    *(_DWORD *)v24 = 12 * v14 + 20;
    *(_OWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 1) = 213;
    *((_DWORD *)v15 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v15 + 4) = *(_DWORD *)(*(_QWORD *)v8 + 244LL);
    v16 = 0;
    v15[12] = *a3 != 0;
    if ( (_DWORD)v14 )
    {
      v17 = v15 + 28;
      do
      {
        ++v16;
        v18 = 2LL * (*a3)++;
        v19 = *(_QWORD *)(*(_QWORD *)v6 + 152LL);
        v20 = *(_DWORD *)(v19 + 8 * v18 + 8);
        v21 = *(_DWORD *)(v19 + 8 * v18 + 12);
        *(v17 - 2) = *(_DWORD *)(*(_QWORD *)(v19 + 8 * v18) + 32LL);
        *(v17 - 1) = v20;
        *v17 = v21;
        v17 += 3;
      }
      while ( v16 < (unsigned int)v14 );
    }
  }
  while ( *a3 < a4 );
  LOBYTE(BatchFragment) = 1;
  return (char)BatchFragment;
}
