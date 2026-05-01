/*
 * XREFs of EnumWindowsHelpers::ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___ @ 0x18055488C
 * Callers:
 *     ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C (-CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall EnumWindowsHelpers::ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___(__int64 a1)
{
  unsigned int v1; // ebx
  BOOL v2; // ecx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v4[1] = a1;
  v1 = 0;
  v4[0] = &v5;
  v5 = 0;
  v2 = EnumWindows(EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___, (LPARAM)v4);
  result = (unsigned int)v5;
  if ( v5 >= 0 )
  {
    if ( !v2 )
      return (unsigned int)ResultFromKnownLastError();
    return v1;
  }
  return result;
}
