/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x14006A118
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     MNInitUAHMenuItem @ 0x14006B1F8 (MNInitUAHMenuItem.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1401F822C (MNUpdateUAHMaxPopupWidths.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(
        struct tagMENU ***a1,
        __int64 *a2,
        struct tagWND *a3,
        unsigned __int16 a4,
        __int64 a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct tagMENU *v12; // rcx
  struct tagMENU *v13; // rcx
  struct tagMENU *v14; // r9
  struct tagMENU *v15; // rcx
  __int64 result; // rax
  struct tagMENU *v17; // rcx
  int v18; // edx
  __int128 v19; // xmm1
  struct tagMENU *v20; // rcx
  int v21; // eax
  _DWORD v22[3]; // [rsp+20h] [rbp-51h] BYREF
  int v23; // [rsp+2Ch] [rbp-45h]
  int v24; // [rsp+30h] [rbp-41h]
  __int64 v25; // [rsp+38h] [rbp-39h]
  __int64 v26; // [rsp+40h] [rbp-31h]
  __int64 v27; // [rsp+48h] [rbp-29h]
  int v28; // [rsp+50h] [rbp-21h]
  _BYTE v29[4]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v30; // [rsp+5Ch] [rbp-15h]
  __int128 v31; // [rsp+6Ch] [rbp-5h]

  memset_0(v22, 0, 0x70uLL);
  v9 = *a2;
  if ( *(_DWORD *)(*a2 + 104) != -1 )
    return 0LL;
  v22[1] = 0;
  v22[0] = 1;
  v10 = *(_DWORD *)(v9 + 8);
  v23 = 0;
  v22[2] = v10;
  v24 = *(_DWORD *)(GetDpiServerInfoForDpi(a4) + 36);
  v11 = *a2;
  v25 = *(_QWORD *)(*a2 + 56);
  if ( (*(_DWORD *)v11 & 0x100) != 0 || *(_QWORD *)(v11 + 96) == -1LL && a3 )
  {
    xxxSendMessage(a3, 0x2Cu);
    v17 = (struct tagMENU *)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( !(unsigned __int8)MNIspItemValid(v17, a2) )
      return 0LL;
  }
  v12 = (struct tagMENU *)a1[2];
  if ( !v12 )
    v12 = **a1;
  if ( !(unsigned int)MNIsUAHMenu(v12) || !a3 )
    goto LABEL_22;
  v13 = (struct tagMENU *)a1[2];
  if ( v13 )
  {
    v14 = (struct tagMENU *)a1[2];
    goto LABEL_10;
  }
  v14 = (struct tagMENU *)a1[2];
  v13 = **a1;
  if ( v13 )
  {
LABEL_10:
    v26 = *(_QWORD *)v13;
    goto LABEL_11;
  }
  v26 = 0LL;
LABEL_11:
  v27 = a5;
  v28 = *(_DWORD *)(*((_QWORD *)v13 + 5) + 40LL);
  if ( !v14 )
    v14 = **a1;
  MNInitUAHMenuItem(v14, a2, v29);
  xxxSendMessage(a3, 0x94u);
  v15 = (struct tagMENU *)a1[2];
  if ( !v15 )
    v15 = **a1;
  if ( !(unsigned __int8)MNIspItemValid(v15, a2) )
    return 0LL;
  v19 = v31;
  *(_OWORD *)((char *)a2 + 52) = v30;
  *(_OWORD *)((char *)a2 + 68) = v19;
  if ( (*(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 1) != 0 )
  {
    v20 = (struct tagMENU *)a1[2];
    if ( !v20 )
      v20 = **a1;
    v21 = MNUpdateUAHMaxPopupWidths(v20, a2);
    v18 = v21 + v23;
    goto LABEL_23;
  }
LABEL_22:
  v18 = v23;
LABEL_23:
  result = 1LL;
  *(_DWORD *)(*a2 + 104) = v18;
  *(_DWORD *)(*a2 + 108) = v24;
  return result;
}
