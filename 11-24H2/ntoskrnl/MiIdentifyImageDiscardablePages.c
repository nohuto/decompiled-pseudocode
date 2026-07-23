/*
 * XREFs of MiIdentifyImageDiscardablePages @ 0x1407F3514
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiIdentifyImageDiscardablePages(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  __int64 Pool; // rax
  __int64 PteAddress; // r15
  int v7; // ebp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v10 = 0LL;
  v11 = 0LL;
  v3 = (*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0);
  Pool = MiAllocatePool(
           0x40uLL,
           8
         * (((((unsigned __int8)(*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0)) & 0x3F) != 0)
          + (v3 >> 6)),
           1296188496);
  if ( !Pool )
    return 3221225626LL;
  a1[11] = Pool;
  a1[10] = v3;
  PteAddress = MiGetPteAddress(*(_QWORD *)(*a1 + 48LL));
  v7 = 0;
  do
  {
    v7 = MiSnapDriverRange(*a1, v7, 2, 0, (__int64)&v10, (__int64)&v11);
    if ( v10 )
    {
      v8 = (v10 - PteAddress) >> 3;
      v9 = (v11 - PteAddress) >> 3;
      if ( v8 < v3 )
      {
        if ( v9 >= v3 )
          v9 = v3 - 1;
        RtlSetBitsEx((__int64)(a1 + 10), v8, v9 - v8 + 1);
      }
    }
  }
  while ( v7 );
  return 0LL;
}
