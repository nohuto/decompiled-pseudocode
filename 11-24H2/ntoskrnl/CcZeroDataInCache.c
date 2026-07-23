/*
 * XREFs of CcZeroDataInCache @ 0x14025EB44
 * Callers:
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v4; // r14d
  unsigned int v7; // edi
  char v8; // bl
  int v9; // r8d
  unsigned int v11; // [rsp+54h] [rbp-54h]
  unsigned int v12; // [rsp+58h] [rbp-50h]
  struct _MDL *MemoryDescriptorList; // [rsp+60h] [rbp-48h]
  PVOID BcbVoid; // [rsp+68h] [rbp-40h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+80h] [rbp-28h] BYREF
  char v18; // [rsp+B8h] [rbp+10h]

  v4 = a4;
  v7 = 0;
  v15 = 0LL;
  v16 = *a2;
  BcbVoid = 0LL;
  VirtualAddress[0] = 0LL;
  v18 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v16, a3 - v7, 0, 1, v4, &BcbVoid, VirtualAddress, &v15) )
  {
    v11 = v15 - v16;
    v12 = v15 - v16 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress[0], (int)v15 - (int)v16, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v8 = BYTE5(KeGetCurrentThread()[1].Queue);
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
    BYTE5(KeGetCurrentThread()[1].Queue) = v8;
    v16 = v15;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress[0], v11, v9);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid);
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v12;
    if ( a3 <= v12 )
      goto LABEL_8;
  }
  v18 = 0;
LABEL_8:
  if ( BcbVoid )
    CcUnpinFileDataEx(BcbVoid);
  return v18;
}
