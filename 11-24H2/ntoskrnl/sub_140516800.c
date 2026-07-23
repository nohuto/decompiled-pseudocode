/*
 * XREFs of sub_140516800 @ 0x140516800
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 */

__int64 __fastcall sub_140516800(struct _MDL *a1, __int64 a2)
{
  a1->Next = 0LL;
  a1->Size = 8 * (((unsigned __int16)((a2 & 0xFFF) + 0x1FFF) >> 12) + 6);
  a1->MdlFlags = 0;
  a1->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  a1->ByteOffset = a2 & 0xFFF;
  a1->ByteCount = 4096;
  MmProbeAndLockPages(a1, 0, IoModifyAccess);
  return 0LL;
}
