/*
 * XREFs of ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1401FC5CC
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x14023AE10 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall GetDesktopName(PVOID Object, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(Object, a2);
  ReturnLength = 198;
  v4 = UserSessionState;
  if ( !Object
    || ObQueryNameString(Object, (POBJECT_NAME_INFORMATION)(UserSessionState + 63032), 0xC6u, &ReturnLength) < 0 )
  {
    return L"null";
  }
  *(_WORD *)(*(_QWORD *)(v4 + 63040) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 63032) >> 1)) = 0;
  return *(const unsigned __int16 **)(v4 + 63040);
}
