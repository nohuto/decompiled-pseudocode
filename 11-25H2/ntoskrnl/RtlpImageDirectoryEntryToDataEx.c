/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x140410020
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x140410524 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14069810C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1404101A4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x140410250 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  char v6; // r10
  unsigned __int64 v9; // rdx
  _IMAGE_NT_HEADERS64 *NtHeaders; // r9
  unsigned __int16 Magic; // ax
  __int64 v12; // rax
  __int64 VirtualAddress; // r8
  PVOID v15; // rax
  char *v16; // rsi

  v5 = 0;
  v6 = a2;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v6 = 0;
    v9 = BaseOfImage & 1;
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v9 )
      v6 = a2;
  }
  if ( BaseOfImage - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)BaseOfImage != 23117 )
    return (unsigned int)-1073741701;
  NtHeaders = (_IMAGE_NT_HEADERS64 *)(BaseOfImage + *(unsigned int *)(BaseOfImage + 60));
  if ( (unsigned __int64)NtHeaders < BaseOfImage
    || BaseOfImage <= 0x7FFFFFFEFFFFLL
    && ((_IMAGE_NT_HEADERS64 *)((char *)&NtHeaders->OptionalHeader.DataDirectory[15].Size + 3) < NtHeaders
     || (unsigned __int64)&NtHeaders->OptionalHeader.DataDirectory[15].Size + 3 > 0x7FFFFFFEFFFFLL) )
  {
    return (unsigned int)-1073741701;
  }
  if ( NtHeaders->Signature != 17744 )
    return (unsigned int)-1073741701;
  Magic = NtHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
    return (unsigned int)RtlpImageDirectoryEntryToData32((PVOID)BaseOfImage, NtHeaders, (__int64)a5);
  if ( Magic != 523 || a3 >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
    return (unsigned int)-1073741811;
  v12 = a3;
  VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
  if ( (_DWORD)VirtualAddress )
  {
    if ( BaseOfImage <= 0x7FFFFFFEFFFFLL )
    {
      v16 = (char *)(BaseOfImage + VirtualAddress - 1);
      if ( (unsigned __int64)v16 > 0x7FFFFFFEFFFFLL || (unsigned __int64)v16 < BaseOfImage )
        return (unsigned int)-1073741811;
    }
    *a4 = NtHeaders->OptionalHeader.DataDirectory[v12].Size;
    if ( v6 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
    {
      *a5 = VirtualAddress + BaseOfImage;
    }
    else
    {
      v15 = RtlAddressInSectionTable(NtHeaders, (PVOID)BaseOfImage, VirtualAddress);
      *a5 = v15;
      if ( !v15 )
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
