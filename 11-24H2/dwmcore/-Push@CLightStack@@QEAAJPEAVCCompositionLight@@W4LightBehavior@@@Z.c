/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1801E9218
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::Push(__int64 a1, CMILRefCountImpl *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edx
  int v6; // ebx
  __int64 (__fastcall *v7)(CMILRefCountImpl *); // rax
  unsigned int v9; // eax
  int v10; // r9d
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v11 = a2;
  v3 = *(_DWORD *)(a1 + 32);
  *((_QWORD *)&v11 + 1) = a3;
  v5 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v6 = -2147024362;
    v9 = 181;
    v10 = -2147024362;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x20u, 0LL);
    return (unsigned int)v6;
  }
  v6 = 0;
  if ( v5 <= *(_DWORD *)(a1 + 28) )
  {
    *(_OWORD *)(*(_QWORD *)(a1 + 8) + 16LL * v3) = v11;
    *(_DWORD *)(a1 + 32) = v5;
    goto LABEL_4;
  }
  v6 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 8, 16, 1, &v11);
  v10 = v6;
  if ( v6 < 0 )
  {
    v9 = 192;
    goto LABEL_8;
  }
LABEL_4:
  v7 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)a2 + 8LL);
  if ( v7 == CMILRefCountImpl::AddReference )
    CMILRefCountImpl::AddReference(a2);
  else
    v7(a2);
  return (unsigned int)v6;
}
