/*
 * XREFs of ?RemoveAt@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x14000C508
 * Callers:
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009800 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009FF0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     wil::details::lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___::_lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___ @ 0x1400576C8 (wil--details--lambda_call__lambda_a04fe2ecc849ad478f9f5cbc88df212e___--_lambda_call__lambda_a04f.c)
 *     wil::details::lambda_call__lambda_7689b35a0bf80f5507f5324595203735___::_lambda_call__lambda_7689b35a0bf80f5507f5324595203735___ @ 0x1400577D8 (wil--details--lambda_call__lambda_7689b35a0bf80f5507f5324595203735___--_lambda_call__lambda_7689.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  errno_t v7; // eax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = v5 - v2;
  if ( v6 )
  {
    v7 = memmove_s((void *const)(*a1 + 8 * a2), 8 * v6, (const void *const)(*a1 + 8 * v2), 8 * v6);
    ATL::AtlCrtErrorCheck(v7);
  }
  --a1[1];
}
