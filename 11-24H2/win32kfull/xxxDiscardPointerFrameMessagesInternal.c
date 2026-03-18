/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1400A96AC
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1400A9E20 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1400A98DC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  struct tagTHREADINFO *v3; // rdi
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  unsigned __int64 v5; // rdx
  int v6; // ecx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  ThreadPointerData = (struct tagTHREADPOINTERDATA *)*((_QWORD *)v3 + 154);
  if ( ThreadPointerData )
  {
    if ( *((_WORD *)ThreadPointerData + 8) != v2 )
      goto LABEL_7;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)((char *)v3 + 1208), v2);
    if ( !ThreadPointerData )
      goto LABEL_7;
  }
  if ( (*((_DWORD *)ThreadPointerData + 12) & 8) != 0 )
    goto LABEL_7;
  v5 = *((_QWORD *)ThreadPointerData + 3);
  if ( !v5 )
    goto LABEL_7;
  if ( (*((_DWORD *)ThreadPointerData + 12) & 1) == 0 )
  {
    v6 = 5;
    goto LABEL_8;
  }
  if ( !(unsigned int)xxxDiscardPointerWindowFrameMessages(v3, v5) )
  {
LABEL_7:
    v6 = 87;
LABEL_8:
    UserSetLastError(v6);
    return 0LL;
  }
  return 1LL;
}
