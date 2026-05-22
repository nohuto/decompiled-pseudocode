/*
 * XREFs of ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x180159A30
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180089560 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800582F8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180093B40 (--$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x1801466F0 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x180146BB0 (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180158DDC (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801A0970 (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellGesturesProcessor::PopulateGestureHandler(__int64 a1, int *a2, unsigned int a3, __int64 *a4)
{
  __int64 i; // rax
  char v8; // di
  int InputType; // r15d
  __int64 v10; // rbp
  __int64 j; // rbx
  struct InputSite *v12; // r9
  GestureHandler *v13; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-28h]

  for ( i = *a4; i != a4[1]; i += 32LL )
  {
    if ( *(_BYTE *)(i + 24) )
    {
      v8 = 1;
      goto LABEL_7;
    }
  }
  v8 = 0;
LABEL_7:
  std::weak_ptr<SystemCursorService2>::lock((__int64)(a2 + 4), &v13);
  if ( v13 )
  {
    InputType = PointerManipulationHelper::GetInputType(a3);
    v10 = a4[1];
    for ( j = *a4; j != v10; j += 32LL )
    {
      if ( (InputType & *(_DWORD *)(j + 8)) != 0
        && ShouldSelectClient<DragManagerClientProxy>(*(_QWORD *)(j + 16))
        && (!v8 || *(_BYTE *)(j + 24)) )
      {
        GestureHandler::AddGestureClient(v13, *(_QWORD *)j, *(struct DragManagerClientProxy **)(j + 16), v12);
        if ( IsEdition(8778LL) )
        {
          if ( IsShellClient<DragManagerClientProxy>(*(_QWORD *)(j + 16)) && *(_DWORD *)(*(_QWORD *)(j + 16) + 160LL) )
            MITSetLastInputRecipient();
        }
      }
    }
    v15 = 0LL;
    GestureHandler::InitializeForGesture((__int64)v13, *a2);
  }
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
}
