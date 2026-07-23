/*
 * XREFs of EtwpStackWalkApc @ 0x1403DD480
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwpStackWalkApc(__int16 **a1, __int64 a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int16 *v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+90h] [rbp-2D8h] BYREF
  _BYTE v10[40]; // [rsp+A0h] [rbp-2C8h] BYREF
  GUID v11; // [rsp+C8h] [rbp-2A0h]
  __int64 v12; // [rsp+F0h] [rbp-278h]
  int v13; // [rsp+120h] [rbp-248h]
  char v14; // [rsp+124h] [rbp-244h]
  __int16 v15; // [rsp+126h] [rbp-242h]
  int v16; // [rsp+128h] [rbp-240h]
  __m128i si128; // [rsp+130h] [rbp-238h]
  __int64 v18; // [rsp+328h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
  result = *a3;
  HIDWORD(v9) = *a4;
  LODWORD(v9) = *a5;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    if ( (_BYTE)result )
    {
      memset_0(v10, 0, 0x2A8uLL);
      v12 = v9;
      v11 = EventTracingProvGuid;
      v18 = *((_QWORD *)v7 + 170);
      v15 = *v7;
      v13 = 1;
      v16 = 68;
      v14 = -1;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      return EtwpEventWriteFull(
               (__int64)v10,
               1u,
               0,
               0,
               (unsigned __int16 *)ETW_EVENT_USER_STACK_TRACE,
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
    EtwpTraceStackWalk(v7, 4096LL, CurrentThread, &v9);
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
