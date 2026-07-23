/*
 * XREFs of LdrResFallbackLangList @ 0x18008ADF0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A66CC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x18001D670 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlpResUltimateFallbackInfo @ 0x180089920 (RtlpResUltimateFallbackInfo.c)
 *     LdrpSetThreadPreferredLangList @ 0x18008B8E0 (LdrpSetThreadPreferredLangList.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     LdrpGetParentLangId @ 0x1800A6FA8 (LdrpGetParentLangId.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryDefaultLocale @ 0x1801634C0 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrResFallbackLangList(void *a1, __int64 a2, unsigned __int16 a3, int a4, unsigned __int16 *a5)
{
  int v5; // r12d
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 MergedPrefLanguages; // rcx
  __int64 v9; // rbx
  unsigned __int16 *v10; // rsi
  int v11; // ebx
  unsigned __int16 CurrentLocale; // r14
  unsigned int v13; // r15d
  int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  size_t v18; // rax
  unsigned __int16 v19[2]; // [rsp+38h] [rbp-41h] BYREF
  NTSTATUS v20; // [rsp+3Ch] [rbp-3Dh]
  DWORD v21; // [rsp+40h] [rbp-39h] BYREF
  DWORD Lcid; // [rsp+44h] [rbp-35h] BYREF
  int v23; // [rsp+48h] [rbp-31h] BYREF
  DWORD DefaultLocaleId; // [rsp+4Ch] [rbp-2Dh] BYREF
  wchar_t *String; // [rsp+50h] [rbp-29h] BYREF
  _UNICODE_STRING v26; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v27[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-1h] BYREF

  v5 = 0;
  v27[1] = L"LdrResFallbackLangList Enter";
  v28[1] = L"LdrResFallbackLangList Exit";
  v27[0] = 3801144LL;
  v28[0] = 3670070LL;
  v26 = 0LL;
  String = 0LL;
  v23 = 0;
  Lcid = 0;
  v21 = 0;
  DefaultLocaleId = 0;
  v7 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    MergedPrefLanguages = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    MergedPrefLanguages = 2147353477LL;
  v9 = 2147353476LL;
  if ( (*(_BYTE *)MergedPrefLanguages & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      LdrpTraceLoadMUIDll(v27, *((unsigned __int8 *)NtCurrentPeb()->SharedData + 554));
    else
      LdrpTraceLoadMUIDll(v27, MEMORY[0x7FFE0384]);
  }
  v10 = a5;
  if ( !a5 )
  {
    v20 = -1073741811;
    goto LABEL_25;
  }
  v11 = 0;
  CurrentLocale = 0;
  v13 = 0;
  LOBYTE(a5) = 0;
  *v10 = 0;
  *((_BYTE *)v10 + 516) = 0;
  v20 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v14 = v11;
      v15 = v11++;
      if ( v14 != 2 )
        break;
      v19[0] = 0;
      if ( (unsigned __int8)LdrpSetThreadPreferredLangList(MergedPrefLanguages, v6, 0x180000000uLL, 1033LL) )
      {
        MergedPrefLanguages = (__int64)NtCurrentTeb()->MergedPrefLanguages;
        if ( v13 < *(unsigned __int16 *)(MergedPrefLanguages + 4) )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            MergedPrefLanguages,
            (__int64)NtCurrentTeb()->MergedPrefLanguages,
            v13,
            v19,
            (bool *)&a5);
          CurrentLocale = v19[0];
          if ( v19[0] )
          {
            if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
              CurrentLocale = -4370;
            v5 = 3;
            ++v13;
            v11 = v15;
            goto LABEL_16;
          }
        }
      }
      CurrentLocale = -4370;
    }
    switch ( v14 )
    {
      case 0:
        CurrentLocale = a3;
        v5 = 1;
        goto LABEL_16;
      case 1:
        if ( (a4 & 4) == 0 )
        {
          if ( (a3 & 0x3FF) != 0 )
          {
            *((_BYTE *)v10 + 516) = 1;
            v19[0] = 0;
            if ( (int)LdrpGetParentLangId(CurrentLocale, v19, 0x180000000uLL, 1033LL) < 0 )
              goto LABEL_24;
            CurrentLocale = v19[0];
            v11 = v15;
            if ( !v19[0] )
              v11 = -1;
            v5 = 2;
          }
          else
          {
            CurrentLocale = -4370;
            v5 = 2;
          }
LABEL_16:
          if ( CurrentLocale != 0xEEEE )
          {
LABEL_17:
            v6 = *v10;
            v16 = 0;
            if ( *v10 )
            {
              do
              {
                MergedPrefLanguages = v16;
                if ( v10[4 * v16 + 2] == CurrentLocale )
                  break;
                ++v16;
              }
              while ( v16 < (unsigned int)v6 );
            }
            if ( v16 >= (unsigned int)v6 )
            {
              if ( (unsigned int)v6 >= 0x40 )
                goto LABEL_24;
              v10[4 * v6 + 2] = CurrentLocale;
              *(_DWORD *)&v10[4 * (*v10)++ + 4] = v5;
            }
          }
          continue;
        }
        *((_BYTE *)v10 + 516) = 1;
LABEL_24:
        v9 = 2147353476LL;
LABEL_25:
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v7 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v9 = (__int64)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll(v28, *(unsigned __int8 *)v9);
        }
        return (unsigned int)v20;
      case 3:
        if ( !a1 || (int)RtlpResUltimateFallbackInfo(a1, a2, &String, &v23) < 0 )
          goto LABEL_33;
        *(_QWORD *)&v26.Length = 0LL;
        v26.Buffer = String;
        if ( String )
        {
          v18 = 2 * wcslen(String);
          if ( v18 >= 0xFFFE )
            LOWORD(v18) = -4;
          v26.Length = v18;
          v26.MaximumLength = v18 + 2;
        }
        if ( RtlCultureNameToLCID(&v26, &Lcid) )
        {
          CurrentLocale = Lcid;
          v19[0] = Lcid;
          if ( (a4 & 0x100000) != 0 )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              MergedPrefLanguages,
              (__int64)NtCurrentTeb()->MergedPrefLanguages,
              0,
              v19,
              (bool *)&a5);
            if ( (_BYTE)a5 )
              CurrentLocale = -4370;
            else
              CurrentLocale = v19[0];
          }
          v5 = 10;
          if ( (v23 & 1) == 0 )
            v5 = 4;
          goto LABEL_16;
        }
        v20 = -1073020923;
LABEL_33:
        CurrentLocale = -4370;
        continue;
      case 4:
        v19[0] = -4370;
        if ( (~a4 & 0x80000) != 0 )
          goto LABEL_24;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_16;
        }
        CurrentLocale = v19[0];
        continue;
      case 5:
        CurrentLocale = -4370;
        v20 = NtQueryDefaultLocale(1u, &v21);
        if ( v20 < 0 )
          continue;
        CurrentLocale = v21;
        goto LABEL_16;
      case 6:
        CurrentLocale = -4370;
        v20 = NtQueryDefaultLocale(0, &DefaultLocaleId);
        if ( v20 < 0 || DefaultLocaleId == v21 )
          continue;
        CurrentLocale = DefaultLocaleId;
        goto LABEL_16;
      case 7:
        CurrentLocale = 1033;
        goto LABEL_17;
      default:
        goto LABEL_24;
    }
  }
}
