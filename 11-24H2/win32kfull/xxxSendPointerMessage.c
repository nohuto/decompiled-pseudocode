/*
 * XREFs of xxxSendPointerMessage @ 0x1400A8EFC
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1400A8DE0 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1400A76E8 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     xxxSendPointerMessageWorker @ 0x1400A8F90 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxSendPointerMessage(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  int v9; // ecx
  struct tagTHREADPOINTERDATA *Blink; // rax
  __int64 v12; // r8
  struct _LIST_ENTRY *v13; // rcx

  if ( *(_QWORD *)(a1 + 1232) )
  {
    v9 = 5;
LABEL_3:
    UserSetLastError(v9);
    return 0LL;
  }
  v13 = (struct _LIST_ENTRY *)(a1 + 1208);
  Blink = (struct tagTHREADPOINTERDATA *)v13[1].Blink;
  if ( Blink )
  {
    if ( *((_WORD *)Blink + 8) != (_WORD)a2 )
      goto LABEL_10;
  }
  else
  {
    Blink = FindThreadPointerData(v13, a2);
    if ( !Blink )
    {
LABEL_10:
      v9 = 87;
      goto LABEL_3;
    }
  }
  if ( (*((_DWORD *)Blink + 12) & 8) != 0 )
    goto LABEL_10;
  v12 = *((_QWORD *)Blink + 3);
  if ( !v12 )
    goto LABEL_10;
  return xxxSendPointerMessageWorker(a3, a4, v12, a5, a6, a7);
}
