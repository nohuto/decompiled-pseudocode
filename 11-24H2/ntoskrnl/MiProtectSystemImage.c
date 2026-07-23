/*
 * XREFs of MiProtectSystemImage @ 0x140A8D1E8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406F74AC (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x1407E86C0 (MiWriteProtectSystemImages.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiActOnLargeKernelHalPages @ 0x1407E7FC8 (MiActOnLargeKernelHalPages.c)
 *     MiComputeDriverProtection @ 0x140A8D51C (MiComputeDriverProtection.c)
 */

char *__fastcall MiProtectSystemImage(__int64 a1, int a2)
{
  char *v2; // rdi
  char *result; // rax
  PIMAGE_NT_HEADERS v5; // rsi
  __int64 NumberOfSections; // r15
  _OWORD *v7; // r14
  int v8; // r10d
  int *v9; // r9
  char *v10; // r8
  int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned __int64 PteAddress; // r13
  __int64 v14; // r11
  unsigned __int64 v15; // r12
  int v16; // r15d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r10d
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // eax
  __int64 SectionAlignment; // rcx
  __int64 v27; // rax
  int v28; // r9d
  unsigned int v29; // r11d
  unsigned __int64 v30; // r10
  unsigned int v31; // eax
  unsigned __int64 v32; // r10
  int v33; // [rsp+30h] [rbp-98h]
  unsigned int v34; // [rsp+34h] [rbp-94h]
  int v36; // [rsp+3Ch] [rbp-8Ch]
  int v37; // [rsp+40h] [rbp-88h]
  unsigned __int64 v38; // [rsp+48h] [rbp-80h]
  unsigned __int64 v39; // [rsp+50h] [rbp-78h]
  PIMAGE_NT_HEADERS v41; // [rsp+60h] [rbp-68h]
  char *v42; // [rsp+68h] [rbp-60h]
  _OWORD v43[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v44; // [rsp+90h] [rbp-38h]

  v2 = *(char **)(a1 + 48);
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  result = (char *)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v2);
  if ( (_DWORD)result )
  {
    if ( v2 == PsNtosImageBase || v2 == PsHalImageBase )
      return (char *)MiActOnLargeKernelHalPages(v2);
  }
  else
  {
    v5 = RtlImageNtHeader(v2);
    v41 = v5;
    v37 = *(_DWORD *)(a1 + 104) & 0x8000000;
    result = v2;
    NumberOfSections = v5->FileHeader.NumberOfSections;
    v7 = (_OWORD *)((char *)&v5->OptionalHeader.Magic + v5->FileHeader.SizeOfOptionalHeader);
    v8 = v5->FileHeader.NumberOfSections;
    v9 = (int *)(v7 + 1);
    while ( v8 )
    {
      v10 = &v2[*(v9 - 1)];
      if ( v10 < result )
        return result;
      v11 = *v9;
      if ( *v9 < (unsigned int)*(v9 - 2) )
        v11 = *(v9 - 2);
      --v8;
      result = (char *)(-(__int64)v5->OptionalHeader.SectionAlignment & (unsigned __int64)&v10[v5->OptionalHeader.SectionAlignment
                                                                                             - 1
                                                                                             + v11]);
      v9 += 10;
    }
    v36 = -1073741824;
    v42 = (char *)v7 + 40 * NumberOfSections - 1;
    PteAddress = MiGetPteAddress((unsigned __int64)v2);
    v33 = 0;
    v15 = 0LL;
    v39 = PteAddress + 8 * v14;
    v16 = NumberOfSections + 1;
    do
    {
      if ( v16 == 1 )
      {
        HIDWORD(v44) = 0;
        v7 = v43;
        v38 = 0LL;
        v34 = 0;
        v17 = MiGetPteAddress(v12) + 8;
      }
      else
      {
        v38 = (unsigned __int64)&v2[*((unsigned int *)v7 + 3)];
        v20 = MiGetPteAddress(v38);
        v19 = v33;
        v17 = v20;
        if ( v22 < v21 )
          v22 = v21;
        v34 = v22;
      }
      if ( v15 && v17 > v15 )
      {
        v23 = MiComputeDriverProtection(v19);
        MiSetSystemCodeProtection(a1, v15, v15, v23, a2);
        if ( v15 == PteAddress )
          PteAddress += 8LL;
        v18 = (unsigned __int64)v42;
        v15 = 0LL;
        v33 = 0;
      }
      if ( v17 >= v39 )
      {
        result = (char *)v43;
        if ( v7 != v43 )
          break;
      }
      v24 = *((_DWORD *)v7 + 9) & 0xE0000000;
      if ( !v37 && ((MiFlags & 0x8000) == 0 || (*((_DWORD *)v7 + 9) & 0x20000000) == 0) )
        v24 = *((_DWORD *)v7 + 9) & 0x60000000 | 0x80000000;
      if ( v24 == v36 && (v25 = v41->OptionalHeader.SectionAlignment, v25 <= 0x1000) )
      {
        SectionAlignment = v25;
      }
      else
      {
        v27 = MiGetPteAddress(v18);
        v30 = v27;
        if ( v27 == v17 )
        {
          v30 = v27 - 8;
          v15 = v17;
          v33 = v29 | v24 | v28;
        }
        if ( v30 >= PteAddress )
        {
          v31 = MiComputeDriverProtection(v29);
          MiSetSystemCodeProtection(a1, PteAddress, v32, v31, a2);
        }
        PteAddress = v17;
        v36 = v24;
        SectionAlignment = v41->OptionalHeader.SectionAlignment;
      }
      v7 = (_OWORD *)((char *)v7 + 40);
      result = (char *)(SectionAlignment + v34);
      v12 = (-SectionAlignment & (unsigned __int64)&result[v38 - 1]) - 1;
      v42 = (char *)v12;
      --v16;
    }
    while ( v16 );
  }
  return result;
}
