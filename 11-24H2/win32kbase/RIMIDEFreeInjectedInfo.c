/*
 * XREFs of RIMIDEFreeInjectedInfo @ 0x140131BC4
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x140133A58 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

void __fastcall RIMIDEFreeInjectedInfo(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx

  v2 = *(_QWORD *)(a1 + 368);
  if ( v2 )
  {
    v3 = *(char **)(v2 + 72);
    if ( v3 )
      GreDeleteFastMutex(v3);
    GreDeleteFastMutex(*(char **)(a1 + 368));
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
