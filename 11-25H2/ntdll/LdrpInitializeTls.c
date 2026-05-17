/*
 * XREFs of LdrpInitializeTls @ 0x1800B7E90
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpAllocateTls @ 0x180020710 (LdrpAllocateTls.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpAllocateTlsEntry @ 0x1800236B8 (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x180025530 (RtlSetBits.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpInitializeTlsHeap @ 0x1800B8054 (LdrpInitializeTlsHeap.c)
 *     RtlClearBits @ 0x1800B8440 (RtlClearBits.c)
 */

__int64 LdrpInitializeTls()
{
  __int64 result; // rax
  __int64 *v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // edi
  void *Heap; // rax
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( LdrpActiveThreadCount )
    return 0LL;
  result = LdrpInitializeTlsHeap();
  if ( (int)result >= 0 )
  {
    v1 = (__int64 *)qword_1801D4950;
    v2 = 1LL;
    v7 = 0;
    while ( v1 != &qword_1801D4950 )
    {
      v3 = (__int64)v1;
      v1 = (__int64 *)*v1;
      if ( *(_DWORD *)(v3 + 268) != 9 )
      {
        RtlImageNtHeaderEx(3, *(_QWORD *)(v3 + 48), 0LL, &v9);
        if ( *(_WORD *)(v9 + 24) == 523 )
        {
          v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(v3 + 48), 1, 9u, &v8);
          if ( v4 )
          {
            LdrpLogInternal(
              (__int64)"minkernel\\ldr\\ldrtls.c",
              669,
              (__int64)"LdrpInitializeTls",
              2,
              "DLL \"%wZ\" has TLS information at %p\n",
              v3 + 72);
            result = LdrpAllocateTlsEntry(v4, v3, (int *)&v7, 0LL, 0LL);
            if ( (int)result < 0 )
              return result;
            *(_WORD *)(v3 + 110) = -1;
          }
        }
      }
    }
    v5 = v7;
    if ( v7 )
    {
      if ( v7 + 8 > 0x20 )
      {
        v2 = ((unsigned __int64)(v7 + 8) + 31) >> 5;
        Heap = (void *)RtlAllocateHeap((char *)LdrpTlsHeap, NtdllBaseTag + 786432, 4 * v2);
        if ( !Heap )
          return 3221225495LL;
      }
      else
      {
        Heap = &LdrpStaticTlsBitmapVector;
      }
      LdrpActualBitmapSize = v2;
      LdrpTlsBitmap = v5 + 8;
      qword_1801D4768 = Heap;
      RtlSetBits((__int64)&LdrpTlsBitmap, 0, v5);
      RtlClearBits(&LdrpTlsBitmap, v5, 8LL);
    }
    else
    {
      LdrpTlsBitmap = 0;
      qword_1801D4768 = 0LL;
    }
    return LdrpAllocateTls();
  }
  return result;
}
