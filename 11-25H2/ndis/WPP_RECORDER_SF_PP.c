/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1400CDEE0
 * Callers:
 *     NdisAllocateNetBufferPool @ 0x140070A50 (NdisAllocateNetBufferPool.c)
 *     NdisAllocateNetBufferListPool @ 0x140070D10 (NdisAllocateNetBufferListPool.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_PP(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v9[0] = 0x100000LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      a5,
      a4,
      va,
      8LL,
      v9,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 2LL, 21LL, a5, v8, va, 8LL, v9);
}
