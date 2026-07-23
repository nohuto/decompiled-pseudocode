/*
 * XREFs of PsInitializeWin32kServiceTable @ 0x140C368CC
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MmCompactServiceTable @ 0x1407FBB58 (MmCompactServiceTable.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 */

__int64 PsInitializeWin32kServiceTable()
{
  __int64 result; // rax
  PVOID *v1; // rbx
  PVOID *v2; // rdi
  int v3; // eax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  result = Win32kGetSupportedExportsVersion(&v4);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( PsWin32kDataTableEntry )
      KeBugCheckEx(0x164u, 0x45uLL, PsWin32kDataTableEntry, 0LL, 0LL);
    v1 = (PVOID *)PsLoadedModuleList;
    v2 = 0LL;
    while ( v1 != &PsLoadedModuleList )
    {
      v2 = v1;
      if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v1 + 11), &WIN32KSYS, 1u) )
      {
        PsWin32kDataTableEntry = (ULONG_PTR)v1;
        break;
      }
      v1 = (PVOID *)*v1;
    }
    v3 = MmCompactServiceTable((__int64)v2[6]);
    if ( v3 < 0 )
      KeBugCheckEx(0x164u, 0x46uLL, v3, 0LL, 0LL);
    result = Win32kSystemTableAdd();
    if ( (int)result < 0 )
      KeBugCheckEx(0x164u, 0x47uLL, (int)result, 0LL, 0LL);
    if ( VslVsmEnabled )
    {
      if ( xmmword_140FC72E0 )
        return MmProtectDriverSection(xmmword_140FC72E0, 0LL, 0);
    }
  }
  return result;
}
