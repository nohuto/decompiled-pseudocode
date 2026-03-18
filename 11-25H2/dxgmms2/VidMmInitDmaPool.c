/*
 * XREFs of VidMmInitDmaPool @ 0x1400B03F0
 * Callers:
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x140090680 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     AddDmaBufferToPool @ 0x1400B05D8 (AddDmaBufferToPool.c)
 *     UpdateFairResourceUsage @ 0x14010ED2C (UpdateFairResourceUsage.c)
 */

__int64 __fastcall VidMmInitDmaPool(__int64 a1)
{
  _QWORD *v2; // rax
  int v3; // r9d
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  __int64 v6; // r11
  __int64 v7; // rdx
  int v8; // esi
  int v9; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx

  if ( (*(_BYTE *)(a1 + 28) & 1) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v12 = WdLogNewEntry5_WdTrace(a1);
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = 2LL;
      WdLogGlobalForLineNumber = 2082;
    }
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v2[3] = a1;
    v2[4] = *(_QWORD *)(a1 + 8);
    v2[5] = 2LL;
    WdLogGlobalForLineNumber = 2090;
  }
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 32);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40232LL) + 8LL * *(unsigned int *)(a1 + 24));
  v7 = 0LL;
  if ( (~*(_DWORD *)(v6 + 60) & v4) != 0 )
    goto LABEL_14;
  if ( !v4 )
    goto LABEL_11;
  do
  {
    if ( (v5 & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 1648) + 8 * v7) + 104LL) & 1) == 0 )
      v3 |= 1 << v7;
    v7 = (unsigned int)(v7 + 1);
    v5 >>= 1;
  }
  while ( v5 );
  if ( v3 )
  {
LABEL_14:
    WdLogSingleEntry1(1LL, *(unsigned int *)(a1 + 32));
    WdLogGlobalForLineNumber = 2104;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 3221225485LL;
  }
  else
  {
LABEL_11:
    v8 = 0;
    while ( 1 )
    {
      v9 = AddDmaBufferToPool(a1, *(unsigned int *)(a1 + 36), *(unsigned int *)(a1 + 48), *(unsigned int *)(a1 + 60));
      if ( v9 < 0 )
        break;
      if ( (unsigned int)++v8 >= 2 )
      {
        ExAcquireResourceExclusiveLite(Resource, 1u);
        v13 = (_QWORD *)qword_1400818B8;
        v14 = (_QWORD *)(a1 + 96);
        if ( *(__int64 **)qword_1400818B8 != &qword_1400818B0 )
          __fastfail(3u);
        *v14 = &qword_1400818B0;
        *(_QWORD *)(a1 + 104) = v13;
        *v13 = v14;
        qword_1400818B8 = a1 + 96;
        _InterlockedIncrement(&dword_140081980);
        UpdateFairResourceUsage();
        ExReleaseResourceLite(Resource);
        *(_DWORD *)(a1 + 28) |= 0xAu;
        return (unsigned int)v9;
      }
    }
    return (unsigned int)v9;
  }
}
