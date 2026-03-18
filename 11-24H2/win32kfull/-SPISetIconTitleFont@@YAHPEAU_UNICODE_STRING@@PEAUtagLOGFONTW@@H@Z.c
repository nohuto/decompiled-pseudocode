/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x140214460 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     CreateFontFromUserProfile @ 0x1401CD854 (CreateFontFromUserProfile.c)
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1401F345C (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140212988 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z @ 0x14026C59C (-SetWindowMetricFont@@YAHPEAU_UNICODE_STRING@@IPEAUtagLOGFONTW@@@Z.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     InvalidateSecondaryDpiMetrics @ 0x14028775C (InvalidateSecondaryDpiMetrics.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 *     GetSessionDpiMetrics @ 0x1402F1988 (GetSessionDpiMetrics.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // esi
  unsigned int v7; // edi
  INT DpiForSystem; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  Gre::Base *FontFromUserProfile; // rax
  struct HLFONT__ *v18; // rbx
  __int64 v19; // rcx
  __int64 SessionDpiMetrics; // rbp
  __int64 v22; // rax
  struct HLFONT__ *v23; // rcx
  __int64 v24; // rsi
  struct HLFONT__ *v25; // rcx
  struct HLFONT__ *v26; // rax
  __int64 v27; // rdx
  struct HLFONT__ **v28; // rcx
  struct HLFONT__ *v29; // [rsp+20h] [rbp-A8h] BYREF
  tagLOGFONTW v30; // [rsp+30h] [rbp-98h] BYREF

  v29 = 0LL;
  v6 = a3 == 0;
  v7 = 0;
  DpiForSystem = GetDpiForSystem((__int64)a1);
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19928);
  if ( DpiForSystem != *(unsigned __int16 *)(v12 + 6998) )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    a2->lfWidth = EngMulDiv(
                    a2->lfWidth,
                    *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 6998LL),
                    DpiForSystem);
    v16 = W32GetUserSessionState(v15, v14);
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(*(_QWORD *)(v16 + 19928) + 6998LL), DpiForSystem);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a1, (__int128 *)&a2->lfHeight, 0x9Au);
  v18 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !(unsigned int)UserSetAltScaleFont(FontFromUserProfile, (__int64 *)&v29) )
    {
      GreMarkDeletableFont(v18);
      GreDeleteObject(v18);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        memset_0(&v30, 0, sizeof(v30));
        if ( (unsigned int)GreExtGetObjectW(v18, 92LL, &v30) )
          v7 = SetWindowMetricFont(a1, 0x9Au, &v30);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionDpiMetrics = GetSessionDpiMetrics(v19);
      v22 = Get96DpiMetrics();
      v23 = *(struct HLFONT__ **)(SessionDpiMetrics + 72);
      v24 = v22;
      if ( v23 )
      {
        GreMarkDeletableFont(v23);
        GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 72));
      }
      v25 = *(struct HLFONT__ **)(v24 + 72);
      if ( v25 )
      {
        GreMarkDeletableFont(v25);
        GreDeleteObject(*(_QWORD *)(v24 + 72));
      }
      v26 = v29;
      *(_QWORD *)(SessionDpiMetrics + 72) = v18;
      *(_QWORD *)(v24 + 72) = v26;
      if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
        InvalidateSecondaryDpiMetrics(v28, v27);
      else
        InvalidateKMDpiMetricsCacheDPIMETRICS((__int64)v28, v27);
    }
    else
    {
      GreMarkDeletableFont(v18);
      GreDeleteObject(v18);
      GreMarkDeletableFont(v29);
      GreDeleteObject(v29);
    }
  }
  return v7;
}
