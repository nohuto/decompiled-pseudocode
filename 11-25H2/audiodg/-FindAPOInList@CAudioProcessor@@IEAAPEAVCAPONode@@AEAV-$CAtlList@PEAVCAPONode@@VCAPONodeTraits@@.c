/*
 * XREFs of ?FindAPOInList@CAudioProcessor@@IEAAPEAVCAPONode@@AEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@PEAUIAudioProcessingObject@@AEAPEAU__POSITION@@@Z @ 0x140034ED0
 * Callers:
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009800 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009FF0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CAudioProcessor::FindAPOInList(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx

  v4 = *a2;
  *a4 = *a2;
  while ( v4 )
  {
    v5 = (_QWORD *)*v4;
    *a4 = *v4;
    v6 = (_QWORD *)v4[2];
    if ( *v6 == a3 )
    {
      *a4 = v4;
      return v6;
    }
    v4 = v5;
  }
  *a4 = 0LL;
  return 0LL;
}
