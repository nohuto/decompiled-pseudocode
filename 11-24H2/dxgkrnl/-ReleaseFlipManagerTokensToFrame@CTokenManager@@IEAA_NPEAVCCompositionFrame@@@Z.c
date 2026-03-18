/*
 * XREFs of ?ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z @ 0x14001B09C
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x14005EC50 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x14001B38C (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

bool __fastcall CTokenManager::ReleaseFlipManagerTokensToFrame(CTokenManager *this, struct CCompositionFrame *a2)
{
  struct CCompositionFrame **v4; // rcx
  struct CCompositionFrame *v5; // rax
  _QWORD **v6; // rdx
  _QWORD *v7; // rcx
  struct _LIST_ENTRY **v8; // r14
  struct _LIST_ENTRY *v9; // rdi
  _QWORD *v10; // rax
  struct _LIST_ENTRY *v11; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  struct CCompositionFrame *v15; // r8
  struct CCompositionFrame **v16; // rcx
  struct CCompositionFrame *v17; // rdx
  struct CCompositionFrame **v18; // r8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // rax
  struct _LIST_ENTRY *v22; // rsi
  struct _LIST_ENTRY *v23; // rdi
  CPushLock *p_Blink; // rbx
  struct _LIST_ENTRY *v25; // rdi
  struct _LIST_ENTRY *v26; // r12
  struct _LIST_ENTRY *v27; // rdi
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY v30; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v31; // [rsp+30h] [rbp-10h] BYREF
  struct _LIST_ENTRY *v32; // [rsp+38h] [rbp-8h]
  struct _LIST_ENTRY *Blink; // [rsp+70h] [rbp+30h]

  v4 = (struct CCompositionFrame **)((char *)this + 304);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (struct CCompositionFrame *)v4 )
      break;
    if ( *((struct CCompositionFrame ***)v5 + 1) != v4
      || (v17 = *(struct CCompositionFrame **)v5, *(struct CCompositionFrame **)(*(_QWORD *)v5 + 8LL) != v5)
      || (*v4 = v17,
          *((_QWORD *)v17 + 1) = v4,
          v18 = (struct CCompositionFrame **)*((_QWORD *)a2 + 33),
          *v18 != (struct CCompositionFrame *)((char *)a2 + 256)) )
    {
LABEL_25:
      __fastfail(3u);
    }
    *(_QWORD *)v5 = (char *)a2 + 256;
    *((_QWORD *)v5 + 1) = v18;
    *v18 = v5;
    *((_QWORD *)a2 + 33) = v5;
  }
  v6 = (_QWORD **)((char *)this + 320);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 )
      goto LABEL_25;
    v13 = (_QWORD *)*v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_25;
    *v6 = v13;
    v13[1] = v6;
    v14 = (unsigned __int64)(v7 - 1) & -(__int64)(v7 != 0LL);
    v15 = (struct CCompositionFrame *)((v14 + 8) & -(__int64)(v14 != 0));
    v16 = (struct CCompositionFrame **)*((_QWORD *)a2 + 37);
    if ( *v16 != (struct CCompositionFrame *)((char *)a2 + 288) )
      goto LABEL_25;
    *(_QWORD *)v15 = (char *)a2 + 288;
    *((_QWORD *)v15 + 1) = v16;
    *v16 = v15;
    *((_QWORD *)a2 + 37) = v15;
  }
  v32 = (struct _LIST_ENTRY *)&v31;
  v8 = (struct _LIST_ENTRY **)((char *)this + 288);
  v31 = &v31;
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (struct _LIST_ENTRY *)v8 )
      break;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&v9[2].Blink, 0LL);
    Blink = v9[4].Blink;
    CPushLock::ReleaseLock((CPushLock *)&v9[2].Blink);
    v30.Blink = &v30;
    v30.Flink = &v30;
    Flink = v9->Flink;
    if ( v9->Flink->Blink != v9 )
      goto LABEL_25;
    v20 = v9->Blink;
    if ( v20->Flink != v9 )
      goto LABEL_25;
    v20->Flink = Flink;
    Flink->Blink = v20;
    v21 = v30.Blink;
    if ( v30.Blink->Flink != &v30 )
      goto LABEL_25;
    v9->Blink = v30.Blink;
    v9->Flink = &v30;
    v21->Flink = v9;
    v22 = *v8;
    v30.Blink = v9;
    while ( v22 != (struct _LIST_ENTRY *)v8 )
    {
      v26 = v22;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&v22[2].Blink, 0LL);
      v27 = v22[4].Blink;
      CPushLock::ReleaseLock((CPushLock *)&v22[2].Blink);
      v22 = v22->Flink;
      if ( Blink == v27 )
      {
        if ( v22->Blink != v26 )
          goto LABEL_25;
        v28 = v26->Blink;
        if ( v28->Flink != v26 )
          goto LABEL_25;
        v28->Flink = v22;
        v22->Blink = v28;
        v29 = v30.Blink;
        if ( v30.Blink->Flink != &v30 )
          goto LABEL_25;
        v26->Blink = v30.Blink;
        v26->Flink = &v30;
        v29->Flink = v26;
        v30.Blink = v26;
      }
    }
    v23 = v30.Flink;
    KeEnterCriticalRegion();
    p_Blink = (CPushLock *)&v23[2].Blink;
    ExAcquirePushLockSharedEx(&v23[2].Blink, 0LL);
    v25 = v23[4].Blink;
    CPushLock::ReleaseLock(p_Blink);
    FlipManagerObject::ConsumerDwmApplyUpdates(v25, &v30, a2);
    if ( v30.Flink != &v30 )
    {
      v32->Flink = v30.Flink;
      v30.Flink->Blink = v32;
      v30.Blink->Flink = (struct _LIST_ENTRY *)&v31;
      v32 = v30.Blink;
    }
  }
  v10 = v31;
  if ( v31 != &v31 )
  {
    *((_QWORD *)this + 36) = v31;
    v10[1] = v8;
    v11 = v32;
    *((_QWORD *)this + 37) = v32;
    v11->Flink = (struct _LIST_ENTRY *)v8;
  }
  return *((_QWORD *)this + 36) != (_QWORD)this + 288;
}
