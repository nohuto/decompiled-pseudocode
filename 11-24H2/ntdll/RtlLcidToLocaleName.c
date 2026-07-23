/*
 * XREFs of RtlLcidToLocaleName @ 0x180099060
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x180098D10 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpGetParentLangId @ 0x180099B74 (LdrpGetParentLangId.c)
 *     LdrpQuerySxSMUIFile @ 0x18009A09C (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18009A010 (RtlpInitUnicodeStringUsingBuffer.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // di
  LCID v7; // ebx
  __int64 v8; // r11
  int v9; // r8d
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _WORD *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[176]; // [rsp+40h] [rbp-C8h] BYREF

  v21 = 85LL;
  v5 = Flags;
  v7 = lcid;
  DestinationString = 0LL;
  if ( (lcid & 0xFFFFEFFF) == 0 )
    return -1073741585;
  if ( LocaleName )
  {
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( AllocateDestinationString || LocaleName->Buffer )
    {
      if ( lcid == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v23, &v21) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v23, (unsigned int)v21, LocaleName);
      }
      else
      {
        if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
        {
          v8 = pTblPtrs;
          if ( pTblPtrs )
            goto LABEL_9;
          if ( RtlpLoadNlsData(
                 *(__int64 *)&lcid,
                 (__int64)LocaleName,
                 *(__int64 *)&Flags,
                 (ULONG *)AllocateDestinationString) )
          {
            v8 = pTblPtrs;
LABEL_9:
            if ( v7 == 2048 )
              v7 = gSystemLocale;
            v9 = 0;
            v10 = *(unsigned __int16 *)(v8 + 4) - 1;
            while ( 1 )
            {
              v11 = v10;
              if ( v9 > v10 )
                break;
              v12 = (v9 + v10) / 2;
              v13 = 8LL * v12;
              v14 = *(_QWORD *)(v8 + 16);
              v15 = v7 - *(_DWORD *)(v14 + v13);
              if ( v7 == *(_DWORD *)(v14 + v13) )
              {
                if ( v12 < 0 )
                  return -1073741585;
                if ( (v5 & 2) == 0 )
                {
                  _mm_lfence();
                  if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                                 * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + v13 + 4)
                                 + *(_QWORD *)(pTblPtrs + 8)
                                 + 24LL) & 1) == 0 )
                    return -1073741585;
                }
                _mm_lfence();
                v16 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + v13 + 6);
                v17 = *(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v16;
                if ( !v17 )
                  return -1073741823;
                v18 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v16);
                v19 = 84LL;
                do
                {
                  if ( !*v18 )
                    break;
                  ++v18;
                  --v19;
                }
                while ( v19 );
                if ( v19 )
                  return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v17, 84 - v19, LocaleName);
                v21 = 0LL;
                return -1073741823;
              }
              if ( v15 >= 0 )
                v9 = v12 + 1;
              v10 = v12 - 1;
              if ( v15 >= 0 )
                v10 = v11;
            }
            return -1073741585;
          }
          return -1073741823;
        }
        DestinationString.Buffer = (wchar_t *)v23;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(
                   AllocateDestinationString,
                   DestinationString.Buffer,
                   DestinationString.Length >> 1,
                   LocaleName);
      }
      return -1073741823;
    }
  }
  return -1073741584;
}
