/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C01BA07C
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222228 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0011774 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0126570 (xxxSleepThread2.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x1C01B8C98 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     xxxTrackCaptionButton @ 0x1C022BE68 (xxxTrackCaptionButton.c)
 *     DwmSyncHitTestQuery @ 0x1C026D7A0 (DwmSyncHitTestQuery.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(struct tagWND *a1, __int64 a2)
{
  unsigned __int16 v2; // si
  unsigned int v3; // r12d
  unsigned int v5; // r14d
  unsigned __int16 v6; // r13
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int16 v13; // r12
  __int16 v14; // bx
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  void *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int16 v24; // ax
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbx
  int v30; // [rsp+50h] [rbp-29h] BYREF
  int v31; // [rsp+54h] [rbp-25h] BYREF
  __int64 v32; // [rsp+58h] [rbp-21h]
  __int128 v33; // [rsp+60h] [rbp-19h] BYREF
  __int64 v34[2]; // [rsp+70h] [rbp-9h]
  __int128 v35; // [rsp+80h] [rbp+7h]
  unsigned __int16 v36; // [rsp+E0h] [rbp+67h] BYREF
  int v37; // [rsp+E8h] [rbp+6Fh]
  int v38; // [rsp+F0h] [rbp+77h]
  int v39; // [rsp+F8h] [rbp+7Fh]

  v37 = a2;
  v2 = 0;
  v30 = a2;
  v36 = 0;
  v33 = 0LL;
  v3 = a2;
  LOWORD(v39) = 0;
  v31 = 1;
  v5 = 0;
  v6 = 0;
  *(_OWORD *)v34 = 0LL;
  v38 = 0;
  v35 = 0LL;
  v32 = gptiCurrent;
  v7 = (void *)ReferenceDwmApiPort(a1, a2);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  DwmSyncHitTestQuery(v7, 1LL, 0LL, v3, (__int64)&v30, (__int64)&v31);
  EnterCrit(1LL, 0LL);
  if ( !v31 )
    return xxxTrackCaptionButton(a1, v3);
  switch ( v3 )
  {
    case 8u:
      v5 = 2;
      v6 = 1344;
      break;
    case 9u:
      v5 = 3;
      v6 = 1312;
      break;
    case 0x14u:
      v5 = 5;
      v6 = 1296;
      break;
    case 0x15u:
      v5 = 4;
      v6 = 1408;
      break;
  }
  xxxDCECalcCaptionButton(a1, v5, &v36);
  v13 = v36;
  if ( v36 )
  {
    v14 = 1;
    v39 = 1;
    SetOrClrWF(1, (__int64 *)a1, v6, 1);
    xxxWindowEvent(0x800Au, a1, -2, v5, 0);
  }
  else
  {
    v14 = v39;
    v5 = 0;
  }
  xxxSetCapture((__int64)a1);
  v15 = v30;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage(&v33, 0LL, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage(&v33, 0LL, 577, 599, 1, 0) )
      {
        v29 = v32;
        *(_DWORD *)(v32 + 488) |= 0x8000u;
        xxxDispatchMessage((__int64 *)&v33, v26, v27, v28);
        *(_DWORD *)(v29 + 488) &= ~0x8000u;
        v14 = v39;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_28;
    }
    if ( DWORD2(v33) != 514 )
    {
      if ( DWORD2(v33) == 512 && v13 )
      {
        v19 = (void *)ReferenceDwmApiPort(v17, v16);
        UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
        DwmSyncHitTestQuery(v19, v34[0], v34[1], v37, (__int64)&v30, (__int64)&v31);
        EnterCrit(1LL, 0LL);
        v15 = v30;
        if ( v30 == v37 )
        {
          v24 = 1;
          v25 = 1;
        }
        else
        {
          v24 = 0;
          v25 = 0;
        }
        v14 = v39;
        if ( (_WORD)v39 != v24 )
        {
          v14 = v24;
          v39 = v24;
          SetOrClrWF(v25, (__int64 *)a1, v6, 1);
          xxxWindowEvent(0x800Au, a1, -2, v5, 0);
        }
      }
LABEL_28:
      v18 = v38;
      continue;
    }
    xxxReleaseCapture();
    v18 = 1;
    v38 = 1;
  }
  while ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) && !v18 );
  if ( v13 )
  {
    if ( v14 && v13 != 0xF180 )
    {
      SetOrClrWF(0, (__int64 *)a1, v6, 1);
      xxxWindowEvent(0x800Au, a1, -2, v5, 0);
    }
    if ( v38 )
    {
      if ( v15 == v37 )
        return v13;
    }
  }
  return v2;
}
