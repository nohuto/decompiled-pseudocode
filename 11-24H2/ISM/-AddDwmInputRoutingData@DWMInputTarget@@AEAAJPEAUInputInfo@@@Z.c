/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F5540
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031D30 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180038534 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18005BA90 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800621B4 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(
        DWMInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbx
  unsigned int v7; // eax
  _OWORD *Transform; // rax
  void *WeakInputSinkHandle; // rax
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int16 v13; // [rsp+70h] [rbp+8h]
  int v14; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 15);
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23D,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
  if ( !*(_BYTE *)(v4 + 480) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
  v6 = v4 + 48;
  if ( !*(_BYTE *)(v6 + 432) )
    std::_Throw_bad_optional_access();
  v7 = ToCompositionInputType(*(_DWORD *)a2);
  *((_QWORD *)a2 + 8) = *(_QWORD *)(LegacyInputSinkData::GetCompositionInputQueue(v6, v7) + 8);
  Transform = LegacyInputSinkData::GetTransform(v6, v11);
  *(_OWORD *)((char *)a2 + 236) = *Transform;
  *(_OWORD *)((char *)a2 + 252) = Transform[1];
  *(_OWORD *)((char *)a2 + 268) = Transform[2];
  *(_OWORD *)((char *)a2 + 284) = Transform[3];
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v14 = 0;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)v6);
    NtQueryCompositionInputIsImplicit(WeakInputSinkHandle, &v14);
    HIBYTE(v13) = 1;
    LOBYTE(v13) = v14 != 0;
    *(_WORD *)(v6 + 24) = v13;
    if ( !*(_BYTE *)(v6 + 25) )
      std::_Throw_bad_optional_access();
  }
  *((_DWORD *)a2 + 18) = *(unsigned __int8 *)(v6 + 24);
  return 0LL;
}
