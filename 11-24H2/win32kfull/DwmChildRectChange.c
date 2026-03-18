/*
 * XREFs of DwmChildRectChange @ 0x140048630
 * Callers:
 *     OffsetWindow @ 0x140030E80 (OffsetWindow.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140049B34 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

LONG_PTR __fastcall DwmChildRectChange(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  INT v12; // r14d
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rbx
  LONG_PTR result; // rax
  __int64 v18; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  __int64 v20; // rbx
  INT v21; // edi
  INT a; // [rsp+30h] [rbp-89h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-81h] BYREF
  int v24; // [rsp+50h] [rbp-69h] BYREF
  __int16 v25; // [rsp+54h] [rbp-65h]
  int v26; // [rsp+78h] [rbp-41h]
  __int64 v27; // [rsp+7Ch] [rbp-3Dh]
  __int128 v28; // [rsp+84h] [rbp-35h]
  __int128 v29; // [rsp+94h] [rbp-25h]
  __int128 v30; // [rsp+A4h] [rbp-15h]
  INT v31; // [rsp+B4h] [rbp-5h]
  __int128 v32; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v33; // [rsp+D0h] [rbp+17h] BYREF
  __int128 v34; // [rsp+E0h] [rbp+27h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  a = 0;
  v32 = *(_OWORD *)(v1 + 88);
  v33 = *(_OWORD *)(v1 + 104);
  v34 = (__int128)*CalculateContentRect(&v23, a1, &a);
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v4, v3);
  if ( CurrentThreadNonPaged
    && *CurrentThreadNonPaged
    && *((_QWORD *)PtiCurrent(v7, v6) + 62)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v9, v8) + 62) + 8LL) + 64LL) & 1) != 0
    && (v10 = *((_QWORD *)a1 + 5), v11 = *(_DWORD *)(v10 + 288), (v11 & 0xF) == 0)
    && (v11 & 0x40000000) != 0
    && (v18 = *(unsigned __int16 *)(v10 + 284), (_WORD)v18 != 96) )
  {
    *(_QWORD *)&v23.left = 0LL;
    ScaledLogPixels = GreGetScaledLogPixels(v18);
    v20 = *(_QWORD *)&v23.left;
    v21 = ScaledLogPixels;
    ScaleDPIRect(
      (unsigned int)&v32,
      (unsigned int)&v32,
      ScaledLogPixels,
      96,
      *(__int64 *)&v23.left,
      *(__int64 *)&v23.left);
    ScaleDPIRect((unsigned int)&v33, (unsigned int)&v33, (unsigned __int16)v21, 96, v20, v20);
    ScaleDPIRect((unsigned int)&v34, (unsigned int)&v34, (unsigned __int16)v21, 96, v20, v20);
    v12 = EngMulDiv(a, v21, 96);
  }
  else
  {
    v12 = a;
  }
  WindowMargins::CheckForChanges(a1, 5LL);
  v13 = *(_QWORD *)a1;
  v16 = (void *)ReferenceDwmApiPort(v15, v14);
  result = IncrementDWMWindowUniqueness();
  if ( v16 )
  {
    memset_0(&v24, 0, 0x68uLL);
    v24 = 6815808;
    v28 = v32;
    v25 = 0x8000;
    v26 = 1073741845;
    v27 = v13;
    v30 = v34;
    v31 = v12;
    v29 = v33;
    EtwUpdateEvent(v13);
    LpcRequestPort(v16, &v24);
    return ObfDereferenceObject(v16);
  }
  return result;
}
