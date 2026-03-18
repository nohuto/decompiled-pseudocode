/*
 * XREFs of ReadPointerDeviceSettings @ 0x1401479D0
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     _lambda_a418699817c89276d1581a788dfe45e0_::_lambda_invoker_cdecl_ @ 0x1401989E0 (_lambda_a418699817c89276d1581a788dfe45e0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400A755C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1400A8BE0 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideUserTouchGestureSettings @ 0x1401929F8 (ApiSetEditionOverrideUserTouchGestureSettings.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // r14
  int v10; // eax
  _DWORD *v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax

  v3 = a1;
  v4 = 0;
  UserSessionState = W32GetUserSessionState(a1);
  v7 = UserSessionState;
  v8 = v3 - 146;
  if ( !v8 )
  {
    if ( !*(_DWORD *)(UserSessionState + 17648) || !*(_DWORD *)(UserSessionState + 17680) )
      LoadPointerDeviceTouchSettings(v6);
    ApiSetEditionOverrideUserTouchGestureSettings(*(_QWORD *)(v7 + 17656), *(_QWORD *)(v7 + 17688));
    v11 = *(_DWORD **)(v7 + 17656);
    *a2 = (unsigned int)(v11[3] - 1) > 0xFFFFFFFD;
    v12 = v11[7];
    if ( v12 == -1 )
      v12 = v11[6];
    a2[1] = v12;
    v13 = v11[11];
    if ( v13 == -1 )
      v13 = v11[10];
    a2[2] = v13;
    v14 = v11[15];
    if ( v14 == -1 )
      v14 = v11[14];
    a2[3] = v14;
    v15 = v11[19];
    if ( v15 == -1 )
      v15 = v11[18];
    a2[5] = v15;
    v16 = v11[23];
    if ( v16 == -1 )
      v16 = v11[22];
    a2[6] = v16;
    v17 = v11[27];
    if ( v17 == -1 )
      v17 = v11[26];
    a2[7] = v17;
    v18 = v11[31];
    if ( v18 == -1 )
      v18 = v11[30];
    a2[8] = v18;
    v19 = v11[35];
    if ( v19 == -1 )
      v19 = v11[34];
    a2[9] = v19;
    v20 = v11[39];
    if ( v20 == -1 )
      v20 = v11[38];
    a2[10] = v20;
    v21 = v11[43];
    if ( v21 == -1 )
      v21 = v11[42];
    a2[11] = v21;
    v22 = v11[47];
    if ( v22 == -1 )
      v22 = v11[46];
    a2[12] = v22;
    v23 = v11[51];
    if ( v23 == -1 )
      v23 = v11[50];
    a2[13] = v23;
    v24 = v11[55];
    if ( v24 == -1 )
      v24 = v11[54];
    a2[14] = v24;
    v25 = v11[59];
    if ( v25 == -1 )
      v25 = v11[58];
    a2[15] = v25;
    v26 = v11[63];
    if ( v26 == -1 )
      v26 = v11[62];
    a2[16] = v26;
    v27 = *(_QWORD *)(v7 + 17688);
    if ( !*(_DWORD *)(v7 + 17680) )
      GetDWORDSettingValuesEx(3LL, *(_QWORD *)(v7 + 17688), 1u, 0);
    v28 = *(_DWORD *)(v27 + 12);
    if ( v28 == -1 )
      v28 = *(_DWORD *)(v27 + 8);
    a2[4] = v28;
    return 1;
  }
  if ( v8 == 32 )
  {
    v9 = *(_QWORD *)(UserSessionState + 18568);
    if ( !*(_DWORD *)(UserSessionState + 18560)
      && (unsigned int)GetDWORDSettingValuesEx(9LL, *(_QWORD *)(UserSessionState + 18568), 1u, 0) )
    {
      *(_DWORD *)(v7 + 18560) = 1;
    }
    v10 = *(_DWORD *)(v9 + 12);
    if ( v10 == -1 )
      v10 = *(_DWORD *)(v9 + 8);
    *a2 = v10;
    return 1;
  }
  return v4;
}
