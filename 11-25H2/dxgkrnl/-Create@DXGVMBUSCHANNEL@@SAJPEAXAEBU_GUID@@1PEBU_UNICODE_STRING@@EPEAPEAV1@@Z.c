/*
 * XREFs of ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x140204C90
 * Callers:
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401FFE68 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGVMBUSCHANNEL@@QEAAJXZ @ 0x140200DE0 (-Release@DXGVMBUSCHANNEL@@QEAAJXZ.c)
 *     ??0DXGVMBUSCHANNEL@@IEAA@XZ @ 0x14020444C (--0DXGVMBUSCHANNEL@@IEAA@XZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x140204E14 (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Create(
        void *a1,
        const struct _GUID *a2,
        const struct _GUID *a3,
        const struct _UNICODE_STRING *a4,
        char a5,
        struct DXGVMBUSCHANNEL **a6)
{
  int v8; // edi
  DXGVMBUSCHANNEL *v9; // rax
  DXGVMBUSCHANNEL *v10; // rbx
  const struct _GUID *v11; // r8
  const struct _GUID *v12; // r9

  v8 = -1073741801;
  v9 = (DXGVMBUSCHANNEL *)operator new(0xA8uLL, 0x4B677844u, 256LL, (__int64)a4);
  if ( v9 )
  {
    v10 = DXGVMBUSCHANNEL::DXGVMBUSCHANNEL(v9);
    if ( v10 )
    {
      v8 = DXGVMBUSCHANNEL::Initialize(v10, a1, v11, v12, a4, a5);
      if ( v8 < 0 )
        DXGVMBUSCHANNEL::Release(v10);
      else
        *a6 = v10;
    }
  }
  return (unsigned int)v8;
}
