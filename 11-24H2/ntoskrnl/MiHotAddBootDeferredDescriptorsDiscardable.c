/*
 * XREFs of MiHotAddBootDeferredDescriptorsDiscardable @ 0x140C538F4
 * Callers:
 *     MiHotAddBootDeferredDescriptors @ 0x1407E8B10 (MiHotAddBootDeferredDescriptors.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiAddPhysicalMemoryChunks @ 0x1407E8F14 (MiAddPhysicalMemoryChunks.c)
 */

int MiHotAddBootDeferredDescriptorsDiscardable()
{
  int result; // eax
  __int64 *v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // r14
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  ULONG_PTR v6; // rbx
  int v7; // eax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v9; // [rsp+58h] [rbp+10h] BYREF

  result = KeWaitForSingleObject(&unk_140E3CF78, Executive, 0, 0, 0LL);
  v1 = qword_14100C9E8;
  v2 = 64LL;
  do
  {
    v3 = v1[2];
    if ( v3 )
    {
      v4 = *(int *)v1;
      if ( (unsigned int)v4 > 0x2C || (v5 = 0x15C5C0C00048LL, !_bittest64(&v5, v4)) )
      {
        v6 = v1[1];
        MiPageToNode(v6);
        v9 = v6 << 12;
        v7 = 2560;
        v8 = v3 << 12;
        if ( (_DWORD)v4 != 24 )
          v7 = 2048;
        result = MiAddPhysicalMemoryChunks(&MiSystemPartition, (__int64 *)&v9, (unsigned __int64 *)&v8, 0LL, v7, 0);
      }
    }
    v1 += 6;
    --v2;
  }
  while ( v2 );
  return result;
}
