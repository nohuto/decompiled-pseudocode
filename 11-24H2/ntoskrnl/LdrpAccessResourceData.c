/*
 * XREFs of LdrpAccessResourceData @ 0x140A0307C
 * Callers:
 *     LdrAccessResource @ 0x14077E350 (LdrAccessResource.c)
 *     RtlLoadString @ 0x14077EEE0 (RtlLoadString.c)
 *     RtlFindMessage @ 0x140A02480 (RtlFindMessage.c)
 * Callees:
 *     LdrpGetImageSize @ 0x1402C8248 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14044E92C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A03160 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v7 = a1;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( PnPBootDriversInitialized != 1 )
    return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
  v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v9 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v15);
  if ( !v9 )
    return 3221225609LL;
  if ( a2 < v9 )
  {
LABEL_6:
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(v7, v10, a2, v14);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v7 = AlternateResourceModuleHandle;
    return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
  }
  result = LdrpGetImageSize(v7, &v13);
  if ( (_DWORD)result != -1073741701 )
  {
    if ( !v13 || a2 >= v8 && a2 < v8 + v13 )
      return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
    goto LABEL_6;
  }
  return result;
}
