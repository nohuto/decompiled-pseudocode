/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402EDCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402EE41C (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::PreProcessInkFeedbackCommand_NoLock(__int64 a1, int a2, unsigned int *a3, int a4)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  struct tagTHREADINFO *v8; // rax
  unsigned int v9; // edx
  InkDevice *v10; // rcx

  v6 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)v6 )
  {
    if ( a4 != 64 )
      return (unsigned int)-1073741811;
    v9 = *a3;
    v10 = (InkDevice *)(a1 - 32);
    return (unsigned int)InkDevice::ValidatePointer(v10, v9);
  }
  if ( (_DWORD)v6 == 1 )
  {
    if ( a4 != 4 )
      return (unsigned int)-1073741811;
    v8 = PtiCurrent(a1, v6);
    v7 = 0;
    if ( (unsigned int)IsProcessDwm(**((_QWORD **)v8 + 58)) )
      return v7;
    v9 = *a3;
    v10 = (InkDevice *)(a1 - 32);
    return (unsigned int)InkDevice::ValidatePointer(v10, v9);
  }
  return (unsigned int)-1073741637;
}
