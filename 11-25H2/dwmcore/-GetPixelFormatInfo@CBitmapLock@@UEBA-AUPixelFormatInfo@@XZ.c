/*
 * XREFs of ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x180186AD0
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x180186BB4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // eax

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v5 = *(_DWORD *)(a1 + 100);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 92);
  *(_DWORD *)(a2 + 8) = v5;
  if ( v2 )
    LeaveCriticalSection(v2);
  return a2;
}
