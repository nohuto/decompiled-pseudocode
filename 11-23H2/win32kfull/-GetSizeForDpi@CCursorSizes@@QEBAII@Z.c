/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0088DB4
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00456D0 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetIconInfo @ 0x1C0048BA0 (NtUserGetIconInfo.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0082974 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0086A4C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  CCursorSizes *v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  unsigned int v7; // edi

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  if ( a2 >= 0x90 )
  {
    if ( a2 >= 0xC0 )
    {
      if ( a2 >= 0x120 )
        v6 = (-(__int64)(a2 < 0x180) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
      else
        v6 = 44LL;
    }
    else
    {
      v6 = 36LL;
    }
  }
  else
  {
    v6 = 28LL;
  }
  v7 = *(_DWORD *)((char *)v2 + v6);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64), v4, v5);
  return v7;
}
