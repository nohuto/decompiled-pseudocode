/*
 * XREFs of BiUpdateBcdObject @ 0x140AD63A8
 * Callers:
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x1404B6F90 (BiMapEfiDeviceForSpaces.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     BiModifyBootEntry @ 0x1408059F4 (BiModifyBootEntry.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BiCreateMergedBootEntry @ 0x140A253DC (BiCreateMergedBootEntry.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiGetDeviceFromEfiPath @ 0x140A264BC (BiGetDeviceFromEfiPath.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     BiGetFilePathFromEfiPath @ 0x140A76A6C (BiGetFilePathFromEfiPath.c)
 *     BiAreBootEntriesEqual @ 0x140AB22A4 (BiAreBootEntriesEqual.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  char *v2; // rsi
  _DWORD *v4; // r12
  void *v5; // r15
  ULONG *v6; // rdi
  int v7; // eax
  void *v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  char *v11; // r15
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
  unsigned int v25; // [rsp+30h] [rbp-40h] BYREF
  void *v26; // [rsp+38h] [rbp-38h]
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  PVOID v28; // [rsp+48h] [rbp-28h] BYREF
  ULONG *v29; // [rsp+50h] [rbp-20h] BYREF
  void *Source2; // [rsp+58h] [rbp-18h] BYREF
  void *v31; // [rsp+60h] [rbp-10h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+50h] BYREF
  SIZE_T Length; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(char **)(a2 + 40);
  v33 = 0;
  v25 = 0;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  LODWORD(Length) = 0;
  v31 = 0LL;
  v26 = 0LL;
  v32 = 0;
  v29 = 0LL;
  v7 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v31);
  v8 = v31;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_40;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)BiGetRegistryValue((__int64)v31, L"FirmwareVariable", (__int64)L"Description", 3u, &Source2, &Length) >= 0 )
  {
    v10 = *((_DWORD *)v2 + 1);
    if ( v10 == (_DWORD)Length && RtlCompareMemory(v2, Source2, v10) == *((_DWORD *)v2 + 1) )
    {
LABEL_8:
      v11 = &v2[*((unsigned int *)v2 + 4)];
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&v11[2 * v12] );
      LODWORD(Length) = 2 * v12 + 2;
      ElementData = BcdGetElementData((__int64)v8, 0x12000004u, 0LL, &v32);
      if ( ElementData == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(0x102uLL);
        v26 = Pool2;
        v15 = Pool2;
        if ( !Pool2 )
          goto LABEL_18;
        ElementData = BcdGetElementData((__int64)v8, 0x12000004u, (__int64)Pool2, &v32);
      }
      else
      {
        v15 = 0LL;
      }
      if ( ElementData >= 0 )
      {
        if ( v15 )
        {
          if ( v32 == (_DWORD)Length )
          {
            v16 = (unsigned int)Length;
            if ( RtlCompareMemory(v11, v26, (unsigned int)Length) == v16 )
            {
LABEL_19:
              v18 = *((unsigned int *)v2 + 5);
              if ( *(_DWORD *)&v2[v18 + 8] == 4 )
              {
                v19 = &v2[v18];
                if ( (int)BiGetDeviceFromEfiPath(&v2[v18 + 12], &P, &v33) < 0 )
                {
                  v4 = P;
                }
                else
                {
                  BiDeleteElement(v8, 0x11000001u);
                  BiMapEfiDeviceForSpaces(a2, (const void **)&P, &v33);
                  v4 = P;
                  BcdSetElementDataWithFlags(v8, 285212673LL, v20, (__int64)P, v33);
                }
                if ( BiGetFilePathFromEfiPath((__int64)(v19 + 12), (__int64 *)&v28, &v25) < 0 )
                {
                  v21 = v28;
                }
                else
                {
                  BiDeleteElement(v8, 0x12000002u);
                  v21 = v28;
                  BcdSetElementDataWithFlags(v8, 301989890LL, v22, (__int64)v28, v25);
                }
                v23 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &v29);
                v6 = v29;
                if ( v23 >= 0 && !BiAreBootEntriesEqual(v2, v29) )
                {
                  BiLogMessage();
                  v9 = BiModifyBootEntry((__int64)v6);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", L"Description", 3u, v6, v6[1]);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  ExFreePoolWithTag(v2, 0x4B444342u);
                  *(_QWORD *)(a2 + 40) = v6;
                  v6 = 0LL;
                }
              }
              else
              {
                v21 = v28;
              }
              v9 = 0;
LABEL_33:
              if ( v4 )
                ExFreePoolWithTag(v4, 0x4B444342u);
              if ( v21 )
                ExFreePoolWithTag(v21, 0x4B444342u);
              v5 = v26;
              goto LABEL_38;
            }
          }
        }
      }
LABEL_18:
      BiDeleteElement(v8, 0x12000004u);
      BcdSetElementDataWithFlags(v8, 301989892LL, v17, (__int64)v11, Length);
      goto LABEL_19;
    }
  }
  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", L"Description", 3u, v2, *((_DWORD *)v2 + 1));
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
