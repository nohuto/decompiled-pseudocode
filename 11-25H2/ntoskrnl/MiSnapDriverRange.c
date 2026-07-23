/*
 * XREFs of MiSnapDriverRange @ 0x140A39B68
 * Callers:
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x14067D5E8 (MiCheckForDiscardableLongJumpTable.c)
 *     MiBackSingleImageWithPagefile @ 0x1407D7C78 (MiBackSingleImageWithPagefile.c)
 *     MiLockRegistryRecoverySection @ 0x1407D7EF0 (MiLockRegistryRecoverySection.c)
 *     MiIdentifyImageDiscardablePages @ 0x1407E3058 (MiIdentifyImageDiscardablePages.c)
 *     MiHandleDriverNonPagedSections @ 0x140A396E8 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140A398B4 (MiDisablePagingOfDriver.c)
 *     MiFreeDriverInitialization @ 0x140A39960 (MiFreeDriverInitialization.c)
 *     MiMarkKernelImageCfgBits @ 0x140A39A20 (MiMarkKernelImageCfgBits.c)
 *     MiEnablePagingOfDriver @ 0x140C3D810 (MiEnablePagingOfDriver.c)
 *     MmDiscardDriverSection @ 0x140C4AB80 (MmDiscardDriverSection.c)
 * Callees:
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     MiIsKernelHalPadSection @ 0x1404C2D30 (MiIsKernelHalPadSection.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MmImageSectionPagable @ 0x140A39FCC (MmImageSectionPagable.c)
 */

__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  void *v10; // rbx
  PIMAGE_NT_HEADERS v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 SectionAlignment; // r11
  __int64 NumberOfSections; // r9
  unsigned __int64 v15; // r14
  __int64 SizeOfOptionalHeader; // r8
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v18; // r13
  __int64 *v19; // rdi
  unsigned int v20; // r8d
  unsigned int v22; // ebx
  int v23; // eax
  bool v24; // cf
  int v25; // eax
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int16 v28; // dx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  PVOID v32; // rax
  PVOID v33; // rt1
  bool v34; // zf
  unsigned int v35; // [rsp+20h] [rbp-B8h]
  int v36; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v37; // [rsp+28h] [rbp-B0h]
  void *v40; // [rsp+58h] [rbp-80h]
  _IMAGE_NT_HEADERS64 *v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+70h] [rbp-68h] BYREF
  int v44; // [rsp+78h] [rbp-60h]
  __int128 v45; // [rsp+7Ch] [rbp-5Ch]
  __int64 v46; // [rsp+8Ch] [rbp-4Ch]
  int v47; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v43 = 0LL;
  *a5 = 0LL;
  *a6 = 0LL;
  v45 = 0LL;
  v10 = *(void **)(a1 + 48);
  v46 = 0LL;
  v40 = v10;
  v11 = RtlImageNtHeader(v10);
  v41 = v11;
  v12 = a4 - (_QWORD)v10;
  SectionAlignment = v11->OptionalHeader.SectionAlignment;
  NumberOfSections = v11->FileHeader.NumberOfSections;
  v15 = (unsigned int)SectionAlignment;
  v37 = a4 - (_QWORD)v10;
  if ( SectionAlignment > 0x1000 )
    v15 = 4096LL;
  v36 = v11->FileHeader.NumberOfSections;
  if ( a2 > (unsigned int)NumberOfSections )
    return 0LL;
  SizeOfOptionalHeader = v11->FileHeader.SizeOfOptionalHeader;
  v42 = SizeOfOptionalHeader;
  v47 = 0x40000000;
  PteAddress = 0LL;
  v18 = 0LL;
  v19 = (__int64 *)((char *)&v11->OptionalHeader + 32 * NumberOfSections + 8 * NumberOfSections + SizeOfOptionalHeader);
  DWORD1(v45) = (_DWORD)v11 + SizeOfOptionalHeader + 8 * (NumberOfSections + 4 * NumberOfSections + 3) - (_DWORD)v10;
  v44 = DWORD1(v45);
  while ( a2 <= (unsigned int)NumberOfSections )
  {
    if ( a2 )
      v19 = (__int64 *)((char *)&v11->OptionalHeader + 32 * a2 + 8 * a2 + SizeOfOptionalHeader - 40);
    else
      v19 = &v43;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    v35 = v20;
    if ( a4 )
    {
      v31 = *((unsigned int *)v19 + 3);
      if ( v12 >= v31 && v12 < v20 + (unsigned int)v31 )
      {
        if ( (a3 & 0x40) != 0 && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
          return 0LL;
LABEL_28:
        if ( !PteAddress )
          PteAddress = MiGetPteAddress(((unsigned __int64)v10 + *((unsigned int *)v19 + 3) + 4095) & 0xFFFFFFFFFFFFF000uLL);
        v26 = MiGetPteAddress(-(__int64)v15 & ((unsigned __int64)v10 + v15 + v20 + *((_DWORD *)v19 + 3) - 1));
        v18 = v26;
        if ( (v28 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v15 >= 0x1000 )
          v18 = v26 - 8;
        if ( v27 <= 0x1000 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( (a3 & 8) != 0 )
      {
        v25 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
        goto LABEL_27;
      }
      if ( (a3 & 1) != 0 )
      {
        v25 = MmImageSectionPagable(v19);
        goto LABEL_26;
      }
      if ( (a3 & 4) != 0 )
      {
        v22 = *((_DWORD *)v19 + 9) & 0xE0000000;
        v23 = MmImageSectionPagable(v19);
        v24 = v22 != 0;
        v10 = v40;
        v25 = v24 && v23 == 0;
LABEL_26:
        v20 = v35;
        LODWORD(NumberOfSections) = v36;
        v12 = v37;
        goto LABEL_27;
      }
      if ( (a3 & 0x10) != 0 )
      {
        v25 = *((_DWORD *)v19 + 9) & 0x20000000;
LABEL_27:
        if ( v25 )
          goto LABEL_28;
        goto LABEL_20;
      }
      if ( (a3 & 0x20) != 0 )
      {
        if ( *(_BYTE *)v19 != 80
          || *((_BYTE *)v19 + 1) != 65
          || *((_BYTE *)v19 + 2) != 71
          || *((_BYTE *)v19 + 3) != 69
          || *((_BYTE *)v19 + 4) != 75 )
        {
          goto LABEL_20;
        }
        v34 = *((_BYTE *)v19 + 5) == 68;
      }
      else if ( a3 < 0 )
      {
        if ( *(_BYTE *)v19 != 80
          || *((_BYTE *)v19 + 1) != 65
          || *((_BYTE *)v19 + 2) != 71
          || *((_BYTE *)v19 + 3) != 69
          || *((_BYTE *)v19 + 4) != 67
          || *((_BYTE *)v19 + 5) != 77
          || *((_BYTE *)v19 + 6) != 82 )
        {
          goto LABEL_20;
        }
        v34 = *((_BYTE *)v19 + 7) == 67;
      }
      else
      {
        if ( !*(_DWORD *)v19 && v19 != &v43 )
          return 0LL;
        if ( (*(_DWORD *)(a1 + 104) & 0x4000000) != 0 && *(_DWORD *)v19 == 1414090313
          || (*((_DWORD *)v19 + 9) & 0x2000000) == 0 )
        {
          goto LABEL_20;
        }
        v32 = *(PVOID *)(a1 + 48);
        v33 = *(PVOID *)&KeNumberProcessorsGroup0[9];
        if ( v32 != v33 && v32 != PsHalImageBase )
          goto LABEL_28;
        v34 = !MiIsKernelHalPadSection((__int64)v19);
      }
      if ( v34 )
        goto LABEL_28;
    }
LABEL_20:
    if ( PteAddress )
    {
      if ( PteAddress <= v18 )
      {
        *a5 = PteAddress;
        *a6 = v18;
        if ( a2 + 1 <= (unsigned int)NumberOfSections )
          return a2 + 1;
        return v6;
      }
      PteAddress = 0LL;
    }
LABEL_35:
    v11 = v41;
    ++a2;
    SizeOfOptionalHeader = v42;
  }
  if ( PteAddress )
  {
    v29 = *((_DWORD *)v19 + 4);
    if ( v29 < *((_DWORD *)v19 + 2) )
      v29 = *((_DWORD *)v19 + 2);
    v30 = MiGetPteAddress(((-(__int64)v15 & ((unsigned __int64)v10 + v15 + *((_DWORD *)v19 + 3) + v29 - 1)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
        - 8;
    if ( PteAddress <= v30 )
    {
      *a5 = PteAddress;
      *a6 = v30;
    }
  }
  return 0LL;
}
