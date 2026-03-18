/*
 * XREFs of xxxHkCallHook @ 0x1C0120F60
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011FE30 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0008F78 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINDWORD @ 0x1C007EFE8 (fnHkINDWORD.c)
 *     SfnDWORD @ 0x1C01243F0 (SfnDWORD.c)
 *     fnHkINLPMSG @ 0x1C0125540 (fnHkINLPMSG.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C013A218 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     ??1?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@$$V@?$UnlockDomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x1C013A2A8 (--1-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@$$V@-$UnlockDomainShared@VDLT_HOOK@@@SharedUse.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0155DA6 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0155ED2 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     ??1CCheckLLHookTime@@QEAA@XZ @ 0x1C0156EAE (--1CCheckLLHookTime@@QEAA@XZ.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C020FA28 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C020FB38 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C021040C (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0210718 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02108BC (fnHkOPTINLPEVENTMSG.c)
 *     ?CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z @ 0x1C022AEF4 (-CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v6; // esi
  __int64 v7; // rdi
  __int64 v8; // r14
  PERESOURCE *v9; // rax
  PERESOURCE *v10; // rax
  bool v11; // al
  __int64 (*v12)(void); // r12
  __int64 v13; // rdx
  PERESOURCE *v14; // rax
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 CurrentProcessWin32Process; // rax
  int *v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rbx
  int v23; // edi
  bool v24; // zf
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 *v30; // rax
  unsigned __int64 *v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // r13d
  int v36; // ebx
  int v37; // r13d
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // rax
  __int64 (__fastcall *v43)(int, int, int, int, __int64, __int64); // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // r15d
  int v47; // eax
  unsigned int v49[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-F0h]
  __int64 v51; // [rsp+60h] [rbp-E8h]
  unsigned __int64 *v52; // [rsp+68h] [rbp-E0h]
  unsigned int v53; // [rsp+70h] [rbp-D8h]
  __int64 v54; // [rsp+78h] [rbp-D0h] BYREF
  int v55; // [rsp+80h] [rbp-C8h]
  __int64 (*v56)(void); // [rsp+88h] [rbp-C0h]
  __int64 v57; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v58; // [rsp+98h] [rbp-B0h]
  __int64 v59; // [rsp+A0h] [rbp-A8h]
  unsigned __int64 v60; // [rsp+A8h] [rbp-A0h]
  _BYTE v61[56]; // [rsp+D0h] [rbp-78h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = a1;
  v50 = a1;
  v8 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  if ( !gbInDestroyHandleTableObjects )
  {
    v9 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
    if ( ExIsResourceAcquiredExclusiveLite(*v9) != 1 )
    {
      v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
      if ( !ExIsResourceAcquiredSharedLite(*v10) )
        goto LABEL_8;
      if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) == 1
        || (v11 = ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock) != 0) )
      {
        v11 = 1;
      }
      if ( !v11 )
LABEL_8:
        __int2c();
    }
  }
  v12 = *(__int64 (**)(void))(v7 + 56);
  if ( v12 )
  {
    if ( *(_DWORD *)(v7 + 68) == -1 )
    {
      LODWORD(v13) = -1;
    }
    else
    {
      v14 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
      if ( !ExIsResourceAcquiredSharedLite(*v14) )
      {
        v49[0] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      }
      v15 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v15 = *ThreadWin32Thread;
      v13 = *(int *)(v7 + 68);
      v12 = (__int64 (*)(void))(*(_QWORD *)(v7 + 56) + *(_QWORD *)(*(_QWORD *)(v15 + 424) + 8 * v13 + 408));
    }
    if ( (_DWORD)v13 != -1 )
    {
      v17 = 0LL;
      v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v18 )
        v17 = *v18;
      a1 = *(_QWORD *)(v17 + 480);
      *(_QWORD *)(a1 + 224) |= 0x200uLL;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
    v53 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
    v20 = (int *)(v7 + 64);
    v52 = (unsigned __int64 *)(v7 + 64);
    v21 = *(_DWORD *)(v7 + 64);
    v49[0] = v21;
    if ( (v21 & 2) != 0 )
      v22 = gpsi + 392LL;
    else
      v22 = gpsi + 584LL;
    v23 = *(_DWORD *)(v7 + 48);
    v24 = v23 == 4;
    if ( v23 != 4 )
    {
      switch ( v23 )
      {
        case -1:
        case 6:
          SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v61);
          v8 = CallfnHkINLPMSG(v6, v23, a3, v4, v12, (struct _PFNCLIENT *)v22, v49[0]);
          SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v61);
          goto LABEL_75;
        case 0:
          v25 = fnHkOPTINLPEVENTMSG(
                  (unsigned __int16)v6 | ((unsigned __int16)v23 << 16),
                  a3,
                  v4,
                  (_DWORD)v12,
                  *(_QWORD *)(v22 + 152));
          goto LABEL_74;
        case 1:
          v8 = fnHkOPTINLPEVENTMSG(
                 (unsigned __int16)v6 | ((unsigned __int16)v23 << 16),
                 *(_QWORD *)v50,
                 v4,
                 (_DWORD)v12,
                 *(_QWORD *)(v22 + 152));
          *(_DWORD *)v52 &= ~4u;
          goto LABEL_75;
        case 2:
        case 11:
          goto LABEL_33;
        case 3:
          v49[0] = v21;
          v25 = fnHkINLPMSG(
                  (unsigned __int16)v6 | ((unsigned __int16)v23 << 16),
                  a3,
                  v4,
                  (_DWORD)v12,
                  *(_QWORD *)(v22 + 152),
                  (v21 >> 1) & 1,
                  (__int64)v49);
          goto LABEL_74;
        case 5:
          if ( v6 )
          {
            switch ( v6 )
            {
              case 3:
                LOBYTE(v8) = (v21 & 2) != 0;
                v25 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v23 << 16) | 3u, a3, v4, (_DWORD)v12, v8);
                break;
              case 5:
                v25 = fnHkINLPCBTACTIVATESTRUCT(
                        ((unsigned __int16)v23 << 16) | 5u,
                        a3,
                        v4,
                        (_DWORD)v12,
                        *(_QWORD *)(v22 + 152));
                break;
              case 6:
LABEL_47:
                v25 = fnHkINLPMOUSEHOOKSTRUCTEX(
                        (unsigned __int16)v6 | ((unsigned __int16)v23 << 16),
                        a3,
                        (__int128 *)v4,
                        (__int64)v12,
                        *(_QWORD *)(v22 + 152),
                        v20);
                break;
              default:
LABEL_33:
                v25 = fnHkINDWORD(
                        (unsigned __int16)v6 | ((unsigned __int16)v23 << 16),
                        a3,
                        v4,
                        (__int64)v12,
                        *(_QWORD *)(v22 + 152),
                        v20);
                break;
            }
          }
          else
          {
            v26 = (unsigned __int16)v23 << 16;
LABEL_37:
            v25 = fnHkINLPRECT(v26, a3, v4, (_DWORD)v12, *(_QWORD *)(v22 + 152));
          }
LABEL_74:
          v8 = v25;
          break;
        case 7:
          goto LABEL_47;
        case 9:
          SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v61);
          v8 = fnHkINLPDEBUGHOOKSTRUCT(
                 (unsigned __int16)v6 | ((unsigned __int16)v23 << 16),
                 a3,
                 v4,
                 v12,
                 *(_QWORD *)(v22 + 152));
          SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v61);
          goto LABEL_75;
        case 10:
          if ( v6 != 5 )
            goto LABEL_33;
          v26 = ((unsigned __int16)v23 << 16) | 5;
          goto LABEL_37;
        case 12:
          v24 = v23 == 4;
          v27 = *(_QWORD *)(v4 + 40);
          goto LABEL_51;
        case 13:
          v54 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          v55 = v23;
          v56 = v12;
          *(_DWORD *)(gptiCurrent + 696LL) = 1;
          v8 = fnHkINLPKBDLLHOOKSTRUCT(
                 (unsigned __int16)v6 | (*(unsigned __int16 *)(v50 + 48) << 16),
                 a3,
                 v4,
                 (_DWORD)v12,
                 *(_QWORD *)(v22 + 152));
          CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v54);
          goto LABEL_75;
        case 14:
          v54 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          v55 = v23;
          v56 = v12;
          *(_DWORD *)(gptiCurrent + 696LL) = 1;
          v8 = fnHkINLPMSLLHOOKSTRUCT(
                 (unsigned __int16)v6 | (*(unsigned __int16 *)(v50 + 48) << 16),
                 a3,
                 v4,
                 (_DWORD)v12,
                 *(_QWORD *)(v22 + 152));
          CCheckLLHookTime::~CCheckLLHookTime((CCheckLLHookTime *)&v54);
          goto LABEL_75;
        default:
          goto LABEL_75;
      }
      goto LABEL_75;
    }
    v27 = *(_QWORD *)(v4 + 32);
LABEL_51:
    *(_QWORD *)v49 = v27;
    v28 = 0LL;
    if ( !v24 )
      v28 = v4;
    v51 = v28;
    if ( !v24 )
      v4 = 0LL;
    if ( v27 && (*(_DWORD *)(v27 + 84) & 5) != 0 )
    {
LABEL_75:
      W32SetCurrentThreadDpiAwarenessContext(v53);
      return v8;
    }
    v29 = 0LL;
    v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v30 )
      v29 = *v30;
    v31 = *(unsigned __int64 **)(v29 + 480);
    v52 = v31;
    v32 = v50;
    if ( *(_DWORD *)(v50 + 48) == 4 )
    {
      v50 = *(_QWORD *)(v22 + 136);
    }
    else
    {
      v50 = *(_QWORD *)(v22 + 144);
      v31[13] = *(_QWORD *)v51;
    }
    v33 = *v31;
    v59 = *v31 & 0x10;
    v57 = v59;
    v60 = v31[13];
    v58 = v60;
    if ( a3 )
      v34 = v33 | 0x10;
    else
      v34 = v33 & 0xFFFFFFFFFFFFFFEFuLL;
    *v31 = v34;
    v35 = *(_DWORD *)(v32 + 64);
    v36 = *(_DWORD *)(v32 + 48);
    SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::UnlockObjectLock<>(v61);
    v37 = v35 & 2;
    if ( v36 == 4 )
    {
      v38 = *(unsigned int *)(v4 + 16);
      v51 = v38;
      v39 = *(_QWORD *)v4;
      v40 = *(_QWORD *)(v4 + 8);
      if ( ((unsigned int)v38 & 0x1FFFF) >= 0x400 )
      {
        v41 = _HMObjectFromHandle(*(_QWORD *)(v4 + 24));
        v42 = SfnDWORD(v41, v51, v40, v39, (__int64)v12, v50);
LABEL_73:
        v8 = v42;
        SharedUserCritOnly::UnlockDomainShared<DLT_HOOK>::UnlockDomainExclusive<>::UnlockObjectLock<>::~UnlockObjectLock<>(v61);
        *v31 ^= ((unsigned __int8)v59 ^ (unsigned __int8)*v31) & 0x10;
        v31[13] = v60;
        goto LABEL_75;
      }
      v43 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v38]];
      v44 = _HMObjectFromHandle(*(_QWORD *)(v4 + 24));
      v45 = (unsigned int)v51;
    }
    else
    {
      v46 = *(_DWORD *)(v51 + 24);
      v39 = *(_QWORD *)(v51 + 8);
      v40 = *(_QWORD *)(v51 + 16);
      if ( (v46 & 0x1FFFF) >= 0x400 )
      {
        v47 = _HMObjectFromHandle(*(_QWORD *)(v51 + 32));
        v42 = SfnDWORD(v47, v46, v40, v39, (__int64)v12, v50);
        goto LABEL_73;
      }
      v43 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v46]];
      v44 = _HMObjectFromHandle(*(_QWORD *)(v51 + 32));
      v45 = v46;
    }
    LOBYTE(v8) = v37 != 0;
    v42 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 (*)(void), __int64, int, _QWORD))v43)(
            v44,
            v45,
            v40,
            v39,
            v12,
            v50,
            (int)v8 + 2,
            *(_QWORD *)v49);
    v31 = v52;
    goto LABEL_73;
  }
  return 0LL;
}
