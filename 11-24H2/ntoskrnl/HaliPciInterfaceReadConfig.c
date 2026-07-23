/*
 * XREFs of HaliPciInterfaceReadConfig @ 0x1403AA360
 * Callers:
 *     HaliHandlePCIConfigSpaceAccess @ 0x14055F710 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdReadPCIConfig @ 0x14056A960 (HalpKdReadPCIConfig.c)
 * Callees:
 *     VslAccessPciDevice @ 0x1403AA5A0 (VslAccessPciDevice.c)
 *     HalpPciAccessMmConfigSpace @ 0x1403AA7E8 (HalpPciAccessMmConfigSpace.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x1403AB24C (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPCIReleaseConfigSpaceLock @ 0x1403AB2D8 (HalpPCIReleaseConfigSpaceLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpPciAccessIoConfigSpace @ 0x14054FE48 (HalpPciAccessIoConfigSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HaliPciInterfaceReadConfig(
        __int64 a1,
        ULONG_PTR *a2,
        __int64 a3,
        _WORD *Src,
        ULONG_PTR BugCheckParameter3,
        size_t Size)
{
  ULONG_PTR v6; // rbp
  unsigned int v7; // r14d
  unsigned __int8 v9; // si
  ULONG_PTR *v10; // rcx
  size_t v11; // rbx
  ULONG_PTR v12; // r15
  int v13; // eax
  int v15; // edx
  int v16; // edx
  __int64 v17; // rcx
  size_t v18; // [rsp+30h] [rbp-38h]
  char v19; // [rsp+78h] [rbp+10h] BYREF

  v6 = (unsigned int)a3;
  v7 = (unsigned int)a2 >> 8;
  v9 = (unsigned __int8)a2;
  v19 = 0;
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
    if ( qword_140FC11E8 )
    {
      LODWORD(v18) = Size;
      if ( (__int64 (__fastcall *)(int, int, int, int, int, int, size_t, void *))qword_140FC11E8 == VslAccessPciDevice )
        v13 = VslAccessPciDevice(
                0,
                (unsigned __int16)v7,
                v9,
                v6 & 0x1F,
                (unsigned __int8)v6 >> 5,
                BugCheckParameter3,
                v18,
                Src);
      else
        v13 = guard_dispatch_icall_no_overrides(0LL, (unsigned __int16)v7);
      if ( v13 >= 0 )
        goto LABEL_10;
      if ( v13 != -1073741822 )
        KeBugCheckEx(0xC0u, v9, v6, v12, v13);
    }
    HalpPCIAcquireConfigSpaceLock(&v19, a2, a3);
    LOBYTE(v15) = v9;
    if ( !(unsigned __int8)HalpPciAccessMmConfigSpace((unsigned __int16)v7, v15, v6, (_DWORD)Src, v12, v11, 0) )
    {
      LOBYTE(v16) = v9;
      if ( !(unsigned __int8)HalpPciAccessIoConfigSpace((unsigned __int16)v7, v16, v6, (_DWORD)Src, v12, v11, 0) )
        memset_0(Src, 255, v11);
    }
    LOBYTE(v17) = v19;
    HalpPCIReleaseConfigSpaceLock(v17);
  }
  else
  {
    LODWORD(v11) = Size;
    memset_0(Src, 255, (unsigned int)Size);
  }
LABEL_10:
  if ( (unsigned int)v11 >= 2 && *Src != 0xFFFF && v9 > (unsigned int)HalpMaxPciBus )
    HalpMaxPciBus = v9;
  return (unsigned int)v11;
}
