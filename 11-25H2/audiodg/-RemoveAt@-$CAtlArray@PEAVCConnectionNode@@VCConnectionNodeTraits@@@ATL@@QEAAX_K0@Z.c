/*
 * XREFs of ?RemoveAt@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAX_K0@Z @ 0x14000B278
 * Callers:
 *     ?ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140005DC0 (-ReleaseAPO@CDeviceGraphObjectCache@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009800 (-AddAPOInputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     ?AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z @ 0x140009FF0 (-AddAPOOutputConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@0@Z.c)
 *     wil::details::lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___::_lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___ @ 0x140057734 (wil--details--lambda_call__lambda_60d73b52757ccff8abd34fb69055d725___--_lambda_call__lambda_60d7.c)
 *     wil::details::lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___::_lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___ @ 0x1400577A0 (wil--details--lambda_call__lambda_9559e19d811c20b95eeab3b486fc6e42___--_lambda_call__lambda_9559.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C454 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  errno_t v7; // eax

  v2 = a2 + 1;
  if ( a2 == -1LL || v2 < a2 || (v5 = a1[1], v2 > v5) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = v5 - v2;
  if ( v6 )
  {
    v7 = memmove_s((void *const)(*a1 + 8 * a2), 8 * v6, (const void *const)(*a1 + 8 * v2), 8 * v6);
    ATL::AtlCrtErrorCheck(v7);
  }
  --a1[1];
}
