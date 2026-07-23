/*
 * XREFs of LdrpAccessResourceData @ 0x180077950
 * Callers:
 *     RtlLoadString @ 0x18002C530 (RtlLoadString.c)
 *     RtlFindMessage @ 0x180077830 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1800F4C10 (LdrAccessResource.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetImageSize @ 0x180079340 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x18010DF10 (LdrpGetAlternateResourceModuleHandleEx.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  __int64 v4; // rsi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  __int64 v7; // r13
  unsigned int ImageSize; // ebp
  _DWORD *v9; // rcx
  unsigned __int64 v11; // r12
  PVOID v12; // rax
  __int64 v13; // rdx
  char *AlternateResourceModuleHandle; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[6]; // [rsp+28h] [rbp-30h] BYREF
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF

  v17[0] = 0LL;
  v16 = 0LL;
  v4 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v6 = 2147353477LL;
  v7 = 2147353476LL;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v15);
  }
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == BaseOfImage
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    BaseOfImage = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage((PVOID)BaseOfImage);
    goto LABEL_11;
  }
  v11 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
  v12 = RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &Size);
  if ( !v12 )
  {
    ImageSize = -1073741687;
    goto LABEL_11;
  }
  if ( a2 < (unsigned __int64)v12 )
  {
LABEL_26:
    AlternateResourceModuleHandle = (char *)LdrpGetAlternateResourceModuleHandleEx(BaseOfImage, v13, a2, v17);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      BaseOfImage = (unsigned __int64)AlternateResourceModuleHandle;
    goto LABEL_10;
  }
  ImageSize = LdrpGetImageSize(BaseOfImage, &v16);
  if ( ImageSize != -1073741701 )
  {
    if ( !v16 || a2 >= v11 && a2 < v11 + v16 )
      goto LABEL_10;
    goto LABEL_26;
  }
LABEL_11:
  v9 = NtCurrentPeb()->SharedData;
  if ( v9 && *v9 )
    v4 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v7);
  }
  return ImageSize;
}
