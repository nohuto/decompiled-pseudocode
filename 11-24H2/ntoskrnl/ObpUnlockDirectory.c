/*
 * XREFs of ObpUnlockDirectory @ 0x14083E760
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409DF678 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtSetInformationObject @ 0x1409F46C0 (NtSetInformationObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ObpUnlockDirectory(__int64 a1)
{
  signed __int64 *v2; // rdi
  signed __int64 v3; // rax
  signed __int64 v4; // rdx
  signed __int64 v5; // rtt

  v2 = (signed __int64 *)(*(_QWORD *)a1 + 296LL);
  _m_prefetchw(v2);
  v3 = *v2;
  v4 = *v2 - 16;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v4 = 0LL;
  if ( (v3 & 2) != 0 || (v5 = *v2, v5 != _InterlockedCompareExchange64(v2, v4, v3)) )
    ExfReleasePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  if ( *(_BYTE *)(a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
    *(_BYTE *)(a1 + 22) = 0;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 21) = 0;
  return KeLeaveCriticalRegionThread();
}
