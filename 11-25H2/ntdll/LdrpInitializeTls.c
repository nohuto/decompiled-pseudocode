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
  PVOID v4; // rax
  __int64 v5; // rbp
  ULONG v6; // edi
  unsigned int *Heap; // rax
  ULONG NumberToSet; // [rsp+60h] [rbp+8h] BYREF
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp+18h] BYREF

  OutHeaders = 0LL;
  if ( LdrpActiveThreadCount )
    return 0LL;
  result = LdrpInitializeTlsHeap();
  if ( (int)result >= 0 )
  {
    v1 = (__int64 *)qword_1801D4950;
    v2 = 1LL;
    NumberToSet = 0;
    while ( v1 != &qword_1801D4950 )
    {
      v3 = (__int64)v1;
      v1 = (__int64 *)*v1;
      if ( *(_DWORD *)(v3 + 268) != 9 )
      {
        RtlImageNtHeaderEx(3u, *(PVOID *)(v3 + 48), 0LL, &OutHeaders);
        if ( OutHeaders->OptionalHeader.Magic == 523 )
        {
          v4 = RtlImageDirectoryEntryToData(*(PVOID *)(v3 + 48), 1u, 9u, &Size);
          v5 = (__int64)v4;
          if ( v4 )
          {
            LdrpLogInternal(
              "minkernel\\ldr\\ldrtls.c",
              669,
              (__int64)"LdrpInitializeTls",
              2,
              "DLL \"%wZ\" has TLS information at %p\n",
              v3 + 72,
              v4);
            result = LdrpAllocateTlsEntry(v5, v3, (int *)&NumberToSet, 0LL, 0LL);
            if ( (int)result < 0 )
              return result;
            *(_WORD *)(v3 + 110) = -1;
          }
        }
      }
    }
    v6 = NumberToSet;
    if ( NumberToSet )
    {
      if ( NumberToSet + 8 > 0x20 )
      {
        v2 = ((unsigned __int64)(NumberToSet + 8) + 31) >> 5;
        Heap = (unsigned int *)RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 4 * v2);
        if ( !Heap )
          return 3221225495LL;
      }
      else
      {
        Heap = (unsigned int *)&LdrpStaticTlsBitmapVector;
      }
      LdrpActualBitmapSize = v2;
      LdrpTlsBitmap.SizeOfBitMap = v6 + 8;
      LdrpTlsBitmap.Buffer = Heap;
      RtlSetBits(&LdrpTlsBitmap, 0, v6);
      RtlClearBits(&LdrpTlsBitmap, v6, 8u);
    }
    else
    {
      LdrpTlsBitmap.SizeOfBitMap = 0;
      LdrpTlsBitmap.Buffer = 0LL;
    }
    return LdrpAllocateTls();
  }
  return result;
}
