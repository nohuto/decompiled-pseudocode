/*
 * XREFs of BiResolveLocateDevice @ 0x14081243C
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x1409BF658 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1406A6BB0 (ZwQueryAttributesFile.c)
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiResolveLocateDevice(__int64 a1, _DWORD *a2)
{
  const WCHAR *v2; // r14
  WCHAR *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int ElementData; // ebx
  __int64 Pool2; // rax
  const WCHAR *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-41h] BYREF
  __int128 v16; // [rsp+38h] [rbp-31h] BYREF
  __int128 v17; // [rsp+48h] [rbp-21h]
  __int128 v18; // [rsp+58h] [rbp-11h]
  _OWORD v19[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+1Fh]

  v2 = (const WCHAR *)((char *)a2 + (unsigned int)a2[6]);
  v14 = 0;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  *(_QWORD *)&v18 = 0LL;
  v16 = 0LL;
  DWORD2(v18) = 0;
  v5 = 0LL;
  v17 = 0LL;
  Destination = 0LL;
  if ( *(_DWORD *)v2 != 2 )
    goto LABEL_15;
  v6 = a2[5];
  if ( !v6 )
  {
    v7 = (unsigned int)a2[7];
    if ( (v7 & 0xF000000) == 0x2000000 )
    {
      ElementData = BcdGetElementData(a1, v7, 0LL, &v14);
      if ( ElementData != -1073741789 )
        goto LABEL_16;
      Pool2 = ExAllocatePool2(0x102uLL);
      v5 = (WCHAR *)Pool2;
      if ( !Pool2 )
        goto LABEL_6;
      BcdGetElementData(a1, (unsigned int)a2[7], Pool2, &v14);
      v10 = v5;
      goto LABEL_10;
    }
LABEL_15:
    ElementData = -1073741637;
    goto LABEL_16;
  }
  if ( v6 != 1 )
    goto LABEL_15;
  v10 = (const WCHAR *)(a2 + 8);
LABEL_10:
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v2[v12 + 10] );
  do
    ++v11;
  while ( v10[v11] );
  Destination.MaximumLength = 2 * (v11 + v12 + 1);
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x102uLL);
  if ( !Destination.Buffer )
  {
LABEL_6:
    ElementData = -1073741670;
    goto LABEL_16;
  }
  RtlAppendUnicodeToString(&Destination, v2 + 10);
  RtlAppendUnicodeToString(&Destination, v10);
  LODWORD(v16) = 48;
  *(_QWORD *)&v17 = &Destination;
  *((_QWORD *)&v16 + 1) = 0LL;
  DWORD2(v17) = 576;
  v18 = 0LL;
  ElementData = ZwQueryAttributesFile((__int64)&v16, (__int64)v19);
LABEL_16:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  return ElementData;
}
