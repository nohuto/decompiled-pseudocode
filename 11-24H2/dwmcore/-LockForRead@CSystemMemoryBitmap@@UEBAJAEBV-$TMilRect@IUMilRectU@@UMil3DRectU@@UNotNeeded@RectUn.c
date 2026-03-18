/*
 * XREFs of ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180024750
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800247F0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemMemoryBitmap::LockForRead(__int64 a1, INT *a2, struct IBitmapLock **a3)
{
  CSystemMemoryBitmap *v5; // r10
  INT v6; // ecx
  INT v7; // eax
  INT v8; // edx
  INT v9; // eax
  __int64 v10; // rax
  __int64 (__fastcall *v11)(CSystemMemoryBitmap *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **); // rax
  struct WICRect v13; // [rsp+30h] [rbp-28h] BYREF

  v5 = (CSystemMemoryBitmap *)((a1 - 104) & -(__int64)(a1 != 120));
  v6 = *a2;
  v7 = a2[2] - *a2;
  v8 = a2[1];
  v13.Width = v7;
  v9 = a2[3];
  v13.X = v6;
  v13.Height = v9 - v8;
  v10 = *(_QWORD *)v5;
  v13.Y = v8;
  v11 = *(__int64 (__fastcall **)(CSystemMemoryBitmap *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **))(v10 + 24);
  if ( v11 == CSystemMemoryBitmap::Lock )
    return CSystemMemoryBitmap::Lock(v5, &v13, WICBitmapLockRead, a3);
  else
    return v11(v5, &v13, WICBitmapLockRead, a3);
}
