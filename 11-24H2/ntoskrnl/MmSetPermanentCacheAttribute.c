/*
 * XREFs of MmSetPermanentCacheAttribute @ 0x1407EDA30
 * Callers:
 *     <none>
 * Callees:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmSetPermanentCacheAttribute(unsigned __int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 Pool; // rax
  void *v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+2Ch] [rbp-Ch]

  v11 = 0;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225714LL;
  if ( (a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  v6 = a2 >> 12;
  if ( !(a2 >> 12) )
    return 3221225712LL;
  if ( ((a3 - 1) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  Pool = MiAllocatePool(0x40uLL, 0x30uLL, 1867082061);
  v8 = (void *)Pool;
  if ( !Pool )
    return 3221225626LL;
  *(_QWORD *)(Pool + 24) = v5;
  *(_DWORD *)(Pool + 40) = 1;
  *(_QWORD *)(Pool + 32) = v5 + v6 - 1;
  v10 = 0;
  v9 = Pool;
  KeGenericCallDpcEx((__int64)MiMakeIoRangePermanentDpc, (__int64)&v9);
  result = (unsigned int)v10;
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v10;
  }
  return result;
}
