/*
 * XREFs of ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8
 * Callers:
 *     SetIconMetrics @ 0x140112D38 (SetIconMetrics.c)
 * Callees:
 *     UserSetFont @ 0x1401CD7E8 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1401F345C (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140212988 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     InvalidateSecondaryDpiMetrics @ 0x14028775C (InvalidateSecondaryDpiMetrics.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x1402F1988 (GetSessionDpiMetrics.c)
 */

__int64 __fastcall SetIconFonts(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  struct HLFONT__ **v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics(a1) + 72);
  v5 = UserSetFont(a1, ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL), 154LL, v4);
  if ( v5 )
  {
    v6 = Get96DpiMetrics();
    v5 = UserSetAltScaleFont(*v4, v6 + 72);
    if ( !v5 )
    {
      GreMarkDeletableFont(*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
    }
  }
  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
    InvalidateSecondaryDpiMetrics();
  else
    InvalidateKMDpiMetricsCacheDPIMETRICS();
  return v5;
}
