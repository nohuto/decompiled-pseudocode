/*
 * XREFs of ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046918
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140042A44 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x140046704 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x140046768 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x140046804 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14004685C (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x14005B740 (--$ReportFailure_CaughtExceptionCommon@$00@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x14005B84C (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x14005B8C8 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x14005B918 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x14005B964 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x14005DE70 (-ResultFromCaughtExceptionInternal@details@wil@@YA-AUResultStatus@12@PEAG_KPEA_N@Z.c)
 *     ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x14005EFDC (--$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA-AUResultStatus@01@PEAXIPEBD110PEAG_KW.c)
 *     ??$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z @ 0x1400650C4 (--$ReportFailure_Win32@$00@details@wil@@YAJPEAXIPEBD110K@Z.c)
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x140066784 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x14006D9E4 (--$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x140095CEE (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x140095D41 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x140095DFC (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x140095E4F (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::HrToNtStatus(wil::details *this)
{
  unsigned int v1; // edx

  v1 = (unsigned int)this;
  if ( (int)this > -2147024662 )
  {
    if ( (int)this > -2147023746 )
    {
      switch ( (_DWORD)this )
      {
        case 0x8007054F:
          return (unsigned int)-1073741595;
        case 0x8007050C:
          return (unsigned int)-1073740757;
        case 0x800705B9:
          return (unsigned int)-1073700733;
        case 0:
          return 0;
      }
    }
    else
    {
      switch ( (_DWORD)this )
      {
        case 0x8007047E:
          return (unsigned int)-1073741735;
        case 0x80070216:
          return (unsigned int)-1073741675;
        case 0x8007023E:
          return (unsigned int)-1073741787;
        case 0x80070246:
          return (unsigned int)-1073741471;
        case 0x80070247:
          return (unsigned int)-1073741469;
        case 0x80070272:
          return (unsigned int)-1073741197;
      }
    }
  }
  else
  {
    if ( (_DWORD)this == -2147024662 )
      return (unsigned int)-2147483643;
    if ( (int)this > -2147024809 )
    {
      switch ( (_DWORD)this )
      {
        case 0x80070070:
          return (unsigned int)-1073741697;
        case 0x8007007A:
          return (unsigned int)-1073741789;
        case 0x8007007B:
          return (unsigned int)-1073741773;
        case 0x8007007E:
          return (unsigned int)-1073741515;
      }
    }
    else
    {
      switch ( (_DWORD)this )
      {
        case 0x80070057:
          return (unsigned int)-1073741811;
        case 0x80004005:
          return (unsigned int)-1073741823;
        case 0x80070001:
          return (unsigned int)-1073741822;
        case 0x80070002:
          return (unsigned int)-1073741772;
        case 0x80070003:
          return (unsigned int)-1073741766;
        case 0x8007000E:
          return (unsigned int)-1073741801;
      }
    }
  }
  if ( ((unsigned int)this & 0x10000000) != 0 )
    return (unsigned int)this & 0xEFFFFFFF;
  if ( ((unsigned int)this & 0x1FFF0000) == 0x70000 )
  {
    v1 = (unsigned __int16)this;
    if ( (_WORD)this )
      return (unsigned __int16)this | 0xC0070000;
    return v1;
  }
  if ( ((unsigned int)this & 0x1FFF0000) != 0x90000 )
    return (unsigned int)-1073741595;
  if ( (int)this > 0 )
    return (unsigned __int16)this | 0xC0090000;
  return v1;
}
