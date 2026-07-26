/*
 * XREFs of ?reserve@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1400557A0
 * Callers:
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x140055770 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ?grow@?$KArray@PEAX$00@Rtl@@AEAA_N_K@Z @ 0x1401603F0 (-grow@-$KArray@PEAX$00@Rtl@@AEAA_N_K@Z.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x140160920 (--0BindState@Ndis@@QEAA@XZ.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall Rtl::KArray<void *,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v5; // rsi
  void *v6; // rcx
  char result; // al

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 >= 0xFFFFFFFF )
    return 0;
  if ( !is_mul_ok(8uLL, a2) )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * a1[1]);
  v6 = (void *)*((_QWORD *)a1 + 1);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x7272414Bu);
  *a1 = v2;
  result = 1;
  *((_QWORD *)a1 + 1) = v5;
  return result;
}
