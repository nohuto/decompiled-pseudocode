/*
 * XREFs of CmpUnfreezeHive @ 0x1407CB0D4
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x1407CAEF0 (CmpIsHiveAlreadyLoaded.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpUnfreezeHive(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  CmpInitializeDelayDerefContext(&v3);
  v2 = *(_QWORD *)(a1 + 2936);
  *(_BYTE *)(a1 + 2944) = 0;
  if ( v2 )
  {
    CmpDereferenceKeyControlBlockWithLock(v2);
    *(_QWORD *)(a1 + 2936) = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v3);
}
