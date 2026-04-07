/*
 * XREFs of ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x1800654A8
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800650D0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180065270 (-OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084730 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x180065540 (-ReevaluateSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_EvaluateWindowForWindowCaptures(
        struct _RTL_GENERIC_TABLE *this,
        struct CWindowData *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  PVOID v5; // rax
  CapturedWindowRepresentation *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 6;
  if ( RtlNumberGenericTableElements(this + 6) )
  {
    RestartKey = 0LL;
    while ( 1 )
    {
      v5 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
      if ( !v5 )
        break;
      v6 = (CapturedWindowRepresentation *)*((_QWORD *)v5 + 3);
      if ( v6 )
      {
        v7 = CapturedWindowRepresentation::ReevaluateSecondaryWindow(v6, a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA9D,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v7,
            v9);
          return v8;
        }
      }
    }
  }
  return 0LL;
}
