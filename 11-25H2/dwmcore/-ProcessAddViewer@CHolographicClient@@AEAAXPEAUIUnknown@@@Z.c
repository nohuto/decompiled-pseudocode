/*
 * XREFs of ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802DE118
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802DE2A8 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessAddViewer(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  lpVtbl = a2->lpVtbl;
  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v10) >= 0 )
  {
    v4 = v10;
    v5 = *((_QWORD *)this + 20);
    v6 = 0LL;
    v7 = *((unsigned int *)this + 46);
    while ( (unsigned int)v6 < (unsigned int)v7 )
    {
      if ( v10 == *(_QWORD *)(v5 + 8 * v6) )
        goto LABEL_11;
      v6 = (unsigned int)(v6 + 1);
    }
    v8 = v7 + 1;
    if ( (int)v7 + 1 < (unsigned int)v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_15:
      v4 = v10;
      goto LABEL_11;
    }
    if ( v8 > *((_DWORD *)this + 45) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 160, 8, 1, &v10);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xC0u, 0LL);
        goto LABEL_15;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 8 * v7) = v10;
      *((_DWORD *)this + 46) = v8;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 200LL))(*((_QWORD *)this + 3), v10);
    v4 = 0LL;
    v10 = 0LL;
LABEL_11:
    ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v4);
  }
}
