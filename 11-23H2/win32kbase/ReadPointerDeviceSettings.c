/*
 * XREFs of ReadPointerDeviceSettings @ 0x1C0095570
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0095C9C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValues @ 0x1C0095EC0 (GetDWORDSettingValues.c)
 *     ApiSetEditionOverrideUserTouchGestureSettings @ 0x1C0206EB4 (ApiSetEditionOverrideUserTouchGestureSettings.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, _DWORD *a2)
{
  unsigned int v2; // edi
  struct tagDEVICECONFIG_SETTING near **v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // zf
  struct tagDEVICECONFIG_SETTING *v20; // rsi
  int v21; // eax

  v2 = 0;
  if ( a1 == 146 )
  {
    if ( !gTouchMonitor || !gMultiTouchMonitor )
      LoadPointerDeviceTouchSettings();
    ApiSetEditionOverrideUserTouchGestureSettings(off_1C0283038, off_1C0283028);
    v4 = off_1C0283038;
    *a2 = (unsigned int)(*((_DWORD *)off_1C0283038 + 3) - 1) > 0xFFFFFFFD;
    v5 = *((_DWORD *)v4 + 7);
    if ( v5 == -1 )
      v5 = *((_DWORD *)v4 + 6);
    a2[1] = v5;
    v6 = *((_DWORD *)v4 + 11);
    if ( v6 == -1 )
      v6 = *((_DWORD *)v4 + 10);
    a2[2] = v6;
    v7 = *((_DWORD *)v4 + 15);
    if ( v7 == -1 )
      v7 = *((_DWORD *)v4 + 14);
    a2[3] = v7;
    v8 = *((_DWORD *)v4 + 19);
    if ( v8 == -1 )
      v8 = *((_DWORD *)v4 + 18);
    a2[5] = v8;
    v9 = *((_DWORD *)v4 + 23);
    if ( v9 == -1 )
      v9 = *((_DWORD *)v4 + 22);
    a2[6] = v9;
    v10 = *((_DWORD *)v4 + 27);
    if ( v10 == -1 )
      v10 = *((_DWORD *)v4 + 26);
    a2[7] = v10;
    v11 = *((_DWORD *)v4 + 31);
    if ( v11 == -1 )
      v11 = *((_DWORD *)v4 + 30);
    a2[8] = v11;
    v12 = *((_DWORD *)v4 + 35);
    if ( v12 == -1 )
      v12 = *((_DWORD *)v4 + 34);
    a2[9] = v12;
    v13 = *((_DWORD *)v4 + 39);
    if ( v13 == -1 )
      v13 = *((_DWORD *)v4 + 38);
    a2[10] = v13;
    v14 = *((_DWORD *)v4 + 43);
    if ( v14 == -1 )
      v14 = *((_DWORD *)v4 + 42);
    a2[11] = v14;
    v15 = *((_DWORD *)v4 + 47);
    if ( v15 == -1 )
      v15 = *((_DWORD *)v4 + 46);
    a2[12] = v15;
    v16 = *((_DWORD *)v4 + 51);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v4 + 50);
    a2[13] = v16;
    v17 = *((_DWORD *)v4 + 55);
    if ( v17 == -1 )
      v17 = *((_DWORD *)v4 + 54);
    a2[14] = v17;
    v18 = *((_DWORD *)v4 + 59);
    if ( v18 == -1 )
      v18 = *((_DWORD *)v4 + 58);
    v19 = gMultiTouchMonitor == 0;
    v20 = off_1C0283028;
    a2[15] = v18;
    if ( v19 )
      GetDWORDSettingValues(3LL, v20);
    v21 = *((_DWORD *)v20 + 3);
    if ( v21 == -1 )
      v21 = *((_DWORD *)v20 + 2);
    a2[4] = v21;
    return 1;
  }
  return v2;
}
