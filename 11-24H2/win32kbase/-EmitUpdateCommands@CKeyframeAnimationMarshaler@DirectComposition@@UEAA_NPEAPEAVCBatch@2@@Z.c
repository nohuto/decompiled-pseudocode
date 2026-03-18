/*
 * XREFs of ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1400BE700 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1400BEA9C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe477.c)
 *     memset @ 0x14023F500 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // r14
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // r15d
  __int64 v12; // r13
  int v13; // eax
  char *v14; // rcx
  char *v15; // rcx
  char *v16; // rcx
  char *v17; // rcx
  struct DirectComposition::CBatch *v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r12
  char *v22; // rcx
  unsigned int v23; // edx
  _DWORD *v24; // r8
  __int64 v25; // rcx
  char *v26; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v28; // [rsp+80h] [rbp+40h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(this, a2) )
    return 0;
  if ( *((_DWORD *)this + 62) < *((_DWORD *)this + 61) )
  {
    v28 = this;
    if ( (*((_DWORD *)this + 4) & 0x20000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ad8d2b11c8ff001e31c68bfd37fe4772___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
                               this,
                               a2) )
        return 0;
      *((_DWORD *)this + 4) |= 0x20000u;
    }
  }
  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_QWORD *)this + 16) && *((_QWORD *)this + 26) )
  {
    v28 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x48uLL, &v28) )
      return 0;
    v5 = (char *)v28;
    *(_DWORD *)v28 = 72;
    v6 = v5 + 4;
    memset(v5 + 4, 0, 0x44uLL);
    *(_DWORD *)v6 = 212;
    *((_DWORD *)v6 + 1) = *((_DWORD *)this + 8);
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 58);
    *((_DWORD *)v6 + 3) = *(_DWORD *)(*((_QWORD *)this + 16) + 32LL);
    *((_DWORD *)v6 + 4) = *((_DWORD *)this + 50);
    *((_DWORD *)v6 + 5) = *((_DWORD *)this + 52);
    *((_DWORD *)v6 + 6) = *((_DWORD *)this + 63);
    *((_DWORD *)v6 + 7) = *((_DWORD *)this + 64);
    *((_DWORD *)v6 + 8) = *((_DWORD *)this + 67);
    *((_DWORD *)v6 + 15) = *((_DWORD *)this + 69);
    *((_DWORD *)v6 + 9) = *((_DWORD *)this + 70);
    *((_DWORD *)v6 + 10) = *((_DWORD *)this + 72);
    v7 = *((_QWORD *)this + 20);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 32);
    else
      v8 = 0;
    *((_DWORD *)v6 + 11) = v8;
    v9 = *((_QWORD *)this + 17);
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 32);
    else
      v10 = 0;
    *((_DWORD *)v6 + 12) = v10;
    *((_DWORD *)v6 + 14) = *((_DWORD *)this + 56);
    *((_DWORD *)v6 + 13) = *((_DWORD *)this + 54);
    v6[64] = *((_BYTE *)this + 296) & 1;
    *((_DWORD *)this + 4) |= 0x800u;
  }
  v11 = *((_DWORD *)this + 59);
  v12 = *((_QWORD *)this + 18);
  while ( *((_DWORD *)this + 60) < v11 )
  {
    v19 = *a2;
    v20 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    if ( v20 < 0x14 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        *((DirectComposition::CApplicationChannel **)v19 + 1),
                        *((_DWORD *)v19 + 4),
                        *((_BYTE *)v19 + 32) & 1,
                        1,
                        0);
      if ( !BatchFragment )
        break;
      *(_BYTE *)(*((_QWORD *)v19 + 17) + 64LL) = 0;
      *(_QWORD *)v19 = BatchFragment;
      *a2 = BatchFragment;
      v20 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v21 = v11 - *((_DWORD *)this + 60);
    if ( v21 >= (v20 - 16) >> 2 )
      LODWORD(v21) = (v20 - 16) >> 2;
    v28 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v21 + 16), &v28);
    v22 = (char *)v28;
    v23 = 0;
    *(_DWORD *)v28 = 4 * v21 + 16;
    v24 = v22 + 16;
    *(_QWORD *)(v22 + 4) = 0LL;
    *((_DWORD *)v22 + 3) = 0;
    *((_DWORD *)v22 + 1) = 211;
    *((_DWORD *)v22 + 2) = *((_DWORD *)this + 8);
    for ( *((_DWORD *)v22 + 3) = v21; v23 < (unsigned int)v21; ++v24 )
    {
      v25 = v23 + *((_DWORD *)this + 60);
      ++v23;
      *v24 = *(_DWORD *)(*(_QWORD *)(v12 + 8 * v25) + 32LL);
    }
    *((_DWORD *)this + 60) += v21;
  }
  if ( *((_DWORD *)this + 60) != v11 )
    return 0;
  v13 = *((_DWORD *)this + 4);
  if ( (v13 & 0x1000) == 0 )
  {
    v28 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v28) )
      return 0;
    v14 = (char *)v28;
    *(_DWORD *)v28 = 36;
    *(_OWORD *)(v14 + 4) = 0LL;
    *(_OWORD *)(v14 + 20) = 0LL;
    *((_DWORD *)v14 + 1) = 218;
    *((_DWORD *)v14 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v14 + 3) = *((_DWORD *)this + 68);
    *(_QWORD *)(v14 + 20) = *((_QWORD *)this + 21);
    v14[28] = (*((_BYTE *)this + 296) & 2) == 0;
    *((_DWORD *)this + 4) |= 0x1000u;
    *((_BYTE *)this + 296) |= 2u;
    v13 = *((_DWORD *)this + 4);
  }
  if ( (v13 & 0x4000) == 0 )
  {
    v28 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v28) )
      return 0;
    v15 = (char *)v28;
    *(_DWORD *)v28 = 16;
    *(_QWORD *)(v15 + 4) = 0LL;
    *((_DWORD *)v15 + 3) = 0;
    *((_DWORD *)v15 + 1) = 215;
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v15 + 1) = 215;
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v15 + 3) = *((_DWORD *)this + 66);
    v13 = *((_DWORD *)this + 4) | 0x4000;
    *((_DWORD *)this + 4) = v13;
  }
  if ( (v13 & 0x8000) == 0 )
  {
    v28 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v28) )
      return 0;
    v16 = (char *)v28;
    *(_DWORD *)v28 = 16;
    *(_QWORD *)(v16 + 4) = 0LL;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 1) = 216;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v16 + 1) = 216;
    *((_DWORD *)v16 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v16 + 3) = *((_DWORD *)this + 71);
    v13 = *((_DWORD *)this + 4) | 0x8000;
    *((_DWORD *)this + 4) = v13;
  }
  if ( (v13 & 0x2000) == 0 && *((_QWORD *)this + 23) )
  {
    v28 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v28) )
      return 0;
    v26 = (char *)v28;
    *(_DWORD *)v28 = 36;
    *(_OWORD *)(v26 + 4) = 0LL;
    *(_OWORD *)(v26 + 20) = 0LL;
    *((_DWORD *)v26 + 1) = 217;
    *((_DWORD *)v26 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v26 + 12) = *((_QWORD *)this + 23);
    *(_QWORD *)(v26 + 20) = *((_QWORD *)this + 24);
    v26[28] = (*((_BYTE *)this + 296) & 4) == 0;
    v13 = *((_DWORD *)this + 4) | 0x2000;
    *((_BYTE *)this + 296) |= 4u;
    *((_DWORD *)this + 4) = v13;
  }
  if ( (v13 & 0x10000) == 0 )
  {
    v28 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v28) )
    {
      v17 = (char *)v28;
      *(_DWORD *)v28 = 16;
      *(_QWORD *)(v17 + 4) = 0LL;
      *((_DWORD *)v17 + 3) = 0;
      *((_DWORD *)v17 + 1) = 214;
      *((_DWORD *)v17 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v17 + 1) = 214;
      *((_DWORD *)v17 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v17 + 3) = *((_DWORD *)this + 65);
      *((_DWORD *)this + 4) |= 0x10000u;
      return v4;
    }
    return 0;
  }
  return v4;
}
