/*
 * XREFs of ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14020A9D4
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x14020AA90 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 * Callees:
 *     ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1400DD430 (-ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x14020AD1C (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 */

char __fastcall CCursorClip::ApplySystemClips(
        CCursorClip *a1,
        struct tagPOINT a2,
        unsigned int a3,
        struct tagPOINT *a4,
        _DWORD *a5)
{
  char v5; // bp
  LONG x; // ebx
  char v10; // r15
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v5 = 0;
  *a4 = a2;
  x = a2.x;
  *a5 = 0;
  CCursorClip::ApplyShellClip(a1, *a4, a4);
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a4->x != x )
      *a5 |= 1u;
    if ( a4->y != y )
      *a5 |= 2u;
  }
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::BoundPointToRegions)(a1, *a4, a3, a4);
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() && v10 )
  {
    if ( a4->x != x )
      *a5 |= 1u;
    if ( a4->y != y )
      *a5 |= 2u;
  }
  if ( *a4 != __PAIR64__(y, x) )
    return 1;
  return v5;
}
