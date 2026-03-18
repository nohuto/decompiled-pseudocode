/*
 * XREFs of ?ProcessAddExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D4CCC
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802D5008 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v8) >= 0 )
  {
    v4 = *((_DWORD *)this + 24);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      v6 = -2147024362;
      v7 = 181;
      goto LABEL_8;
    }
    if ( v5 <= *((_DWORD *)this + 23) )
    {
      *(_QWORD *)(*((_QWORD *)this + 9) + 8LL * v4) = v8;
      *((_DWORD *)this + 24) = v5;
      return;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 72, 8, 1, &v8);
    if ( v6 < 0 )
    {
      v7 = 192;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v7, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
