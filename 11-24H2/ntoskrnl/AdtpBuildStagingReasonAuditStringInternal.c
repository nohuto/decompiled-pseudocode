/*
 * XREFs of AdtpBuildStagingReasonAuditStringInternal @ 0x14069810C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140403434 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     AdtpFormatPrefix @ 0x140403F10 (AdtpFormatPrefix.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     AdtpPermissionBitPosition @ 0x1406985C4 (AdtpPermissionBitPosition.c)
 *     StringCchPrintfExW @ 0x1406985D8 (StringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildStagingReasonAuditStringInternal(
        __int64 a1,
        __int64 a2,
        size_t a3,
        size_t a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _WORD *a8)
{
  unsigned __int16 Length; // r15
  __int64 v9; // rbx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r11d
  int v15; // edi
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // esi
  bool v19; // zf
  ULONG v20; // r14d
  size_t v21; // rdx
  unsigned int v22; // eax
  NTSTATUS appended; // eax
  size_t v24; // r14
  __int64 v25; // r15
  __int16 v26; // si
  char *Pool2; // rbx
  __int16 v28; // si
  _WORD *v29; // rcx
  __int64 v31; // [rsp+30h] [rbp-D0h]
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v34; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  UNICODE_STRING Source; // [rsp+98h] [rbp-68h] BYREF
  size_t v39; // [rsp+A8h] [rbp-58h]
  _WORD *v40; // [rsp+B0h] [rbp-50h]
  wchar_t pszFormat[8]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t pszDest[20]; // [rsp+C8h] [rbp-38h] BYREF
  char v43; // [rsp+F0h] [rbp-10h] BYREF

  v40 = a8;
  v39 = a4;
  Source.Buffer = (wchar_t *)&v43;
  pcchRemaining = a3;
  *(_OWORD *)Src = 0LL;
  v34.Buffer = (wchar_t *)L"-";
  Length = 2;
  Destination = 0LL;
  LOBYTE(v32) = 0;
  *(_QWORD *)&Source.Length = 1966080LL;
  wcscpy(pszFormat, L"# %d");
  *(_QWORD *)&v34.Length = 131074LL;
  v9 = (unsigned __int8)AdtpPermissionBitPosition(a5);
  v15 = AdtpBuildAccessesString(v13, v10, v11, v14, (PUNICODE_STRING)Src, v12, v12, v12, (__int64)&v32);
  if ( v15 < 0 )
    goto LABEL_44;
  v16 = *(_DWORD *)(a7 + 4 * v9);
  v17 = v16 & 0xFF0000;
  v37 = LOWORD(Src[0]) >> 1;
  v18 = HIBYTE(v16) & 0x7F;
  if ( v17 > 0x200000 )
  {
    if ( v17 == 3145728 )
      goto LABEL_22;
    if ( v17 != 0x400000 )
    {
      if ( v17 == 5242880 )
        goto LABEL_22;
      if ( v17 != 6291456 && v17 != 7340032 )
      {
        v19 = v17 == 0x800000;
LABEL_19:
        if ( !v19 )
        {
          v20 = 1809;
          goto LABEL_23;
        }
        goto LABEL_22;
      }
    }
LABEL_21:
    v20 = 1814;
    goto LABEL_23;
  }
  if ( v17 == 0x200000 || v17 == 0x10000 )
    goto LABEL_21;
  if ( v17 != 0x20000 )
  {
    if ( v17 == 196608 )
    {
      v20 = 1816;
      goto LABEL_23;
    }
    if ( v17 != 327680 )
    {
      if ( v17 == 393216 )
      {
        v20 = 1815;
        goto LABEL_23;
      }
      if ( v17 != 458752 )
      {
        v19 = v17 == 0x100000;
        goto LABEL_19;
      }
    }
  }
LABEL_22:
  v20 = 1813;
LABEL_23:
  v15 = AdtpFormatPrefix(&Source, v20, 0);
  if ( v15 >= 0 )
  {
    if ( v17 == 196608 || (v21 = pcchRemaining, v17 == 393216) )
      v21 = v39;
    v22 = *(_DWORD *)(v21 + 8);
    if ( v22 )
    {
      if ( v18 >= v22 )
      {
        v15 = -1073741811;
        goto LABEL_44;
      }
      Length = _mm_cvtsi128_si32(*(__m128i *)(*(_QWORD *)(v21 + 16) + 16LL * v18));
      v34 = *(UNICODE_STRING *)(*(_QWORD *)(v21 + 16) + 16LL * v18);
    }
    if ( Length <= 2u )
    {
      LODWORD(v31) = v18;
      pcchRemaining = 0LL;
      if ( StringCchPrintfExW(pszDest, 0x14uLL, 0LL, &pcchRemaining, 0, pszFormat, v31) >= 0 )
      {
        v34.MaximumLength = 40;
        v34.Length = 2 * (20 - pcchRemaining);
        Length = v34.Length;
        v34.Buffer = pszDest;
      }
    }
    Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned int)Length + 54, 0x6B416553u);
    if ( !Destination.Buffer )
      goto LABEL_35;
    Destination.Length = 0;
    Destination.MaximumLength = 2 * (Length + 54);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    if ( v20 != 1809 )
      RtlAppendUnicodeStringToString(&Destination, &v34);
    appended = RtlAppendUnicodeToString(&Destination, L"\r\n\t\t\t\t");
    v24 = Destination.Length;
    v15 = appended;
    v25 = v37 + (Destination.Length >> 1);
    v26 = v37 + (Destination.Length >> 1) + 1;
    Pool2 = (char *)ExAllocatePool2(0x100uLL, 2LL * (unsigned int)(v25 + 1), 0x6B416553u);
    if ( Pool2 )
    {
      if ( LOWORD(Src[0]) )
        memmove(Pool2, Src[1], LOWORD(Src[0]));
      if ( (_WORD)v24 )
        memmove(&Pool2[LOWORD(Src[0])], Destination.Buffer, v24);
      *(_WORD *)&Pool2[2 * v25] = 0;
      v28 = 2 * v26;
      v29 = v40;
      *v40 = v28 - 2;
      v29[1] = v28;
      *((_QWORD *)v29 + 1) = Pool2;
    }
    else
    {
LABEL_35:
      v15 = -1073741801;
    }
  }
LABEL_44:
  if ( (_BYTE)v32 && Src[1] )
    ExFreePoolWithTag(Src[1], 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v15;
}
