/*
 * XREFs of VslpLockMdlForTransfer @ 0x14025E6AC
 * Callers:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslLoadEnclaveData @ 0x14070D754 (VslLoadEnclaveData.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 */

__int64 __fastcall VslpLockMdlForTransfer(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r11
  struct _MDL *v6; // rcx

  *(_QWORD *)a1 = a2;
  v5 = *(__int16 *)(a2 + 8);
  v6 = (struct _MDL *)(a1 + 8);
  v6->Next = 0LL;
  v6->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v5 + 4095) >> 12) + 6);
  v6->MdlFlags = 0;
  v6->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v6->ByteOffset = a2 & 0xFFF;
  v6->ByteCount = v5;
  if ( (a3 & 0x24) != 0 )
    MmBuildMdlForNonPagedPool(v6);
  else
    MmProbeAndLockPages(v6, 0, IoReadAccess);
  *(_DWORD *)(a1 + 64) = a3 & 0x20;
  return 0LL;
}
