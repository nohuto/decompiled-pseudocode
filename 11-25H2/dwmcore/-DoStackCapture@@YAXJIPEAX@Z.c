/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801FDCA8
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800E7A40 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1801FDE10 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall DoStackCapture(int a1, int a2, void *a3)
{
  volatile int v6; // r8d
  __int64 v7; // r9
  char *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  PVOID *v11; // rdi
  _BYTE *trivial_8; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-78h] BYREF

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (char *)&g_StackCaptureFrames + 56 * v7;
  *(_DWORD *)v8 = a1;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v8 + 2) = a2;
  *((_DWORD *)v8 + 1) = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)v8 + 2);
  if ( g_pFrameId )
    v10 = *g_pFrameId;
  else
    v10 = 0LL;
  *((_QWORD *)v8 + 6) = v10;
  *(_OWORD *)(v8 + 24) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  memset_0(BackTrace, 0, 0x58uLL);
  v11 = &BackTrace[RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL)];
  trivial_8 = (_BYTE *)_std_find_trivial_8(BackTrace, v11, a3);
  v13 = 3LL;
  v14 = ((char *)v11 - trivial_8) >> 3;
  if ( v14 > 3 || (v13 = v14) != 0 )
  {
    memmove_0(v8 + 24, trivial_8, 8 * v13);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v8 + 24) = si128;
    *((_QWORD *)v8 + 5) = si128.m128i_i64[0];
  }
}
