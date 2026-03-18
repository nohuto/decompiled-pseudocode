/*
 * XREFs of ?Discard@CCompositionFrame@@UEAAXXZ @ 0x140024CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140024F78 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x140025078 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrame::Discard(CCompositionFrame *this)
{
  __int64 (__fastcall ***i)(_QWORD); // rdi
  struct CLegacyTokenBuffer *v3; // rdx
  CCompositionFrame **v4; // rsi
  CCompositionFrame **v5; // rax
  CCompositionFrame *v6; // rcx
  CCompositionFrame **v7; // rdi
  CCompositionFrame *v8; // rcx
  CCompositionFrame **v9; // rsi
  CCompositionFrame **v10; // rax
  CCompositionFrame *v11; // rcx
  CCompositionFrame **v12; // rdi
  CCompositionFrame *v13; // rcx
  __int64 v14; // rdx

  for ( i = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 26); i; *((_QWORD *)this + 26) = i )
  {
    i = (__int64 (__fastcall ***)(_QWORD))(**i)(i);
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 26) + 8LL))(*((_QWORD *)this + 26), v14);
  }
  v3 = (struct CLegacyTokenBuffer *)*((_QWORD *)this + 27);
  *((_DWORD *)this + 50) = 3;
  if ( v3 )
  {
    CTokenManager::ReturnLegacyTokenBuffer(*((CTokenManager **)this + 38), v3);
    *((_QWORD *)this + 27) = 0LL;
  }
  v4 = (CCompositionFrame **)((char *)this + 256);
  *((_BYTE *)this + 224) = 0;
  v5 = (CCompositionFrame **)*((_QWORD *)this + 32);
  if ( v5[1] != (CCompositionFrame *)((char *)this + 256) )
    goto LABEL_20;
  v6 = *v5;
  if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
    goto LABEL_20;
  *v4 = v6;
  *((_QWORD *)v6 + 1) = v4;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v7 = v5 - 1;
      (*((void (__fastcall **)(CCompositionFrame **))*(v5 - 1) + 7))(v5 - 1);
      (*(void (__fastcall **)(CCompositionFrame **, __int64))*v7)(v7, 1LL);
      v5 = (CCompositionFrame **)*v4;
      if ( *((CCompositionFrame ***)*v4 + 1) != v4 )
        break;
      v8 = *v5;
      if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
        break;
      *v4 = v8;
      *((_QWORD *)v8 + 1) = v4;
      if ( v5 == v4 )
        goto LABEL_10;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_10:
  v9 = (CCompositionFrame **)((char *)this + 272);
  v10 = (CCompositionFrame **)*((_QWORD *)this + 34);
  if ( v10[1] != (CCompositionFrame *)((char *)this + 272) )
    goto LABEL_20;
  v11 = *v10;
  if ( *((CCompositionFrame ***)*v10 + 1) != v10 )
    goto LABEL_20;
  *v9 = v11;
  for ( *((_QWORD *)v11 + 1) = v9; v10 != v9; *((_QWORD *)v13 + 1) = v9 )
  {
    v12 = v10 - 6;
    (*((void (__fastcall **)(CCompositionFrame **))*(v10 - 1) + 7))(v10 - 1);
    ObfDereferenceObject(v12);
    v10 = (CCompositionFrame **)*v9;
    if ( *((CCompositionFrame ***)*v9 + 1) != v9 )
      goto LABEL_20;
    v13 = *v10;
    if ( *((CCompositionFrame ***)*v10 + 1) != v10 )
      goto LABEL_20;
    *v9 = v13;
  }
  FlipManagerDwmProcessFlipManagerSignal((struct _LIST_ENTRY *)this + 18, *((_QWORD *)this + 24));
}
