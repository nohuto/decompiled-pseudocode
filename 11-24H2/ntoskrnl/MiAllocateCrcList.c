/*
 * XREFs of MiAllocateCrcList @ 0x1409E7240
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiCommitmentAvailable @ 0x1404216F0 (MiCommitmentAvailable.c)
 *     MiGetPrivatePageCount @ 0x14048DE5C (MiGetPrivatePageCount.c)
 */

__int64 __fastcall MiAllocateCrcList(__int64 *a1, char a2, ULONG_PTR *a3)
{
  _QWORD *v3; // rbp
  __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 PrivatePageCount; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  ULONG_PTR v15; // rbx
  __int64 result; // rax

  v3 = (_QWORD *)*a1;
  v5 = *(_QWORD *)(*a1 + 16320);
  v7 = *a3 / 0x28;
  PrivatePageCount = MiGetPrivatePageCount(*a1);
  v9 = v5 + PrivatePageCount;
  if ( v5 + PrivatePageCount < PrivatePageCount )
    v9 = -1LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = 0LL;
    if ( KeNumberNodes )
    {
      v10 = qword_140E37740;
      v11 = (unsigned __int16)KeNumberNodes;
      do
      {
        v9 += *v10++;
        --v11;
      }
      while ( v11 );
    }
  }
  if ( v9 <= v7 )
    v7 = v9;
  v12 = v3[2344] - 1024LL;
  if ( (__int64)v12 <= 0 )
    return 0LL;
  if ( (40 * v7 + 4095) >> 12 <= v12 )
    v12 = (40 * v7 + 4095) >> 12;
  v13 = MiCommitmentAvailable((__int64)v3);
  if ( !v13 )
    return 0LL;
  if ( v12 > v13 )
    v12 = v13;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v3, 2u);
  if ( v12 > AvailablePagesBelowPriority )
    v12 = AvailablePagesBelowPriority;
  v15 = v12 << 12;
  if ( v15 < 0x200000 )
    v15 = 0x200000LL;
  while ( 1 )
  {
    result = MiAllocatePool(0x40uLL, v15, 1836405581);
    if ( result )
      break;
    v15 >>= 1;
    if ( v15 < 0x10000 )
      return result;
  }
  *a3 = v15;
  return result;
}
