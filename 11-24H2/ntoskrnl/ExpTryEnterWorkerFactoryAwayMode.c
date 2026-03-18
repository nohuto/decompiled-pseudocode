/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x140205A00
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14065AA40 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeRegisterObjectNotification @ 0x140205AB0 (KeRegisterObjectNotification.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_DWORD *Object)
{
  __int64 v2; // rdi
  int v4; // ecx

  if ( Object[96] >= Object[95] )
    return 0;
  v2 = *((_QWORD *)Object + 2);
  if ( *(_DWORD *)(v2 + 28) )
    return 0;
  if ( !Object[101] )
    return 1;
  v4 = Object[102];
  Object[102] = v4 | 0x200;
  if ( *(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
    return 1;
  if ( (v4 & 0x400) != 0 )
    return 0;
  Object[102] = v4 | 0x600;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  KeRegisterObjectNotification(*(_QWORD *)(v2 + 8), &ExpWorkerFactoryManagerQueue, Object + 154);
  return 0;
}
