/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x14032CFE0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x140659160 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeRegisterObjectNotification @ 0x14032D090 (KeRegisterObjectNotification.c)
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
