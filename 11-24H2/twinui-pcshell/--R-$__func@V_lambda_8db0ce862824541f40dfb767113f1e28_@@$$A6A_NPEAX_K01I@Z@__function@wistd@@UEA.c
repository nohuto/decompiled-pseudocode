/*
 * XREFs of ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x1800D4B20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800D39B8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800D45E8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800D4C64 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180192A10 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802DB8B8 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

char __fastcall wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
        __int64 a1,
        void **a2,
        size_t *a3,
        void **a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  size_t v7; // r14
  void *v8; // r13
  unsigned int v9; // r15d
  void *v10; // r12
  unsigned __int64 v11; // rbp
  _BYTE *v12; // rdi
  char v13; // bl
  unsigned __int64 v15; // rdx
  void *v16[2]; // [rsp+30h] [rbp-48h] BYREF
  void *v17[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = *a3;
  v8 = *a2;
  v9 = *a6;
  v10 = *a4;
  v11 = *a5;
  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16) )
    goto LABEL_3;
  v12 = *(_BYTE **)(a1 + 24);
  v13 = 0;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(
         (wil::details_abi::RawUsageIndex *)v12,
         v8,
         v7,
         *a4,
         v11,
         *a6) )
  {
    goto LABEL_3;
  }
  v15 = v7 + v11 + 32;
  if ( *((_QWORD *)v12 + 3) )
  {
    if ( v12[58] )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(v12 + 24), v15);
  }
  else
  {
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)v17 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v16, v15 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)v12,
        (_WORD *)v16[0],
        0LL,
        (const char *)((char *)v17[0] - (char *)v16[0]));
      wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v12 + 48, &v17[1]);
      v12[58] = 1;
    }
    if ( v17[1] )
      MemoryFree(v17[1]);
  }
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(
         (wil::details_abi::RawUsageIndex *)v12,
         v8,
         v7,
         v10,
         v11,
         v9) )
  {
LABEL_3:
    v13 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v13;
}
