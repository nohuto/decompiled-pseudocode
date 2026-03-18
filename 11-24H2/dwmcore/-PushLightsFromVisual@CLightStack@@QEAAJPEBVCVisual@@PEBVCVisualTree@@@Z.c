/*
 * XREFs of ?PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18017B830
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18017BC10 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::PushLightsFromVisual(
        CLightStack *this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  __int128 *v7; // r12
  unsigned int v8; // r14d
  unsigned int i; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  CMILRefCountImpl *v12; // r15
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 (__fastcall *v15)(CMILRefCountImpl *); // rax
  int v16; // r13d
  unsigned int v17; // eax
  _DWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF

  if ( !(unsigned int)((__int64)(*((_QWORD *)a2 + 35) - *((_QWORD *)a2 + 34)) >> 4)
    && !(unsigned int)((__int64)(*((_QWORD *)a2 + 38) - *((_QWORD *)a2 + 37)) >> 4) )
  {
    return 0LL;
  }
  v18[0] = 0;
  v7 = (__int128 *)v18;
  v18[1] = 1;
LABEL_5:
  if ( v7 == &v19 )
    return 0LL;
  v8 = *(_DWORD *)v7;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)CVisual::GetLightsCount(a2, v8) )
    {
      v7 = (__int128 *)((char *)v7 + 4);
      goto LABEL_5;
    }
    v10 = v8 ? *((_QWORD *)a2 + 38) - *((_QWORD *)a2 + 37) : *((_QWORD *)a2 + 35) - *((_QWORD *)a2 + 34);
    if ( i >= (unsigned int)(v10 >> 4) )
    {
      v12 = 0LL;
    }
    else
    {
      v11 = v8 ? *((_QWORD *)a2 + 37) : *((_QWORD *)a2 + 34);
      v12 = *(CMILRefCountImpl **)(v11 + 16LL * i);
    }
    if ( *((_BYTE *)v12 + 170)
      && (*(unsigned __int8 (__fastcall **)(CMILRefCountImpl *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v12 + 240LL))(
           v12,
           a3,
           a2) )
    {
      break;
    }
LABEL_21:
    ;
  }
  *(_QWORD *)&v19 = v12;
  v13 = *((_DWORD *)this + 8);
  *((_QWORD *)&v19 + 1) = v8;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v16 = -2147024362;
    v17 = 181;
    goto LABEL_27;
  }
  if ( v14 <= *((_DWORD *)this + 7) )
  {
    *(_OWORD *)(*((_QWORD *)this + 1) + 16LL * v13) = v19;
    *((_DWORD *)this + 8) = v14;
    goto LABEL_19;
  }
  v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 16, 1, &v19);
  if ( v16 >= 0 )
  {
LABEL_19:
    v15 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v12 + 8LL);
    if ( v15 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v12);
    else
      v15(v12);
    goto LABEL_21;
  }
  v17 = 192;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, v17, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x20u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4Bu, 0LL);
  return (unsigned int)v16;
}
