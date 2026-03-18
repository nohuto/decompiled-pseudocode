/*
 * XREFs of ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401B2864
 * Callers:
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x140120998 (-AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValu.c)
 */

int __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        struct _PS_PKG_CLAIM *a5)
{
  bool v9; // r15
  bool v10; // di
  struct _PS_PKG_CLAIM *v11; // rbx
  int result; // eax
  __int64 v13; // rdx
  char v14; // cl
  void *ProcessSectionBaseAddress; // rax
  WORD NumberOfSections; // cx
  WORD v17; // ax
  WORD v18; // [rsp+40h] [rbp-68h]
  WORD v19; // [rsp+44h] [rbp-64h]
  PVOID TokenInformation; // [rsp+48h] [rbp-60h] BYREF
  PIMAGE_NT_HEADERS v21; // [rsp+50h] [rbp-58h]
  void *Source1; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+60h] [rbp-48h] BYREF
  __int64 v24[3]; // [rsp+68h] [rbp-40h] BYREF
  char v25; // [rsp+C0h] [rbp+18h] BYREF
  char v26; // [rsp+C8h] [rbp+20h] BYREF

  v26 = 0;
  TokenInformation = 0LL;
  v25 = 0;
  v9 = 0;
  v10 = 0;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)a4 = 0;
  v11 = a5;
  *(_QWORD *)a5 = 0LL;
  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, &TokenInformation);
    if ( result >= 0 )
    {
      v23 = 0LL;
      v24[0] = 0LL;
      result = (unsigned __int16)AppModelPolicy_GetPolicy_Internal(
                                   (__int64)a2,
                                   v13,
                                   (_DWORD *)&TokenInformation + 1,
                                   (int *)v24,
                                   &v23);
      if ( (_WORD)result )
        result = (unsigned __int16)result | 0xC0070000;
      if ( result >= 0 )
      {
        PsQueryProcessAttributesByToken(a2, 0LL, &v25);
        if ( v25 )
        {
          result = RtlQueryPackageClaims(a2, 0LL, 0LL, 0LL, 0LL, 0LL, v11, 0LL);
          if ( result < 0 )
            return result;
          v10 = (*(_DWORD *)v11 & 0x800) != 0;
          v9 = (*(_DWORD *)v11 & 0x200) != 0;
        }
        PsQueryProcessAttributesByToken(a2, &v26, 0LL);
        v14 = v26 != 0;
        LOBYTE(a5) = v26 != 0;
        if ( (*((_DWORD *)a1 + 6) & 2) != 0 )
        {
          ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*((_QWORD *)a1 + 2));
          v21 = RtlImageNtHeader(ProcessSectionBaseAddress);
          if ( v21 )
          {
            Source1 = (char *)&v21->OptionalHeader + v21->FileHeader.SizeOfOptionalHeader;
            NumberOfSections = v21->FileHeader.NumberOfSections;
            v19 = NumberOfSections;
            v17 = 0;
            while ( 1 )
            {
              v18 = v17;
              if ( v17 >= NumberOfSections )
              {
                v14 = (char)a5;
                goto LABEL_24;
              }
              if ( ((unsigned __int8)Source1 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( RtlCompareMemory(Source1, ".imrsiv", 8uLL) == 8 )
                break;
              Source1 = (char *)Source1 + 40;
              v17 = v18 + 1;
              NumberOfSections = v19;
            }
            if ( *(_DWORD *)a4 )
            {
              *(_DWORD *)a3 = 1;
              return 0;
            }
            else if ( (unsigned int)TokenInformation >= 0x2000 )
            {
              *(_DWORD *)a3 = 2;
              return 0;
            }
            else
            {
              return -1073741823;
            }
          }
          else
          {
            return -1073741823;
          }
        }
        else
        {
LABEL_24:
          if ( v14 && (v10 || *(_DWORD *)a4) && HIDWORD(TokenInformation) != 196608 && !v9 )
            *(_DWORD *)a3 = 1;
          return 0;
        }
      }
    }
  }
  return result;
}
