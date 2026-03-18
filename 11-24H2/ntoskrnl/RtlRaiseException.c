/*
 * XREFs of RtlRaiseException @ 0x1405E88F0
 * Callers:
 *     HvlpGetRegister64 @ 0x1403D6DD0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404D3CC0 (HvlpSetRegister64.c)
 *     RaiseException @ 0x140502840 (RaiseException.c)
 *     _raise_exc_ex @ 0x140502950 (_raise_exc_ex.c)
 *     HvlpGetRegister128 @ 0x14058B790 (HvlpGetRegister128.c)
 *     KiStallBugcheckThread @ 0x1405C66D8 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405EB314 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x14027C1C0 (RtlDispatchException.c)
 *     RtlLookupFunctionEntry @ 0x14027D3A0 (RtlLookupFunctionEntry.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     RtlVirtualUnwind @ 0x140471220 (RtlVirtualUnwind.c)
 *     RtlpCaptureContext2 @ 0x1404FC9E0 (RtlpCaptureContext2.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1406A9290 (ZwRaiseException.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 */

__int64 __fastcall RtlRaiseException(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        unsigned __int64 a24)
{
  int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  void *v29; // rsp
  int v30; // ebx
  unsigned int *v31; // rax
  __int64 result; // rax
  __int64 v33; // [rsp+40h] [rbp+0h] BYREF
  __int64 v34; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp+10h] BYREF
  __int64 v36; // [rsp+58h] [rbp+18h] BYREF

  LODWORD(v33) = 0;
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  *(_DWORD *)(a1 + 4) |= 0x80u;
  v25 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2((unsigned int)(v25 + 1048587), &v33, 0LL);
  v26 = (unsigned int)v33 + 15LL;
  if ( v26 <= (unsigned int)v33 )
    v26 = 0xFFFFFFFFFFFFFF0LL;
  v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
  v28 = alloca(v27);
  v29 = alloca(v27);
  v30 = RtlInitializeExtendedContext2((__int64)&v33, v25 + 1048587, &v33, 0LL);
  RtlpCaptureContext2();
  v31 = RtlLookupFunctionEntry(a24, (unsigned __int64 *)&v34, 0LL);
  if ( !v31 )
LABEL_6:
    RtlRaiseStatus(v30);
  RtlVirtualUnwind(0, v34, a24, (unsigned __int64)v31, (__int64)&v33, &v36, &v35, 0LL);
  *(_QWORD *)(a1 + 16) = a24;
  result = RtlDispatchException(a1, (__int64)&v33);
  if ( !(_BYTE)result )
  {
    v30 = ZwRaiseException(a1);
    goto LABEL_6;
  }
  return result;
}
