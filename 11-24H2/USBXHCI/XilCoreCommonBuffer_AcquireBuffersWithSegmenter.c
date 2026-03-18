/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x140016B14
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x140016A00 (XilCoreCommonBuffer_AcquireBuffers.c)
 * Callees:
 *     XilCoreCommonBuffer_AcquireBufferWithSegmenter @ 0x140016C88 (XilCoreCommonBuffer_AcquireBufferWithSegmenter.c)
 *     WPP_RECORDER_SF_qDD @ 0x140018934 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffersWithSegmenter(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  unsigned int v8; // ebx
  void *v12; // rdx
  unsigned int i; // esi
  _QWORD *v14; // rax
  _QWORD *v15; // rcx

  v8 = 0;
  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v12 = &WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_qDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v12,
      8,
      20,
      (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
      a2,
      a3,
      *(_DWORD *)(a2 + 28));
    v12 = &WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids;
  }
  if ( *(_DWORD *)(a2 + 28) < a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_qDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)v12,
        8,
        21,
        (__int64)&WPP_2cbb8eaba4893cb9c10a668c9784ba4d_Traceguids,
        a2,
        a3,
        *(_DWORD *)(a2 + 28));
    }
    v8 = -1073741670;
  }
  else
  {
    for ( i = 0; i < a3; *(_QWORD *)(a4 + 8) = v14 )
    {
      v14 = (_QWORD *)XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, a2, a5, a6, a7);
      v15 = *(_QWORD **)(a4 + 8);
      if ( *v15 != a4 )
        __fastfail(3u);
      *v14 = a4;
      ++i;
      v14[1] = v15;
      *v15 = v14;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  return v8;
}
