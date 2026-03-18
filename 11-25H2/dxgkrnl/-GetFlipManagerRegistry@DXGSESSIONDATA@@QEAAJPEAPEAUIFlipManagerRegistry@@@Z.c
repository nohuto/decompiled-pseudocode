/*
 * XREFs of ?GetFlipManagerRegistry@DXGSESSIONDATA@@QEAAJPEAPEAUIFlipManagerRegistry@@@Z @ 0x1401F4594
 * Callers:
 *     DxgkGetSessionFlipManagerRegistry @ 0x14006FDFC (DxgkGetSessionFlipManagerRegistry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CFlipManagerRegistry@@QEAA@XZ @ 0x14007220C (--0CFlipManagerRegistry@@QEAA@XZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::GetFlipManagerRegistry(
        DXGSESSIONDATA *this,
        struct IFlipManagerRegistry **a2,
        __int64 a3,
        __int64 a4)
{
  struct IFlipManagerRegistry *v4; // rax
  unsigned int v5; // ebx
  CFlipManagerRegistry *v8; // rax

  v4 = (struct IFlipManagerRegistry *)*((_QWORD *)this + 2345);
  v5 = 0;
  if ( !v4 )
  {
    v8 = (CFlipManagerRegistry *)operator new(0x28uLL, 0x65724346u, 256LL, a4);
    if ( v8 )
      v4 = CFlipManagerRegistry::CFlipManagerRegistry(v8);
    else
      v4 = 0LL;
    *((_QWORD *)this + 2345) = v4;
    if ( !v4 )
      v5 = -1073741801;
  }
  *a2 = v4;
  return v5;
}
