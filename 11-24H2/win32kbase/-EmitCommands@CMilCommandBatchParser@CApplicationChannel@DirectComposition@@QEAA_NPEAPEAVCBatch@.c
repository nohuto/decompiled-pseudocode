/*
 * XREFs of ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x14007DCE8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x14010020C (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::EmitCommands(
        DirectComposition::CApplicationChannel::CMilCommandBatchParser *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int *v4; // rdi
  bool result; // al
  struct DirectComposition::CBatch *v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  void *v13; // rbp
  void *v14; // r8
  struct DirectComposition::CBatch *v15; // r14
  struct DirectComposition::CBatch *BatchFragment; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbp
  __int64 v20; // rcx
  bool v21; // zf
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int v25; // ecx
  unsigned __int64 v26; // rbp
  unsigned int v27; // eax
  char *v28; // rcx
  void *v29; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v4 = (unsigned int *)*((_QWORD *)this + 4);
    if ( !v4 )
      return 1;
    v6 = *a2;
    v7 = *((_QWORD *)this + 6);
    v8 = *((_QWORD *)*a2 + 17);
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 4096 - v9;
    if ( v7 || (v11 = *v4, v11 > v10) )
    {
      v24 = (int)v4[1];
      v25 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[2 * v24];
      if ( (_DWORD)v24 == 2 )
      {
        v25 = 32;
      }
      else if ( !v25 )
      {
        if ( *v4 > 0x200 )
          KeBugCheck(0xC0000099);
        goto LABEL_29;
      }
      if ( v10 >= (unsigned __int64)v25 + 16 )
      {
        if ( !v7 )
        {
          *((_QWORD *)this + 6) = v4 + 4;
          *((_DWORD *)this + 14) = v4[3] / v25;
        }
        v26 = *((unsigned int *)this + 14);
        if ( v26 >= (v10 - 16) / v25 )
          v26 = (v10 - 16) / v25;
        v29 = 0LL;
        v4[3] = v25 * v26;
        v27 = v25 * v26 + 16;
        *v4 = v27;
        DirectComposition::CBatch::EnsureBatchBuffer(a2, v27, &v29);
        v28 = (char *)v29;
        *(_OWORD *)v29 = *(_OWORD *)*((_QWORD *)this + 4);
        memmove(v28 + 16, *((const void **)this + 6), v4[3]);
        if ( v26 >= *((unsigned int *)this + 14) )
        {
          *((_QWORD *)this + 6) = 0LL;
          *((_DWORD *)this + 14) = 0;
          goto LABEL_11;
        }
        if ( (_DWORD)v24 != 2 )
          v4[1] = DirectComposition::CApplicationChannel::CMilCommandBatchParser::s_pCommandSplitDataGenerated[2 * v24 + 1];
        *((_QWORD *)this + 6) += v4[3];
        *((_DWORD *)this + 14) -= v26;
      }
LABEL_29:
      result = DirectComposition::CBatch::AllocateNewFragment(a2, 0LL);
      if ( !result )
        return result;
    }
    else
    {
      v12 = *(_QWORD *)(v8 + 56);
      v13 = 0LL;
      *(_QWORD *)(v8 + 40) = v9 + v11;
      v14 = (void *)(v9 + v12);
      if ( v14 )
      {
        *((_QWORD *)v6 + 19) += v11;
        v13 = v14;
      }
      else
      {
        v15 = *a2;
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          *((DirectComposition::CApplicationChannel **)*a2 + 1),
                          *((_DWORD *)*a2 + 4),
                          *((_BYTE *)*a2 + 32) & 1,
                          1,
                          0);
        if ( BatchFragment )
        {
          *(_BYTE *)(*((_QWORD *)v15 + 17) + 64LL) = 0;
          *(_QWORD *)v15 = BatchFragment;
          *a2 = BatchFragment;
          v17 = *((_QWORD *)BatchFragment + 17);
          v18 = *(_QWORD *)(v17 + 40);
          if ( v11 > 4096 - v18
            || (v19 = *(_QWORD *)(v17 + 56), *(_QWORD *)(v17 + 40) = v18 + v11, (v13 = (void *)(v18 + v19)) == 0LL) )
          {
            KeBugCheck(0xC000000D);
          }
          *((_QWORD *)BatchFragment + 19) += v11;
        }
      }
      memmove(v13, *((const void **)this + 4), *v4);
LABEL_11:
      v20 = *((unsigned int *)this + 10);
      v21 = *((_DWORD *)this + 6) == (_DWORD)v20;
      *((_DWORD *)this + 6) -= v20;
      if ( v21 )
      {
        v22 = (__int64 *)*((_QWORD *)this + 2);
        v23 = *v22;
        *((_QWORD *)this + 2) = *v22;
        if ( v23 )
        {
          *((_DWORD *)this + 6) = *(_DWORD *)(v23 + 20);
          *((_QWORD *)this + 4) = v23 + 24;
          *((_DWORD *)this + 10) = *(_DWORD *)(v23 + 24);
        }
        else
        {
          *((_QWORD *)this + 4) = 0LL;
          *((_DWORD *)this + 10) = 0;
        }
      }
      else
      {
        *((_QWORD *)this + 4) += v20;
        *((_DWORD *)this + 10) = **((_DWORD **)this + 4);
      }
    }
  }
}
