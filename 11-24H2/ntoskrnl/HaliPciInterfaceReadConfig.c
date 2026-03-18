/*
 * XREFs of HaliPciInterfaceReadConfig @ 0x140265340
 * Callers:
 *     HaliHandlePCIConfigSpaceAccess @ 0x140561AE0 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdReadPCIConfig @ 0x14056D4D0 (HalpKdReadPCIConfig.c)
 * Callees:
 *     VslAccessPciDevice @ 0x140265580 (VslAccessPciDevice.c)
 *     HalpPciAccessMmConfigSpace @ 0x1402657C8 (HalpPciAccessMmConfigSpace.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x140266168 (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPCIReleaseConfigSpaceLock @ 0x1402661F4 (HalpPCIReleaseConfigSpaceLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpPciAccessIoConfigSpace @ 0x140552508 (HalpPciAccessIoConfigSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HaliPciInterfaceReadConfig(
        __int64 a1,
        ULONG_PTR *a2,
        __int64 a3,
        _WORD *a4,
        ULONG_PTR BugCheckParameter3,
        size_t Size)
{
  ULONG_PTR v6; // rbp
  unsigned int v7; // r14d
  unsigned __int8 v9; // si
  ULONG_PTR *v10; // rcx
  size_t v11; // rbx
  ULONG_PTR v12; // r15
  ULONG_PTR v13; // r9
  int v14; // eax
  int v16; // edx
  int v17; // edx
  __int64 v18; // rcx
  size_t v19; // [rsp+30h] [rbp-38h]
  char v20; // [rsp+78h] [rbp+10h] BYREF

  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2 >> 8;
  v9 = (unsigned __int8)a2;
  v20 = 0;
  if ( HalpIommuSkipPciConfigDisabled )
    goto LABEL_6;
  v10 = (ULONG_PTR *)HalpIommuList;
  LOBYTE(a3) = 0;
  if ( (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    goto LABEL_6;
  do
  {
    a2 = v10;
    v10 = (ULONG_PTR *)*v10;
    if ( (a2[59] & 8) != 0
      && *((_DWORD *)a2 + 120) == (unsigned __int16)v7
      && *((_DWORD *)a2 + 121) == v9
      && (((unsigned __int8)v6 ^ *((_BYTE *)a2 + 488)) & 0x1F) == 0 )
    {
      a3 = (unsigned __int8)a3;
      if ( (((unsigned __int8)v6 ^ (unsigned __int8)*((_DWORD *)a2 + 122)) & 0xE0) == 0 )
        a3 = 1LL;
    }
  }
  while ( v10 != &HalpIommuList );
  if ( !(_BYTE)a3 )
  {
LABEL_6:
    v11 = (unsigned int)Size;
    v12 = (unsigned int)BugCheckParameter3;
    if ( qword_140FC0F88 )
    {
      LODWORD(v19) = Size;
      v13 = v6 & 0x1F;
      if ( (__int64 (__fastcall *)(int, int, int, int, int, int, size_t, void *))qword_140FC0F88 == VslAccessPciDevice )
        v14 = VslAccessPciDevice(
                0,
                (unsigned __int16)v7,
                v9,
                v13,
                (unsigned __int8)v6 >> 5,
                BugCheckParameter3,
                v19,
                a4);
      else
        v14 = guard_dispatch_icall_no_overrides(0LL, (unsigned __int16)v7, v9, v13);
      if ( v14 >= 0 )
        goto LABEL_10;
      if ( v14 != -1073741822 )
        KeBugCheckEx(0xC0u, v9, v6, v12, v14);
    }
    HalpPCIAcquireConfigSpaceLock(&v20, a2, a3);
    LOBYTE(v16) = v9;
    if ( !(unsigned __int8)HalpPciAccessMmConfigSpace((unsigned __int16)v7, v16, v6, (_DWORD)a4, v12, v11, 0) )
    {
      LOBYTE(v17) = v9;
      if ( !(unsigned __int8)HalpPciAccessIoConfigSpace((unsigned __int16)v7, v17, v6, (_DWORD)a4, v12, v11, 0) )
        memset_0(a4, 255, v11);
    }
    LOBYTE(v18) = v20;
    HalpPCIReleaseConfigSpaceLock(v18);
  }
  else
  {
    LODWORD(v11) = Size;
    memset_0(a4, 255, (unsigned int)Size);
  }
LABEL_10:
  if ( (unsigned int)v11 >= 2 && *a4 != 0xFFFF && v9 > (unsigned int)HalpMaxPciBus )
    HalpMaxPciBus = v9;
  return (unsigned int)v11;
}
