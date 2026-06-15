/*
 * XREFs of ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18004DC7C
 * Callers:
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014510 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18009EC08 (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 * Callees:
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x1800146B0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAppInstanceId::ToString(unsigned int *a1, wchar_t *const *a2)
{
  unsigned int v2; // ebx
  int *v4; // rbx
  int *v5; // rbx
  ATL::CAtlException *v6; // [rsp+20h] [rbp-18h] BYREF
  ATL::CAtlException *v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+40h] [rbp+8h]

  v2 = 0;
  if ( a1[2] )
  {
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        a2,
        L"%d|#",
        a1[1]);
    }
    catch ( ATL::CAtlException *v7 )
    {
      v5 = (int *)v7;
      if ( *(_DWORD *)v7 == -1073741571 )
        _o__resetstkoflw();
      v8 = *v5;
LABEL_4:
      v2 = v8;
      if ( v8 < 0 )
        AudSrvTraceLoggingErrorHelper("CAppInstanceId::ToString", 678, v8);
    }
  }
  else
  {
    try
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        a2,
        L"%d|%d",
        a1[1],
        *a1);
    }
    catch ( ATL::CAtlException *v6 )
    {
      v4 = (int *)v6;
      if ( *(_DWORD *)v6 == -1073741571 )
        _o__resetstkoflw();
      v8 = *v4;
      goto LABEL_4;
    }
  }
  return v2;
}
