/*
 * XREFs of ?GetCount@CContentRects@@SAIXZ @ 0x1401A9688
 * Callers:
 *     NtUserGetSystemContentRects @ 0x1401BAF30 (NtUserGetSystemContentRects.c)
 * Callees:
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetInstance@CContentRects@@CAPEAV1@XZ @ 0x1401587A0 (-GetInstance@CContentRects@@CAPEAV1@XZ.c)
 */

__int64 __fastcall CContentRects::GetCount(__int64 a1)
{
  struct CContentRects *Instance; // rax
  unsigned int v2; // edi
  CPushLock *v3; // rbx

  Instance = CContentRects::GetInstance(a1);
  v2 = 0;
  v3 = Instance;
  if ( Instance )
  {
    RIMLockShared((__int64)Instance);
    v2 = *((_DWORD *)v3 + 20);
    CPushLock::ReleaseLock(v3);
  }
  return v2;
}
