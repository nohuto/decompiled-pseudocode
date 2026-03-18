/*
 * XREFs of UnlinkWindow @ 0x1C010C350
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C00A6D38 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x1C00AD874 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00F4184 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C0082ED4 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00B6C70 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

LONG_PTR __fastcall UnlinkWindow(__int64 a1, __int64 *a2)
{
  char v2; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 BufferChainingDpc_low; // r14
  __int64 v20; // xmm1_8
  __int64 v21; // rdx
  CVisRgnTrackerProp *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  struct tagWND *i; // rdi
  __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  unsigned __int64 *v32; // rdi
  __int64 v33; // rax
  LONG_PTR result; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  void *v39; // rbx
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  CVisRgnTrackerProp *Prop; // rax
  struct tagWND *j; // rdi
  int v50; // eax
  tagObjLock **v51; // rdi
  int v52; // [rsp+20h] [rbp-69h]
  _QWORD *v53; // [rsp+30h] [rbp-59h] BYREF
  __int64 v54; // [rsp+38h] [rbp-51h]
  unsigned __int128 v55; // [rsp+40h] [rbp-49h] BYREF
  __int64 v56; // [rsp+50h] [rbp-39h]
  _BYTE v57[38]; // [rsp+60h] [rbp-29h] BYREF
  __int16 v58; // [rsp+86h] [rbp-3h]
  int v59; // [rsp+88h] [rbp-1h]
  __int64 v60; // [rsp+8Ch] [rbp+3h]
  __int64 v61; // [rsp+94h] [rbp+Bh]

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 320) & 0x2000000) == 0 || !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_31;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    if ( v7 )
      v6 = *(_QWORD *)(v7 + 24);
  }
  if ( a1 == v6 )
    goto LABEL_31;
  v8 = 0LL;
  if ( v5 )
    v8 = *(_QWORD *)(v5 + 104);
  if ( a1 == v8 || a2 == (__int64 *)gTermIO[1] )
  {
LABEL_31:
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v10 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v10 && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 && (*(_DWORD *)(a1 + 320) & 0x2000000) != 0 )
    {
      v11 = *(_QWORD **)(a1 + 104);
      v12 = v11;
      if ( v11 )
      {
        while ( 1 )
        {
          v13 = v12[5];
          v14 = *(_BYTE *)(v13 + 31);
          if ( (v14 & 0x10) == 0 || (v14 & 0x20) != 0 && v12 != v11 )
            break;
          if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D )
          {
            v12 = (_QWORD *)v12[13];
            if ( v12 )
              continue;
          }
          goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, *v11);
        v15 = *(_QWORD *)(a1 + 104);
        if ( v15
          && (v16 = *(_QWORD *)(a1 + 24)) != 0
          && (v17 = *(_QWORD *)(v16 + 8)) != 0
          && v15 == *(_QWORD *)(v17 + 24) )
        {
          v2 = 1;
        }
        else if ( a1 != GetDesktopWindow(a1) && (*(_BYTE *)(v11[5] + 31LL) & 2) != 0 )
        {
          Prop = (CVisRgnTrackerProp *)GetProp((__int64)v11, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL, v47);
          if ( Prop )
            CVisRgnTrackerProp::MarkDirty(Prop);
        }
        v18 = *(_QWORD *)(a1 + 144);
        BufferChainingDpc_low = LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
        *(_QWORD *)v57 = gDomainDummyLock;
        v57[8] = 0;
        memset(&v57[16], 0, 17);
        v20 = *(_QWORD *)(v18 + 16);
        v55 = *(_OWORD *)v18;
        LOBYTE(v59) = 0;
        v56 = v20;
        if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
        {
          v50 = 0;
          LOBYTE(v59) = 1;
          if ( v18 == gObjDummyLock )
            v18 = 0LL;
          *(_QWORD *)&v57[16] = v18;
          v52 = 0;
          v51 = (tagObjLock **)&v57[16];
          do
          {
            if ( *v51 )
            {
              tagObjLock::LockExclusive(*v51);
              v50 = v52;
            }
            ++v50;
            ++v51;
            v52 = v50;
          }
          while ( !v50 );
          v57[32] = 1;
        }
        v22 = (CVisRgnTrackerProp *)RealGetProp(*(_QWORD *)(a1 + 144), BufferChainingDpc_low, 1LL);
        if ( (_BYTE)v59 && v57[32] )
        {
          if ( *(_QWORD *)&v57[16] )
            tagObjLock::UnLockExclusive(*(tagObjLock **)&v57[16]);
          v57[32] = 0;
        }
        if ( v22 )
          CVisRgnTrackerProp::MarkDirty(v22);
        for ( i = *(struct tagWND **)(a1 + 112); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          MarkDirtyWorker(i, v21, v23, v24);
        if ( !v2 )
        {
          for ( j = *(struct tagWND **)(a1 + 88); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)j + 5) + 31LL) & 0x14) == 0x14 )
              MarkDirtyWorker(j, v21, v23, v24);
          }
        }
      }
    }
  }
  v26 = (__int64 *)(a1 + 88);
  if ( a2[14] == a1 )
  {
    v45 = *v26;
    if ( *v26 )
      v46 = *(_QWORD *)(v45 + 48);
    else
      v46 = 0LL;
    *(_QWORD *)(a2[5] + 56) = v46;
    v53 = a2 + 14;
    v54 = v45;
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 96);
    if ( !v27 )
      goto LABEL_38;
    v28 = *v26;
    v29 = (_QWORD *)(v27 + 88);
    v30 = *(_QWORD *)(v27 + 40);
    if ( *v26 )
      v31 = *(_QWORD *)(v28 + 48);
    else
      v31 = 0LL;
    *(_QWORD *)(v30 + 72) = v31;
    v53 = v29;
    v54 = v28;
  }
  HMAssignmentLock(&v53, 0LL);
LABEL_38:
  v32 = (unsigned __int64 *)(a1 + 96);
  v33 = *v26;
  if ( *v26 )
  {
    v41 = *v32;
    v42 = v33 + 96;
    v43 = *(_QWORD *)(v33 + 40);
    if ( *v32 )
      v44 = *(_QWORD *)(v41 + 48);
    else
      v44 = 0LL;
    *(_QWORD *)(v43 + 80) = v44;
    v55 = __PAIR128__(v41, v42);
    HMAssignmentLock(&v55, 0LL);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL) = 0LL;
    HMAssignmentUnlock(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 80LL) = 0LL;
  result = HMAssignmentUnlock(a1 + 96);
  *(_DWORD *)(a1 + 320) &= 0xFCFFFFFF;
  if ( v9 )
  {
    v37 = *a2;
    v38 = *(_QWORD *)a1;
    v39 = (void *)ReferenceDwmApiPort(v36, v35);
    result = SGDGetSessionState(v40);
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 32) + 13248LL));
    if ( v39 )
    {
      v58 = 0;
      *(_DWORD *)v57 = 3932180;
      v59 = 1073741843;
      *(_WORD *)&v57[4] = 0x8000;
      v60 = v38;
      memset(&v57[6], 0, 32);
      v61 = v37;
      LpcRequestPort(v39, v57);
      return ObfDereferenceObject(v39);
    }
  }
  return result;
}
