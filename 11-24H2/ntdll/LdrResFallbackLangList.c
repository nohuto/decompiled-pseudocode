/*
 * XREFs of LdrResFallbackLangList @ 0x180011F70
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x18009856C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     LdrpSetThreadPreferredLangList @ 0x180011370 (LdrpSetThreadPreferredLangList.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800775F0 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     RtlpResUltimateFallbackInfo @ 0x18009582C (RtlpResUltimateFallbackInfo.c)
 *     LdrpGetParentLangId @ 0x180099B74 (LdrpGetParentLangId.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtQueryDefaultLocale @ 0x1801602F0 (NtQueryDefaultLocale.c)
 */

__int64 __fastcall LdrResFallbackLangList(void *a1, __int64 a2, unsigned __int16 a3, int a4, unsigned __int16 *a5)
{
  int v5; // r12d
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int16 *v9; // rsi
  int v10; // ebx
  unsigned __int16 CurrentLocale; // r14
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // edi
  unsigned __int16 *MergedPrefLanguages; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  size_t v19; // rax
  int v20; // ecx
  _WORD v21[2]; // [rsp+38h] [rbp-41h] BYREF
  NTSTATUS v22; // [rsp+3Ch] [rbp-3Dh]
  DWORD v23; // [rsp+40h] [rbp-39h] BYREF
  DWORD Lcid; // [rsp+44h] [rbp-35h] BYREF
  int v25; // [rsp+48h] [rbp-31h]
  DWORD DefaultLocaleId; // [rsp+4Ch] [rbp-2Dh] BYREF
  wchar_t *String; // [rsp+50h] [rbp-29h]
  _UNICODE_STRING v28; // [rsp+58h] [rbp-21h] BYREF
  _QWORD v29[2]; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-1h] BYREF

  v5 = 0;
  v29[1] = L"LdrResFallbackLangList Enter";
  v30[1] = L"LdrResFallbackLangList Exit";
  v29[0] = 3801144LL;
  v30[0] = 3670070LL;
  v28 = 0LL;
  String = 0LL;
  v25 = 0;
  Lcid = 0;
  v23 = 0;
  DefaultLocaleId = 0;
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  v8 = 2147353476LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      LdrpTraceLoadMUIDll(v29, *((unsigned __int8 *)NtCurrentPeb()->SharedData + 554));
    else
      LdrpTraceLoadMUIDll(v29, MEMORY[0x7FFE0384]);
  }
  v9 = a5;
  if ( !a5 )
  {
    v22 = -1073741811;
    goto LABEL_25;
  }
  v10 = 0;
  CurrentLocale = 0;
  v12 = 0;
  LOBYTE(a5) = 0;
  *v9 = 0;
  *((_BYTE *)v9 + 516) = 0;
  v22 = 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v13 = v10;
      v14 = v10++;
      if ( v13 != 2 )
        break;
      v21[0] = 0;
      if ( LdrpSetThreadPreferredLangList() )
      {
        MergedPrefLanguages = (unsigned __int16 *)NtCurrentTeb()->MergedPrefLanguages;
        if ( v12 < MergedPrefLanguages[2] )
        {
          GetLCIDFromLangListNodeWithLICCheck(
            (_DWORD)MergedPrefLanguages,
            NtCurrentTeb()->MergedPrefLanguages,
            v12,
            (unsigned int)v21,
            (__int64)&a5);
          CurrentLocale = v21[0];
          if ( v21[0] )
          {
            if ( (_BYTE)a5 && (a4 & 0x100000) != 0 )
              CurrentLocale = -4370;
            v5 = 3;
            ++v12;
            v10 = v14;
            goto LABEL_16;
          }
        }
      }
      CurrentLocale = -4370;
    }
    switch ( v13 )
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
            *((_BYTE *)v9 + 516) = 1;
            v21[0] = 0;
            if ( (int)LdrpGetParentLangId(CurrentLocale, v21, 0x180000000uLL) < 0 )
              goto LABEL_24;
            CurrentLocale = v21[0];
            v10 = v14;
            if ( !v21[0] )
              v10 = -1;
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
            v16 = *v9;
            v17 = 0;
            if ( *v9 )
            {
              do
              {
                if ( v9[4 * v17 + 2] == CurrentLocale )
                  break;
                ++v17;
              }
              while ( v17 < (unsigned int)v16 );
            }
            if ( v17 >= (unsigned int)v16 )
            {
              if ( (unsigned int)v16 >= 0x40 )
                goto LABEL_24;
              v9[4 * v16 + 2] = CurrentLocale;
              *(_DWORD *)&v9[4 * (*v9)++ + 4] = v5;
            }
          }
          continue;
        }
        *((_BYTE *)v9 + 516) = 1;
LABEL_24:
        v8 = 2147353476LL;
LABEL_25:
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData + 555;
        if ( (*(_BYTE *)v6 & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v8 = (__int64)NtCurrentPeb()->SharedData + 554;
          LdrpTraceLoadMUIDll(v30, *(unsigned __int8 *)v8);
        }
        return (unsigned int)v22;
      case 3:
        if ( !a1 || (int)RtlpResUltimateFallbackInfo(a1, a4) < 0 )
          goto LABEL_33;
        *(_QWORD *)&v28.Length = 0LL;
        v28.Buffer = String;
        if ( String )
        {
          v19 = 2 * wcslen(String);
          if ( v19 >= 0xFFFE )
            LOWORD(v19) = -4;
          v28.Length = v19;
          v28.MaximumLength = v19 + 2;
        }
        if ( RtlCultureNameToLCID(&v28, &Lcid) )
        {
          CurrentLocale = Lcid;
          v21[0] = Lcid;
          if ( (a4 & 0x100000) != 0 )
          {
            GetLCIDFromLangListNodeWithLICCheck(
              v20,
              NtCurrentTeb()->MergedPrefLanguages,
              0,
              (unsigned int)v21,
              (__int64)&a5);
            if ( (_BYTE)a5 )
              CurrentLocale = -4370;
            else
              CurrentLocale = v21[0];
          }
          v5 = 10;
          if ( (v25 & 1) == 0 )
            v5 = 4;
          goto LABEL_16;
        }
        v22 = -1073020923;
LABEL_33:
        CurrentLocale = -4370;
        continue;
      case 4:
        v21[0] = -4370;
        if ( (~a4 & 0x80000) != 0 )
          goto LABEL_24;
        if ( NtCurrentTeb() )
        {
          CurrentLocale = NtCurrentTeb()->CurrentLocale;
          goto LABEL_16;
        }
        CurrentLocale = v21[0];
        continue;
      case 5:
        CurrentLocale = -4370;
        v22 = NtQueryDefaultLocale(1u, &v23);
        if ( v22 < 0 )
          continue;
        CurrentLocale = v23;
        goto LABEL_16;
      case 6:
        CurrentLocale = -4370;
        v22 = NtQueryDefaultLocale(0, &DefaultLocaleId);
        if ( v22 < 0 || DefaultLocaleId == v23 )
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
