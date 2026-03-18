/*
 * XREFs of CmpInitializeMachineHiveLoadedCallbacks @ 0x1407D1EC0
 * Callers:
 *     CmInitSystem1 @ 0x140C44EC0 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 */

void CmpInitializeMachineHiveLoadedCallbacks()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdi

  KeInitializeEvent(&CmpMachineHiveCallbackEvent, NotificationEvent, 0);
  v0 = &unk_140E098C8;
  v1 = 7LL;
  do
  {
    *(v0 - 2) = 0LL;
    *(v0 - 1) = 0LL;
    v0[1] = v0;
    *v0 = v0;
    KeInitializeEvent((PRKEVENT)(v0 - 5), NotificationEvent, 0);
    v0 += 23;
    --v1;
  }
  while ( v1 );
}
