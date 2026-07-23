/*
 * XREFs of KiStartPrcbThread @ 0x1405B55AC
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405B3888 (KiCompleteBootProcessorContextInitialization.c)
 *     KiStartPrcbThreads @ 0x1405B4938 (KiStartPrcbThreads.c)
 *     KiStartIdleThread @ 0x1405C07E0 (KiStartIdleThread.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeStartThread @ 0x1403A1E70 (KeStartThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_QWORD *__fastcall KiStartPrcbThread(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // rbx
  struct _KAFFINITY_EX *v6; // rcx
  struct _KAFFINITY_EX *v7; // r8
  int v8; // eax
  _QWORD *v9; // rsi
  _QWORD *result; // rax
  struct _KAFFINITY_EX v11; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&v11.8, 0, sizeof(v11.8));
  v11.Reserved = 0;
  *(_DWORD *)&v11.Count = 2097153;
  memset_0(&v11.8, 0, sizeof(v11.8));
  KeAddProcessorAffinityEx(&v11.Count, 0);
  KeStartThread(a1, &v11, 0LL);
  v4 = *(unsigned __int16 **)(a1 + 576);
  memset_0(v4 + 4, 0, 8LL * *v4);
  *v4 = 1;
  v5 = *(unsigned __int16 **)(a1 + 552);
  memset_0(v5 + 4, 0, 8LL * *v5);
  *v5 = 1;
  KeAddProcessorAffinityEx(*(unsigned __int16 **)(a1 + 552), *(_DWORD *)(a2 + 36));
  v6 = *(struct _KAFFINITY_EX **)(a1 + 576);
  v7 = *(struct _KAFFINITY_EX **)(a1 + 552);
  *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(a2 + 208);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 36);
  KiCopyAffinityEx(v6, v6->Size, v7);
  *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(a2 + 208);
  *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 36);
  v8 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 116) |= 8u;
  *(_DWORD *)(a1 + 536) = v8;
  *(_BYTE *)(a1 + 195) = 63;
  v9 = (_QWORD *)(a1 + 1400);
  result = (_QWORD *)qword_140FD0278;
  if ( *(_UNKNOWN **)qword_140FD0278 != &unk_140FD0270 )
    __fastfail(3u);
  *v9 = &unk_140FD0270;
  v9[1] = result;
  *result = v9;
  qword_140FD0278 = (__int64)v9;
  return result;
}
