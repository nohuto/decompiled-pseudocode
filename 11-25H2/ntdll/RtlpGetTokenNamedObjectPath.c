/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x180084060
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x180084840 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x18010E9F0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlConvertSidToUnicodeString @ 0x18005F8F0 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlGetAppContainerSidType @ 0x1800847C0 (RtlGetAppContainerSidType.c)
 *     RtlStringCchPrintfW @ 0x180084A7C (RtlStringCchPrintfW.c)
 *     RtlGetAppContainerParent @ 0x180084AF0 (RtlGetAppContainerParent.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(
        HANDLE TokenHandle,
        _DWORD *AppContainerSid,
        char a3,
        _UNICODE_STRING *a4)
{
  _DWORD *v8; // rdi
  int v9; // eax
  char v10; // r15
  int v11; // r14d
  char v12; // r12
  NTSTATUS appended; // ebx
  int v14; // edi
  unsigned int v15; // ebx
  bool v16; // al
  __int64 v17; // r8
  WCHAR *v18; // rdx
  WCHAR v19; // ax
  WCHAR *v20; // rax
  __int64 v21; // rcx
  WCHAR *v22; // rax
  int v23; // esi
  __int64 v24; // rbx
  int v25; // r14d
  SIZE_T v26; // rbx
  wchar_t *Atom; // rax
  wchar_t *v28; // rdi
  const wchar_t *v30; // rcx
  NTSTATUS v31; // eax
  const wchar_t *v32; // rax
  NTSTATUS v33; // eax
  WCHAR v34; // ax
  size_t v35; // rax
  int v36; // eax
  wchar_t *Buffer; // rdi
  size_t v38; // rax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  char v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v46; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+4Ch] [rbp-B4h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v54; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v55; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v56; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v58[10]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  wchar_t *String; // [rsp+370h] [rbp+270h] BYREF
  char v61; // [rsp+378h] [rbp+278h]
  wchar_t v62[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  BaseAddress = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(v58, 0, 0x50uLL);
  v46 = 0;
  v49 = 0;
  memset_thunk_772440563353939046(Source, 0, 0x208uLL);
  memset_thunk_772440563353939046(v62, 0, 0x208uLL);
  memset_thunk_772440563353939046(Sid, 0, 0x58uLL);
  *(_QWORD *)&v54.Length = 262146LL;
  v54.Buffer = (wchar_t *)L"\\";
  v55 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v45 = 0;
  v50 = a3 & 2;
  TokenInformation = 0;
  v9 = a3 & 8;
  v10 = a3 & 1;
  v11 = a3 & 4;
  v51 = v9;
  v12 = 1;
  v44 = 1;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v56 = 0LL;
  if ( AppContainerSid )
  {
    v8 = AppContainerSid;
    v45 = 1;
  }
  else
  {
    appended = NtQueryInformationToken(TokenHandle, 0x1Du, &v45, 4u, &v46);
    if ( appended < 0 )
      goto LABEL_48;
    if ( v45 )
    {
      appended = NtQueryInformationToken(TokenHandle, 0x1Fu, v58, 0x50u, &v46);
      if ( appended < 0 )
        goto LABEL_48;
      v8 = (_DWORD *)v58[0];
      if ( !v58[0] )
      {
        appended = -1073741823;
        goto LABEL_48;
      }
    }
  }
  appended = NtQueryInformationToken(TokenHandle, 0x2Au, &TokenInformation, 4u, &v46);
  if ( appended >= 0 )
  {
    if ( !TokenInformation )
    {
LABEL_7:
      appended = NtQueryInformationToken(TokenHandle, 0xCu, &v49, 4u, &v46);
      if ( appended < 0 )
        goto LABEL_45;
      if ( !v45 )
      {
LABEL_9:
        appended = NtQueryInformationToken(TokenHandle, 0x2Cu, &String, 0x120u, &v46);
        if ( appended < 0 )
        {
LABEL_44:
          v12 = v44;
          goto LABEL_45;
        }
        v14 = v45;
        v15 = v49;
        v16 = !TokenInformation && !v45 && v15 == RtlGetCurrentServiceSessionId();
        if ( v10 )
        {
          if ( v11 )
          {
            v17 = 260LL;
            v18 = Source;
            do
            {
              if ( v17 == -2147483386 )
                break;
              v19 = *(WCHAR *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)Source);
              if ( !v19 )
                break;
              *v18++ = v19;
              --v17;
            }
            while ( v17 );
LABEL_18:
            v20 = v18 - 1;
            appended = -2147483643;
            if ( v17 )
            {
              v20 = v18;
              appended = 0;
            }
            *v20 = 0;
            goto LABEL_21;
          }
          v32 = L"\\AppContainerNamedObjects";
          if ( !v14 )
            v32 = &word_18017D3FC;
          v33 = RtlStringCchPrintfW(Source, 260LL, L"Global\\Session\\%ld%s", v15, v32);
          v14 = v45;
          appended = v33;
        }
        else
        {
          if ( v16 )
          {
            v17 = 260LL;
            v18 = Source;
            do
            {
              if ( v17 == -2147483386 )
                break;
              v34 = *(WCHAR *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)Source);
              if ( !v34 )
                break;
              *v18++ = v34;
              --v17;
            }
            while ( v17 );
            goto LABEL_18;
          }
          v30 = L"AppContainerNamedObjects";
          if ( !v14 )
            v30 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v15;
          v31 = RtlStringCchPrintfW(Source, 260LL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v30);
          v14 = v45;
          appended = v31;
        }
LABEL_21:
        if ( appended >= 0 )
        {
          v21 = 260LL;
          v22 = Source;
          do
          {
            if ( !*v22 )
              break;
            ++v22;
            --v21;
          }
          while ( v21 );
          appended = -1073741811;
          if ( v21 )
          {
            v23 = v50;
            v24 = 2 * (260 - v21);
            if ( TokenInformation && !v50 )
              v24 = 2 * (260 - v21) + v56.Length + 2;
            if ( v14 )
              v24 += UnicodeString.Length + 2LL;
            v25 = v51;
            if ( v61 && !v51 )
            {
              *(_QWORD *)&v55.Length = 0LL;
              v55.Buffer = String;
              if ( String )
              {
                v35 = 2 * wcslen(String);
                if ( v35 >= 0xFFFE )
                  LOWORD(v35) = -4;
                v55.Length = v35;
                v55.MaximumLength = v35 + 2;
              }
              else
              {
                LOWORD(v35) = v55.Length;
              }
              v24 += (unsigned __int16)v35 + 2LL;
            }
            v26 = v24 + 2;
            Atom = (wchar_t *)RtlpAllocateAtom(v26);
            v28 = Atom;
            if ( Atom )
            {
              memset_thunk_772440563353939046(Atom, 0, v26);
              *a4 = 0LL;
              a4->MaximumLength = v26;
              a4->Buffer = v28;
              appended = RtlAppendUnicodeToString(a4, Source);
              if ( appended >= 0 )
              {
                if ( !TokenInformation
                  || v23
                  || (appended = RtlAppendUnicodeStringToString(a4, &v54), appended >= 0)
                  && (appended = RtlAppendUnicodeStringToString(a4, &v56), appended >= 0) )
                {
                  if ( !v45
                    || (appended = RtlAppendUnicodeStringToString(a4, &v54), appended >= 0)
                    && (appended = RtlAppendUnicodeStringToString(a4, &UnicodeString), appended >= 0) )
                  {
                    if ( v61 )
                    {
                      if ( !v25 )
                      {
                        appended = RtlAppendUnicodeStringToString(a4, &v54);
                        if ( appended >= 0 )
                        {
                          v12 = v44;
                          appended = RtlAppendUnicodeStringToString(a4, &v55);
                          goto LABEL_45;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              appended = -1073741670;
            }
          }
        }
        goto LABEL_44;
      }
      appended = RtlGetAppContainerSidType(v8, &AppContainerSidType);
      if ( appended >= 0 )
      {
        if ( AppContainerSidType == ParentAppContainerSidType )
        {
          appended = RtlConvertSidToUnicodeString(&UnicodeString, v8, 1u);
          if ( appended >= 0 )
            goto LABEL_9;
        }
        else
        {
          appended = RtlGetAppContainerParent(v8, &BaseAddress);
          if ( appended >= 0 )
          {
            appended = RtlConvertSidToUnicodeString(&UnicodeString, BaseAddress, 1u);
            if ( appended >= 0 )
            {
              v43 = v8[13];
              v42 = v8[12];
              v41 = v8[11];
              v36 = v8[10];
              Buffer = UnicodeString.Buffer;
              LODWORD(ReturnLength) = v36;
              appended = RtlStringCchPrintfW(
                           v62,
                           260LL,
                           L"%s\\%u-%u-%u-%u",
                           UnicodeString.Buffer,
                           ReturnLength,
                           v41,
                           v42,
                           v43);
              if ( appended >= 0 )
              {
                if ( Buffer )
                  RtlpSysVolFree(Buffer);
                *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
                UnicodeString.Buffer = v62;
                v38 = 2 * wcslen(v62);
                v44 = 0;
                if ( v38 >= 0xFFFE )
                  LOWORD(v38) = -4;
                UnicodeString.Length = v38;
                UnicodeString.MaximumLength = v38 + 2;
                goto LABEL_9;
              }
            }
          }
        }
      }
      v12 = 1;
LABEL_45:
      if ( v56.Buffer )
        RtlpSysVolFree(v56.Buffer);
      if ( appended >= 0 )
        goto LABEL_49;
      goto LABEL_48;
    }
    appended = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &v46);
    if ( appended >= 0 )
    {
      appended = RtlConvertSidToUnicodeString(&v56, Sid[0], 1u);
      if ( appended < 0 )
        goto LABEL_45;
      goto LABEL_7;
    }
  }
LABEL_48:
  RtlFreeAnsiString(a4);
LABEL_49:
  if ( v12 && UnicodeString.Buffer )
    RtlpSysVolFree(UnicodeString.Buffer);
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return (unsigned int)appended;
}
