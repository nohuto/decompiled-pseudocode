/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E01D0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E014C (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

int __fastcall WerEscalationReadImageVersionInfoForModuleBase(char *BaseOfImage, __int64 a2)
{
  size_t VirtualAddress; // rax
  PIMAGE_NT_HEADERS v5; // rcx
  __int64 SizeOfImage; // r9
  unsigned __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  size_t v11; // rdx
  unsigned int i; // r11d
  __int64 v13; // rcx
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r11d
  size_t v18; // rcx
  char *v19; // rdx
  unsigned int v20; // edi
  unsigned int v21; // r10d
  char *v22; // r11
  __int64 v23; // rdx
  char *v24; // rcx
  unsigned __int64 v25; // rdx
  size_t v26; // rdx
  char *v27; // rdx
  size_t v28; // rcx
  char *v29; // rcx
  char *v30; // rbp
  char *v31; // rcx
  char *v32; // rdx
  _WORD *v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int16 v35; // r8
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rsi
  size_t v39; // rcx
  int v40; // edi
  size_t v41; // r10
  size_t v42; // rdx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  *(_OWORD *)a2 = 0LL;
  LODWORD(VirtualAddress) = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  if ( (VirtualAddress & 0x80000000) == 0LL )
  {
    v5 = OutHeaders;
    *(_DWORD *)a2 = OutHeaders->FileHeader.TimeDateStamp;
    LODWORD(VirtualAddress) = v5->OptionalHeader.CheckSum;
    *(_DWORD *)(a2 + 4) = VirtualAddress;
    SizeOfImage = v5->OptionalHeader.SizeOfImage;
    if ( v5->OptionalHeader.NumberOfRvaAndSizes > 2 )
    {
      VirtualAddress = v5->OptionalHeader.DataDirectory[2].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        if ( v5->OptionalHeader.DataDirectory[2].Size >= 0x10 )
        {
          v7 = (unsigned __int64)&BaseOfImage[VirtualAddress];
          VirtualAddress += (size_t)(BaseOfImage + 16);
          v8 = &BaseOfImage[SizeOfImage];
          if ( VirtualAddress >= (unsigned __int64)BaseOfImage
            && VirtualAddress <= (unsigned __int64)v8
            && VirtualAddress >= v7
            && v8 >= BaseOfImage
            && v7 <= (unsigned __int64)v8
            && v7 >= (unsigned __int64)BaseOfImage )
          {
            if ( v7 )
            {
              v9 = *(unsigned __int16 *)(v7 + 12);
              v10 = *(unsigned __int16 *)(v7 + 14);
              LODWORD(VirtualAddress) = v10 + v9;
              if ( (unsigned int)v9 < v10 + (unsigned int)v9 )
              {
                VirtualAddress = v7 + 8 * (v9 + 2);
                v11 = VirtualAddress + 8;
                if ( VirtualAddress + 8 >= (unsigned __int64)BaseOfImage
                  && v11 <= (unsigned __int64)v8
                  && v11 >= VirtualAddress
                  && VirtualAddress <= (unsigned __int64)v8
                  && VirtualAddress >= (unsigned __int64)BaseOfImage
                  && VirtualAddress )
                {
                  for ( i = 0; i < v10; ++i )
                  {
                    if ( *(int *)VirtualAddress >= 0 && (unsigned __int16)*(_DWORD *)VirtualAddress == 16 )
                    {
                      LODWORD(VirtualAddress) = *(_DWORD *)(VirtualAddress + 4);
                      v13 = (unsigned int)VirtualAddress;
                      if ( (VirtualAddress & 0x80000000) != 0LL )
                      {
                        LODWORD(v13) = VirtualAddress & 0x7FFFFFFF;
                        v14 = &BaseOfImage[SizeOfImage];
                        v15 = v7 + v13;
                        VirtualAddress = v15 + 16;
                        if ( v15 + 16 >= (unsigned __int64)BaseOfImage
                          && VirtualAddress <= (unsigned __int64)v14
                          && VirtualAddress >= v15
                          && v15 <= (unsigned __int64)v14
                          && v15 >= (unsigned __int64)BaseOfImage )
                        {
                          v16 = *(unsigned __int16 *)(v15 + 12);
                          v17 = *(unsigned __int16 *)(v15 + 14);
                          LODWORD(VirtualAddress) = v16 + v17;
                          if ( (unsigned int)v16 < (unsigned int)v16 + v17 )
                          {
                            VirtualAddress = v15 + 16 + 8 * v16;
                            v18 = VirtualAddress + 8;
                            v19 = &BaseOfImage[SizeOfImage];
                            if ( VirtualAddress + 8 >= (unsigned __int64)BaseOfImage
                              && v18 <= (unsigned __int64)v19
                              && v18 >= VirtualAddress
                              && VirtualAddress <= (unsigned __int64)v19
                              && VirtualAddress >= (unsigned __int64)BaseOfImage
                              && VirtualAddress )
                            {
                              v20 = v17;
                              v21 = 0;
                              v22 = &BaseOfImage[SizeOfImage];
                              while ( v21 < v20 )
                              {
                                if ( *(int *)VirtualAddress >= 0 && (unsigned __int16)*(_DWORD *)VirtualAddress == 1 )
                                {
                                  LODWORD(VirtualAddress) = *(_DWORD *)(VirtualAddress + 4);
                                  v23 = (unsigned int)VirtualAddress;
                                  if ( (VirtualAddress & 0x80000000) != 0LL )
                                  {
                                    LODWORD(v23) = VirtualAddress & 0x7FFFFFFF;
                                    v24 = &BaseOfImage[SizeOfImage];
                                    v25 = v7 + v23;
                                    VirtualAddress = v25 + 16;
                                    if ( v25 + 16 >= (unsigned __int64)BaseOfImage
                                      && VirtualAddress <= (unsigned __int64)v24
                                      && VirtualAddress >= v25
                                      && v25 <= (unsigned __int64)v24
                                      && v25 >= (unsigned __int64)BaseOfImage )
                                    {
                                      LODWORD(VirtualAddress) = *(unsigned __int16 *)(v25 + 12);
                                      if ( (_DWORD)VirtualAddress + *(unsigned __int16 *)(v25 + 14) )
                                      {
                                        v26 = v25 + 16;
                                        VirtualAddress = v26 + 8;
                                        if ( v26 + 8 >= (unsigned __int64)BaseOfImage
                                          && VirtualAddress <= (unsigned __int64)&BaseOfImage[SizeOfImage]
                                          && VirtualAddress >= v26 )
                                        {
                                          if ( v26 )
                                          {
                                            VirtualAddress = *(unsigned int *)(v26 + 4);
                                            if ( (VirtualAddress & 0x80000000) == 0LL )
                                            {
                                              VirtualAddress += v7;
                                              v27 = &BaseOfImage[SizeOfImage];
                                              v28 = VirtualAddress + 16;
                                              if ( VirtualAddress + 16 >= (unsigned __int64)BaseOfImage
                                                && v28 <= (unsigned __int64)v27
                                                && v28 >= VirtualAddress
                                                && VirtualAddress <= (unsigned __int64)v27
                                                && VirtualAddress >= (unsigned __int64)BaseOfImage
                                                && *(_DWORD *)(VirtualAddress + 4) >= 0x5Cu )
                                              {
                                                v29 = &BaseOfImage[SizeOfImage];
                                                v30 = &BaseOfImage[*(unsigned int *)VirtualAddress];
                                                VirtualAddress = (size_t)(v30 + 92);
                                                if ( v30 + 92 >= BaseOfImage
                                                  && VirtualAddress <= (unsigned __int64)v29
                                                  && VirtualAddress >= (unsigned __int64)v30
                                                  && v30 <= v29
                                                  && v30 >= BaseOfImage )
                                                {
                                                  if ( v30 )
                                                  {
                                                    VirtualAddress = (size_t)(v30 + 6);
                                                    v31 = v30 + 38;
                                                    v32 = &BaseOfImage[SizeOfImage];
                                                    if ( v30 + 38 >= BaseOfImage
                                                      && v31 <= v32
                                                      && (unsigned __int64)v31 >= VirtualAddress
                                                      && VirtualAddress <= (unsigned __int64)v32
                                                      && VirtualAddress >= (unsigned __int64)BaseOfImage )
                                                    {
                                                      VirtualAddress = wcslen(L"VS_VERSION_INFO");
                                                      v33 = v30 + 6;
                                                      v34 = 2 * VirtualAddress;
                                                      LODWORD(VirtualAddress) = 65532;
                                                      if ( v34 >= 0xFFFE )
                                                        LOWORD(v34) = -4;
                                                      if ( v30 != (char *)-6LL )
                                                      {
                                                        VirtualAddress = 16LL;
                                                        do
                                                        {
                                                          if ( !*v33 )
                                                            break;
                                                          ++v33;
                                                          --VirtualAddress;
                                                        }
                                                        while ( VirtualAddress );
                                                        if ( VirtualAddress )
                                                        {
                                                          v35 = 2 * (16 - VirtualAddress);
                                                          v36 = (unsigned __int64)(unsigned __int16)v34 >> 1;
                                                          v37 = v36;
                                                          v38 = (unsigned __int64)v35 >> 1;
                                                          if ( v36 > v38 )
                                                            v37 = (unsigned __int64)v35 >> 1;
                                                          VirtualAddress = RtlCompareMemory(
                                                                             L"VS_VERSION_INFO",
                                                                             v30 + 6,
                                                                             2 * v37);
                                                          v39 = VirtualAddress >> 1;
                                                          if ( VirtualAddress >> 1 < v37 )
                                                          {
                                                            LODWORD(VirtualAddress) = *(unsigned __int16 *)&v30[2 * v39 + 6];
                                                            v40 = aVsVersionInfo[v39] - (_DWORD)VirtualAddress;
                                                          }
                                                          else
                                                          {
                                                            v40 = v36 - v38;
                                                          }
                                                          if ( !v40 )
                                                          {
                                                            *(_DWORD *)(a2 + 8) = *((_DWORD *)v30 + 12);
                                                            LODWORD(VirtualAddress) = *((_DWORD *)v30 + 13);
                                                            *(_DWORD *)(a2 + 12) = VirtualAddress;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return VirtualAddress;
                                }
                                VirtualAddress += 8LL;
                                v42 = VirtualAddress + 8;
                                if ( VirtualAddress + 8 < (unsigned __int64)BaseOfImage
                                  || v42 > (unsigned __int64)v22
                                  || v42 < VirtualAddress
                                  || VirtualAddress > (unsigned __int64)v22
                                  || VirtualAddress < (unsigned __int64)BaseOfImage )
                                {
                                  return VirtualAddress;
                                }
                                ++v21;
                              }
                            }
                          }
                        }
                      }
                      return VirtualAddress;
                    }
                    VirtualAddress += 8LL;
                    v41 = VirtualAddress + 8;
                    if ( VirtualAddress + 8 < (unsigned __int64)BaseOfImage
                      || v41 > (unsigned __int64)v8
                      || v41 < VirtualAddress
                      || VirtualAddress > (unsigned __int64)v8
                      || VirtualAddress < (unsigned __int64)BaseOfImage )
                    {
                      return VirtualAddress;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return VirtualAddress;
}
