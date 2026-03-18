/*
 * XREFs of ?PreInitClass@Time@@SAJXZ @ 0x1802267B0
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800EF544 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 Time::PreInitClass(void)
{
  signed int v0; // eax
  signed int v1; // ebx
  signed int LastError; // eax

  SetLastError(0);
  if ( QueryPerformanceFrequency(&Time::s_luFreq) )
  {
    SetLastError(0);
    if ( QueryPerformanceCounter(&Time::s_luBegin) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / Time::s_luFreq.QuadPart < 0x12C )
        return 2147549183LL;
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x23u, 0LL);
    }
  }
  else
  {
    v0 = GetLastError();
    v1 = v0;
    if ( v0 > 0 )
      v1 = (unsigned __int16)v0 | 0x80070000;
    if ( v1 >= 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v1, 0x22u, 0LL);
  }
  return (unsigned int)v1;
}
