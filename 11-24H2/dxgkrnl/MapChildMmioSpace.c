/*
 * XREFs of MapChildMmioSpace @ 0x140231BF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  void *Pool2; // rdi
  int v11; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rsi

  Pool2 = (void *)ExAllocatePool2(256LL, 48LL, 1265072196LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 15996;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate channel context",
      15996LL,
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
  v14 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64, void *))qword_1401605F0)(
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
    WdLogGlobalForLineNumber = 16010;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
