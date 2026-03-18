/*
 * XREFs of ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x140024E80
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x140024F78 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrame::Confirm(CCompositionFrame *this)
{
  CCompositionFrame *v1; // rdi
  CCompositionFrame *v2; // rsi
  CCompositionFrame **v4; // rsi
  CCompositionFrame **v5; // rax
  CCompositionFrame *v6; // rcx
  CCompositionFrame **v7; // rdi
  CCompositionFrame *v8; // rcx

  v1 = (CCompositionFrame *)((char *)this + 256);
  *((_DWORD *)this + 50) = 1;
  v2 = (CCompositionFrame *)*((_QWORD *)this + 32);
  if ( v2 != (CCompositionFrame *)((char *)this + 256) )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v2 - 1) + 40LL))((__int64)v2 - 8);
      v2 = *(CCompositionFrame **)v2;
    }
    while ( v2 != v1 );
  }
  v4 = (CCompositionFrame **)((char *)this + 272);
  v5 = (CCompositionFrame **)*((_QWORD *)this + 34);
  if ( v5[1] != (CCompositionFrame *)((char *)this + 272) )
    goto LABEL_12;
  v6 = *v5;
  if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
    goto LABEL_12;
  *v4 = v6;
  *((_QWORD *)v6 + 1) = v4;
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v7 = v5 - 6;
      (*((void (__fastcall **)(CCompositionFrame **))*(v5 - 1) + 7))(v5 - 1);
      ObfDereferenceObject(v7);
      v5 = (CCompositionFrame **)*v4;
      if ( *((CCompositionFrame ***)*v4 + 1) != v4 )
        break;
      v8 = *v5;
      if ( *((CCompositionFrame ***)*v5 + 1) != v5 )
        break;
      *v4 = v8;
      *((_QWORD *)v8 + 1) = v4;
      if ( v5 == v4 )
        goto LABEL_5;
    }
LABEL_12:
    __fastfail(3u);
  }
LABEL_5:
  FlipManagerDwmProcessFlipManagerSignal((struct _LIST_ENTRY *)this + 18, *((_QWORD *)this + 24));
}
