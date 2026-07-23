/*
 * XREFs of VslValidateDynamicCodePages @ 0x140A3BD6C
 * Callers:
 *     MmChangeImageProtection @ 0x140A3BAE0 (MmChangeImageProtection.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslValidateDynamicCodePages(__int64 a1, struct _MDL *a2, unsigned int a3)
{
  SIZE_T v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // ebx
  __int64 *v10[10]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v11[8]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+88h] [rbp-C0h]
  __int64 v13; // [rsp+90h] [rbp-B8h]
  __int64 *v14; // [rsp+98h] [rbp-B0h]
  __int64 *v15; // [rsp+A0h] [rbp-A8h]
  struct _MDL MemoryDescriptorList; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+120h] [rbp-28h]

  memset_0(v11, 0, 0x68uLL);
  memset(&MemoryDescriptorList.MdlFlags + 1, 0, 20);
  v17 = 0LL;
  memset_0(v10, 0, 0x48uLL);
  v6 = MmSizeOfMdl(*(PVOID *)(a1 + 32), (unsigned int)(*(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44)));
  v7 = (v6 + (a1 & 0xFFF) + 4095) >> 12;
  if ( v7 > 1 )
    return 3221225485LL;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.Size = 8 * (v7 + 6);
  MemoryDescriptorList.MdlFlags = 0;
  MemoryDescriptorList.StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  MemoryDescriptorList.ByteOffset = a1 & 0xFFF;
  MemoryDescriptorList.ByteCount = v6;
  MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
  v8 = VslpLockPagesForTransfer((__int64)v10, a2, a3, IoReadAccess, 0);
  if ( v8 >= 0 )
  {
    v12 = a1;
    v13 = v17;
    v14 = v10[0];
    v15 = v10[7];
    v8 = VslpEnterIumSecureMode(2u, 0x20u, 0, (__int64)v11);
    VslpUnlockPagesForTransfer(v10);
  }
  MmUnlockPages(&MemoryDescriptorList);
  return (unsigned int)v8;
}
