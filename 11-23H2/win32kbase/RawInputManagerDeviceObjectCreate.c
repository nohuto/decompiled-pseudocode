/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C0072EA8
 * Callers:
 *     rimCreateDev @ 0x1C0072CC8 (rimCreateDev.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     rimAddToObTrackList @ 0x1C0073740 (rimAddToObTrackList.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x960uLL);
    v10 = *(unsigned int *)SGDGetUserSessionState(v7, v6, v8, v9);
    MEMORY[0] = v10;
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xD8] = 208LL;
    MEMORY[0xD0] = 208LL;
    MEMORY[0xC8] = 192LL;
    MEMORY[0xC0] = 192LL;
    MEMORY[0x20] = PsGetCurrentProcess(v10, v11, v12);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x40] = isChildPartition();
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
