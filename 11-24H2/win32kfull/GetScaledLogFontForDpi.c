/*
 * XREFs of GetScaledLogFontForDpi @ 0x14007915C
 * Callers:
 *     GetWindowNCMetrics @ 0x14007901C (GetWindowNCMetrics.c)
 *     GetWindowNCMetricsForDpi @ 0x140079A10 (GetWindowNCMetricsForDpi.c)
 *     _SystemParametersInfoForDpi @ 0x140079DCC (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401B2108 (GetDPIMETRICSForDpiUnsafe.c)
 *     DeleteMetricsFont @ 0x1401CD284 (DeleteMetricsFont.c)
 *     CreateScaledFont @ 0x1401CD670 (CreateScaledFont.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 */

_BOOL8 __fastcall GetScaledLogFontForDpi(int a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // bp
  _QWORD *v6; // rbx
  BOOL v7; // r14d
  int v8; // ecx
  __int64 v9; // rcx
  __int64 DpiMetricsForDpi; // rax
  Gre::Base *v11; // rdi
  int v12; // r12d
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  Gre::Base *v31; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0LL;
  v7 = 0;
  if ( !a1 || (v8 = a1 - 1) == 0 || (v9 = (unsigned int)(v8 - 1), (unsigned int)v9 <= 1) )
  {
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
      DpiMetricsForDpi = GetDpiMetricsForDpi(v4);
    else
      DpiMetricsForDpi = GetDPIMETRICSForDpiUnsafe(v4);
    v6 = (_QWORD *)DpiMetricsForDpi;
  }
  v31 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !a1 )
  {
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() || v6 )
    {
      v11 = (Gre::Base *)v6[9];
      goto LABEL_35;
    }
    v26 = v4;
    v27 = *(_QWORD *)(Get96DpiMetrics() + 72);
    goto LABEL_34;
  }
  v13 = a1 - 1;
  if ( !v13 )
  {
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() || v6 )
    {
      v11 = (Gre::Base *)v6[5];
      goto LABEL_35;
    }
    v26 = v4;
    v27 = *(_QWORD *)(Get96DpiMetrics() + 40);
    goto LABEL_34;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() || v6 )
    {
      v11 = (Gre::Base *)v6[1];
      goto LABEL_35;
    }
    v26 = v4;
    v27 = *(_QWORD *)(Get96DpiMetrics() + 8);
    goto LABEL_34;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() || v6 )
    {
      v11 = (Gre::Base *)v6[8];
      goto LABEL_35;
    }
    v26 = v4;
    v27 = *(_QWORD *)(Get96DpiMetrics() + 64);
LABEL_34:
    v29 = CreateScaledFont(v27, &v31, v28, v26, 0LL, 0LL, 0LL);
    v11 = v31;
    v12 = v29;
    goto LABEL_35;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v17 = *(_QWORD *)(W32GetUserSessionState(v9, a2) + 19928);
      *(_OWORD *)a3 = *(_OWORD *)(v17 + 5004);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v17 + 5020);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(v17 + 5036);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(v17 + 5052);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(v17 + 5068);
      *(_QWORD *)(a3 + 80) = *(_QWORD *)(v17 + 5084);
      *(_DWORD *)(a3 + 88) = *(_DWORD *)(v17 + 5092);
      v21 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19928);
      if ( v4 != *(_WORD *)(v21 + 6998) )
      {
        UserSessionState = W32GetUserSessionState(v21, v20);
        *(_DWORD *)(a3 + 4) = EngMulDiv(
                                *(_DWORD *)(a3 + 4),
                                v4,
                                *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 6998LL));
        v25 = W32GetUserSessionState(v24, v23);
        *(_DWORD *)a3 = EngMulDiv(*(_DWORD *)a3, v4, *(unsigned __int16 *)(*(_QWORD *)(v25 + 19928) + 6998LL));
      }
      v7 = 1;
    }
    goto LABEL_37;
  }
  v11 = *(Gre::Base **)(GetDpiServerInfoForDpi(v4) + 8);
LABEL_35:
  if ( v11 )
    v7 = GreExtGetObjectW(v11, 92LL, (_WORD *)a3) != 0;
LABEL_37:
  if ( !(unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() && v12 )
    DeleteMetricsFont(v11);
  return v7;
}
