/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x14020FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x14026479C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 */

int __fastcall HideInkCursorProvider::PreProcessInkFeedbackCommand_NoLock(
        HideInkCursorProvider *a1,
        int a2,
        unsigned int *a3,
        int a4)
{
  if ( (unsigned int)(a2 - 3) >= 2 )
    return -1073741637;
  if ( a4 == 4 )
    return HideInkCursorProvider::ValidatePointer(a1, *a3);
  return -1073741811;
}
