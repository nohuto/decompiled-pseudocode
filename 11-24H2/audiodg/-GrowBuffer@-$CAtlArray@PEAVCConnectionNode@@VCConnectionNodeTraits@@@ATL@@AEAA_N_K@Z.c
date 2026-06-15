/*
 * XREFs of ?GrowBuffer@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@AEAA_N_K@Z @ 0x14000C220
 * Callers:
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009830 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x14000A020 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4D0 (memmove_s.c)
 */

char __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::GrowBuffer(__int64 a1, size_t a2)
{
  size_t v4; // rdx
  size_t v5; // rcx
  void *v6; // rax
  void *v7; // rsi
  errno_t v8; // eax
  void *v10; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
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
    v6 = calloc(a2, 8uLL);
    v7 = v6;
    if ( v6 )
    {
      v8 = memmove_s(v6, 8LL * *(_QWORD *)(a1 + 8), *(const void *const *)a1, 8LL * *(_QWORD *)(a1 + 8));
      ATL::AtlCrtErrorCheck(v8);
      free(*(void **)a1);
      *(_QWORD *)a1 = v7;
LABEL_10:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  else
  {
    if ( v5 > a2 )
      a2 = v5;
    v10 = calloc(a2, 8uLL);
    *(_QWORD *)a1 = v10;
    if ( v10 )
      goto LABEL_10;
  }
  return 0;
}
