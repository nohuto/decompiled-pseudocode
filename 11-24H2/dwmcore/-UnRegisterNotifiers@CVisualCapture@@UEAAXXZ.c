/*
 * XREFs of ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x180294D20
 * Callers:
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1802A8630 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CVisualCapture::UnRegisterNotifiers(struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[342]);
  this[342] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[343]);
  this[343] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[344]);
  this[344] = 0LL;
}
