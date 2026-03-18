/*
 * XREFs of ?ProcessAddDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802DDE88
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802DE2A8 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessAddDisplay(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned int v4; // eax
  unsigned int v5; // r8d
  int v6; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v7 = 0LL;
  if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5,
         &v7) >= 0 )
  {
    v4 = *((_DWORD *)this + 38);
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_9;
    }
    if ( v5 > *((_DWORD *)this + 37) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8, 1, &v7);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xC0u, 0LL);
        goto LABEL_9;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v4) = v7;
      *((_DWORD *)this + 38) = v5;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 88LL))(*((_QWORD *)this + 3), v7);
    v7 = 0LL;
LABEL_9:
    ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v7);
  }
}
