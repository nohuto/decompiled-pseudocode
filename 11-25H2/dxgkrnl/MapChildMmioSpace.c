/*
 * XREFs of MapChildMmioSpace @ 0x14022B300
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  void *Pool2; // rdi
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rsi

  Pool2 = (void *)ExAllocatePool2(256LL, 48LL, 1265072196LL, a4);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 15808;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate channel context",
      15808LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v11 = *(_DWORD *)(a1 + 408);
  if ( (v11 & 0x100) != 0 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 592) + 592LL);
  }
  else
  {
    if ( (v11 & 0x80u) == 0 )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
    v12 = *(_QWORD *)(a1 + 592);
  }
  v13 = (_QWORD *)(v12 + 160);
LABEL_9:
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, void *))qword_14015D5D0)(
          *v13,
          a2 + 48,
          a3 >> 12,
          a4,
          Pool2);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *a5 = Pool2;
    _InterlockedIncrement(&g_VgpuNumHpaToGpaMappings);
    _InterlockedAdd64(&g_VgpuSizeHpaToGpaMappings, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 15822;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"VmbChannelMapChildMmioSpace failed: 0x%I64x",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0x4B677844u);
  }
  return (unsigned int)v15;
}
