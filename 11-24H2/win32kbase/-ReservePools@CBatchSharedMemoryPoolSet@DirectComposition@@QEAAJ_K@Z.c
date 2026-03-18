/*
 * XREFs of ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x14006D810
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x14007FA14 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
        DirectComposition::CBatchSharedMemoryPoolSet *this,
        struct DirectComposition::CBatchSharedMemoryPool *a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  char v5; // dl
  __int64 v6; // rdx
  struct DirectComposition::CBatchSharedMemoryPool *v7; // rcx
  struct DirectComposition::CBatchSharedMemoryPool *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  result = 0LL;
  v4 = 0;
  while ( v4 < 2 )
  {
    v5 = *((_BYTE *)this + 24);
    v8 = 0LL;
    result = DirectComposition::CBatchSharedMemoryPool::Create(this, v5, &v8);
    if ( (int)result < 0 )
      break;
    v6 = *(_QWORD *)this;
    if ( *(DirectComposition::CBatchSharedMemoryPoolSet **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    v7 = v8;
    ++v4;
    *(_QWORD *)v8 = v6;
    *((_QWORD *)v7 + 1) = this;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)this = v7;
  }
  return result;
}
