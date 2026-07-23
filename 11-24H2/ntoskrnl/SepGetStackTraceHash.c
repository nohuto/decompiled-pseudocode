/*
 * XREFs of SepGetStackTraceHash @ 0x140231520
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140231454 (SepLogLpacAccessFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SepGetStackTraceHash(ULONG *a1)
{
  unsigned int v2; // esi
  ULONG v3; // eax
  unsigned __int16 v4; // bx
  PVOID *v5; // rdi
  int v6; // ecx
  ULONG v7; // ecx
  __int64 result; // rax
  ULONG BackTraceHash; // [rsp+30h] [rbp-C8h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B0h]
  PVOID BackTrace[16]; // [rsp+50h] [rbp-A8h] BYREF

  BackTraceHash = 0;
  memset_0(BackTrace, 0, sizeof(BackTrace));
  v2 = 16;
  v11 = 0LL;
  MemoryInformation = 0LL;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  v3 = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  if ( v3 <= 0x10 )
  {
    v4 = 0;
    v2 = v3;
    if ( !v3 )
    {
      result = BackTraceHash;
      *a1 = BackTraceHash;
      return result;
    }
  }
  else
  {
    v4 = 0;
  }
  do
  {
    v5 = &BackTrace[v4];
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           *v5,
           MemoryImageInformation,
           &MemoryInformation,
           0x18uLL,
           0LL) < 0
      || (unsigned __int64)*v5 < (unsigned __int64)MemoryInformation )
    {
      v6 = *(_DWORD *)v5;
    }
    else
    {
      v6 = (unsigned int)*v5 - MemoryInformation;
    }
    v7 = BackTraceHash + v6;
    result = ++v4;
    BackTraceHash = v7;
  }
  while ( v4 < v2 );
  *a1 = v7;
  return result;
}
