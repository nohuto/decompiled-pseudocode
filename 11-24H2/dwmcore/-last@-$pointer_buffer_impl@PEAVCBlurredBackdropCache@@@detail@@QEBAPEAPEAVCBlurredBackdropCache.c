/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D26F4
 * Callers:
 *     ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1801D23AC (-UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1801D261C (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x1801D26BC (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1801D27D0 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1802369A4 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x1801D2784 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0LL;
  v2 = *a1 & 3LL;
  if ( v2 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v3 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v3 = 0LL;
      return v3 + 8 * v1;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v3 = (unsigned __int64)a1;
  if ( !v2 )
  {
    v1 = 1LL;
    return v3 + 8 * v1;
  }
  v5 = v2 - 1;
  if ( !v5 )
  {
LABEL_12:
    v1 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) - 16);
    return v3 + 8 * v1;
  }
  if ( (unsigned __int64)(v5 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  return v3 + 8 * v1;
}
