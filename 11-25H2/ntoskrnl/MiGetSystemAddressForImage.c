/*
 * XREFs of MiGetSystemAddressForImage @ 0x140A5B2CC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1404AF530 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiGetBaseLoaderPortion @ 0x1404D0B80 (MiGetBaseLoaderPortion.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiReleasePrivilegedPtes @ 0x1407D8544 (MiReleasePrivilegedPtes.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x140943ED0 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     MiBytesToMapSystemImage @ 0x140A5B4A4 (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140A5B4F0 (MiSelectSystemImageAddress.c)
 *     MiReservePrivilegedPtes @ 0x140A5B774 (MiReservePrivilegedPtes.c)
 *     MiReturnSystemImageAddress @ 0x140A651A0 (MiReturnSystemImageAddress.c)
 *     MiImageSuitableForSystem @ 0x140A904C8 (MiImageSuitableForSystem.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, int a2)
{
  char v2; // r12
  __int64 *v4; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _BOOL8 v8; // rdx
  int v9; // r8d
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  ULONG_PTR PteAddress; // r15
  int v15; // esi
  _DWORD *v16; // r13
  PIMAGE_NT_HEADERS v17; // rax
  PIMAGE_NT_HEADERS v18; // rcx
  int v19; // r13d
  unsigned int LoaderFlags; // edx
  unsigned int VirtualAddress; // eax
  unsigned int v22; // eax
  int SizeOfHeapReserve; // edx
  unsigned int v24; // eax
  int v25; // [rsp+30h] [rbp-118h] BYREF
  int v26; // [rsp+34h] [rbp-114h]
  int v27; // [rsp+38h] [rbp-110h]
  int v28; // [rsp+40h] [rbp-108h]
  __int64 *v29; // [rsp+48h] [rbp-100h]
  PVOID BaseOfImage[10]; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 ImageBase; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned int FileAlignment; // [rsp+A8h] [rbp-A0h]
  unsigned int SectionAlignment; // [rsp+ACh] [rbp-9Ch]
  unsigned int SizeOfImage; // [rsp+B0h] [rbp-98h]
  int v35; // [rsp+B4h] [rbp-94h]
  unsigned int SizeOfHeaders; // [rsp+B8h] [rbp-90h]
  unsigned int AddressOfEntryPoint; // [rsp+BCh] [rbp-8Ch]
  unsigned __int64 SizeOfStackReserve; // [rsp+C0h] [rbp-88h]
  unsigned __int64 SizeOfStackCommit; // [rsp+C8h] [rbp-80h]
  unsigned __int16 Magic; // [rsp+D0h] [rbp-78h]
  unsigned __int16 Subsystem; // [rsp+D2h] [rbp-76h]
  unsigned __int16 MajorSubsystemVersion; // [rsp+D4h] [rbp-74h]
  unsigned __int16 MinorSubsystemVersion; // [rsp+D6h] [rbp-72h]
  unsigned __int16 MajorOperatingSystemVersion; // [rsp+D8h] [rbp-70h]
  unsigned __int16 MinorOperatingSystemVersion; // [rsp+DAh] [rbp-6Eh]
  unsigned __int16 DllCharacteristics; // [rsp+DCh] [rbp-6Ch]
  unsigned int CheckSum; // [rsp+E0h] [rbp-68h]
  unsigned int SizeOfCode; // [rsp+E4h] [rbp-64h]
  unsigned int v49; // [rsp+E8h] [rbp-60h]
  unsigned int Size; // [rsp+ECh] [rbp-5Ch]
  _IMAGE_DATA_DIRECTORY v51; // [rsp+F0h] [rbp-58h]
  _IMAGE_DATA_DIRECTORY v52; // [rsp+F8h] [rbp-50h]
  __int64 v53; // [rsp+100h] [rbp-48h]
  __int64 v54; // [rsp+108h] [rbp-40h]

  v2 = a2;
  v28 = a2;
  memset_0(&ImageBase, 0, 0x70uLL);
  memset_0(BaseOfImage, 0, sizeof(BaseOfImage));
  v4 = (__int64 *)MiSectionControlArea(*(_QWORD *)(a1 + 112));
  v29 = v4;
  v5 = *v4;
  v6 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*v4 + 8) << 12));
  if ( !v6 )
    return 0LL;
  v7 = v6 >> 12;
  v27 = v6 >> 12;
  v8 = 0LL;
  if ( !*(_QWORD *)((v4[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32) )
  {
    v9 = 0;
    v25 = 0;
    goto LABEL_10;
  }
  v9 = 1;
  v25 = 1;
  if ( (v4[7] & 0x20000000) == 0
    || (v10 = *(_QWORD *)(v5 + 32)) == 0
    || (v8 = (*(_BYTE *)(MiGetBaseLoaderPortion(a1) + 184) & 4) != 0)
    || (v2 & 2) != 0 )
  {
LABEL_10:
    if ( v9 )
      goto LABEL_11;
    v15 = MiMapImageInSystemSpace(v4, 3, (__int64)BaseOfImage);
    if ( v15 < 0 )
      return 0LL;
    v16 = BaseOfImage[0];
    v26 = 0;
    v17 = RtlImageNtHeader(BaseOfImage[0]);
    v18 = v17;
    v19 = v16[15];
    v26 = v19;
    Magic = v17->OptionalHeader.Magic;
    FileAlignment = v17->OptionalHeader.FileAlignment;
    SectionAlignment = v17->OptionalHeader.SectionAlignment;
    SizeOfImage = v17->OptionalHeader.SizeOfImage;
    if ( Magic == 523 )
    {
      LoaderFlags = v17->OptionalHeader.LoaderFlags;
      v35 = LoaderFlags;
      ImageBase = v17->OptionalHeader.ImageBase;
      SizeOfHeaders = v17->OptionalHeader.SizeOfHeaders;
      AddressOfEntryPoint = v17->OptionalHeader.AddressOfEntryPoint;
      SizeOfStackReserve = v17->OptionalHeader.SizeOfStackReserve;
      SizeOfStackCommit = v17->OptionalHeader.SizeOfStackCommit;
      Subsystem = v17->OptionalHeader.Subsystem;
      MajorSubsystemVersion = v17->OptionalHeader.MajorSubsystemVersion;
      MinorSubsystemVersion = v17->OptionalHeader.MinorSubsystemVersion;
      MajorOperatingSystemVersion = v17->OptionalHeader.MajorOperatingSystemVersion;
      MinorOperatingSystemVersion = v17->OptionalHeader.MinorOperatingSystemVersion;
      DllCharacteristics = v17->OptionalHeader.DllCharacteristics;
      CheckSum = v17->OptionalHeader.CheckSum;
      SizeOfCode = v17->OptionalHeader.SizeOfCode;
      v54 = 0LL;
      if ( v17->OptionalHeader.NumberOfRvaAndSizes > 6 )
      {
        VirtualAddress = v17->OptionalHeader.DataDirectory[6].VirtualAddress;
        if ( VirtualAddress )
        {
          LODWORD(v54) = VirtualAddress;
          HIDWORD(v54) = v18->OptionalHeader.DataDirectory[6].Size;
        }
      }
      if ( v18->OptionalHeader.NumberOfRvaAndSizes > 0xC )
      {
        v49 = v18->OptionalHeader.DataDirectory[12].VirtualAddress;
        Size = v18->OptionalHeader.DataDirectory[12].Size;
      }
      if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 0xE )
      {
        v51 = 0LL;
      }
      else
      {
        v51 = v18->OptionalHeader.DataDirectory[14];
        if ( v18->OptionalHeader.DataDirectory[14].VirtualAddress && v18->OptionalHeader.DataDirectory[14].Size )
          v35 = LoaderFlags | 1;
      }
      if ( v18->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        v52 = 0LL;
      else
        v52 = v18->OptionalHeader.DataDirectory[5];
      if ( v18->OptionalHeader.NumberOfRvaAndSizes > 0xA )
      {
        LODWORD(v53) = v18->OptionalHeader.DataDirectory[10].VirtualAddress;
        v22 = v18->OptionalHeader.DataDirectory[10].Size;
LABEL_50:
        HIDWORD(v53) = v22;
LABEL_52:
        MiUnmapImageInSystemSpace((unsigned __int64 *)BaseOfImage);
        if ( (int)MiRelocateImage(*v4, (__int64)&ImageBase, v19, 1u, -1LL, 1) < 0 )
          return 0LL;
        MiImageSuitableForSystem(v4, &v25);
        if ( !v25 && (*((_BYTE *)v4 + 62) & 0xC) == 0 )
          return 0LL;
LABEL_11:
        v13 = MiSelectSystemImageAddress((unsigned int)v7, v8);
        v10 = v13;
        if ( !v13 )
          return 0LL;
        PteAddress = MiGetPteAddress(v13);
        if ( (int)MiReservePrivilegedPtes(v4, PteAddress, (unsigned int)v7, v2 & 0x20) >= 0 )
        {
          if ( (unsigned int)MiAddPrivateFixupEntryForSystemImage((__int64)v4, v10) )
            return v10;
          MiReleasePrivilegedPtes(PteAddress, (unsigned int)v7);
        }
        MiReturnSystemImageAddress(v10, (unsigned int)((_DWORD)v7 << 12));
        return 0LL;
      }
    }
    else
    {
      SizeOfHeapReserve = v17->OptionalHeader.SizeOfHeapReserve;
      v35 = SizeOfHeapReserve;
      ImageBase = HIDWORD(v17->OptionalHeader.ImageBase);
      SizeOfHeaders = v17->OptionalHeader.SizeOfHeaders;
      AddressOfEntryPoint = v17->OptionalHeader.AddressOfEntryPoint;
      SizeOfStackReserve = LODWORD(v17->OptionalHeader.SizeOfStackReserve);
      SizeOfStackCommit = HIDWORD(v17->OptionalHeader.SizeOfStackReserve);
      Subsystem = v17->OptionalHeader.Subsystem;
      MajorSubsystemVersion = v17->OptionalHeader.MajorSubsystemVersion;
      MinorSubsystemVersion = v17->OptionalHeader.MinorSubsystemVersion;
      MajorOperatingSystemVersion = v17->OptionalHeader.MajorOperatingSystemVersion;
      MinorOperatingSystemVersion = v17->OptionalHeader.MinorOperatingSystemVersion;
      DllCharacteristics = v17->OptionalHeader.DllCharacteristics;
      CheckSum = v17->OptionalHeader.CheckSum;
      SizeOfCode = v17->OptionalHeader.SizeOfCode;
      v54 = 0LL;
      if ( HIDWORD(v17->OptionalHeader.SizeOfHeapReserve) > 6 )
      {
        v24 = v17->OptionalHeader.DataDirectory[4].VirtualAddress;
        if ( v24 )
        {
          LODWORD(v54) = v24;
          HIDWORD(v54) = v18->OptionalHeader.DataDirectory[4].Size;
        }
      }
      if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) > 0xC )
      {
        v49 = v18->OptionalHeader.DataDirectory[10].VirtualAddress;
        Size = v18->OptionalHeader.DataDirectory[10].Size;
      }
      if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) <= 0xE )
      {
        v51 = 0LL;
      }
      else
      {
        v51 = v18->OptionalHeader.DataDirectory[12];
        if ( v18->OptionalHeader.DataDirectory[12].VirtualAddress && v18->OptionalHeader.DataDirectory[12].Size )
          v35 = SizeOfHeapReserve | 1;
      }
      if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) <= 5 )
        v52 = 0LL;
      else
        v52 = v18->OptionalHeader.DataDirectory[3];
      if ( HIDWORD(v18->OptionalHeader.SizeOfHeapReserve) > 0xA )
      {
        LODWORD(v53) = v18->OptionalHeader.DataDirectory[8].VirtualAddress;
        v22 = v18->OptionalHeader.DataDirectory[8].Size;
        goto LABEL_50;
      }
    }
    v53 = 0LL;
    goto LABEL_52;
  }
  v11 = MiGetPteAddress(v10);
  if ( (int)MiReservePrivilegedPtes(v4, v11, (unsigned int)v7, v2 & 0x20) < 0 )
    return 0LL;
  return v10;
}
