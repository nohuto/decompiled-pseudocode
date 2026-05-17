/*
 * XREFs of LdrpResReadFile @ 0x1800A65C0
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800A4B20 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResCompareResourceNames @ 0x1800A5D10 (LdrpResCompareResourceNames.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     LdrpResSetFilePointer @ 0x1800A6680 (LdrpResSetFilePointer.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1801632E0 (NtReadFile.c)
 */

__int64 __fastcall LdrpResReadFile(char *Handle, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  NTSTATUS v8; // edx
  int v9; // ecx
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = LdrpResSetFilePointer();
    if ( (int)result < 0 )
      return result;
    v8 = NtReadFile(Handle, 0LL, 0LL, 0LL, &v10, a3, a4, 0LL, 0LL);
    if ( v8 == 259 )
      v8 = NtWaitForSingleObject(Handle, 0, 0LL);
    v9 = 0;
    if ( (v8 & 0xC0000000) != 0x80000000 )
      v9 = v8;
    if ( v9 >= 0 && a4 != DWORD2(v10) )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
