/*
 * XREFs of ?GetDescription@CProtectedOutputController@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x14006CF90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CProtectedOutputController::GetDescription(
        CProtectedOutputController *this,
        unsigned int *a2,
        struct _GUID *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  unsigned int v5; // ebx
  struct _GUID *v9; // rax

  v5 = 0;
  if ( a2 && a3 && a4 && a5 )
  {
    v9 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
    if ( v9 )
    {
      *v9 = MFPROTECTION_DISABLE;
      v9[1] = MFPROTECTION_CONSTRICTAUDIO;
      *a5 = v9;
      *a4 = 2;
      *a2 = 17;
      *a3 = MFCONNECTOR_UNKNOWN;
      return v5;
    }
    v5 = -2147024882;
  }
  else
  {
    v5 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_54b82945556c3d10a6b677da0424b62c_Traceguids, v5);
  }
  AudDGTraceLoggingErrorHelper("CProtectedOutputController::GetDescription", 137, v5);
  return v5;
}
