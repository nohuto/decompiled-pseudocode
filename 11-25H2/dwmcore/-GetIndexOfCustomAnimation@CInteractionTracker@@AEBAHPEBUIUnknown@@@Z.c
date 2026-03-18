/*
 * XREFs of ?GetIndexOfCustomAnimation@CInteractionTracker@@AEBAHPEBUIUnknown@@@Z @ 0x1800F666C
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F63F0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x180060BE0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 */

__int64 __fastcall CInteractionTracker::GetIndexOfCustomAnimation(CInteractionTracker *this, const struct IUnknown *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  __int64 *v5; // rdi
  const struct IUnknown *TargetResource; // rax

  v2 = -1;
  if ( a2 )
  {
    v4 = 0;
    v5 = (__int64 *)((char *)this + 352);
    while ( v4 < 2 )
    {
      if ( *v5 )
      {
        TargetResource = (const struct IUnknown *)CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*v5);
        if ( TargetResource )
        {
          if ( TargetResource == a2 )
            return v4;
        }
      }
      ++v4;
      ++v5;
    }
  }
  return v2;
}
