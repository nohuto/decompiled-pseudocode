/*
 * XREFs of xxxSendMenuSelect @ 0x14009E36C
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxCallMsgFilter @ 0x1400655D0 (xxxCallMsgFilter.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14009E59C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(struct tagWND *a1, struct tagWND *a2, __int64 **a3, int a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 *v9; // rdi
  __int64 **v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rsi
  unsigned int v13; // ebx
  int v14; // esi
  __int64 v15; // rdx
  unsigned int v17; // ebx
  _QWORD *v18; // rdx
  int v19; // ebx
  int v20; // ecx
  __int64 v21[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v22; // [rsp+48h] [rbp-11h]
  __int64 v23[3]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp+Fh] BYREF
  int v25; // [rsp+70h] [rbp+17h]
  int v26; // [rsp+74h] [rbp+1Bh]
  unsigned __int64 v27; // [rsp+78h] [rbp+1Fh]
  __int64 v28; // [rsp+80h] [rbp+27h]
  __int128 v29; // [rsp+88h] [rbp+2Fh]

  v6 = a4;
  v26 = 0;
  v29 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 44LL) <= (unsigned int)v6 )
  {
    v9 = a3[2];
    if ( !v9 )
      v9 = (__int64 *)**a3;
    v10 = (__int64 **)SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23, 0xFFFFFFFFLL);
    v12 = v10[2];
    if ( !v12 )
      v12 = (__int64 *)**v10;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v23, v11);
    v13 = 0xFFFF;
    v22 = 0LL;
    if ( v9 != v12 )
      v13 = 0;
    LOWORD(v14) = 0;
    if ( *(_QWORD *)v21[0] )
    {
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v21);
      v21[0] = gSmartObjNullRef;
    }
    LODWORD(v6) = -1;
  }
  else
  {
    v18 = (_QWORD *)(*(_QWORD *)(**a3 + 88) + 96 * v6);
    v19 = *(_DWORD *)*v18 & 0x6B64 | *(_DWORD *)(*v18 + 4LL) & 0x8B;
    if ( v18[2] )
      v19 |= 0x10u;
    v13 = v19 & 0xFFFF5FFF;
    if ( (v13 & 0x10) != 0 )
      LOWORD(v14) = v6;
    else
      v14 = *(_DWORD *)(*v18 + 8LL);
    if ( a5 )
    {
      v20 = v13 | 0x8000;
      if ( *(_DWORD *)(a5 + 20) != -1 )
        v20 = v13;
      v13 = v20;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v13 = v20 | 0x2000;
    }
  }
  if ( a1 )
    v24 = *(_QWORD *)a1;
  else
    v24 = 0LL;
  v25 = 287;
  v27 = (unsigned __int16)v14 | (unsigned __int64)(v13 << 16);
  if ( v22 || *(_QWORD *)v21[0] )
    v28 = **(_QWORD **)v21[0];
  else
    v28 = 0LL;
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v24, 2LL) )
    xxxSendNotifyMessage(a1, 287LL, v27, v28, 1);
  if ( a2 )
  {
    if ( a2 == a1 )
      v17 = (v13 >> 12) | 0xFFFFFFFD;
    else
      v17 = -4;
    xxxWindowEvent(0x8005u, a2, v17, v6 + 1, 0);
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v21, v15);
}
