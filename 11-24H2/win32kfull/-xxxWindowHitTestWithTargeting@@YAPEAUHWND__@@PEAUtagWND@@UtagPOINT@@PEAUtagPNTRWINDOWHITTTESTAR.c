/*
 * XREFs of ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1401B6258
 * Callers:
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1401B4188 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x140159374 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1401593B4 (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1401B5748 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1401B6980 (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1401B703C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1401E6890 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1401EF67C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z @ 0x1402A3564 (-TouchTargetingIsSpecialTarget@@YAHPEAUtagWND@@0@Z.c)
 */

int *__fastcall xxxWindowHitTestWithTargeting(__int64 a1, struct tagPOINT a2, __int64 a3, struct tagRECT *a4, int a5)
{
  __int64 v5; // rsi
  struct tagRECT v6; // xmm6
  struct tagPOINT v8; // rbx
  int *v9; // r13
  int v11; // r15d
  struct tagTOUCHTARGETINGCONTACT *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r15
  unsigned int Prop; // r12d
  __int64 UserSessionState; // rax
  _OWORD *v24; // rax
  struct tagRECT *v25; // r8
  __int128 v26; // xmm1
  int *v27; // rcx
  int v28; // eax
  struct tagPOINT *v29; // r8
  struct tagRECT *v30; // r12
  const struct _D3DMATRIX *v31; // rcx
  struct tagPOINT *v32; // rax
  __int64 v33; // rax
  int v35; // [rsp+48h] [rbp-31h] BYREF
  int started; // [rsp+4Ch] [rbp-2Dh]
  int v37; // [rsp+50h] [rbp-29h]
  int v38; // [rsp+54h] [rbp-25h]
  int v39; // [rsp+58h] [rbp-21h]
  int v40; // [rsp+5Ch] [rbp-1Dh] BYREF
  struct tagWND *v41; // [rsp+60h] [rbp-19h]
  struct tagRECT v42; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter3[4]; // [rsp+78h] [rbp-1h] BYREF
  int v44; // [rsp+D8h] [rbp+5Fh] BYREF
  struct tagPOINT v45; // [rsp+E0h] [rbp+67h] BYREF
  struct tagRECT *v46; // [rsp+F0h] [rbp+77h]

  v46 = a4;
  v45 = a2;
  v5 = a1;
  v6 = *a4;
  v40 = -2;
  v35 = 0;
  v44 = 0;
  v8 = a2;
  v39 = 0;
  v9 = 0LL;
  v41 = 0LL;
  started = 0;
  v11 = 0;
  if ( a1 && *(_DWORD *)(a3 + 88) == 2 )
  {
    v13 = *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40);
    v41 = *(struct tagWND **)(a1 + 104);
    started = CanPointStartResize(v41, v13, a2);
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, 0LL);
LABEL_52:
  if ( v5 && !v11 )
  {
    while ( 1 )
    {
      Win32HM_ExchangeThreadLock<1>(v5, (__int64)BugCheckParameter3);
      v15 = *(_QWORD *)(a3 + 40);
      if ( !*(_DWORD *)(v15 + 176) && !*(_DWORD *)(v15 + 180) )
        break;
      if ( *(_QWORD *)(a3 + 56) && !*(_DWORD *)(a3 + 64) )
        break;
      v16 = *(_DWORD *)(v5 + 380) & 0x40000000;
      if ( !v16 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x10) == 0 )
        goto LABEL_51;
      v17 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v17 + 26) & 8) != 0 && (*(_BYTE *)(v17 + 24) & 0x20) != 0 )
        goto LABEL_51;
      v18 = IsWindowDesktopComposed(v5);
      v20 = 0LL;
      if ( v18 )
      {
        if ( IsWindowCloaked((const struct tagWND *)v5) )
          goto LABEL_51;
      }
      if ( started != (_DWORD)v20 && (unsigned int)TouchTargetingIsSpecialTarget(v41, (struct tagWND *)v5) )
        goto LABEL_51;
      v21 = (_DWORD *)(a3 + 88);
      v35 = v20;
      if ( *(_DWORD *)(a3 + 88) != (_DWORD)v20 || v16 )
      {
        UserSessionState = W32GetUserSessionState(v19, v14);
        Prop = GetProp(v5, *(unsigned __int16 *)(UserSessionState + 41412), 1u);
        v20 = 0LL;
      }
      else
      {
        Prop = 4;
      }
      if ( *(_DWORD *)(a3 + 84) != (_DWORD)v20 && *(_QWORD *)(v5 + 216) != v20 )
      {
        if ( gbIgnoreStressedOutStuff == (_DWORD)v20 )
        {
          if ( *(_QWORD *)(a3 + 96) != v20 )
          {
            v37 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3214LL);
            LODWORD(v20) = 0;
          }
          if ( gbIgnoreStressedOutStuff == (_DWORD)v20 && *(_DWORD *)(a3 + 88) != 1 )
          {
            v38 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3215LL);
          }
        }
        v24 = *(_OWORD **)(v5 + 216);
        v25 = *(struct tagRECT **)(a3 + 40);
        *(_OWORD *)(a3 + 104) = *v24;
        *(_OWORD *)(a3 + 120) = v24[1];
        *(_OWORD *)(a3 + 136) = v24[2];
        v26 = v24[3];
        *(_QWORD *)(a3 + 96) = a3 + 104;
        *(_OWORD *)(a3 + 152) = v26;
        ApplyWindowTransform((const struct _D3DMATRIX *)(a3 + 104), &v45, v25, 1);
        TransformRect(*(const struct _D3DMATRIX **)(a3 + 96), v46, 1);
        v8 = v45;
        v21 = (_DWORD *)(a3 + 88);
      }
      v42 = *v46;
      v27 = (int *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))xxxWindowHitTestFromTargetingProperty)(
                     v5,
                     v8,
                     a3,
                     &v44,
                     (unsigned __int16)Prop,
                     &v42);
      if ( *v21 < 0xFu )
      {
        v28 = v44;
      }
      else
      {
        v28 = 0;
        *(_DWORD *)(a3 + 180) = 1;
        v44 = 0;
      }
      if ( v28 )
      {
        v42 = *v46;
        v27 = xxxTargetingHitTest(v5, a2, v8, a3, &v35, &v42, Prop, a5);
      }
      if ( !v9 && v27 )
        v9 = v27;
      v29 = *(struct tagPOINT **)(a3 + 40);
      v11 = v39;
      if ( *(_QWORD *)(a3 + 168) == v5 )
        v11 = 1;
      v39 = v11;
      xxxSendNCHitTest(
        (struct tagWND *)v5,
        a2,
        v29[4],
        (struct tagPOINT *)(a3 + 48),
        &v40,
        (struct tagPNTRWINDOWHITTTESTARGS *)a3);
      v30 = v46;
      if ( v40 != -1 )
        ClipContact((struct tagWND *)v5, *(struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v35, v46);
      if ( *(_DWORD *)(a3 + 84) )
      {
        v31 = *(const struct _D3DMATRIX **)(a3 + 96);
        if ( v31 )
        {
          if ( *(_DWORD *)(a3 + 88) == 1 )
          {
            ApplyWindowTransform(v31, &v45, *(struct tagRECT **)(a3 + 40), 0);
            v32 = *(struct tagPOINT **)(a3 + 40);
            v8 = v45;
            *(_QWORD *)(a3 + 96) = 0LL;
            *v30 = v6;
            v32[4] = a2;
          }
        }
      }
      if ( !v11 )
      {
LABEL_51:
        v5 = *(_QWORD *)(v5 + 88);
        goto LABEL_52;
      }
      v33 = *(_QWORD *)(v5 + 120);
      if ( !v33 || v33 == v5 )
        break;
      v5 = *(_QWORD *)(v5 + 120);
    }
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v14);
  return v9;
}
