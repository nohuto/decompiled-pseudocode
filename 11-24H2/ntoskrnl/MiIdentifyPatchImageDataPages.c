/*
 * XREFs of MiIdentifyPatchImageDataPages @ 0x1407F2FE8
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     RtlClearAllBitsEx @ 0x14046C570 (RtlClearAllBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageDataPages(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  ULONG_PTR v4; // r12
  __int64 Pool; // rax
  __int64 v6; // rbp
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rbx
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
  v9 = *(_QWORD *)(a1 + 8);
  v10 = MiAllocatePool(0x100uLL, v4, 1296188496);
  if ( !v10 )
    return 3221225626LL;
  *(_QWORD *)(v9 + 64) = v6;
  *(_QWORD *)(v9 + 72) = v10;
  RtlClearAllBitsEx(v9 + 64);
  return 0LL;
}
