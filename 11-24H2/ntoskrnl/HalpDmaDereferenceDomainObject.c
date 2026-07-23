/*
 * XREFs of HalpDmaDereferenceDomainObject @ 0x140397F8C
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403962A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x140397478 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1403976A0 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalFreeCommonBufferVector @ 0x140397BB0 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferDmarThin @ 0x140397CC0 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x140397DB0 (HalFreeCommonBufferDmaThin.c)
 *     HalJoinDmaDomain @ 0x1404D20F0 (HalJoinDmaDomain.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054D6F0 (HalCreateCommonBufferFromMdl.c)
 *     HalFreeCommonBufferV3 @ 0x14054DAE0 (HalFreeCommonBufferV3.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x14054DC80 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalpDmaAllocateDomain @ 0x14054E10C (HalpDmaAllocateDomain.c)
 *     HalpDmaIsAutomaticDomain @ 0x14054EA38 (HalpDmaIsAutomaticDomain.c)
 *     HalpLeaveDmaDomain @ 0x14054EAFC (HalpLeaveDmaDomain.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x14054ED00 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x14054F2A0 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpDmaDeleteDomain @ 0x14054E4C4 (HalpDmaDeleteDomain.c)
 */

__int64 __fastcall HalpDmaDereferenceDomainObject(__int64 *BugCheckParameter3)
{
  char v2; // si
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rcx
  KIRQL v6; // dl
  bool v7; // zf
  __int64 v9; // rcx
  __int64 **v10; // rax

  v2 = 0;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
  v5 = (__int64 *)HalpDmaDomainList;
  v6 = v4;
  while ( v5 != &HalpDmaDomainList )
  {
    if ( BugCheckParameter3 == v5 )
    {
      v7 = (*((_DWORD *)BugCheckParameter3 + 28))-- == 1;
      v3 = 1;
      if ( v7 )
      {
        v9 = *BugCheckParameter3;
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3
          || (v10 = (__int64 **)BugCheckParameter3[1], *v10 != BugCheckParameter3) )
        {
          __fastfail(3u);
        }
        *v10 = (__int64 *)v9;
        v2 = 1;
        *(_QWORD *)(v9 + 8) = v10;
      }
      break;
    }
    v5 = (__int64 *)*v5;
  }
  KeReleaseSpinLock(&HalpDmaDomainListLock, v6);
  if ( v2 )
    HalpDmaDeleteDomain((ULONG_PTR)BugCheckParameter3);
  return v3 == 0 ? 0xC000000D : 0;
}
