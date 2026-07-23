/*
 * XREFs of HalpKdEnumerateDebuggingDevices @ 0x140B77850
 * Callers:
 *     HalpKdSetupDebuggingDevice @ 0x140B77A80 (HalpKdSetupDebuggingDevice.c)
 * Callees:
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     HalpDeviceEquals @ 0x140B77580 (HalpDeviceEquals.c)
 */

__int64 __fastcall HalpKdEnumerateDebuggingDevices(__int64 a1, __int64 a2)
{
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  unsigned int v8; // eax
  void *Memory; // rax
  int v10; // ecx
  __int64 v11; // rcx
  size_t v12; // rdi
  void *Pool2; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( *(_BYTE *)(a2 + 19) )
    return 0LL;
  if ( KdDebugDevice && *(_BYTE *)(KdDebugDevice + 19) && HalpDeviceEquals(a1, a2) )
  {
    v4 = (_OWORD *)KdDebugDevice;
    v5 = 2LL;
    v6 = (_OWORD *)a2;
    do
    {
      *v6 = *v4;
      v6[1] = v4[1];
      v6[2] = v4[2];
      v6[3] = v4[3];
      v6[4] = v4[4];
      v6[5] = v4[5];
      v6[6] = v4[6];
      v6 += 8;
      v7 = v4[7];
      v4 += 8;
      *(v6 - 1) = v7;
      --v5;
    }
    while ( v5 );
    *v6 = *v4;
    v8 = *(_DWORD *)(KdDebugDevice + 216);
    if ( v8 && *(_QWORD *)(KdDebugDevice + 208) )
    {
      if ( HalpMmLoaderBlock )
        Memory = (void *)HalpMmAllocateMemory(v8);
      else
        Memory = (void *)ExAllocatePool2(0x100uLL, *(unsigned int *)(KdDebugDevice + 216), 0x646C6148uLL);
      *(_QWORD *)(a2 + 208) = Memory;
      if ( !Memory )
        return 3221225473LL;
      memmove(Memory, *(const void **)(KdDebugDevice + 208), *(unsigned int *)(KdDebugDevice + 216));
    }
    v10 = *(_DWORD *)(KdDebugDevice + 232);
    if ( !v10 || !*(_QWORD *)(KdDebugDevice + 224) )
      goto LABEL_24;
    v11 = (unsigned int)(v10 + 2);
    v12 = (unsigned int)v11;
    if ( HalpMmLoaderBlock )
      Pool2 = (void *)HalpMmAllocateMemory(v11);
    else
      Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v11, 0x646C6148uLL);
    *(_QWORD *)(a2 + 224) = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, v12);
      wcsncpy_s(
        *(wchar_t **)(a2 + 224),
        v12 >> 1,
        *(const wchar_t **)(KdDebugDevice + 224),
        (unsigned __int64)*(unsigned int *)(KdDebugDevice + 232) >> 1);
LABEL_24:
      *(_WORD *)(a2 + 18) = 256;
      return 0LL;
    }
  }
  return 3221225473LL;
}
