/*
 * XREFs of strstr @ 0x1404FB270
 * Callers:
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x140551848 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HvlDebuggerSupportInitialize @ 0x14057F7A0 (HvlDebuggerSupportInitialize.c)
 *     InbvDetermineFunction @ 0x14058C2E0 (InbvDetermineFunction.c)
 *     KiIsSafeBoot @ 0x1405BB624 (KiIsSafeBoot.c)
 *     KiIsWinPEBoot @ 0x1405BB76C (KiIsWinPEBoot.c)
 *     HvlPhase0Initialize @ 0x14070C3D8 (HvlPhase0Initialize.c)
 *     SepInitializeCodeIntegrity @ 0x14078E3FC (SepInitializeCodeIntegrity.c)
 *     KiMatchLoadOption @ 0x140B591A8 (KiMatchLoadOption.c)
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140BE0C74 (CcInitializeBcbProfiler.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     HalpProcIsSmtDisabled @ 0x140C11514 (HalpProcIsSmtDisabled.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140C1C310 (BvgaDriverInitialize.c)
 *     KiPerformGroupConfiguration @ 0x140C2AE80 (KiPerformGroupConfiguration.c)
 *     KiInitializeNxSupportDiscard @ 0x140C2B758 (KiInitializeNxSupportDiscard.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
 *     KitpInitAitSampleRate @ 0x140C455A0 (KitpInitAitSampleRate.c)
 *     CmpGetBiosVersion @ 0x140C4B4C4 (CmpGetBiosVersion.c)
 *     MiInitializeBootDefaults @ 0x140C503FC (MiInitializeBootDefaults.c)
 *     MiCompensateForProcessorErrata @ 0x140C59EE8 (MiCompensateForProcessorErrata.c)
 *     VhdInitialize @ 0x140C5F424 (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C5FEBC (CimfsInitialize.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 *     KeInitializeClock @ 0x140C624A0 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  const char *v2; // r10
  const __m128i *v3; // r8
  int v5; // edi
  __m128i v6; // xmm4
  __m128i v7; // xmm1
  __int64 v8; // rax
  const __m128i *v9; // rdx
  const __m128i *i; // r9
  __m128i v11; // xmm2
  unsigned int v12; // eax
  __int64 v13; // rcx
  __m128i inserted; // xmm0
  char v15; // cl
  __int64 v16; // r9
  char v17; // di
  const char *v18; // rax
  __m128i v19; // xmm1
  unsigned __int8 v20; // cf
  const __m128i *v21; // rdx
  const __m128i *j; // r9
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  unsigned __int8 v25; // sf

  v2 = SubStr;
  v3 = (const __m128i *)Str;
  if ( !*SubStr )
    return (char *)Str;
  if ( (_isa_info & 8) == 0 )
  {
    v5 = *(unsigned __int8 *)SubStr;
    v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v5 | (unsigned int)(v5 << 8)), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)v3 & 0xFFFu) > 0xFF0uLL )
        goto LABEL_9;
      v7 = _mm_loadu_si128(v3);
      LODWORD(v8) = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                 (__m128)_mm_cmpeq_epi8(v7, v6),
                                                 (__m128)_mm_cmpeq_epi8(v7, (__m128i)0LL)));
      if ( (_DWORD)v8 )
      {
        _BitScanForward((unsigned int *)&v8, v8);
        v3 = (const __m128i *)((char *)v3 + v8);
LABEL_9:
        if ( !v3->m128i_i8[0] )
          return 0LL;
        if ( (_BYTE)v5 == v3->m128i_i8[0] )
        {
          v9 = v3;
          for ( i = (const __m128i *)v2; ; i = (const __m128i *)((char *)i + 1) )
          {
            while ( 2 )
            {
              if ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)v9 & 0xFFFu) <= 0xFF0uLL )
              {
                v11 = _mm_loadu_si128(i);
                v12 = _mm_movemask_epi8((__m128i)_mm_or_ps(
                                                   (__m128)_mm_cmpeq_epi8(
                                                             _mm_cmpeq_epi8(v11, _mm_loadu_si128(v9)),
                                                             (__m128i)0LL),
                                                   (__m128)_mm_cmpeq_epi8(v11, (__m128i)0LL)));
                if ( !v12 )
                {
                  ++v9;
                  ++i;
                  continue;
                }
                _BitScanForward((unsigned int *)&v13, v12);
                v9 = (const __m128i *)((char *)v9 + v13);
                i = (const __m128i *)((char *)i + v13);
              }
              break;
            }
            if ( !i->m128i_i8[0] )
              return v3->m128i_i8;
            if ( v9->m128i_i8[0] != i->m128i_i8[0] )
              break;
            v9 = (const __m128i *)((char *)v9 + 1);
          }
        }
        v3 = (const __m128i *)((char *)v3 + 1);
      }
      else
      {
        ++v3;
      }
    }
  }
  if ( ((unsigned __int16)SubStr & 0xFFFu) > 0xFF0uLL )
  {
    v15 = *SubStr;
    inserted = 0LL;
    v16 = 16LL;
    do
    {
      v17 = v15;
      inserted = _mm_insert_epi8(_mm_srli_si128(inserted, 1), v15, 15);
      v18 = SubStr + 1;
      if ( v15 )
        v15 = *v18;
      if ( !v17 )
        v18 = SubStr;
      SubStr = v18;
      --v16;
    }
    while ( v16 );
  }
  else
  {
    inserted = _mm_loadu_si128((const __m128i *)SubStr);
  }
  while ( 1 )
  {
    while ( ((unsigned __int16)v3 & 0xFFFu) > 0xFF0uLL )
    {
      if ( !v3->m128i_i8[0] )
        return 0LL;
      if ( v3->m128i_i8[0] == *v2 )
        goto LABEL_35;
LABEL_43:
      v3 = (const __m128i *)((char *)v3 + 1);
    }
    v19 = _mm_loadu_si128(v3);
    v20 = _mm_cmpistrc(inserted, v19, 12);
    if ( v20 | _mm_cmpistrz(inserted, v19, 12) )
      break;
    ++v3;
  }
  if ( !v20 )
    return 0LL;
  v3 = (const __m128i *)((char *)v3 + _mm_cmpistri(inserted, v19, 12));
LABEL_35:
  v21 = v3;
  for ( j = (const __m128i *)v2; ; ++j )
  {
    while ( ((unsigned __int16)v21 & 0xFFFu) > 0xFF0uLL || ((unsigned __int16)j & 0xFFFu) > 0xFF0uLL )
    {
      if ( !j->m128i_i8[0] )
        return v3->m128i_i8;
      if ( v21->m128i_i8[0] != j->m128i_i8[0] )
        goto LABEL_43;
      v21 = (const __m128i *)((char *)v21 + 1);
      j = (const __m128i *)((char *)j + 1);
    }
    v23 = _mm_loadu_si128(v21);
    v24 = _mm_loadu_si128(j);
    v25 = _mm_cmpistrs(v24, v23, 12);
    if ( !_mm_cmpistro(v24, v23, 12) )
      goto LABEL_43;
    if ( v25 )
      break;
    ++v21;
  }
  return v3->m128i_i8;
}
