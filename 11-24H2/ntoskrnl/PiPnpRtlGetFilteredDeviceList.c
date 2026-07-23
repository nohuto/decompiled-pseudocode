/*
 * XREFs of PiPnpRtlGetFilteredDeviceList @ 0x1409C4380
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     StringExHandleOtherFlagsW @ 0x140412250 (StringExHandleOtherFlagsW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     PiDmGetObjectConstraintList @ 0x1409C4900 (PiDmGetObjectConstraintList.c)
 *     PiDmGetObjectList @ 0x1409C4C90 (PiDmGetObjectList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGetFilteredDeviceList(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  bool v5; // cf
  char v6; // al
  __int64 v7; // rax
  NTSTATUS inited; // ebx
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // rax
  const wchar_t *v14; // rax
  int v15; // ebx
  wchar_t *v16; // rax
  __int64 Pool2; // rax
  WCHAR *v18; // rsi
  __int64 v19; // r14
  size_t v20; // r8
  _WORD *v21; // rcx
  __int64 v22; // r9
  __int16 v23; // ax
  _WORD *v24; // rax
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // r9
  char v28; // al
  ULONG v29; // edx
  WCHAR *v30; // rcx
  const WCHAR *v31; // rdx
  int v32; // ecx
  __int64 v33; // r9
  char v34; // al
  NTSTATUS ObjectList; // eax
  int pcchRemaining; // [rsp+20h] [rbp-79h]
  int dwFlags; // [rsp+28h] [rbp-71h]
  __int64 dwFlagsa; // [rsp+28h] [rbp-71h]
  __int64 dwFlagsb; // [rsp+28h] [rbp-71h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  char (__fastcall *v41)(__int64, const WCHAR *, unsigned int, __int64); // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING **p_p_DestinationString; // [rsp+58h] [rbp-41h]
  __int64 v43; // [rsp+60h] [rbp-39h]
  __int128 v44; // [rsp+68h] [rbp-31h] BYREF
  __int128 v45; // [rsp+78h] [rbp-21h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-11h] BYREF
  char v47; // [rsp+90h] [rbp-9h]
  int v48; // [rsp+91h] [rbp-8h]
  __int16 v49; // [rsp+95h] [rbp-4h]
  char v50; // [rsp+97h] [rbp-2h]
  WCHAR *v51; // [rsp+98h] [rbp-1h]
  __int64 v52; // [rsp+A0h] [rbp+7h]
  __int64 v53; // [rsp+A8h] [rbp+Fh]
  __int64 v54; // [rsp+B0h] [rbp+17h]
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+100h] [rbp+67h] BYREF
  size_t v56; // [rsp+108h] [rbp+6Fh] BYREF

  v1 = *(_DWORD *)(a1 + 24);
  v48 = 0;
  v49 = 0;
  v50 = 0;
  HIDWORD(v52) = 0;
  v44 = 0LL;
  v45 = 0LL;
  DestinationString = 0LL;
  if ( (v1 & 0x7C) != 0 )
    return (unsigned int)-1073741802;
  if ( (v1 & 1) != 0 )
  {
    v14 = *(const wchar_t **)(a1 + 16);
    if ( !v14 )
      return (unsigned int)-1073741811;
    v15 = 0;
    while ( v14 )
    {
      if ( !*v14 )
        return (unsigned int)-1073741811;
      if ( *v14 == 92 )
        return (unsigned int)-1073741811;
      if ( (unsigned int)++v15 > 2 )
        return (unsigned int)-1073741811;
      v16 = wcschr(v14, 0x5Cu);
      if ( !v16 )
        break;
      v14 = v16 + 1;
    }
    Pool2 = ExAllocatePool2(0x100uLL, 0x190uLL, 0x47706E50u);
    v18 = (WCHAR *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v19 = 200LL;
    v20 = *(_QWORD *)(a1 + 16) - Pool2;
    v21 = (_WORD *)Pool2;
    v22 = 0LL;
    do
    {
      if ( v19 == -2147483446 )
        break;
      v23 = *(_WORD *)((char *)v21 + v20);
      if ( !v23 )
        break;
      *v21 = v23;
      ++v22;
      ++v21;
      --v19;
    }
    while ( v19 );
    v24 = v21 - 1;
    if ( v19 )
      v24 = v21;
    v25 = v22 - 1;
    if ( v19 )
      v25 = v22;
    *v24 = 0;
    ppszDestEnd = &v18[v25];
    inited = v19 == 0 ? 0x80000005 : 0;
    v56 = 200 - v25;
    if ( v19 )
    {
      if ( (unsigned __int64)(200 - v25) < 2 )
      {
        inited = -1073741811;
      }
      else
      {
        *(_DWORD *)&v18[v25] = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, v18);
        if ( inited >= 0 )
        {
          v26 = *(_DWORD *)(a1 + 56);
          v27 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v44 = &DestinationString;
          v28 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
          v41 = PiPnpRtlEnumeratorFilterCallback;
          BYTE8(v44) = v28;
          v45 = *(_OWORD *)(a1 + 32);
          dwFlagsa = *(_QWORD *)(a1 + 64);
          *(_DWORD *)((char *)&v44 + 9) = 0;
          *(_WORD *)((char *)&v44 + 13) = 0;
          HIBYTE(v44) = 0;
          v43 = 1LL;
          p_p_DestinationString = (UNICODE_STRING **)&v44;
          inited = PiDmGetObjectList(1, (unsigned int)PiDmCmObjectMatchCallback, (unsigned int)&v41, v27, v26, dwFlagsa);
        }
      }
    }
    else
    {
      StringExHandleOtherFlagsW(v18, 0x190uLL, v20, &ppszDestEnd, &v56, 0x800u);
    }
    v29 = 1198550608;
    v30 = v18;
LABEL_36:
    ExFreePoolWithTag(v30, v29);
    return (unsigned int)inited;
  }
  if ( (v1 & 2) == 0 )
  {
    if ( (v1 & 0x80u) == 0 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      v5 = (v1 & 0x100) != 0;
      p_p_DestinationString = (UNICODE_STRING **)&v44;
      v12 = BYTE8(v44);
      if ( v5 )
        v12 = 1;
      *(_DWORD *)((char *)&v44 + 9) = 0;
      BYTE8(v44) = v12;
      v45 = *(_OWORD *)(a1 + 32);
      v13 = *(_QWORD *)(a1 + 64);
      pcchRemaining = *(_DWORD *)(a1 + 56);
      *(_WORD *)((char *)&v44 + 13) = 0;
      HIBYTE(v44) = 0;
      v43 = 1LL;
      v41 = PiPnpRtlEnumeratorFilterCallback;
      return (unsigned int)PiDmGetObjectList(
                             1,
                             (unsigned int)PiDmCmObjectMatchCallback,
                             (unsigned int)&v41,
                             v11,
                             pcchRemaining,
                             v13);
    }
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      v5 = (v1 & 0x100) != 0;
      p_p_DestinationString = (UNICODE_STRING **)&v44;
      v6 = BYTE8(v44);
      if ( v5 )
        v6 = 1;
      *(_DWORD *)((char *)&v44 + 9) = 0;
      BYTE8(v44) = v6;
      v45 = *(_OWORD *)(a1 + 32);
      v7 = *(_QWORD *)(a1 + 64);
      dwFlags = *(_DWORD *)(a1 + 56);
      *(_WORD *)((char *)&v44 + 13) = 0;
      HIBYTE(v44) = 0;
      v43 = 1LL;
      v41 = PiPnpRtlEnumeratorFilterCallback;
      return (unsigned int)PiDmGetObjectConstraintList(4, v3, v4, (unsigned int)&v41, v4, dwFlags, v7);
    }
    return (unsigned int)-1073741811;
  }
  v31 = *(const WCHAR **)(a1 + 16);
  if ( !v31 )
    return (unsigned int)-1073741811;
  inited = RtlInitUnicodeStringEx(&DestinationString, v31);
  if ( inited >= 0 )
  {
    v32 = *(_DWORD *)(a1 + 56);
    v33 = *(_QWORD *)(a1 + 48);
    p_DestinationString = &DestinationString;
    v34 = BYTE1(*(_DWORD *)(a1 + 24)) & 1;
    v41 = (char (__fastcall *)(__int64, const WCHAR *, unsigned int, __int64))PiPnpRtlServiceFilterCallback;
    v47 = v34;
    v53 = *(_QWORD *)(a1 + 32);
    v54 = *(_QWORD *)(a1 + 40);
    dwFlagsb = *(_QWORD *)(a1 + 64);
    p_p_DestinationString = &p_DestinationString;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v52 = 0LL;
    v51 = 0LL;
    v43 = 1LL;
    ObjectList = PiDmGetObjectList(1, (unsigned int)PiDmCmObjectMatchCallback, (unsigned int)&v41, v33, v32, dwFlagsb);
    v30 = v51;
    inited = ObjectList;
    if ( v51 )
    {
      v29 = 0;
      goto LABEL_36;
    }
  }
  return (unsigned int)inited;
}
