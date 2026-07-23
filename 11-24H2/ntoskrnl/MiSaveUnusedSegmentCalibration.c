/*
 * XREFs of MiSaveUnusedSegmentCalibration @ 0x1403EDDB8
 * Callers:
 *     MiIssueSegmentDereferenceWork @ 0x1403ED890 (MiIssueSegmentDereferenceWork.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 */

ULONG __fastcall MiSaveUnusedSegmentCalibration(ULONG *a1, unsigned __int64 a2)
{
  LARGE_INTEGER v4; // rax
  unsigned __int64 QuadPart; // r8
  __int64 v6; // rcx
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // rdx
  char *v10; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  QuadPart = v4.QuadPart;
  if ( PerformanceFrequency.QuadPart != 10000000 )
  {
    v4.QuadPart = 10000000 * v4.QuadPart / PerformanceFrequency.QuadPart;
    QuadPart = (__int64)(10000000 * QuadPart) / PerformanceFrequency.QuadPart;
  }
  v6 = *a1;
  if ( QuadPart < a2 )
    QuadPart = a2;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( (_DWORD)v6 )
  {
    v4.QuadPart = (LONGLONG)(a1 + 28);
    do
    {
      v9 += *(_QWORD *)(v4.QuadPart - 8);
      v8 += *(_QWORD *)v4.QuadPart;
      v7 += *(_DWORD *)(v4.QuadPart - 28);
      v4.QuadPart += 96LL;
      --v6;
    }
    while ( v6 );
    if ( v9 )
    {
      v10 = (char *)&unk_140E2CD68 + 32 * (_InterlockedExchangeAdd(&dword_140E2CD60, 1u) & 0x3F);
      *(_QWORD *)v10 = QuadPart - a2;
      *((_QWORD *)v10 + 1) = v9;
      *((_QWORD *)v10 + 2) = v8;
      v4.LowPart = *a1;
      *((_DWORD *)v10 + 6) = *a1;
      if ( v7 )
      {
        v4.LowPart |= 0x80000000;
        *((_DWORD *)v10 + 6) = v4.LowPart;
      }
    }
  }
  return v4.LowPart;
}
