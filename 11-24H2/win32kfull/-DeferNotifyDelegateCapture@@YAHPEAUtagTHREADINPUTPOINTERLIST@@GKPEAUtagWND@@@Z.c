/*
 * XREFs of ?DeferNotifyDelegateCapture@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GKPEAUtagWND@@@Z @ 0x1400A6CFC
 * Callers:
 *     _DelegateCapturePointers @ 0x1400A6408 (_DelegateCapturePointers.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall DeferNotifyDelegateCapture(struct _LIST_ENTRY *a1, unsigned __int16 a2, int a3, struct tagWND *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rbx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  struct tagWND *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = FindThreadPointerData(a1, a2);
  if ( !ThreadPointerData )
    return 0LL;
  v16 = 0LL;
  UserSessionState = W32GetUserSessionState(v8, v7);
  CTouchProcessor::GetPointerCapture(
    *(CTouchProcessor **)(UserSessionState + 3264),
    *((_QWORD *)ThreadPointerData + 3),
    0,
    (void **)&v16,
    0LL);
  if ( !v16 )
    return 0LL;
  v14 = (struct tagWND *)v16[10];
  if ( !v14 )
    return 0LL;
  if ( v14 != a4 )
    return 0LL;
  v15 = W32GetUserSessionState(v12, v11);
  if ( a3 != CTouchProcessor::GetPointerDownFrame(*(CTouchProcessor **)(v15 + 3264), *((_QWORD *)ThreadPointerData + 3)) )
    return 0LL;
  *((_DWORD *)ThreadPointerData + 12) |= 4u;
  result = 1LL;
  HIDWORD(a1[2].Flink) = 1;
  return result;
}
