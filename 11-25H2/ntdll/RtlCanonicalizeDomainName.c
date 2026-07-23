/*
 * XREFs of RtlCanonicalizeDomainName @ 0x1800BF430
 * Callers:
 *     RtlEqualDomainName @ 0x1800BEC70 (RtlEqualDomainName.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     RtlIpv4AddressToStringW @ 0x1800BEE10 (RtlIpv4AddressToStringW.c)
 *     RtlIpv6AddressToStringW @ 0x1800BEE70 (RtlIpv6AddressToStringW.c)
 *     RtlIpv6StringToAddressExW @ 0x1800BFA10 (RtlIpv6StringToAddressExW.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800C00F0 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 *     RtlIpv4StringToAddressW @ 0x1800C0FB0 (RtlIpv4StringToAddressW.c)
 *     __report_rangecheckfailure @ 0x18012250C (__report_rangecheckfailure.c)
 *     iswctype @ 0x180126600 (iswctype.c)
 *     towlower @ 0x1801290C0 (towlower.c)
 *     swprintf_s @ 0x18012F8B0 (swprintf_s.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlCanonicalizeDomainName(PUNICODE_STRING DestinationString, unsigned __int16 *a2, BOOLEAN a3)
{
  unsigned int v3; // ebx
  _UNICODE_STRING *v6; // rsi
  unsigned int v7; // eax
  const void *v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  USHORT *v11; // rdi
  unsigned __int16 v12; // r12
  unsigned __int16 v13; // r15
  int v14; // esi
  int v15; // eax
  int v16; // edx
  __int16 v17; // r15
  int v18; // eax
  __int16 v19; // cx
  ULONG v20; // edi
  wchar_t *v21; // rax
  wchar_t *v22; // rbx
  unsigned int v23; // ebx
  __int64 v25; // r12
  unsigned int v26; // r15d
  PVOID Heap; // rdi
  PVOID v28; // rax
  void *v29; // r14
  int v30; // r15d
  PVOID v31; // rax
  void *v32; // rdi
  int v33; // r14d
  __int64 v34; // rcx
  wint_t *v35; // rdi
  __int64 v36; // r14
  _UNICODE_STRING *v37; // rcx
  unsigned int v38; // ebx
  USHORT Port[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v41; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ScopeId[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43; // [rsp+68h] [rbp-98h] BYREF
  PUNICODE_STRING DestinationStringa; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+78h] [rbp-88h] BYREF
  WCHAR Src[22]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR S[65]; // [rsp+C0h] [rbp-40h] BYREF
  char v48; // [rsp+142h] [rbp+42h] BYREF
  WCHAR SourceString[256]; // [rsp+150h] [rbp+50h] BYREF
  WCHAR AddressString[256]; // [rsp+350h] [rbp+250h] BYREF
  _BYTE v51[512]; // [rsp+550h] [rbp+450h] BYREF

  v3 = 0;
  DestinationStringa = DestinationString;
  v40 = 0;
  ScopeId[0] = 0;
  Port[0] = 0;
  v43 = 256;
  v6 = DestinationString;
  v41 = 256;
  v45 = 0LL;
  if ( a2 )
  {
    v7 = *a2;
    v8 = (const void *)*((_QWORD *)a2 + 1);
    if ( (unsigned __int16)v7 > 0x200u )
      v7 = 512;
    v9 = (unsigned __int16)v7;
    v10 = v7;
    memmove(AddressString, v8, v7);
    if ( (unsigned __int64)(v9 + 2) <= 0x200 )
      AddressString[v10 >> 1] = 0;
    if ( (_WORD)v9 == 512 )
      return 3221227286LL;
    v6 = DestinationStringa;
  }
  if ( RtlIpv6StringToAddressExW(AddressString, (struct in6_addr *)&v45, ScopeId, Port) >= 0 && !Port[0] )
  {
    if ( (_WORD)v45
      || __PAIR32__(WORD1(v45), 0) != WORD2(v45)
      || __PAIR32__(WORD3(v45), 0) != WORD4(v45)
      || WORD5(v45) != 0xFFFF )
    {
      v20 = ScopeId[0];
      goto LABEL_32;
    }
    v20 = ScopeId[0];
    if ( ScopeId[0] )
    {
LABEL_32:
      v21 = RtlIpv6AddressToStringW((const struct in6_addr *)&v45, S);
      v22 = v21;
      if ( v20 )
        v22 = &v21[swprintf_s(v21, (&v48 - (char *)v21) >> 1, L"%%%u", v20)];
      v23 = v22 - S + 1;
      if ( v23 <= 0x100 )
      {
        memmove(SourceString, S, 2LL * v23);
        if ( !RtlCreateUnicodeString(v6, SourceString) )
          return 3221225495LL;
        return 0LL;
      }
      return 3221225485LL;
    }
    v40 = HIDWORD(v45);
LABEL_75:
    v38 = RtlIpv4AddressToStringW((const struct in_addr *)&v40, Src) - Src + 1;
    if ( v38 <= 0x100 )
    {
      memmove(SourceString, Src, 2LL * v38);
      if ( !RtlCreateUnicodeString(DestinationStringa, SourceString) )
        return 3221225495LL;
      return 0LL;
    }
    return 3221225485LL;
  }
  *(_QWORD *)ScopeId = 0LL;
  if ( RtlIpv4StringToAddressW(AddressString, a3, (LPCWSTR *)ScopeId, (struct in_addr *)&v40) >= 0 )
  {
    if ( **(_WORD **)ScopeId == 58 )
    {
      v11 = (USHORT *)(*(_QWORD *)ScopeId + 2LL);
      v12 = 10;
      v13 = 0;
      if ( *(_WORD *)(*(_QWORD *)ScopeId + 2LL) == 48 )
      {
        v12 = 8;
        v11 = (USHORT *)(*(_QWORD *)ScopeId + 4LL);
        if ( ((*(_WORD *)(*(_QWORD *)ScopeId + 4LL) - 88) & 0xFFDF) == 0 )
        {
          v12 = 16;
          v11 = (USHORT *)(*(_QWORD *)ScopeId + 6LL);
        }
      }
      Port[0] = *v11;
      while ( 1 )
      {
        v14 = *v11++;
        if ( !(_WORD)v14 )
          break;
        if ( (unsigned __int16)v14 < 0x80u && iswctype(v14, 4u) && (unsigned __int16)(v14 - 48) < v12 )
        {
          if ( v14 + v13 * (unsigned int)v12 - 48 > 0xFFFF )
            goto LABEL_40;
          v13 = v14 + v13 * v12 - 48;
        }
        else
        {
          if ( v12 != 16 || (unsigned __int16)v14 >= 0x80u || !iswctype(v14, 0x80u) )
            goto LABEL_40;
          v15 = iswctype(v14, 2u);
          v16 = 65;
          if ( v15 )
            v16 = 97;
          if ( v14 + 16 * (unsigned int)v13 - v16 + 10 > 0xFFFF )
            goto LABEL_40;
          v17 = 16 * v13;
          v18 = iswctype(v14, 2u);
          v19 = 65;
          if ( v18 )
            v19 = 97;
          v13 = v14 - v19 + 10 + v17;
        }
      }
      if ( !Port[0] )
        goto LABEL_40;
    }
    else
    {
      if ( **(_WORD **)ScopeId )
        goto LABEL_40;
      v13 = 0;
    }
    if ( !__ROR2__(v13, 8) )
      goto LABEL_75;
  }
LABEL_40:
  v25 = *((_QWORD *)a2 + 1);
  v26 = *a2 >> 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v28 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v29 = v28;
  if ( Heap && v28 )
  {
    v30 = RtlpNameprepAsciiRealWorker(0LL, v25, v26, v51, &v41, 1, Heap);
LABEL_43:
    RtlpSysVolFree(Heap);
    goto LABEL_44;
  }
  v30 = -1073741801;
  if ( Heap )
    goto LABEL_43;
LABEL_44:
  if ( v29 )
    RtlpSysVolFree(v29);
  if ( v30 < 0 )
    return (unsigned int)v30;
  if ( v41 )
  {
    v35 = (wint_t *)v51;
    v36 = v41;
    do
    {
      *v35 = towlower(*v35);
      ++v35;
      --v36;
    }
    while ( v36 );
  }
  v31 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v32 = v31;
  if ( !v31 )
    return (unsigned int)-1073741801;
  v33 = RtlpIdnToUnicodeWorker(0LL, v51, v41, SourceString, &v43, v31);
  RtlpSysVolFree(v32);
  if ( v33 < 0 )
    return (unsigned int)v33;
  if ( v43 == 256 )
    return 3221227286LL;
  if ( 2 * (unsigned __int64)v43 >= 0x200 )
    _report_rangecheckfailure(v34);
  v37 = DestinationStringa;
  SourceString[v43] = 0;
  if ( !RtlCreateUnicodeString(v37, SourceString) )
    return (unsigned int)-1073741801;
  return v3;
}
