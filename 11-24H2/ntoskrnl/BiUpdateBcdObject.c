/*
 * XREFs of BiUpdateBcdObject @ 0x140815EFC
 * Callers:
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x1404B1240 (BiMapEfiDeviceForSpaces.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     BiModifyBootEntry @ 0x140815CAC (BiModifyBootEntry.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiGetDeviceFromEfiPath @ 0x1409A7044 (BiGetDeviceFromEfiPath.c)
 *     BiCreateMergedBootEntry @ 0x1409A7CDC (BiCreateMergedBootEntry.c)
 *     BiGetFilePathFromEfiPath @ 0x140A72ACC (BiGetFilePathFromEfiPath.c)
 *     BiAreBootEntriesEqual @ 0x140AB1414 (BiAreBootEntriesEqual.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  _DWORD *v2; // rsi
  PVOID v4; // r12
  void *v5; // r15
  _BOOT_ENTRY *v6; // rdi
  NTSTATUS v7; // eax
  HANDLE v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  _WORD *v11; // r15
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
  int v25; // [rsp+28h] [rbp-48h]
  ULONG v26; // [rsp+30h] [rbp-40h] BYREF
  void *v27; // [rsp+38h] [rbp-38h]
  PVOID Buffer; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  PBOOT_ENTRY BootEntry; // [rsp+50h] [rbp-20h] BYREF
  void *Source2; // [rsp+58h] [rbp-18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+60h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+B8h] [rbp+48h] BYREF
  ULONG v34; // [rsp+C0h] [rbp+50h] BYREF
  SIZE_T Length; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)a2[2].Data4;
  v34 = 0;
  v26 = 0;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  LODWORD(Length) = 0;
  BcdObjectHandle = 0LL;
  v27 = 0LL;
  BufferSize = 0;
  BootEntry = 0LL;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v8 = BcdObjectHandle;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_40;
  if ( (a2[3].Data1 & 2) != 0
    && (int)BiGetRegistryValue(BcdObjectHandle, L"FirmwareVariable", L"Description", 3LL, &Source2, &Length) >= 0 )
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
      ElementData = BcdGetElementData(v8, 0x12000004u, 0LL, &BufferSize);
      if ( ElementData == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(0x102uLL, BufferSize, 0x4B444342u);
        v27 = Pool2;
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
            if ( RtlCompareMemory(v11, v27, (unsigned int)Length) == v16 )
            {
LABEL_19:
              v18 = (unsigned int)v2[5];
              if ( *(_DWORD *)((char *)v2 + v18 + 8) == 4 )
              {
                v19 = (char *)v2 + v18;
                if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12) < 0 )
                {
                  v4 = Buffer;
                }
                else
                {
                  BiDeleteElement(v8, 285212673LL);
                  BiMapEfiDeviceForSpaces((__int64)a2, (const void **)&Buffer, &v34);
                  v4 = Buffer;
                  BcdSetElementDataWithFlags(v8, 0x11000001u, v20, Buffer, v34);
                }
                if ( (int)BiGetFilePathFromEfiPath(v19 + 12, &P, &v26) < 0 )
                {
                  v21 = P;
                }
                else
                {
                  BiDeleteElement(v8, 301989890LL);
                  v21 = P;
                  BcdSetElementDataWithFlags(v8, 0x12000002u, v22, P, v26);
                }
                v23 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &BootEntry, v25);
                v6 = BootEntry;
                if ( v23 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v2, BootEntry) )
                {
                  BiLogMessage(2LL, L"Updating BootEntry: %d", (unsigned int)v2[2]);
                  v9 = BiModifyBootEntry(v6);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  v9 = BiSetRegistryValue(v8, L"FirmwareVariable", L"Description");
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
              v5 = v27;
              goto LABEL_38;
            }
          }
        }
      }
LABEL_18:
      BiDeleteElement(v8, 301989892LL);
      BcdSetElementDataWithFlags(v8, 0x12000004u, v17, v11, Length);
      goto LABEL_19;
    }
  }
  v25 = v2[1];
  v9 = BiSetRegistryValue(v8, L"FirmwareVariable", L"Description");
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
