/*
 * XREFs of WPP_SF_dSS @ 0x1800384F8
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dSS(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, const wchar_t *a6)
{
  const wchar_t *v6; // r8
  __int64 v7; // rax
  const wchar_t *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // zf
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  v6 = a6;
  v7 = -1LL;
  v8 = a5;
  v9 = 10LL;
  if ( a6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a6[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10LL;
  }
  if ( !a6 )
    v6 = L"NULL";
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v9 = 2 * v7 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v8 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
           0x25u,
           &v14,
           4LL,
           v8,
           v9,
           v6,
           v11,
           0LL);
}
