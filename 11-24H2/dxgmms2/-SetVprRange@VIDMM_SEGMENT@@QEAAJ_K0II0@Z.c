/*
 * XREFs of ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x14009EE08
 * Callers:
 *     InitializePhysicalAdapterSegments @ 0x14010BB70 (InitializePhysicalAdapterSegments.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // r11

  if ( !a4 || ((a4 - 1) & a4) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5166;
    goto LABEL_22;
  }
  v7 = *((_QWORD *)this + 11);
  if ( a2 >= v7 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5171;
LABEL_22:
    WdLogGlobalForLineNumber = v9;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
  if ( a3 > v7 || (v10 = a3 + a2, v10 > v7) )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5176;
    goto LABEL_22;
  }
  v11 = a4 - 1LL;
  if ( (v11 & a3) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5182;
    goto LABEL_22;
  }
  if ( (v11 & a2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5187;
    goto LABEL_22;
  }
  if ( a5 > 1 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5196;
    goto LABEL_22;
  }
  if ( a6 && a5 != 1 )
  {
    WdLogSingleEntry0(1LL);
    v9 = 5206;
    goto LABEL_22;
  }
  *((_DWORD *)this + 112) = a4;
  *((_QWORD *)this + 53) = a2;
  *((_QWORD *)this + 54) = a3;
  *((_DWORD *)this + 113) = a5;
  *((_QWORD *)this + 55) = v11;
  *((_QWORD *)this + 63) = a6;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 57) = v10;
    *((_QWORD *)this + 58) = v10;
    if ( v10 == v7 )
      *((_BYTE *)this + 489) = 1;
  }
  return 0LL;
}
