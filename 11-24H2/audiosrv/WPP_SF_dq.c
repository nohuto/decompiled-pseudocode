/*
 * XREFs of WPP_SF_dq @ 0x1800C7248
 * Callers:
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180012D30 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_dq(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
           32LL,
           &v5,
           4LL,
           (__int64 *)va,
           8LL,
           0LL);
}
