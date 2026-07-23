/*
 * XREFs of MiProtectSystemImage @ 0x140A8B9E8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1406EDB90 (MiDriverLoadSucceeded.c)
 *     MiWriteProtectSystemImages @ 0x1407D8230 (MiWriteProtectSystemImages.c)
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiActOnLargeKernelHalPages @ 0x1407D7B40 (MiActOnLargeKernelHalPages.c)
 *     MiComputeDriverProtection @ 0x140A8BD1C (MiComputeDriverProtection.c)
 */

char *__fastcall MiProtectSystemImage(__int64 a1, int a2)
{
  char *v2; // rdi
  char *result; // rax
  char *v5; // rt1
  PIMAGE_NT_HEADERS v6; // rsi
  __int64 NumberOfSections; // r15
  _OWORD *v8; // r14
  int v9; // r10d
  int *v10; // r9
  char *v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int64 PteAddress; // r13
  __int64 v15; // r11
  unsigned __int64 v16; // r12
  int v17; // r15d
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r8
  unsigned int v20; // r9d
  __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // esi
  unsigned int v26; // eax
  __int64 SectionAlignment; // rcx
  __int64 v28; // rax
  int v29; // r9d
  unsigned int v30; // r11d
  unsigned __int64 v31; // r10
  unsigned int v32; // eax
  unsigned __int64 v33; // r10
  int v34; // [rsp+30h] [rbp-98h]
  unsigned int v35; // [rsp+34h] [rbp-94h]
  int v37; // [rsp+3Ch] [rbp-8Ch]
  int v38; // [rsp+40h] [rbp-88h]
  unsigned __int64 v39; // [rsp+48h] [rbp-80h]
  unsigned __int64 v40; // [rsp+50h] [rbp-78h]
  PIMAGE_NT_HEADERS v42; // [rsp+60h] [rbp-68h]
  char *v43; // [rsp+68h] [rbp-60h]
  _OWORD v44[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v45; // [rsp+90h] [rbp-38h]

  v2 = *(char **)(a1 + 48);
  memset(v44, 0, sizeof(v44));
  v45 = 0LL;
  result = (char *)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v2);
  if ( (_DWORD)result )
  {
    v5 = *(char **)&KeNumberProcessorsGroup0[9];
    if ( v2 == v5 || v2 == PsHalImageBase )
      return (char *)MiActOnLargeKernelHalPages(v2);
  }
  else
  {
    v6 = RtlImageNtHeader(v2);
    v42 = v6;
    v38 = *(_DWORD *)(a1 + 104) & 0x8000000;
    result = v2;
    NumberOfSections = v6->FileHeader.NumberOfSections;
    v8 = (_OWORD *)((char *)&v6->OptionalHeader.Magic + v6->FileHeader.SizeOfOptionalHeader);
    v9 = v6->FileHeader.NumberOfSections;
    v10 = (int *)(v8 + 1);
    while ( v9 )
    {
      v11 = &v2[*(v10 - 1)];
      if ( v11 < result )
        return result;
      v12 = *v10;
      if ( *v10 < (unsigned int)*(v10 - 2) )
        v12 = *(v10 - 2);
      --v9;
      result = (char *)(-(__int64)v6->OptionalHeader.SectionAlignment & (unsigned __int64)&v11[v6->OptionalHeader.SectionAlignment
                                                                                             - 1
                                                                                             + v12]);
      v10 += 10;
    }
    v37 = -1073741824;
    v43 = (char *)v8 + 40 * NumberOfSections - 1;
    PteAddress = MiGetPteAddress((unsigned __int64)v2);
    v34 = 0;
    v16 = 0LL;
    v40 = PteAddress + 8 * v15;
    v17 = NumberOfSections + 1;
    do
    {
      if ( v17 == 1 )
      {
        HIDWORD(v45) = 0;
        v8 = v44;
        v39 = 0LL;
        v35 = 0;
        v18 = MiGetPteAddress(v13) + 8;
      }
      else
      {
        v39 = (unsigned __int64)&v2[*((unsigned int *)v8 + 3)];
        v21 = MiGetPteAddress(v39);
        v20 = v34;
        v18 = v21;
        if ( v23 < v22 )
          v23 = v22;
        v35 = v23;
      }
      if ( v16 && v18 > v16 )
      {
        v24 = MiComputeDriverProtection(v20);
        MiSetSystemCodeProtection(a1, v16, v16, v24, a2);
        if ( v16 == PteAddress )
          PteAddress += 8LL;
        v19 = (unsigned __int64)v43;
        v16 = 0LL;
        v34 = 0;
      }
      if ( v18 >= v40 )
      {
        result = (char *)v44;
        if ( v8 != v44 )
          break;
      }
      v25 = *((_DWORD *)v8 + 9) & 0xE0000000;
      if ( !v38 && ((MiFlags & 0x8000) == 0 || (*((_DWORD *)v8 + 9) & 0x20000000) == 0) )
        v25 = *((_DWORD *)v8 + 9) & 0x60000000 | 0x80000000;
      if ( v25 == v37 && (v26 = v42->OptionalHeader.SectionAlignment, v26 <= 0x1000) )
      {
        SectionAlignment = v26;
      }
      else
      {
        v28 = MiGetPteAddress(v19);
        v31 = v28;
        if ( v28 == v18 )
        {
          v31 = v28 - 8;
          v16 = v18;
          v34 = v30 | v25 | v29;
        }
        if ( v31 >= PteAddress )
        {
          v32 = MiComputeDriverProtection(v30);
          MiSetSystemCodeProtection(a1, PteAddress, v33, v32, a2);
        }
        PteAddress = v18;
        v37 = v25;
        SectionAlignment = v42->OptionalHeader.SectionAlignment;
      }
      v8 = (_OWORD *)((char *)v8 + 40);
      result = (char *)(SectionAlignment + v35);
      v13 = (-SectionAlignment & (unsigned __int64)&result[v39 - 1]) - 1;
      v43 = (char *)v13;
      --v17;
    }
    while ( v17 );
  }
  return result;
}
