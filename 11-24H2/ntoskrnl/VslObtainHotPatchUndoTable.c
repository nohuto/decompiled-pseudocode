/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x14070D850
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslObtainHotPatchUndoTable(PVOID Base, __int64 a2, ULONG a3)
{
  unsigned int v6; // r15d
  struct _MDL *Pool2; // rax
  struct _MDL *v8; // rbx
  CSHORT *p_MdlFlags; // rsi
  int v11; // edi
  __int64 *v12[10]; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v13[8]; // [rsp+90h] [rbp-A8h] BYREF
  PVOID v14; // [rsp+98h] [rbp-A0h]
  __int64 *v15; // [rsp+A0h] [rbp-98h]
  __int64 *v16; // [rsp+A8h] [rbp-90h]

  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, a3);
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, v6, 0x54736D56u);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((a3 + 4095LL + (unsigned __int64)(a2 & 0xFFF)) >> 12) + 6);
  p_MdlFlags = &Pool2->MdlFlags;
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = a2 & 0xFFF;
  Pool2->ByteCount = a3;
  MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
  v11 = VslpLockPagesForTransfer((__int64)v12, v8, v6, IoWriteAccess, 0);
  if ( v11 >= 0 )
  {
    v14 = Base;
    v15 = v12[0];
    v16 = v12[7];
    v11 = VslpEnterIumSecureMode(2u, 0x4Cu, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
  }
  if ( (*(_BYTE *)p_MdlFlags & 2) != 0 )
    MmUnlockPages(v8);
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v11;
}
