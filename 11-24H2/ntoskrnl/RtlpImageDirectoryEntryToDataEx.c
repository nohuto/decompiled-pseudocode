/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1402EECFC
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x1402F0074 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1406A433C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1402EEE80 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x1402EEF2C (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // r10d
  char v6; // bl
  unsigned int *v8; // r11
  _IMAGE_NT_HEADERS64 *NtHeaders; // rcx
  unsigned __int16 Magic; // ax
  __int64 v11; // r9
  __int64 VirtualAddress; // r8
  unsigned __int64 v14; // rax
  PVOID v15; // rax

  v5 = 0;
  v6 = a2;
  v8 = (unsigned int *)BaseOfImage;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v8 = (unsigned int *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
    v6 = 0;
    if ( (BaseOfImage & 1) == 0 )
      v6 = a2;
  }
  if ( (unsigned __int64)v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)v8 == 23117
    && (NtHeaders = (_IMAGE_NT_HEADERS64 *)((char *)v8 + v8[15]), NtHeaders >= (_IMAGE_NT_HEADERS64 *)v8)
    && ((unsigned __int64)v8 > 0x7FFFFFFEFFFFLL
     || (_IMAGE_NT_HEADERS64 *)((char *)&NtHeaders->OptionalHeader.DataDirectory[15].Size + 3) >= NtHeaders
     && (unsigned __int64)&NtHeaders->OptionalHeader.DataDirectory[15].Size + 3 <= 0x7FFFFFFEFFFFLL)
    && NtHeaders->Signature == 17744 )
  {
    Magic = NtHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
      return (unsigned int)RtlpImageDirectoryEntryToData32(v8, NtHeaders, (__int64)a5);
    if ( Magic != 523 || a3 >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
      return (unsigned int)-1073741811;
    v11 = a3;
    VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
    if ( (_DWORD)VirtualAddress )
    {
      if ( (unsigned __int64)v8 <= 0x7FFFFFFEFFFFLL )
      {
        v14 = (unsigned __int64)v8 + VirtualAddress - 1;
        if ( v14 > 0x7FFFFFFEFFFFLL || v14 < (unsigned __int64)v8 )
          return (unsigned int)-1073741811;
      }
      *a4 = NtHeaders->OptionalHeader.DataDirectory[v11].Size;
      if ( v6 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
      {
        *a5 = (char *)v8 + VirtualAddress;
      }
      else
      {
        v15 = RtlAddressInSectionTable(NtHeaders, v8, VirtualAddress);
        *a5 = v15;
        return v15 == 0LL ? 0xC000000D : 0;
      }
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    return (unsigned int)-1073741701;
  }
  return v5;
}
