/*
 * XREFs of EtwpStackWalkApc @ 0x140308980
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall EtwpStackWalkApc(__int16 **a1, __int64 a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int16 *v7; // rbx
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // [rsp+90h] [rbp-1D8h] BYREF
  _BYTE v11[40]; // [rsp+A0h] [rbp-1C8h] BYREF
  GUID v12; // [rsp+C8h] [rbp-1A0h]
  __int64 v13; // [rsp+F0h] [rbp-178h]
  int v14; // [rsp+120h] [rbp-148h]
  char v15; // [rsp+124h] [rbp-144h]
  __int16 v16; // [rsp+126h] [rbp-142h]
  int v17; // [rsp+128h] [rbp-140h]
  __m128i si128; // [rsp+130h] [rbp-138h]
  __int64 v19; // [rsp+228h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
  result = *a3;
  HIDWORD(v10) = *a4;
  LODWORD(v10) = *a5;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    if ( (_BYTE)result )
    {
      memset_0(v11, 0, 0x1A8uLL);
      v13 = v10;
      v12 = EventTracingProvGuid;
      LOBYTE(v9) = 1;
      v19 = *((_QWORD *)v7 + 170);
      v16 = *v7;
      v14 = 1;
      v17 = 68;
      v15 = -1;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      return EtwpEventWriteFull(
               (unsigned int)v11,
               v9,
               0,
               0,
               (__int64)ETW_EVENT_USER_STACK_TRACE,
               0,
               0,
               0LL,
               0LL,
               0,
               0LL,
               0LL,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
    }
    EtwpTraceStackWalk(v7, 4096LL, CurrentThread, &v10);
    goto LABEL_4;
  }
  if ( !(_BYTE)result )
  {
LABEL_4:
    result = ((unsigned __int16)v7[409] & 7u) + 24;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), result);
  }
  return result;
}
