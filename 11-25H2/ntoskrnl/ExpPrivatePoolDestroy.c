/*
 * XREFs of ExpPrivatePoolDestroy @ 0x1407B699C
 * Callers:
 *     ExDestroyPool @ 0x140648130 (ExDestroyPool.c)
 *     ExpPrivatePoolCreate @ 0x1407B6770 (ExpPrivatePoolCreate.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpHeapDestroy @ 0x1405F8D9C (RtlpHpHeapDestroy.c)
 *     ExpAcquirePoolListLockExclusive @ 0x14064F3A4 (ExpAcquirePoolListLockExclusive.c)
 *     ExpReleasePoolListLockExclusive @ 0x14064F408 (ExpReleasePoolListLockExclusive.c)
 */

__int64 __fastcall ExpPrivatePoolDestroy(ULONG_PTR a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 i; // rdi
  unsigned __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 24));
  v2 = a1 + 32;
  if ( *(_QWORD *)(a1 + 32) )
  {
    ExpAcquirePoolListLockExclusive();
    v3 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD **)(a1 + 40), *v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    ExpReleasePoolListLockExclusive();
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 8 * i + 80);
    if ( v6 )
      RtlpHpHeapDestroy(v6);
  }
  v8 = *(_OWORD *)(a1 + 8);
  return RtlpHpMetadataFree(a1, &v8);
}
