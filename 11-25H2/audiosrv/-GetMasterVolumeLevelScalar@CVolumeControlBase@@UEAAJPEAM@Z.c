/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180055F00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x180086310 (WPP_SF_qdg.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     pow @ 0x1800A8B64 (pow.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  double v7; // xmm0_8
  double v8; // xmm2_8
  double v9; // xmm7_8
  float v10; // xmm0_4
  unsigned int v11; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !a2 )
  {
    v11 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevelScalar", 504, -2147467261);
    goto LABEL_9;
  }
  v5 = *((unsigned int *)this + 28);
  if ( v5 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v6 = *((_QWORD *)this + 10) + (v5 << 6);
  v7 = pow(10.0, *(float *)(v6 + 4) / 20.0);
  v8 = v7;
  v9 = *(double *)(v6 + 32);
  if ( *(_DWORD *)v6 == 1 )
  {
    if ( v7 <= 1.0 )
    {
LABEL_5:
      v8 = pow(v7, 1.0 / *(double *)(v6 + 56));
      goto LABEL_6;
    }
    v8 = 2.0 - pow(v7, -1.0 / *(double *)(v6 + 56));
  }
  else if ( *(_DWORD *)v6 == 2 )
  {
    v7 = v7 / *(double *)(v6 + 40);
    goto LABEL_5;
  }
LABEL_6:
  v10 = fmax(fmin((v8 - *(double *)(v6 + 24)) / (v9 - *(double *)(v6 + 24)), 1.0), 0.0);
  *a2 = v10;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_39683fa90ec33421f15b53210ac19d77_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v10);
  }
  v11 = 0;
LABEL_9:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v11;
}
