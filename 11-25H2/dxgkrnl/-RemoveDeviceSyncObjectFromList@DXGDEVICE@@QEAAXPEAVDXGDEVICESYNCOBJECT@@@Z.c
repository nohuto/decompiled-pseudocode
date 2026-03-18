/*
 * XREFs of ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1403A6474
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x14033BE70 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveDeviceSyncObjectFromList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT ***a2)
{
  struct DXGDEVICESYNCOBJECT **v4; // rcx
  struct DXGDEVICESYNCOBJECT **v5; // rax

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && !*((_BYTE *)this + 1937) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8236;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsDeviceLockExclusiveOwner() || IgnoreDeviceLock()",
      8236LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8237;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8237LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGDEVICESYNCOBJECT *)a2 || (v5 = a2[1], *v5 != (struct DXGDEVICESYNCOBJECT *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGDEVICESYNCOBJECT *)v4;
  v4[1] = (struct DXGDEVICESYNCOBJECT *)v5;
}
