/*
 * XREFs of CmpUnfreezeHive @ 0x1407DA898
 * Callers:
 *     CmpIsHiveAlreadyLoaded @ 0x1407DA6B4 (CmpIsHiveAlreadyLoaded.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20 (CmpDereferenceKeyControlBlockWithLock.c)
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
