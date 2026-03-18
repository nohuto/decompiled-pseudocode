/*
 * XREFs of BiUpdateBcdObject @ 0x1408157BC
 * Callers:
 *     BiBindEfiEntries @ 0x140A9AAF4 (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x1404B6A60 (BiMapEfiDeviceForSpaces.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     BiModifyBootEntry @ 0x14081556C (BiModifyBootEntry.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiGetDeviceFromEfiPath @ 0x1409C09F4 (BiGetDeviceFromEfiPath.c)
 *     BiCreateMergedBootEntry @ 0x1409C168C (BiCreateMergedBootEntry.c)
 *     BiGetFilePathFromEfiPath @ 0x140A787CC (BiGetFilePathFromEfiPath.c)
 *     BiAreBootEntriesEqual @ 0x140AB713C (BiAreBootEntriesEqual.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  PVOID v4; // r12
  void *v5; // r15
  void *v6; // rdi
  int v7; // eax
  __int64 v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  _WORD *v11; // r15
  __int64 v12; // rax
  int ElementData; // eax
  void *Pool2; // rax
  void *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  __int64 v20; // r8
  PVOID v21; // r15
  __int64 v22; // r8
  int v23; // eax
  int v25; // [rsp+28h] [rbp-48h]
  int v26; // [rsp+30h] [rbp-40h] BYREF
  void *v27; // [rsp+38h] [rbp-38h]
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  PVOID v29; // [rsp+48h] [rbp-28h] BYREF
  void *v30; // [rsp+50h] [rbp-20h] BYREF
  void *Source2; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  int v33; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+50h] BYREF
  SIZE_T Length; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)(a2 + 40);
  v34 = 0;
  v26 = 0;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  LODWORD(Length) = 0;
  v32 = 0LL;
  v27 = 0LL;
  v33 = 0;
  v30 = 0LL;
  v7 = BcdOpenObject(a1, a2 + 16, &v32);
  v8 = v32;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_40;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)BiGetRegistryValue(v32, L"FirmwareVariable", L"Description", 3LL, &Source2, &Length) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == (_DWORD)Length && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_8:
      v11 = (_WORD *)((char *)v2 + (unsigned int)v2[4]);
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      LODWORD(Length) = 2 * v12 + 2;
      ElementData = BcdGetElementData(v8, 301989892LL, 0LL, &v33);
      if ( ElementData == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(0x102uLL);
        v27 = Pool2;
        v15 = Pool2;
        if ( !Pool2 )
          goto LABEL_18;
        ElementData = BcdGetElementData(v8, 301989892LL, Pool2, &v33);
      }
      else
      {
        v15 = 0LL;
      }
      if ( ElementData >= 0 )
      {
        if ( v15 )
        {
          if ( v33 == (_DWORD)Length )
          {
            v16 = (unsigned int)Length;
            if ( RtlCompareMemory(v11, v27, (unsigned int)Length) == v16 )
            {
LABEL_19:
              v18 = (unsigned int)v2[5];
              if ( *(_DWORD *)((char *)v2 + v18 + 8) == 4 )
              {
                v19 = (char *)v2 + v18;
                if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12) < 0 )
                {
                  v4 = P;
                }
                else
                {
                  BiDeleteElement(v8, 285212673LL);
                  BiMapEfiDeviceForSpaces(a2, (const void **)&P, &v34);
                  v4 = P;
                  BcdSetElementDataWithFlags(v8, 285212673LL, v20, P, v34);
                }
                if ( (int)BiGetFilePathFromEfiPath(v19 + 12, &v29, &v26) < 0 )
                {
                  v21 = v29;
                }
                else
                {
                  BiDeleteElement(v8, 301989890LL);
                  v21 = v29;
                  BcdSetElementDataWithFlags(v8, 301989890LL, v22, v29, v26);
                }
                v23 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &v30, v25);
                v6 = v30;
                if ( v23 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v2, v30) )
                {
                  BiLogMessage(2LL, L"Updating BootEntry: %d", (unsigned int)v2[2]);
                  v9 = BiModifyBootEntry((__int64)v6);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  v9 = BiSetRegistryValue(v8, L"FirmwareVariable", L"Description");
                  if ( v9 < 0 )
                    goto LABEL_33;
                  ExFreePoolWithTag(v2, 0x4B444342u);
                  *(_QWORD *)(a2 + 40) = v6;
                  v6 = 0LL;
                }
              }
              else
              {
                v21 = v29;
              }
              v9 = 0;
LABEL_33:
              if ( v4 )
                ExFreePoolWithTag(v4, 0x4B444342u);
              if ( v21 )
                ExFreePoolWithTag(v21, 0x4B444342u);
              v5 = v27;
              goto LABEL_38;
            }
          }
        }
      }
LABEL_18:
      BiDeleteElement(v8, 301989892LL);
      BcdSetElementDataWithFlags(v8, 301989892LL, v17, v11, Length);
      goto LABEL_19;
    }
  }
  v25 = v2[1];
  v9 = BiSetRegistryValue(v8, L"FirmwareVariable", L"Description");
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
    goto LABEL_8;
  }
LABEL_38:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_40:
  if ( v8 )
    BcdCloseObject(v8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v9;
}
