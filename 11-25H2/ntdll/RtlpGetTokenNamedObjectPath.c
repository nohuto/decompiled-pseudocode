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

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  _DWORD *v8; // rdi
  int v9; // eax
  char v10; // r15
  int v11; // r14d
  char v12; // r12
  int appended; // ebx
  __int64 v14; // r9
  int v15; // edi
  unsigned int v16; // ebx
  bool v17; // al
  __int64 v18; // r8
  wchar_t *v19; // rdx
  wchar_t v20; // ax
  wchar_t *v21; // rax
  __int64 v22; // rcx
  wchar_t *v23; // rax
  int v24; // esi
  __int64 v25; // rbx
  int v26; // r14d
  size_t v27; // rbx
  wchar_t *Atom; // rax
  wchar_t *v29; // rdi
  const wchar_t *v31; // rcx
  int v32; // eax
  const wchar_t *v33; // rax
  int v34; // eax
  wchar_t v35; // ax
  size_t v36; // rax
  int v37; // eax
  wchar_t *Buffer; // rdi
  size_t v39; // rax
  __int64 v40; // [rsp+20h] [rbp-E0h]
  __int64 v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+38h] [rbp-C8h]
  char v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-ACh] BYREF
  int v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+5Ch] [rbp-A4h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  PSID v54; // [rsp+70h] [rbp-90h] BYREF
  const void *v55[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v56; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v57; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v59[10]; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v60[264]; // [rsp+160h] [rbp+60h] BYREF
  wchar_t *String; // [rsp+370h] [rbp+270h] BYREF
  char v62; // [rsp+378h] [rbp+278h]
  wchar_t v63[264]; // [rsp+490h] [rbp+390h] BYREF

  v49 = 0;
  v54 = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(v59, 0, 0x50uLL);
  v47 = 0;
  v50 = 0;
  memset_thunk_772440563353939046(v60, 0, 0x208uLL);
  memset_thunk_772440563353939046(v63, 0, 0x208uLL);
  memset_thunk_772440563353939046(Sid, 0, 0x58uLL);
  v55[0] = (const void *)262146;
  v55[1] = L"\\";
  v56 = 0LL;
  if ( !a4 || !a1 )
    return 3221225485LL;
  v46 = 0;
  v51 = a3 & 2;
  v48 = 0;
  v9 = a3 & 8;
  v10 = a3 & 1;
  v11 = a3 & 4;
  v52 = v9;
  v12 = 1;
  v45 = 1;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v57 = 0LL;
  if ( a2 )
  {
    v8 = a2;
    v46 = 1;
  }
  else
  {
    appended = NtQueryInformationToken(a1, 29LL, &v46, 4LL, &v47);
    if ( appended < 0 )
      goto LABEL_48;
    if ( v46 )
    {
      appended = NtQueryInformationToken(a1, 31LL, v59, 80LL, &v47);
      if ( appended < 0 )
        goto LABEL_48;
      v8 = (_DWORD *)v59[0];
      if ( !v59[0] )
      {
        appended = -1073741823;
        goto LABEL_48;
      }
    }
  }
  appended = NtQueryInformationToken(a1, 42LL, &v48, 4LL, &v47);
  if ( appended >= 0 )
  {
    if ( !v48 )
    {
LABEL_7:
      appended = NtQueryInformationToken(a1, 12LL, &v50, 4LL, &v47);
      if ( appended < 0 )
        goto LABEL_45;
      if ( !v46 )
      {
LABEL_9:
        appended = NtQueryInformationToken(a1, 44LL, &String, 288LL, &v47);
        if ( appended < 0 )
        {
LABEL_44:
          v12 = v45;
          goto LABEL_45;
        }
        v15 = v46;
        v16 = v50;
        v17 = !v48 && !v46 && v16 == (unsigned int)RtlGetCurrentServiceSessionId();
        if ( v10 )
        {
          if ( v11 )
          {
            v18 = 260LL;
            v19 = v60;
            do
            {
              if ( v18 == -2147483386 )
                break;
              v20 = *(wchar_t *)((char *)v19 + (char *)L"AppContainerNamedObjects" - (char *)v60);
              if ( !v20 )
                break;
              *v19++ = v20;
              --v18;
            }
            while ( v18 );
LABEL_18:
            v21 = v19 - 1;
            appended = -2147483643;
            if ( v18 )
            {
              v21 = v19;
              appended = 0;
            }
            *v21 = 0;
            goto LABEL_21;
          }
          v33 = L"\\AppContainerNamedObjects";
          if ( !v15 )
            v33 = (const wchar_t *)&unk_18017D3FC;
          v34 = RtlStringCchPrintfW(v60, 260LL, L"Global\\Session\\%ld%s", v16, v33);
          v15 = v46;
          appended = v34;
        }
        else
        {
          if ( v17 )
          {
            v18 = 260LL;
            v19 = v60;
            do
            {
              if ( v18 == -2147483386 )
                break;
              v35 = *(wchar_t *)((char *)v19 + (char *)L"\\BaseNamedObjects" - (char *)v60);
              if ( !v35 )
                break;
              *v19++ = v35;
              --v18;
            }
            while ( v18 );
            goto LABEL_18;
          }
          v31 = L"AppContainerNamedObjects";
          if ( !v15 )
            v31 = L"BaseNamedObjects";
          LODWORD(v41) = v16;
          v32 = RtlStringCchPrintfW(v60, 260LL, L"%s\\%ld\\%s", L"\\Sessions", v41, v31);
          v15 = v46;
          appended = v32;
        }
LABEL_21:
        if ( appended >= 0 )
        {
          v22 = 260LL;
          v23 = v60;
          do
          {
            if ( !*v23 )
              break;
            ++v23;
            --v22;
          }
          while ( v22 );
          appended = -1073741811;
          if ( v22 )
          {
            v24 = v51;
            v25 = 2 * (260 - v22);
            if ( v48 && !v51 )
              v25 = 2 * (260 - v22) + v57.Length + 2;
            if ( v15 )
              v25 += UnicodeString.Length + 2LL;
            v26 = v52;
            if ( v62 && !v52 )
            {
              *(_QWORD *)&v56 = 0LL;
              *((_QWORD *)&v56 + 1) = String;
              if ( String )
              {
                v36 = 2 * wcslen(String);
                if ( v36 >= 0xFFFE )
                  LOWORD(v36) = -4;
                LOWORD(v56) = v36;
                WORD1(v56) = v36 + 2;
              }
              else
              {
                LOWORD(v36) = v56;
              }
              v25 += (unsigned __int16)v36 + 2LL;
            }
            v27 = v25 + 2;
            Atom = (wchar_t *)RtlpAllocateAtom();
            v29 = Atom;
            if ( Atom )
            {
              memset_thunk_772440563353939046(Atom, 0, v27);
              *a4 = 0LL;
              a4->MaximumLength = v27;
              a4->Buffer = v29;
              appended = RtlAppendUnicodeToString(&a4->Length, v60);
              if ( appended >= 0 )
              {
                if ( !v48
                  || v24
                  || (appended = RtlAppendUnicodeStringToString(&a4->Length, v55), appended >= 0)
                  && (appended = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&v57), appended >= 0) )
                {
                  if ( !v46
                    || (appended = RtlAppendUnicodeStringToString(&a4->Length, v55), appended >= 0)
                    && (appended = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&UnicodeString),
                        appended >= 0) )
                  {
                    if ( v62 )
                    {
                      if ( !v26 )
                      {
                        appended = RtlAppendUnicodeStringToString(&a4->Length, v55);
                        if ( appended >= 0 )
                        {
                          v12 = v45;
                          appended = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&v56);
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
      appended = RtlGetAppContainerSidType(v8, &v49);
      if ( appended >= 0 )
      {
        if ( v49 == 2 )
        {
          appended = RtlConvertSidToUnicodeString(&UnicodeString, v8, 1u);
          if ( appended >= 0 )
            goto LABEL_9;
        }
        else
        {
          appended = RtlGetAppContainerParent(v8, &v54);
          if ( appended >= 0 )
          {
            appended = RtlConvertSidToUnicodeString(&UnicodeString, v54, 1u);
            if ( appended >= 0 )
            {
              v44 = v8[13];
              v43 = v8[12];
              v42 = v8[11];
              v37 = v8[10];
              Buffer = UnicodeString.Buffer;
              LODWORD(v40) = v37;
              appended = RtlStringCchPrintfW(v63, 260LL, L"%s\\%u-%u-%u-%u", UnicodeString.Buffer, v40, v42, v43, v44);
              if ( appended >= 0 )
              {
                if ( Buffer )
                  RtlpSysVolFree((__int64)Buffer);
                *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
                UnicodeString.Buffer = v63;
                v39 = 2 * wcslen(v63);
                v45 = 0;
                if ( v39 >= 0xFFFE )
                  LOWORD(v39) = -4;
                UnicodeString.Length = v39;
                UnicodeString.MaximumLength = v39 + 2;
                goto LABEL_9;
              }
            }
          }
        }
      }
      v12 = 1;
LABEL_45:
      if ( v57.Buffer )
        RtlpSysVolFree((__int64)v57.Buffer);
      if ( appended >= 0 )
        goto LABEL_49;
      goto LABEL_48;
    }
    appended = NtQueryInformationToken(a1, 1LL, Sid, 88LL, &v47);
    if ( appended >= 0 )
    {
      appended = RtlConvertSidToUnicodeString(&v57, Sid[0], 1u);
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
  if ( v54 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v54, v14);
  return (unsigned int)appended;
}
