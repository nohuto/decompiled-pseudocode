/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x1800B3330
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1800CDDC0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x18010C9A0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlConvertSidToUnicodeString @ 0x180038E40 (RtlConvertSidToUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     RtlGetAppContainerSidType @ 0x1800B5630 (RtlGetAppContainerSidType.c)
 *     RtlStringCchPrintfW @ 0x1800B56AC (RtlStringCchPrintfW.c)
 *     RtlGetAppContainerParent @ 0x1800B5720 (RtlGetAppContainerParent.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  _DWORD *v8; // rdi
  int v9; // eax
  char v10; // r15
  int v11; // r14d
  char v12; // r12
  int appended; // ebx
  int v14; // edi
  unsigned int v15; // ebx
  bool v16; // al
  __int64 v17; // r8
  wchar_t *v18; // rdx
  wchar_t v19; // ax
  wchar_t *v20; // rax
  __int64 v21; // rcx
  wchar_t *v22; // rax
  int v23; // esi
  __int64 v24; // rbx
  int v25; // r14d
  size_t v26; // rbx
  wchar_t *Atom; // rax
  wchar_t *v28; // rdi
  const wchar_t *v30; // rcx
  int v31; // eax
  const wchar_t *v32; // rax
  int v33; // eax
  wchar_t v34; // ax
  size_t v35; // rax
  int v36; // eax
  wchar_t *Buffer; // rdi
  size_t v38; // rax
  __int64 v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+20h] [rbp-E0h]
  int v41; // [rsp+28h] [rbp-D8h]
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+38h] [rbp-C8h]
  char v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  int v48; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-ACh] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  int v51; // [rsp+5Ch] [rbp-A4h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  PSID v53; // [rsp+70h] [rbp-90h] BYREF
  const void *v54[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v55; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v56; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v58[10]; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v59[264]; // [rsp+160h] [rbp+60h] BYREF
  wchar_t *String; // [rsp+370h] [rbp+270h] BYREF
  char v61; // [rsp+378h] [rbp+278h]
  wchar_t v62[264]; // [rsp+490h] [rbp+390h] BYREF

  v48 = 0;
  v53 = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(v58, 0, 0x50uLL);
  v46 = 0;
  v49 = 0;
  memset_thunk_772440563353939046(v59, 0, 0x208uLL);
  memset_thunk_772440563353939046(v62, 0, 0x208uLL);
  memset_thunk_772440563353939046(Sid, 0, 0x58uLL);
  v54[0] = (const void *)262146;
  v54[1] = L"\\";
  v55 = 0LL;
  if ( !a4 || !a1 )
    return 3221225485LL;
  v45 = 0;
  v50 = a3 & 2;
  v47 = 0;
  v9 = a3 & 8;
  v10 = a3 & 1;
  v11 = a3 & 4;
  v51 = v9;
  v12 = 1;
  v44 = 1;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v56 = 0LL;
  if ( a2 )
  {
    v8 = a2;
    v45 = 1;
  }
  else
  {
    appended = NtQueryInformationToken(a1, 29LL, &v45, 4LL, &v46);
    if ( appended < 0 )
      goto LABEL_48;
    if ( v45 )
    {
      appended = NtQueryInformationToken(a1, 31LL, v58, 80LL, &v46);
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
  appended = NtQueryInformationToken(a1, 42LL, &v47, 4LL, &v46);
  if ( appended >= 0 )
  {
    if ( !v47 )
    {
LABEL_7:
      appended = NtQueryInformationToken(a1, 12LL, &v49, 4LL, &v46);
      if ( appended < 0 )
        goto LABEL_45;
      if ( !v45 )
      {
LABEL_9:
        appended = NtQueryInformationToken(a1, 44LL, &String, 288LL, &v46);
        if ( appended < 0 )
        {
LABEL_44:
          v12 = v44;
          goto LABEL_45;
        }
        v14 = v45;
        v15 = v49;
        v16 = !v47 && !v45 && v15 == (unsigned int)RtlGetCurrentServiceSessionId();
        if ( v10 )
        {
          if ( v11 )
          {
            v17 = 260LL;
            v18 = v59;
            do
            {
              if ( v17 == -2147483386 )
                break;
              v19 = *(wchar_t *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)v59);
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
            v32 = (const wchar_t *)&unk_18017EEFC;
          v33 = RtlStringCchPrintfW(v59, 260LL, L"Global\\Session\\%ld%s", v15, v32);
          v14 = v45;
          appended = v33;
        }
        else
        {
          if ( v16 )
          {
            v17 = 260LL;
            v18 = v59;
            do
            {
              if ( v17 == -2147483386 )
                break;
              v34 = *(wchar_t *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)v59);
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
          LODWORD(v40) = v15;
          v31 = RtlStringCchPrintfW(v59, 260LL, L"%s\\%ld\\%s", L"\\Sessions", v40, v30);
          v14 = v45;
          appended = v31;
        }
LABEL_21:
        if ( appended >= 0 )
        {
          v21 = 260LL;
          v22 = v59;
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
            if ( v47 && !v50 )
              v24 = 2 * (260 - v21) + v56.Length + 2;
            if ( v14 )
              v24 += UnicodeString.Length + 2LL;
            v25 = v51;
            if ( v61 && !v51 )
            {
              *(_QWORD *)&v55 = 0LL;
              *((_QWORD *)&v55 + 1) = String;
              if ( String )
              {
                v35 = 2 * wcslen(String);
                if ( v35 >= 0xFFFE )
                  LOWORD(v35) = -4;
                LOWORD(v55) = v35;
                WORD1(v55) = v35 + 2;
              }
              else
              {
                LOWORD(v35) = v55;
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
              appended = RtlAppendUnicodeToString(&a4->Length, v59);
              if ( appended >= 0 )
              {
                if ( !v47
                  || v23
                  || (appended = RtlAppendUnicodeStringToString(&a4->Length, v54), appended >= 0)
                  && (appended = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&v56), appended >= 0) )
                {
                  if ( !v45
                    || (appended = RtlAppendUnicodeStringToString(&a4->Length, v54), appended >= 0)
                    && (appended = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&UnicodeString),
                        appended >= 0) )
                  {
                    if ( v61 )
                    {
                      if ( !v25 )
                      {
                        appended = RtlAppendUnicodeStringToString(&a4->Length, v54);
                        if ( appended >= 0 )
                        {
                          v12 = v44;
                          appended = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&v55);
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
      appended = RtlGetAppContainerSidType(v8, &v48);
      if ( appended >= 0 )
      {
        if ( v48 == 2 )
        {
          appended = RtlConvertSidToUnicodeString(&UnicodeString, v8, 1u);
          if ( appended >= 0 )
            goto LABEL_9;
        }
        else
        {
          appended = RtlGetAppContainerParent(v8, &v53);
          if ( appended >= 0 )
          {
            appended = RtlConvertSidToUnicodeString(&UnicodeString, v53, 1u);
            if ( appended >= 0 )
            {
              v43 = v8[13];
              v42 = v8[12];
              v41 = v8[11];
              v36 = v8[10];
              Buffer = UnicodeString.Buffer;
              LODWORD(v39) = v36;
              appended = RtlStringCchPrintfW(v62, 260LL, L"%s\\%u-%u-%u-%u", UnicodeString.Buffer, v39, v41, v42, v43);
              if ( appended >= 0 )
              {
                if ( Buffer )
                  RtlpSysVolFree((__int64)Buffer);
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
        RtlpSysVolFree((__int64)v56.Buffer);
      if ( appended >= 0 )
        goto LABEL_49;
      goto LABEL_48;
    }
    appended = NtQueryInformationToken(a1, 1LL, Sid, 88LL, &v46);
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
    RtlpSysVolFree((__int64)UnicodeString.Buffer);
  if ( v53 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v53);
  return (unsigned int)appended;
}
