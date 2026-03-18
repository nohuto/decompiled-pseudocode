/*
 * XREFs of ?PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18017BA80
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18017BC10 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::PopLightsFromVisual(
        CLightStack *this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  char *v7; // r14
  unsigned int v8; // r15d
  unsigned int i; // ebp
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int64 (__fastcall *v16)(CCachedVisualImage *, __int64, __int64); // rax
  _DWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)((__int64)(*((_QWORD *)a2 + 35) - *((_QWORD *)a2 + 34)) >> 4)
    || (unsigned int)((__int64)(*((_QWORD *)a2 + 38) - *((_QWORD *)a2 + 37)) >> 4) )
  {
    v7 = (char *)v17;
    v17[0] = 0;
    v17[1] = 1;
    while ( v7 != &v18 )
    {
      v8 = *(_DWORD *)v7;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount(a2, v8); ++i )
      {
        if ( v8 )
          v10 = *((_QWORD *)a2 + 38) - *((_QWORD *)a2 + 37);
        else
          v10 = *((_QWORD *)a2 + 35) - *((_QWORD *)a2 + 34);
        if ( i >= (unsigned int)(v10 >> 4) )
        {
          v12 = 0LL;
        }
        else
        {
          if ( v8 )
            v11 = *((_QWORD *)a2 + 37);
          else
            v11 = *((_QWORD *)a2 + 34);
          v12 = *(_BYTE **)(v11 + 16LL * i);
        }
        if ( v12[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v12 + 240LL))(
                 v12,
                 a3,
                 a2) )
          {
            v14 = (unsigned int)(*((_DWORD *)this + 8) - 1);
            v15 = *(_OWORD *)(*((_QWORD *)this + 1) + 16 * v14);
            *((_DWORD *)this + 8) = v14;
            if ( (_QWORD)v15 )
            {
              v16 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v15 + 16LL);
              if ( v16 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
                CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v15, v14, v13);
              else
                ((void (__fastcall *)(_QWORD))v16)(v15);
            }
          }
        }
      }
      v7 += 4;
    }
  }
  return 0LL;
}
