/*
 * XREFs of SmmMapIoSpace @ 0x14009335C
 * Callers:
 *     ?SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z @ 0x140044958 (-SysMmMapPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@D_K1IPEAPEAXPEA_K3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmMapIoSpace(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5, _QWORD *a6, __int64 *a7)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rax

  v7 = a4;
  v9 = a1 + a2;
  v10 = 4LL;
  if ( a4 )
  {
    if ( a4 == 2 )
      v10 = 1028LL;
  }
  else
  {
    v10 = 516LL;
  }
  v11 = MmMapIoSpaceEx(v9, a3, v10);
  if ( v11 )
  {
    *a5 = v11;
    *a6 = 0LL;
    *a7 = a3;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14015E65C);
    WdLogSingleEntry3(6LL, v9, a3, v7);
    WdLogGlobalForLineNumber = 524;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to map IO space. Address=0x%.16I64x, Size=%I64u, CacheType=%u",
      v9,
      a3,
      v7,
      0LL,
      0LL);
    return 3221225626LL;
  }
}
