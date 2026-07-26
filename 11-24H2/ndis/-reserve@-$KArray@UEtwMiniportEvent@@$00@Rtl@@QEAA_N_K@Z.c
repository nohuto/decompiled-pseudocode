/*
 * XREFs of ?reserve@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x1400018C4
 * Callers:
 *     ?resize@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x140001AC8 (-resize@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall Rtl::KArray<EtwMiniportEvent,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    NumberOfBytes = 0LL;
    if ( (int)RtlULongLongMult(4uLL, a2, &NumberOfBytes) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, *((const void **)a1 + 1), 4LL * a1[1]);
        v7 = (void *)*((_QWORD *)a1 + 1);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x7272414Bu);
        *a1 = v2;
        *((_QWORD *)a1 + 1) = v6;
        return 1;
      }
    }
  }
  return 0;
}
