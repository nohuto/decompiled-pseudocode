/*
 * XREFs of EnumWindowsHelpers::ForEachWindowHr__lambda_b29ec557ac5c0264c1ac8a31af818ac2___ @ 0x180554834
 * Callers:
 *     ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1805573AC (-CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall EnumWindowsHelpers::ForEachWindowHr__lambda_b29ec557ac5c0264c1ac8a31af818ac2___(__int64 a1)
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
  v2 = EnumWindows(EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___, (LPARAM)v4);
  result = (unsigned int)v5;
  if ( v5 >= 0 )
  {
    if ( !v2 )
      return (unsigned int)ResultFromKnownLastError();
    return v1;
  }
  return result;
}
