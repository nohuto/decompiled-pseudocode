/*
 * XREFs of CmpLockKeyBodyIntoMemory @ 0x1407CB86C
 * Callers:
 *     CmOpenKeyForBugCheckRecovery @ 0x1407BFCB0 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 */

__int64 __fastcall CmpLockKeyBodyIntoMemory(__int64 a1)
{
  __int64 v2; // r15
  struct _MDL *Pool; // rax
  struct _MDL *v4; // rbx

  v2 = *(_QWORD *)(a1 + 8);
  Pool = (struct _MDL *)CmpAllocatePool(0x40uLL);
  v4 = Pool;
  if ( Pool )
  {
    Pool->Next = 0LL;
    Pool->Size = 8 * (((unsigned __int16)((a1 & 0xFFF) + 4207) >> 12) + 6);
    Pool->MdlFlags = 0;
    Pool->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    Pool->ByteOffset = a1 & 0xFFF;
    Pool->ByteCount = 112;
    MmProbeAndLockPages(Pool, 0, IoModifyAccess);
    v4[1].Process = 0LL;
    LOWORD(v4[1].MappedSystemVa) = 8 * (((unsigned __int16)((v2 & 0xFFF) + 4407) >> 12) + 6);
    WORD1(v4[1].MappedSystemVa) = 0;
    v4[2].Next = (struct _MDL *)(v2 & 0xFFFFFFFFFFFFF000uLL);
    *(_DWORD *)(&v4[2].MdlFlags + 1) = v2 & 0xFFF;
    *(_DWORD *)&v4[2].Size = 312;
    MmProbeAndLockPages((struct _MDL *)((char *)v4 + 64), 0, IoModifyAccess);
    *(_QWORD *)(a1 + 104) = v4;
    *(_WORD *)(a1 + 48) |= 0x20u;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
}
