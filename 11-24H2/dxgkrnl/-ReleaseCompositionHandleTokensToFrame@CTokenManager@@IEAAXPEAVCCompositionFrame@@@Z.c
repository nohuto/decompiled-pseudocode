/*
 * XREFs of ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@@@Z @ 0x140033074
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x14005EC50 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?Discard@CompositionTokenObject@@QEAAXXZ @ 0x1400331E0 (-Discard@CompositionTokenObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::ReleaseCompositionHandleTokensToFrame(CTokenManager *this, struct CCompositionFrame *a2)
{
  struct CCompositionFrame *v3; // rdi
  struct CCompositionFrame *v4; // rbx
  __int64 v5; // rax
  struct CCompositionFrame **v6; // rax
  struct CCompositionFrame **v7; // rcx
  struct CCompositionFrame **v8; // rcx
  struct CCompositionFrame **v9; // rax
  struct CCompositionFrame **v10; // rcx
  struct CCompositionFrame **v11; // [rsp+20h] [rbp-10h] BYREF
  struct CCompositionFrame *v12; // [rsp+28h] [rbp-8h]
  char v13; // [rsp+50h] [rbp+20h] BYREF

  v12 = (struct CCompositionFrame *)&v11;
  v3 = (CTokenManager *)((char *)this + 272);
  v11 = (struct CCompositionFrame **)&v11;
  while ( 1 )
  {
    v4 = *(struct CCompositionFrame **)v3;
    if ( *(struct CCompositionFrame **)(*(_QWORD *)v3 + 8LL) != v3 )
      goto LABEL_14;
    v5 = *(_QWORD *)v4;
    if ( *(struct CCompositionFrame **)(*(_QWORD *)v4 + 8LL) != v4 )
      goto LABEL_14;
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    v13 = 0;
    if ( (*(int (__fastcall **)(_QWORD *, struct CCompositionFrame *, char *))(*((_QWORD *)v4 - 1) + 32LL))(
           (_QWORD *)v4 - 1,
           a2,
           &v13) < 0 )
    {
      CompositionTokenObject::Discard((struct CCompositionFrame *)((char *)v4 - 48));
      ObfDereferenceObject((char *)v4 - 48);
    }
    else if ( v13 )
    {
      v8 = (struct CCompositionFrame **)*((_QWORD *)a2 + 35);
      if ( *v8 != (struct CCompositionFrame *)((char *)a2 + 272) )
        goto LABEL_14;
      *(_QWORD *)v4 = (char *)a2 + 272;
      *((_QWORD *)v4 + 1) = v8;
      *v8 = v4;
      *((_QWORD *)a2 + 35) = v4;
    }
    else
    {
      v9 = (struct CCompositionFrame **)v12;
      if ( *(struct CCompositionFrame ****)v12 != &v11 )
        goto LABEL_14;
      *((_QWORD *)v4 + 1) = v12;
      *(_QWORD *)v4 = &v11;
      *v9 = v4;
      v12 = v4;
    }
  }
  v6 = v11;
  if ( v11 != (struct CCompositionFrame **)&v11 )
  {
    v7 = (struct CCompositionFrame **)*v11;
    if ( v11[1] == (struct CCompositionFrame *)&v11 )
    {
      while ( v7[1] == (struct CCompositionFrame *)v6 )
      {
        v11 = v7;
        v7[1] = (struct CCompositionFrame *)&v11;
        if ( v6 == (struct CCompositionFrame **)&v11 )
          return;
        v10 = (struct CCompositionFrame **)*((_QWORD *)v3 + 1);
        if ( *v10 != v3 )
          break;
        v6[1] = (struct CCompositionFrame *)v10;
        *v6 = v3;
        *v10 = (struct CCompositionFrame *)v6;
        *((_QWORD *)v3 + 1) = v6;
        v6 = v11;
        if ( v11[1] != (struct CCompositionFrame *)&v11 )
          break;
        v7 = (struct CCompositionFrame **)*v11;
      }
    }
LABEL_14:
    __fastfail(3u);
  }
}
