/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x14019B5B4
 * Callers:
 *     rimObsAddInputObserver @ 0x1401EEEE4 (rimObsAddInputObserver.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     rimAddToObTrackList @ 0x1401D3C68 (rimAddToObTrackList.c)
 *     rimObsReadMaxQueueSize @ 0x1401F0CB8 (rimObsReadMaxQueueSize.c)
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
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    MEMORY[0] = W32GetCurrentWin32kSessionId();
    MEMORY[4] = 3;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6, v7, v8);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x88] = 128LL;
    MEMORY[0x80] = 128LL;
    MEMORY[0x98] = 144LL;
    MEMORY[0x90] = 144LL;
    MEMORY[0xA0] = 0;
    MEMORY[0xA4] = 0;
    MEMORY[0xA8] = rimObsReadMaxQueueSize(MEMORY[0x28], v9, v10, v11, 0LL);
    MEMORY[0xB0] = 0LL;
    MEMORY[0xB8] = 0LL;
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
