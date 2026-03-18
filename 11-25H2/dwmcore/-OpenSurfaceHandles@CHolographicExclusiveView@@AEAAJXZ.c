/*
 * XREFs of ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802DB1D0
 * Callers:
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1802DAD9C (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802DB324 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicExclusiveView::OpenSurfaceHandles(CHolographicExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // r14
  int v9; // eax
  __int64 v10; // r8
  _BYTE v12[1248]; // [rsp+30h] [rbp-508h] BYREF

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(v1 + 96);
    if ( v5 )
    {
      if ( *((_QWORD *)this + 19) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
        v7 = *((_QWORD *)this + 19);
        v8 = (unsigned int *)((char *)this + 160);
        *((_QWORD *)this + 18) = v6;
        *((_DWORD *)this + 40) = 31;
        v9 = NtOpenCompositionSurfaceRealizationInfo(v7, (char *)this + 144, (char *)this + 160, v12);
        if ( v9 >= 0 )
        {
          if ( *v8 )
          {
            do
            {
              v10 = v2++;
              *((_QWORD *)this + v10 + 21) = *(_QWORD *)&v12[40 * v10 + 8];
            }
            while ( v2 < *v8 );
          }
          *((_BYTE *)this + 89) = 1;
        }
        else
        {
          v4 = v9 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9 | 0x10000000, 0x22Cu, 0LL);
        }
      }
    }
  }
  return v4;
}
