/*
 * XREFs of BiCreateBootEntry @ 0x14081533C
 * Callers:
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x140500710 (swprintf_s.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BiGetKeyName @ 0x1409A53F8 (BiGetKeyName.c)
 *     BiGetElement @ 0x1409A6208 (BiGetElement.c)
 *     BiTranslateFilePath @ 0x1409A71BC (BiTranslateFilePath.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateBootEntry(HANDLE BcdObjectHandle, _QWORD *a2)
{
  void *v2; // r12
  _FILE_PATH *Pool2; // r15
  int Element; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  size_t v13; // rbx
  unsigned int v14; // eax
  int KeyName; // eax
  char *v16; // rax
  _DWORD *v17; // rdx
  __int64 v18; // rax
  char *v19; // rax
  ULONG v21; // [rsp+30h] [rbp-38h]
  int v22; // [rsp+30h] [rbp-38h]
  unsigned int v23; // [rsp+38h] [rbp-30h]
  char *v24; // [rsp+40h] [rbp-28h]
  void *v25; // [rsp+50h] [rbp-18h] BYREF
  PVOID P; // [rsp+58h] [rbp-10h]
  unsigned int Size; // [rsp+C8h] [rbp+60h]
  unsigned int Sizea; // [rsp+C8h] [rbp+60h]

  P = 0LL;
  v2 = 0LL;
  Pool2 = 0LL;
  v25 = 0LL;
  Element = BiGetElement(BcdObjectHandle, 0x12000004u);
  v6 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_24;
  }
  v7 = BiGetElement(BcdObjectHandle, 0x11000001u);
  v6 = v7;
  if ( v7 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application device. Status: %x",
      (unsigned int)v7);
    goto LABEL_24;
  }
  v8 = BiGetElement(BcdObjectHandle, 0x12000002u);
  v6 = v8;
  if ( v8 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application path. Status: %x",
      (unsigned int)v8);
    goto LABEL_24;
  }
  if ( MEMORY[0] != 2 )
  {
    v6 = -1073741637;
    goto LABEL_24;
  }
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)(2 * v10) );
  v11 = 2 * v10 + 2;
  v12 = -1LL;
  Size = v11;
  do
    ++v12;
  while ( *(_WORD *)(2 * v12 + 0x14) );
  v13 = (unsigned int)(2 * v12 + 2);
  v14 = v11 + v13;
  if ( v11 + (unsigned int)v13 < (unsigned int)v13 || v14 + 12 < v14 )
  {
    v6 = -1073741675;
  }
  else
  {
    v21 = v14 + 12;
    Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL, v14 + 12, 0x4B444342u);
    if ( !Pool2 )
    {
LABEL_16:
      v6 = -1073741670;
      goto LABEL_24;
    }
    Pool2->Length = v21;
    Pool2->Version = 1;
    Pool2->Type = 3;
    memmove(Pool2->FilePath, (const void *)0x14, v13);
    memmove(&Pool2->FilePath[v13], 0LL, Size);
    v6 = BiTranslateFilePath(Pool2, 4u);
    if ( v6 >= 0 )
    {
      KeyName = BiGetKeyName(BcdObjectHandle, &v25);
      v2 = v25;
      v6 = KeyName;
      if ( KeyName >= 0 )
      {
        do
          ++v9;
        while ( *((_WORD *)v25 + v9) );
        v22 = (2 * v9 + 45) & 0xFFFFFFFC;
        LODWORD(v25) = (v22 + 47) & 0xFFFFFFFC;
        Sizea = ((_DWORD)v25 + 3) & 0xFFFFFFFC;
        v23 = MEMORY[4] + Sizea;
        v16 = (char *)ExAllocatePool2(0x102uLL, MEMORY[4] + Sizea, 0x4B444342u);
        v24 = v16;
        v17 = v16;
        if ( !v16 )
          goto LABEL_16;
        *((_DWORD *)v16 + 2) = -1;
        *(_DWORD *)v16 = 1;
        *((_DWORD *)v16 + 3) = 1;
        *((_DWORD *)v16 + 1) = v23;
        v18 = (unsigned int)v25;
        v17[5] = Sizea;
        v17[4] = v18;
        v17[6] = v22 + 16;
        memmove((char *)v17 + v18, P, 0LL);
        memmove(&v24[Sizea], 0LL, MEMORY[4]);
        *(_QWORD *)(v24 + 28) = 0x53574F444E4957LL;
        *((_DWORD *)v24 + 10) = v22 + 16;
        *((_DWORD *)v24 + 11) = v22;
        *((_DWORD *)v24 + 9) = 1;
        swprintf_s((wchar_t *)v24 + 24, (unsigned int)v9 + 11LL, L"%s%s", L"BCDOBJECT=", v2);
        v19 = &v24[*((unsigned int *)v24 + 11) + 28];
        v6 = 0;
        *(_DWORD *)v19 = 1;
        *((_DWORD *)v19 + 1) = 16;
        *((_DWORD *)v19 + 2) = 4;
        *((_DWORD *)v19 + 3) = 327551;
        *a2 = v24;
      }
    }
  }
LABEL_24:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return (unsigned int)v6;
}
