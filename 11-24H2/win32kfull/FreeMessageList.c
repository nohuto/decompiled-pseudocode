/*
 * XREFs of FreeMessageList @ 0x14008FFF0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x14008FA20 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x140154968 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  struct tagQMSG *v3; // rsi
  struct tagQMSG *v4; // rbx
  __int64 v5; // rdx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    DelQEntry((__int64)a1, (__int64 *)i, 1);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v4 = (struct tagQMSG *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v3);
      CleanEventMessage(v3);
      FreeQEntry(v3, v5);
      v3 = v4;
    }
    while ( v4 );
  }
}
