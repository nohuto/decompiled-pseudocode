/*
 * XREFs of ?resize@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x140001610
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x14008E8F0 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

char __fastcall Rtl::KArray<KnobDescriptor,1>::resize(__int64 a1)
{
  char result; // al
  unsigned __int64 v3; // rax

  result = Rtl::KArray<KnobDescriptor,1>::reserve(a1, 14LL);
  if ( result )
  {
    v3 = *(unsigned int *)(a1 + 4);
    if ( v3 < 0xE )
      memset((void *)(*(_QWORD *)(a1 + 8) + 48 * v3), 0, -48LL * v3 + 672);
    *(_DWORD *)(a1 + 4) = 14;
    return 1;
  }
  return result;
}
