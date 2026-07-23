/*
 * XREFs of MiIdentifyPatchImageDataPages @ 0x1407F361C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlClearAllBitsEx @ 0x140467110 (RtlClearAllBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageDataPages(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  ULONG_PTR v4; // r12
  __int64 Pool; // rax
  unsigned __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rbx
  _RTL_BITMAP_EX *v9; // rbx
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(**(_QWORD **)(a1 + 16) + 8LL);
  v4 = 8 * (((unsigned int)v3 >> 6) + ((v3 & 0x3F) != 0));
  Pool = MiAllocatePool(0x40uLL, v4, 1296188496);
  if ( !Pool )
    return 3221225626LL;
  v6 = (unsigned int)v3;
  *(_QWORD *)(v2 + 48) = v3;
  *(_QWORD *)(v2 + 56) = Pool;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 16) + 128LL;
  if ( *(_QWORD *)(a1 + 16) != -128LL )
  {
    do
    {
      if ( (*(_DWORD *)(v8 + 32) & 0xC) == 8 )
        RtlSetBitsEx(v2 + 48, v7, *(unsigned int *)(v8 + 44));
      v7 += *(_DWORD *)(v8 + 44);
      v8 = *(_QWORD *)(v8 + 16);
    }
    while ( v8 );
  }
  v9 = *(_RTL_BITMAP_EX **)(a1 + 8);
  v10 = MiAllocatePool(0x100uLL, v4, 1296188496);
  if ( !v10 )
    return 3221225626LL;
  v9[4].SizeOfBitMap = v6;
  v9[4].Buffer = (unsigned __int64 *)v10;
  RtlClearAllBitsEx(v9 + 4);
  return 0LL;
}
