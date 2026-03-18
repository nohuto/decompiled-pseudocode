/*
 * XREFs of ?GetPixelFormatInfo@CGdiSpriteBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18029C4D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 344);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 24LL))(*(_QWORD *)(a1 + 344));
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 40);
  }
  return a2;
}
