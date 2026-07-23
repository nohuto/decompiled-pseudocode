/*
 * XREFs of ExQueueDpcEventWait @ 0x140655E20
 * Callers:
 *     <none>
 * Callees:
 *     KeRegisterObjectDpc @ 0x1405AE464 (KeRegisterObjectDpc.c)
 */

char __fastcall ExQueueDpcEventWait(_WORD *SystemArgument2, char a2)
{
  if ( *((_BYTE *)SystemArgument2 + 17) != 5 )
    __fastfail(5u);
  return KeRegisterObjectDpc(
           *((volatile signed __int32 **)SystemArgument2 + 7),
           *((PRKDPC *)SystemArgument2 + 6),
           SystemArgument2,
           a2);
}
