/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194
 * Callers:
 *     KiBugCheckProgress @ 0x1405B2E40 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     BcpConvertProgressToString @ 0x1406988EC (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x1406997F4 (BcpDisplayProgress.c)
 *     BcpDisplayProgressModernized @ 0x140699A04 (BcpDisplayProgressModernized.c)
 *     BcpGetDisplayType @ 0x140699DC0 (BcpGetDisplayType.c)
 *     BcpSetCursorPosition @ 0x14069A0C8 (BcpSetCursorPosition.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x14069A194 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  unsigned int v3; // ebp
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LONGLONG v9; // rcx
  LONGLONG v10; // rax
  LARGE_INTEGER v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r8
  int v14; // r11d
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // r8
  UNICODE_STRING *v17; // rax
  UNICODE_STRING *v18; // rax
  UNICODE_STRING *v19; // rax
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  LARGE_INTEGER v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v22.QuadPart = 0LL;
  if ( (dword_140EF0050 & 0x400000) != 0 || (dword_140EF0050 & 0x10) == 0 )
    return 0LL;
  v7 = KeQueryPerformanceCounter(&v22);
  v8 = v22;
  v9 = v7.QuadPart - BcpLastProgressUpdateTicks;
  v10 = v7.QuadPart - BcpStartTicks;
  v11.QuadPart = 2 * v22.QuadPart;
  if ( a3 && v10 < v11.QuadPart )
    v12 = 100 * v10 / v11.QuadPart;
  else
    LODWORD(v12) = 100;
  if ( a1 <= (unsigned int)v12 )
    LODWORD(v12) = a1;
  if ( v9 < v11.QuadPart || (unsigned int)v12 < BcpLastProgressDisplayed )
  {
    LODWORD(v12) = BcpLastProgressDisplayed;
  }
  else
  {
    v21[0] = DWORD2(BgInternal);
    v21[1] = DWORD1(BgInternal);
    v21[2] = HIDWORD(BgInternal);
    BcpGetDisplayType(v21);
    BcpSetCursorPosition(BcpProgressOffset, dword_140EEFFA4, (int *)&unk_140EEFFA8);
    if ( FeatureEnabledBsodRejuvenation )
      BcpDisplayProgressModernized(v12, v14);
    else
      BcpDisplayProgress(v12, v14, v13);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    BcpLastProgressDisplayed = v12;
  }
  if ( a1 != 100 || (_DWORD)v12 == 100 )
  {
    v17 = &stru_140E3E9A0;
    if ( !a3 )
      v17 = &stru_140E3E9B0;
    *a2 = v17;
    BcpConvertProgressToString(v12, (__int64)(a2 + 3));
    v18 = &stru_140E3E9E0;
    if ( a1 != 1 )
      v18 = &stru_140E3EA00;
    a2[1] = v18;
    v19 = &stru_140E3E9F0;
    if ( a1 != 1 )
      v19 = &stru_140E3EA10;
    a2[2] = v19;
  }
  else
  {
    v15.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
    if ( v15.QuadPart < v11.QuadPart )
      KeStallExecutionProcessor(1000000 * (v11.QuadPart - v15.QuadPart) / v8.QuadPart);
    LOBYTE(v16.LowPart) = a3;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
                           100LL,
                           a2,
                           (LARGE_INTEGER)v16.QuadPart);
  }
  return v3;
}
