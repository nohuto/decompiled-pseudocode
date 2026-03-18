/*
 * XREFs of xxxUpdateGlobalsAndSendKeyEvent @ 0x1C006B3FC
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 *     xxxKeyEventEx @ 0x1C006A7C8 (xxxKeyEventEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     GetActiveHKL @ 0x1C006B1A0 (GetActiveHKL.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x1C006B2DC (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     UpdateKeyLights @ 0x1C006EB00 (UpdateKeyLights.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C0070D90 (IsKeyboardDelegationEnabledForThread.c)
 *     UpdateAsyncKeyState @ 0x1C0089620 (UpdateAsyncKeyState.c)
 *     xxxWindowEvent @ 0x1C00C4C0C (xxxWindowEvent.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C00C9988 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     GetKeyboardDelegationTargetQ @ 0x1C00D5540 (GetKeyboardDelegationTargetQ.c)
 *     PtiKbdFromQ @ 0x1C00E5C1E (PtiKbdFromQ.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01B5B4C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C01E5118 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?LowLevelHexNumpad@@YAXGEHG@Z @ 0x1C01E9D70 (-LowLevelHexNumpad@@YAXGEHG@Z.c)
 *     ApiSetEditionDoHotKeys @ 0x1C0205E1C (ApiSetEditionDoHotKeys.c)
 *     ApiSetEditionHandleAltTab @ 0x1C0206344 (ApiSetEditionHandleAltTab.c)
 *     ApiSetEditionHandleAltTabCancel @ 0x1C02063EC (ApiSetEditionHandleAltTabCancel.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C020647C (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ApiSetEditionHandleRawInput @ 0x1C0206620 (ApiSetEditionHandleRawInput.c)
 *     ApiSetEditionIsSAS @ 0x1C0206AEC (ApiSetEditionIsSAS.c)
 *     HasHidTable @ 0x1C023307C (HasHidTable.c)
 */

char __fastcall xxxUpdateGlobalsAndSendKeyEvent(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        __int64 a10,
        __int64 *a11,
        __int64 a12)
{
  struct tagTHREADINFO *v12; // r13
  unsigned __int16 v15; // bp
  int v16; // r14d
  unsigned __int16 v17; // dx
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 KeyboardDelegationTargetQ; // rax
  unsigned __int8 v34; // bp
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r12d
  __int64 v38; // rcx
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int16 v52; // di
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  __int16 v57; // [rsp+80h] [rbp-68h]
  int v58; // [rsp+84h] [rbp-64h]
  int v59; // [rsp+88h] [rbp-60h] BYREF
  __int64 v60; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v61[10]; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int16 v62; // [rsp+F0h] [rbp+8h]
  unsigned int v66; // [rsp+140h] [rbp+58h]

  v12 = gptiCurrent;
  v15 = a1 & 0x100;
  v16 = a1 & 0x8000;
  v62 = a1 & 0x100;
  v17 = (v16 != 0) + 256;
  v57 = v17;
  v18 = v17;
  v58 = v17;
  v59 = 0;
  if ( a11 )
    v19 = *a11;
  else
    v19 = 0LL;
  v61[0] = v19;
  v66 = 0;
  v60 = -1LL;
  if ( a8 )
  {
    if ( a10 )
    {
      v20 = *(_QWORD *)a10;
      v66 = *(_DWORD *)(a10 + 8);
    }
    else
    {
      v21 = *((_QWORD *)gptiCurrent + 53);
      v20 = *(_QWORD *)(v21 + 896);
      v66 = *(_DWORD *)(v21 + 12) >> 31;
      v18 = v17;
    }
  }
  else
  {
    v20 = v60;
  }
  v22 = CKeyboardProcessor::HandleLeftRightVKs(a1);
  if ( (*(_BYTE *)(SGDGetUserSessionState(v24, v23, v25, v26) + 14060) & 0x10) != 0 )
  {
    v31 = SGDGetUserSessionState(v28, v27, v29, v30);
    v27 = 4LL;
    if ( (*(_BYTE *)(v31 + 14060) & 4) == 0 )
      v58 = v18 + 4;
  }
  if ( gptiBlockInput && (struct tagTHREADINFO *)gptiBlockInput != v12 )
  {
    LODWORD(v60) = 0;
    LOBYTE(v28) = a1;
    if ( !(unsigned int)ApiSetEditionIsSAS(v28, &v60) )
    {
      v38 = 2LL;
LABEL_41:
      LOBYTE(v39) = InputTraceLogging::Keyboard::DropInput(v38);
      return v39;
    }
    gptiBlockInput = 0LL;
  }
  v32 = gpqForeground;
  if ( gpqForeground )
  {
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 104)) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
        v32 = KeyboardDelegationTargetQ;
    }
  }
  if ( (_BYTE)v22 != (_BYTE)a1 )
  {
    v34 = a1 ^ 1;
    if ( !v16
      || (v35 = SGDGetUserSessionState(v28, v27, v29, v30),
          v27 = (unsigned int)(1 << (2 * (v34 & 3))),
          ((unsigned __int8)v27 & *(_BYTE *)(((unsigned __int64)v34 >> 2) + v35 + 13992)) == 0) )
    {
      if ( !gptiBlockInput || (struct tagTHREADINFO *)gptiBlockInput == v12 )
      {
        LOBYTE(v27) = v22;
        LOBYTE(v29) = v16 != 0;
        UpdateAsyncKeyState(v32, v27, v29);
      }
    }
    v15 = v62;
  }
  LOBYTE(v27) = a1;
  LOBYTE(v29) = v16 != 0;
  UpdateAsyncKeyState(v32, v27, v29);
  if ( gfEnableHexNumpad )
  {
    if ( v32 )
    {
      v36 = PtiKbdFromQ(v32);
      if ( !(unsigned int)HasHidTable(v36)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(v32) + 424) + 856LL) + 100LL) & 0x20) == 0 )
      {
        LowLevelHexNumpad(a2, v22, v16, v15);
      }
    }
  }
  if ( !v16
    && ((_BYTE)v22 == 20 || (unsigned __int8)(v22 + 112) <= 1u || (_BYTE)v22 == 21 && (GetActiveHKL() & 0x3FF) == 0x11) )
  {
    UpdateKeyLights(a8);
    xxxWindowEvent(-2147483642, 0, v22, 0, 0);
  }
  if ( gptiForeground )
    v37 = *((_DWORD *)gptiForeground + 221);
  else
    v37 = 0;
  if ( (unsigned int)ApiSetEditionHandleAltTabCancel(v20, v66, (_DWORD)v12, v16, v22, a8, v37) )
  {
    v38 = 4LL;
    goto LABEL_41;
  }
  LOBYTE(v40) = a1;
  LOBYTE(v41) = v22;
  v39 = ApiSetEditionDoHotKeys(v41, v40, v16, v37, (__int64)v61, (__int64)&v59);
  if ( v39 )
  {
    if ( (unsigned int)dword_1C0289810 > 4 )
    {
      LOBYTE(v39) = tlgKeywordOn((__int64)&dword_1C0289810, 0x4000LL);
      if ( (_BYTE)v39 )
        LOBYTE(v39) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
                        &dword_1C0289810,
                        &unk_1C025E223);
    }
    return v39;
  }
  if ( !(unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, v12, v20, v66) )
  {
    v38 = 0LL;
    goto LABEL_41;
  }
  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 1) == 0 )
  {
    if ( (a1 & 0x1000) == 0 || (v46 = 0LL, !a8) )
      v46 = a6;
    LOBYTE(v45) = a1;
    LOBYTE(v44) = v22;
    if ( (unsigned int)ApiSetEditionHandleRawInput(a3, a9, v44, v45, v58, v46, a2, a1, v16, a5) )
    {
      v38 = 5LL;
      goto LABEL_41;
    }
  }
  if ( v59 )
  {
    v38 = 6LL;
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(SGDGetUserSessionState(v43, v42, v44, v45) + 13996) & 0x10) == 0
    || (v51 = SGDGetUserSessionState(v48, v47, v49, v50), v48 = 4LL, (*(_BYTE *)(v51 + 13996) & 4) != 0)
    || (_BYTE)v22 == 23 )
  {
    if ( (_BYTE)v22 == 18 )
    {
      if ( v16 )
      {
        v54 = SGDGetUserSessionState(v48, v47, v49, v50);
        LOBYTE(v55) = 18;
        v52 = v57 + 4;
        if ( !*(_DWORD *)(v54 + 13816) )
          v52 = v57;
        ApiSetEditionHandleAltTab(v55, a2, v62, a3, a4, (__int64)v61, a5, v52);
        goto LABEL_73;
      }
      gppiLockSFW = 0LL;
    }
    v52 = v57;
  }
  else
  {
    v62 |= 0x2000u;
    v52 = v57 + 4;
    v53 = SGDGetUserSessionState(4LL, v47, v49, v50);
    if ( (_BYTE)v22 == 18 )
    {
      *(_DWORD *)(v53 + 13816) = 1;
      if ( !v16 )
        gppiLockSFW = 0LL;
    }
    else
    {
      *(_DWORD *)(v53 + 13816) = 0;
    }
  }
LABEL_73:
  if ( a8 && HIDWORD(v61[0]) == 4 && a6 )
    a4 = *(unsigned __int16 *)(a6 + 6);
  LOBYTE(v39) = ApiSetEditionHandleAndPostKeyEvent(
                  a8,
                  v20,
                  v66,
                  v16,
                  v22,
                  v37,
                  a2,
                  a1,
                  v62,
                  a7,
                  (__int64)v61,
                  a3,
                  a5,
                  a4,
                  v52,
                  a12);
  return v39;
}
