/*
 * XREFs of ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140026A30
 * Callers:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x14030881C (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOPUSHLOCK::ReleaseShared(DXGAUTOPUSHLOCK *this)
{
  __int64 v1; // rcx

  *((_DWORD *)this + 4) = 0;
  v1 = *((_QWORD *)this + 1);
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 16));
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
