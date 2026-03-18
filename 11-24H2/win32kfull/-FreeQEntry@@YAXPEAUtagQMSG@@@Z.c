/*
 * XREFs of ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x14008FA20
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     FreeMessageList @ 0x14008FFF0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1401A1840 (DestroyThreadsMessages.c)
 * Callees:
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 *     FreePointerMessageParams @ 0x14016581C (FreePointerMessageParams.c)
 */

void __fastcall FreeQEntry(struct tagQMSG *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rcx

  if ( (*((_DWORD *)a1 + 25) & 8) != 0 && !*((_DWORD *)a1 + 24) )
  {
    v4 = *((unsigned int *)a1 + 6);
    if ( (unsigned int)(v4 - 577) <= 3 || (unsigned int)IsPointerInputClientMessage(v4) )
      FreePointerMessageParams(a1);
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  Win32FreeToPagedLookasideList(*(_QWORD *)(UserSessionState + 16872), a1);
}
