/*
 * XREFs of MiSlowRotateCopy @ 0x140679570
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiReturnPteMappingSet @ 0x1402532A0 (MiReturnPteMappingSet.c)
 *     MiGetPteMappingSet @ 0x140335DF0 (MiGetPteMappingSet.c)
 *     MiInitializeSlowPte @ 0x1406794B8 (MiInitializeSlowPte.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 */

unsigned __int8 __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 v4; // r15
  int v6; // ebp
  unsigned int v7; // r14d
  int v8; // edx
  unsigned __int8 result; // al
  __int64 v10; // r12
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-38h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v13 = 0LL;
  BugCheckParameter2 = 0LL;
  v6 = 4;
  v7 = 1;
  v8 = *(_DWORD *)(a3 + 48) & 0xC00;
  result = v8 == 3072;
  if ( (*(_DWORD *)(a3 + 48) & 0x380) != 0 && v8 == 3072 )
  {
    v6 = 28;
    v7 = 2;
  }
  else if ( v8 == 1024 )
  {
    v6 = 12;
    v7 = 0;
  }
  if ( v4 )
  {
    v10 = a1 - a2;
    do
    {
      MiGetPteMappingSet(1, 2LL, (__int64)&v13);
      v11 = BugCheckParameter2;
      v12 = BugCheckParameter2 + 8;
      MiInitializeSlowPte((ULONG_PTR *)BugCheckParameter2, *v3, v6);
      MiInitializeSlowPte((ULONG_PTR *)v12, *(unsigned __int64 *)((char *)v3 + v10), v6);
      KeCopyPage((__int64)(v12 << 25) >> 16, (__int64)(v11 << 25) >> 16, v7);
      *(_QWORD *)v11 = CLFS_LSN_NULL_EXT;
      *(_QWORD *)v12 = CLFS_LSN_NULL_EXT;
      result = (unsigned __int8)MiReturnPteMappingSet((__int64)&v13);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
