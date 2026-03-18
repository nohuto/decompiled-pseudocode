/*
 * XREFs of xxxPromotePointerToMouse @ 0x1400A7304
 * Callers:
 *     xxxDefPointerProc @ 0x14009AE2C (xxxDefPointerProc.c)
 *     NtUserPromotePointer @ 0x1400A8C50 (NtUserPromotePointer.c)
 *     NtUserConvertPrimaryPointerToMouseDrag @ 0x140292FA0 (NtUserConvertPrimaryPointerToMouseDrag.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A7A5C (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int16 v3; // bx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  struct _LIST_ENTRY *v6; // rcx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 UserSessionState; // rax

  v2 = a2;
  v3 = a1;
  v4 = PtiCurrent(a1, a2);
  v6 = (struct _LIST_ENTRY *)((char *)v4 + 1208);
  ThreadPointerData = (struct tagTHREADPOINTERDATA *)*((_QWORD *)v4 + 154);
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 8) != v3 )
      goto LABEL_7;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData(v6, v3);
    if ( !ThreadPointerData )
      goto LABEL_7;
  }
  v8 = *((unsigned int *)ThreadPointerData + 12);
  if ( (v8 & 8) == 0 )
  {
    v9 = *((_QWORD *)ThreadPointerData + 3);
    if ( v9 )
    {
      UserSessionState = W32GetUserSessionState(v8, v5);
      return CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(UserSessionState + 3264), v9, v2);
    }
  }
LABEL_7:
  UserSetLastError(87);
  return 0;
}
