/*
 * XREFs of LdrpAccessResourceData @ 0x180061D70
 * Callers:
 *     RtlFindMessage @ 0x180061C50 (RtlFindMessage.c)
 *     RtlLoadString @ 0x1800976E0 (RtlLoadString.c)
 *     LdrAccessResource @ 0x1800F9EB0 (LdrAccessResource.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpGetImageSize @ 0x180063760 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x180112C50 (LdrpGetAlternateResourceModuleHandleEx.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
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
  _QWORD v21[6]; // [rsp+28h] [rbp-30h] BYREF
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v21[0] = 0LL;
  v20 = 0LL;
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
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == a1
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    a1 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
LABEL_10:
    ImageSize = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, a3, a4);
    goto LABEL_11;
  }
  v15 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  v16 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v22);
  if ( !v16 )
  {
    ImageSize = -1073741687;
    goto LABEL_11;
  }
  if ( a2 < v16 )
  {
LABEL_26:
    AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(a1, v17, a2, v21);
    if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      a1 = AlternateResourceModuleHandle;
    goto LABEL_10;
  }
  ImageSize = LdrpGetImageSize(a1, &v20);
  if ( ImageSize != -1073741701 )
  {
    if ( !v20 || a2 >= v15 && a2 < v15 + v20 )
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
