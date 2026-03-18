/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C0191AC4
 * Callers:
 *     rimObsAddInputObserver @ 0x1C01ACCAC (rimObsAddInputObserver.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C0073740 (rimAddToObTrackList.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     rimObsReadMaxQueueSize @ 0x1C01AF1F4 (rimObsReadMaxQueueSize.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0xC0uLL);
    v10 = *(unsigned int *)SGDGetUserSessionState(v7, v6, v8, v9);
    MEMORY[0] = v10;
    MEMORY[4] = 3;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(v10, v11, v12);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x88] = 128LL;
    MEMORY[0x80] = 128LL;
    MEMORY[0x98] = 144LL;
    MEMORY[0x90] = 144LL;
    MEMORY[0xA0] = 0;
    MEMORY[0xA4] = 0;
    MEMORY[0xA8] = rimObsReadMaxQueueSize(MEMORY[0x28], v13, v14, v15, 0LL);
    MEMORY[0xB0] = 0LL;
    MEMORY[0xB8] = 0LL;
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL, v16, v17, v18);
  }
  return (unsigned int)Object;
}
