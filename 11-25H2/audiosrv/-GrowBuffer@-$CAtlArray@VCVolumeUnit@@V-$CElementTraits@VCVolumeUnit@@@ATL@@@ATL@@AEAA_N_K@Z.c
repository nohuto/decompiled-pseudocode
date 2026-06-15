/*
 * XREFs of ?GrowBuffer@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18005BB3C
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18010D8AC (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18005BC18 (-memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

char __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::GrowBuffer(__int64 a1, size_t a2)
{
  unsigned __int64 v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  ATL::Checked *v7; // rax
  ATL::Checked *v8; // rsi
  unsigned __int64 v10; // [rsp+20h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 > v4 )
  {
    v5 = *(int *)(a1 + 24);
    if ( *(_QWORD *)a1 )
    {
      if ( !v5 )
      {
        v5 = v4 >> 1;
        if ( a2 - v4 > v4 >> 1 )
          v5 = a2 - v4;
      }
      if ( a2 < v4 + v5 )
        a2 = v4 + v5;
      v7 = (ATL::Checked *)calloc(a2, 0x40uLL);
      v8 = v7;
      if ( !v7 )
        return 0;
      ATL::Checked::memmove_s(
        v7,
        (void *)(*(_QWORD *)(a1 + 8) << 6),
        *(_QWORD *)a1,
        (const void *)(*(_QWORD *)(a1 + 8) << 6),
        v10);
      free(*(void **)a1);
      *(_QWORD *)a1 = v8;
    }
    else
    {
      if ( v5 > a2 )
        a2 = v5;
      v6 = calloc(a2, 0x40uLL);
      *(_QWORD *)a1 = v6;
      if ( !v6 )
        return 0;
    }
    *(_QWORD *)(a1 + 16) = a2;
  }
  return 1;
}
