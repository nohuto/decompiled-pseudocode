/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400948A8
 * Callers:
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x140093DB0 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x14009477C (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x140200EE0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400948FC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     IsMessageOnlyWindow @ 0x140094A24 (IsMessageOnlyWindow.c)
 */

char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl
  struct tagWND *UserWindow; // rax
  bool v5; // cl

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    UserWindow = CInputDest::GetUserWindow(this);
    if ( UserWindow )
      v5 = (unsigned int)IsMessageOnlyWindow(UserWindow) != 0;
    else
      v5 = 0;
    if ( v5 )
      return 1;
  }
  return v2;
}
