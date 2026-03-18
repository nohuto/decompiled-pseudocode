/*
 * XREFs of ?FillConstantBuffer@CProjectedShadowApproxBlurEffect@@UEBAXIIPEAX@Z @ 0x18022B9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectedShadowApproxBlurEffect::FillConstantBuffer(
        CProjectedShadowApproxBlurEffect *this,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  unsigned int v6; // eax

  v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 72LL))((char *)this + 16);
  memcpy_0(a4, (char *)this + 28, v6);
}
