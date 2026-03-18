/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffers @ 0x14001F900
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x14001F7C0 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_WorkItem @ 0x14001FF80 (CommonBuffer_WorkItem.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x14001FA14 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140020234 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffers(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v8; // r10d
  unsigned int *v10; // rax
  unsigned int *v12; // rsi
  int v13; // edi
  __int64 v15; // r8

  v8 = 0;
  v10 = (unsigned int *)(a1 + 32);
  do
  {
    v12 = v10;
    if ( a3 <= *v10 )
      break;
    ++v8;
    v10 += 16;
  }
  while ( v8 < 2 );
  v13 = XilCoreCommonBuffer_AcquireBuffersWithSegmenter(a1, (_DWORD)v12, a2, a4, a5, a6, (__int64)a7);
  if ( v13 < 0 || *a7 )
  {
    if ( KeGetCurrentIrql() )
    {
      *a7 = 1;
    }
    else
    {
      v15 = a2;
      if ( v13 >= 0 )
        v15 = 0LL;
      if ( *a7 )
        v15 = v12[4] + (unsigned int)v15;
      XilCoreCommonBuffer_AllocateBuffers(a1, v12, v15);
      *a7 = 0;
      if ( v13 < 0 )
        return (unsigned int)XilCoreCommonBuffer_AcquireBuffersWithSegmenter(
                               a1,
                               (_DWORD)v12,
                               a2,
                               a4,
                               a5,
                               a6,
                               (__int64)a7);
    }
  }
  return (unsigned int)v13;
}
