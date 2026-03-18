/*
 * XREFs of ?HasContent@CSpriteVisual@@UEBA_NXZ @ 0x18010BB10
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x18010AE60 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  return *((_QWORD *)this + 32) || (**((_DWORD **)this + 29) & 0x20000) != 0;
}
