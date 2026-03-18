/*
 * XREFs of ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14006F01C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x14006EE04 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v3; // rsi
  _DWORD *v5; // r14
  _DWORD *v6; // rbp
  struct DirectComposition::CBatch *v8; // rbx
  unsigned __int64 v9; // rdx
  _DWORD *v10; // r12
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  char *v13; // rdx
  _QWORD *v14; // r9
  _DWORD *v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DirectComposition::CBatch *BatchFragment; // rax
  void *v20; // [rsp+60h] [rbp+8h] BYREF

  v3 = (_DWORD *)((char *)this + 56);
  v5 = (_DWORD *)((char *)this + 48);
  while ( 1 )
  {
    v6 = v3;
    if ( (*((_DWORD *)this + 3) & 8) == 0 && *v3 >= *v5 )
      break;
    v8 = *a2;
    v9 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    if ( v9 < 0x24 )
    {
      BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                        *((DirectComposition::CApplicationChannel **)v8 + 1),
                        *((_DWORD *)v8 + 4),
                        *((_BYTE *)v8 + 32) & 1,
                        1,
                        0);
      if ( !BatchFragment )
        return *v3 == *v5;
      v3 = (_DWORD *)((char *)this + 56);
      *(_BYTE *)(*((_QWORD *)v8 + 17) + 64LL) = 0;
      *(_QWORD *)v8 = BatchFragment;
      *a2 = BatchFragment;
      v9 = 4096LL - *(_QWORD *)(*((_QWORD *)BatchFragment + 17) + 40LL);
    }
    v10 = v3;
    v3 = v6;
    v11 = (unsigned int)(*v5 - *v6);
    v12 = (v9 - 24) / 0xC;
    if ( v11 >= v12 )
      LODWORD(v11) = v12;
    v20 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * (v11 + 2)), &v20);
    v13 = (char *)v20;
    *(_DWORD *)v20 = 12 * (v11 + 2);
    v14 = v13 + 24;
    *(_OWORD *)(v13 + 4) = 0LL;
    *((_DWORD *)v13 + 5) = 0;
    *((_DWORD *)v13 + 1) = 186;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(*(_QWORD *)this + 32LL);
    *((_DWORD *)v13 + 3) = v11;
    *((_DWORD *)v13 + 4) = *((_DWORD *)this + 2);
    v15 = v10;
    *((_DWORD *)v13 + 5) = 2;
    if ( *v5 )
    {
      v16 = 0;
      if ( (_DWORD)v11 )
      {
        do
        {
          v17 = v16 + *v10;
          ++v16;
          v18 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v17);
          *v14 = *(_QWORD *)v18;
          v14 = (_QWORD *)((char *)v14 + 12);
          *((_DWORD *)v14 - 1) = *(_DWORD *)(v18 + 8);
        }
        while ( v16 < (unsigned int)v11 );
        v15 = (_DWORD *)((char *)this + 56);
      }
    }
    *((_DWORD *)this + 3) &= ~8u;
    *v15 += v11;
  }
  return *v3 == *v5;
}
