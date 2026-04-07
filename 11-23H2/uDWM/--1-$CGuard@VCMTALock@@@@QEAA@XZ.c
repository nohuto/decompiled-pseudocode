/*
 * XREFs of ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180022A44
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180016F70 (-GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800223B0 (-GetResolution@CBitmap@@UEAAJPEAN0@Z.c)
 *     ?SetResolution@CBitmap@@UEAAJNN@Z @ 0x1800229B0 (-SetResolution@CBitmap@@UEAAJNN@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18005A3D0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x18005B800 (-Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 *     ?UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18005B900 (-UnlockState@CBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18005B970 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18005BA00 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z @ 0x18005BAA0 (-UnlockState@CCompressedSourceBitmap@@UEAAJW4WICBitmapLockFlags@@@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18005BC60 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18010F340 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18010F7E0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x18010FAF0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormatInfo@CBitmapLock@@UEBA?AUPixelFormatInfo@@XZ @ 0x18010FCD0 (-GetPixelFormatInfo@CBitmapLock@@UEBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGuard<CMTALock>::~CGuard<CMTALock>(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 48) )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 8));
    *a1 = 0LL;
  }
}
