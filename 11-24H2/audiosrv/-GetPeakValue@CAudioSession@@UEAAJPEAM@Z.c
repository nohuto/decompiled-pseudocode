/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x18004D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x18004D710 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800C34A0 (WPP_SF_g.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  CAudioStream **v7; // rbp
  CAudioStream **i; // rdi
  CAudioStream *v10; // rcx
  float v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0.0;
  v5 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, 0LL);
  }
  if ( a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v7 = (CAudioStream **)*((_QWORD *)this + 15);
    for ( i = (CAudioStream **)*((_QWORD *)this + 14); i != v7; ++i )
    {
      v10 = *i;
      v11 = 0.0;
      if ( (int)CAudioStream::GetPeakValue(v10, &v11) >= 0 )
        v3 = fmaxf(v11, v3);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1298, -2147467261);
  }
  return v5;
}
