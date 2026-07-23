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

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  char *v2; // rsi
  _DWORD *v4; // r12
  void *v5; // r15
  PBOOT_ENTRY v6; // rdi
  NTSTATUS v7; // eax
  HANDLE v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  char *v11; // r15
  __int64 v12; // rax
  NTSTATUS ElementData; // eax
  void *Pool2; // rax
  void *v15; // rbx
  __int64 v16; // rbx
  BCD_FLAGS v17; // r8d
  __int64 v18; // rax
  char *v19; // rbx
  BCD_FLAGS v20; // r8d
  PVOID v21; // r15
  BCD_FLAGS v22; // r8d
  int v23; // eax
  ULONG v25; // [rsp+30h] [rbp-40h] BYREF
  void *v26; // [rsp+38h] [rbp-38h]
  PVOID Buffer; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  PBOOT_ENTRY BootEntry; // [rsp+50h] [rbp-20h] BYREF
  void *Source2; // [rsp+58h] [rbp-18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+60h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+B8h] [rbp+48h] BYREF
  ULONG v33; // [rsp+C0h] [rbp+50h] BYREF
  SIZE_T Length; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(char **)a2[2].Data4;
  v33 = 0;
  v25 = 0;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  LODWORD(Length) = 0;
  BcdObjectHandle = 0LL;
  v26 = 0LL;
  BufferSize = 0;
  BootEntry = 0LL;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v8 = BcdObjectHandle;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_40;
  if ( (a2[3].Data1 & 2) != 0
    && (int)BiGetRegistryValue(
              (__int64)BcdObjectHandle,
              L"FirmwareVariable",
              (__int64)L"Description",
              3u,
              &Source2,
              &Length) >= 0 )
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
      ElementData = BcdGetElementData(v8, 0x12000004u, 0LL, &BufferSize);
      if ( ElementData == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(0x102uLL);
        v26 = Pool2;
        v15 = Pool2;
        if ( !Pool2 )
          goto LABEL_18;
        ElementData = BcdGetElementData(v8, 0x12000004u, Pool2, &BufferSize);
      }
      else
      {
        v15 = 0LL;
      }
      if ( ElementData >= 0 )
      {
        if ( v15 )
        {
          if ( BufferSize == (_DWORD)Length )
          {
            v16 = (unsigned int)Length;
            if ( RtlCompareMemory(v11, v26, (unsigned int)Length) == v16 )
            {
LABEL_19:
              v18 = *((unsigned int *)v2 + 5);
              if ( *(_DWORD *)&v2[v18 + 8] == 4 )
              {
                v19 = &v2[v18];
                if ( (int)BiGetDeviceFromEfiPath(&v2[v18 + 12], &Buffer, (int *)&v33) < 0 )
                {
                  v4 = Buffer;
                }
                else
                {
                  BiDeleteElement(v8, 0x11000001u);
                  BiMapEfiDeviceForSpaces((__int64)a2, (const void **)&Buffer, &v33);
                  v4 = Buffer;
                  BcdSetElementDataWithFlags(v8, 0x11000001u, v20, Buffer, v33);
                }
                if ( BiGetFilePathFromEfiPath((__int64)(v19 + 12), (__int64 *)&P, &v25) < 0 )
                {
                  v21 = P;
                }
                else
                {
                  BiDeleteElement(v8, 0x12000002u);
                  v21 = P;
                  BcdSetElementDataWithFlags(v8, 0x12000002u, v22, P, v25);
                }
                v23 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &BootEntry);
                v6 = BootEntry;
                if ( v23 >= 0 && !BiAreBootEntriesEqual(v2, BootEntry) )
                {
                  BiLogMessage();
                  v9 = BiModifyBootEntry(v6);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", L"Description", 3u, v6, v6->Length);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  ExFreePoolWithTag(v2, 0x4B444342u);
                  *(_QWORD *)a2[2].Data4 = v6;
                  v6 = 0LL;
                }
              }
              else
              {
                v21 = P;
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
      BcdSetElementDataWithFlags(v8, 0x12000004u, v17, v11, Length);
      goto LABEL_19;
    }
  }
  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", L"Description", 3u, v2, *((_DWORD *)v2 + 1));
  if ( v9 >= 0 )
  {
    a2[3].Data1 |= 2u;
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
