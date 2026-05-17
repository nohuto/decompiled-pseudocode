/*
 * XREFs of LdrpAccessResourceData @ 0x18001D9D0
 * Callers:
 *     RtlLoadString @ 0x180002D50 (RtlLoadString.c)
 *     RtlFindMessage @ 0x18001D8B0 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1800FBDB0 (LdrAccessResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetImageSize @ 0x18001F3C0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180115990 (LdrpGetAlternateResourceModuleHandleEx.c)
 */

__int64 __fastcall LdrpAccessResourceData(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  _DWORD *SharedData; // rcx
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned int ImageSize; // ebp
  _DWORD *v13; // rcx
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21[6]; // [rsp+28h] [rbp-30h] BYREF
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v21[0] = 0LL;
  v20 = 0LL;
  v7 = a2;
  v8 = 2147353477LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v19 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v19 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v19);
  }
  if ( !a1 || !v7 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == v7 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, v7, a3, a4);
    goto LABEL_11;
  }
  LOBYTE(a2) = 1;
  v15 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v16 = RtlImageDirectoryEntryToData(a1, a2, 2LL, &v22);
  if ( !v16 )
  {
    ImageSize = -1073741687;
    goto LABEL_11;
  }
  if ( v7 < v16 )
  {
LABEL_26:
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v17, v7, v21);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      a1 = AlternateResourceModuleHandle;
    goto LABEL_10;
  }
  ImageSize = LdrpGetImageSize(a1, &v20);
  if ( ImageSize != -1073741701 )
  {
    if ( !v20 || v7 >= v15 && v7 < v15 + v20 )
      goto LABEL_10;
    goto LABEL_26;
  }
LABEL_11:
  v13 = NtCurrentPeb()->SharedData;
  if ( v13 && *v13 )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v11);
  }
  return ImageSize;
}
