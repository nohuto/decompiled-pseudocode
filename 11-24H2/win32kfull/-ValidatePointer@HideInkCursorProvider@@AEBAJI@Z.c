/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x14026479C
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x14020FD40 (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1402647F0 (-GetPointerInfoByPointerId@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(HideInkCursorProvider *this, unsigned int a2)
{
  __int64 v2; // rdx
  int PointerInfoByPointerId; // ebx
  struct tagPOINTER_INFO *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  PointerInfoByPointerId = GetPointerInfoByPointerId(a2, &v5);
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v2) = 19;
    if ( *(_DWORD *)(*(_QWORD *)(HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), v2) + 456) + 24LL) != 5 )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)PointerInfoByPointerId;
}
