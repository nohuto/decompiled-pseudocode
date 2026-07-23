/*
 * XREFs of LdrpAccessResourceData @ 0x1409BA4DC
 * Callers:
 *     LdrAccessResource @ 0x14077E280 (LdrAccessResource.c)
 *     RtlLoadString @ 0x14077EE10 (RtlLoadString.c)
 *     RtlFindMessage @ 0x1409B98E0 (RtlFindMessage.c)
 * Callees:
 *     LdrpGetImageSize @ 0x1402BA4A8 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409BA5C0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  PVOID v3; // rdi
  unsigned __int64 v4; // rsi
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  v10[0] = 0LL;
  v9 = 0LL;
  v3 = (PVOID)BaseOfImage;
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( PnPBootDriversInitialized != 1 )
    return LdrpAccessResourceDataNoMultipleLanguage(v3);
  v4 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &v11);
  if ( !v5 )
    return 3221225609LL;
  if ( a2 < (unsigned __int64)v5 )
  {
LABEL_6:
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx((__int64)v3, v6, a2, v10);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v3 = (PVOID)AlternateResourceModuleHandle;
    return LdrpAccessResourceDataNoMultipleLanguage(v3);
  }
  result = LdrpGetImageSize((__int64)v3, &v9);
  if ( (_DWORD)result != -1073741701 )
  {
    if ( !v9 || a2 >= v4 && a2 < v4 + v9 )
      return LdrpAccessResourceDataNoMultipleLanguage(v3);
    goto LABEL_6;
  }
  return result;
}
