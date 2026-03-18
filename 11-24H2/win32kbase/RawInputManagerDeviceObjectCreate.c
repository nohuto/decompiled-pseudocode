/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1400536A0
 * Callers:
 *     rimCreateDev @ 0x140053478 (rimCreateDev.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1401D3C68 (rimAddToObTrackList.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    MEMORY[0] = W32GetCurrentWin32kSessionId();
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xC8] = 192LL;
    MEMORY[0xC0] = 192LL;
    MEMORY[0xB8] = 176LL;
    MEMORY[0xB0] = 176LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6, v7, v8, 0LL);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x40] = isChildPartition(MEMORY[0x28]);
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
