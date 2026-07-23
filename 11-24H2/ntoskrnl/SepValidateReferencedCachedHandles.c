/*
 * XREFs of SepValidateReferencedCachedHandles @ 0x140913DDC
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140913AE0 (SepSetTokenCachedHandles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403C2D90 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlGetAppContainerParent @ 0x140780B50 (RtlGetAppContainerParent.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     SepQueryNameString @ 0x140914194 (SepQueryNameString.c)
 *     RtlGetAppContainerSidType @ 0x1409143B0 (RtlGetAppContainerSidType.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepValidateReferencedCachedHandles(__int64 a1, PSID *a2, unsigned int a3, __int64 a4)
{
  PSID *v4; // r15
  __int64 v6; // rsi
  int v7; // ecx
  NTSTATUS v8; // edi
  unsigned int v9; // edx
  PVOID v10; // r14
  unsigned int v11; // r12d
  const UNICODE_STRING *v12; // r13
  NTSTATUS v13; // eax
  char *v14; // rbx
  struct _OBJECT_TYPE *v15; // rax
  unsigned int v16; // esi
  char *v18; // rbx
  unsigned int v19; // ebx
  bool v20; // si
  PSID v21; // r12
  __int64 v22; // r9
  __int64 v23; // r9
  PULONG v24; // rsi
  PULONG v25; // rdi
  PULONG v26; // rbx
  PULONG v27; // rax
  PSID v28; // rcx
  BOOLEAN v29; // bl
  char v30; // [rsp+40h] [rbp-C0h]
  unsigned int v31; // [rsp+44h] [rbp-BCh]
  int v32; // [rsp+48h] [rbp-B8h]
  PVOID AppContainerSidParent; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  PVOID v40[2]; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[8]; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v43; // [rsp+B8h] [rbp-48h] BYREF
  char v44; // [rsp+C8h] [rbp-38h]
  wchar_t pszDest[256]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t SourceString[256]; // [rsp+2D0h] [rbp+1D0h] BYREF

  *(_QWORD *)&String1.Length = a2;
  v4 = a2;
  v36 = a4;
  v34 = a3;
  v31 = 0;
  v6 = a4;
  v30 = 0;
  v7 = *(_DWORD *)a2;
  v8 = 0;
  AppContainerSidType = NotAppContainerSidType;
  v9 = 0;
  P = 0LL;
  v10 = 0LL;
  AppContainerSidParent = 0LL;
  v11 = 0;
  v32 = 0;
  *(_OWORD *)v40 = 0LL;
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_3;
    v23 = *(unsigned int *)(a1 + 120);
    AppContainerSidParent = v4 + 1;
    v8 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v23);
    if ( v8 < 0 )
      goto LABEL_20;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v11 = 1;
    v42[0] = 1;
    v32 = 1;
    if ( *(_DWORD *)(a1 + 120) != RtlGetCurrentServiceSessionId() )
    {
      v9 = 0;
      goto LABEL_49;
    }
    RtlInitUnicodeString(&v43, L"\\BaseNamedObjects");
    v9 = 0;
    v44 = 1;
  }
  else
  {
    v8 = RtlGetAppContainerSidType(v4[1], &AppContainerSidType);
    if ( v8 < 0 )
      goto LABEL_20;
    v21 = v4[1];
    if ( AppContainerSidType == ParentAppContainerSidType )
    {
      v8 = RtlConvertSidToUnicodeString((PUNICODE_STRING)v40, v21, 1u);
      if ( v8 < 0 )
        goto LABEL_20;
      v30 = 1;
    }
    else
    {
      v24 = RtlSubAuthoritySid(v21, 0xBu);
      v25 = RtlSubAuthoritySid(v21, 0xAu);
      v26 = RtlSubAuthoritySid(v21, 9u);
      v27 = RtlSubAuthoritySid(v21, 8u);
      v8 = RtlStringCchPrintfW(SourceString, 0x100uLL, L"%u-%u-%u-%u", *v27, *v26, *v25, *v24);
      if ( v8 < 0 )
        goto LABEL_20;
      RtlInitUnicodeString((PUNICODE_STRING)v40, SourceString);
      v6 = v36;
    }
    v22 = *(unsigned int *)(a1 + 120);
    AppContainerSidParent = v40;
    v8 = RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\Sessions\\%d", v22);
    if ( v8 < 0 )
      goto LABEL_20;
    RtlInitUnicodeString(&DestinationString, pszDest);
    v42[0] = 1;
    RtlInitUnicodeString(&v43, L"\\Device\\NamedPipe");
    v4 = *(PSID **)&String1.Length;
    v9 = 0;
    v44 = 0;
  }
  v11 = 2;
  v32 = 2;
LABEL_49:
  a3 = v34;
LABEL_3:
  v12 = (const UNICODE_STRING *)AppContainerSidParent;
  while ( 1 )
  {
    if ( v9 >= a3 )
      goto LABEL_20;
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      v9 = v31;
    }
    AppContainerSidParent = 0LL;
    v13 = ObReferenceObjectByHandle(*(HANDLE *)(v6 + 8LL * v9), 0, 0LL, 0, &AppContainerSidParent, 0LL);
    v10 = AppContainerSidParent;
    v8 = v13;
    if ( v13 >= 0 )
      break;
LABEL_40:
    v11 = v32;
    v9 = v31 + 1;
    a3 = v34;
    ++v31;
  }
  v14 = (char *)AppContainerSidParent - 48;
  v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)AppContainerSidParent - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)AppContainerSidParent - 48) >> 8)];
  if ( v15 != ObpDirectoryObjectType
    && v15 != ObpSymbolicLinkObjectType
    && (v15 != (struct _OBJECT_TYPE *)IoFileObjectType
     || *(_DWORD *)(*((_QWORD *)AppContainerSidParent + 1) + 72LL) != 17) )
  {
LABEL_19:
    v8 = -1073741811;
    goto LABEL_20;
  }
  v16 = 0;
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  v8 = SepQueryNameString(v10, &P);
  if ( v8 >= 0 )
  {
    if ( P && *((_WORD *)P + 1) )
    {
      String2 = *(UNICODE_STRING *)P;
      while ( v16 < v11 )
      {
        if ( RtlPrefixUnicodeString((UNICODE_STRING *)((char *)&DestinationString + 24 * v16), &String2, 1u) )
        {
          if ( !v42[24 * v16] )
            goto LABEL_39;
          if ( (v14[26] & 2) != 0 )
          {
            v18 = &v14[-ObpInfoMaskToOffset[v14[26] & 3]];
            if ( v18 )
            {
              if ( *((_WORD *)v18 + 5) )
              {
                String1 = *(UNICODE_STRING *)(v18 + 8);
                v19 = 0;
                if ( RtlEqualUnicodeString(&String1, v12, 1u) )
                  goto LABEL_39;
                v20 = 0;
                while ( v19 < 5 )
                {
                  if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&AllowedCachedObjectNames[2 * v19], 1u) )
                    goto LABEL_39;
                  ++v19;
                }
                if ( AppContainerSidType == ChildAppContainerSidType )
                {
                  v28 = v4[1];
                  AppContainerSidParent = 0LL;
                  if ( RtlGetAppContainerParent(v28, &AppContainerSidParent) >= 0 )
                  {
                    String2 = 0LL;
                    v8 = RtlConvertSidToUnicodeString(&String2, AppContainerSidParent, 1u);
                    if ( v8 >= 0 )
                    {
                      v29 = RtlEqualUnicodeString(&String1, &String2, 1u);
                      RtlFreeAnsiString(&String2);
                      v20 = v29 != 0;
                    }
                    ExFreePoolWithTag(AppContainerSidParent, 0);
                    if ( v20 )
                    {
LABEL_39:
                      v6 = v36;
                      goto LABEL_40;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_19;
        }
        v11 = v32;
        ++v16;
      }
    }
    goto LABEL_19;
  }
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v30 && v40[1] )
    ExFreePool(v40[1]);
  return (unsigned int)v8;
}
