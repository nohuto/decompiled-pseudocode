/*
 * XREFs of ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x140072DF0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall Rtl::KArray<KnobDescriptor,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  char result; // al
  PVOID PoolWithTag; // rax
  PVOID v6; // rsi
  void *v7; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 >= 0xFFFFFFFF )
    return 0;
  NumberOfBytes = 0LL;
  if ( (int)RtlULongLongMult(0x30uLL, a2, &NumberOfBytes) < 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *((const void **)a1 + 1), 48LL * a1[1]);
  v7 = (void *)*((_QWORD *)a1 + 1);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x7272414Bu);
  *a1 = v2;
  result = 1;
  *((_QWORD *)a1 + 1) = v6;
  return result;
}
