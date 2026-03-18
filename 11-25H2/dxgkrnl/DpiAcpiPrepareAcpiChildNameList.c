/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x14024ACA4
 * Callers:
 *     DpiAcpiExposeInfo @ 0x14024A764 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x14024AA60 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiGetAcpiChildUidFromName @ 0x14024AABC (DpiAcpiGetAcpiChildUidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DpiAcpiPrepareAcpiEnumChildCache @ 0x14024AF24 (DpiAcpiPrepareAcpiEnumChildCache.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x140395EF4 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // r9
  int v5; // edi
  __int64 v6; // rax
  __int64 Pool2; // rax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // eax
  void *v13; // rcx
  int v14[6]; // [rsp+50h] [rbp-1h] BYREF
  struct _STRING DestinationString; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+78h] [rbp+27h] BYREF
  __int128 v17; // [rsp+7Ch] [rbp+2Bh]
  int v18; // [rsp+8Ch] [rbp+3Bh]

  result = 0LL;
  v16 = 0;
  DestinationString = 0LL;
  v18 = 0;
  memset(v14, 0, sizeof(v14));
  v17 = 0LL;
  if ( !*(_QWORD *)(a1 + 3432) )
  {
    if ( *(_DWORD *)(a1 + 3416) )
      return 3221225473LL;
    v3 = DpiAcpiPrepareAcpiEnumChildCache();
    v5 = v3;
    if ( v3 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 3424);
      *(_DWORD *)(a1 + 3416) = 0;
      Pool2 = ExAllocatePool2(256LL, 16LL * *(unsigned int *)(v6 + 4), 1953656900LL, v4);
      *(_QWORD *)(a1 + 3432) = Pool2;
      if ( Pool2 )
      {
        v8 = 1;
        v9 = *(_QWORD *)(a1 + 3424) + 8LL;
        while ( v8 < *(_DWORD *)(*(_QWORD *)(a1 + 3424) + 4LL) )
        {
          v9 += *(unsigned int *)(v9 + 4) + 8LL;
          if ( (*(_BYTE *)v9 & 1) != 0 )
          {
            RtlInitAnsiString(&DestinationString, (PCSZ)(v9 + 8));
            v10 = *(_QWORD *)(a1 + 24);
            *(_OWORD *)&v14[2] = 0LL;
            qmemcpy(v14, "AeiC_ADR", 8);
            v12 = DpiAcpiEvalAcpiMethodEx(v10, (int)&DestinationString, (int)v14, v11, &v16, 0x18u, 1);
            v5 = v12;
            if ( v12 >= 0 )
            {
              if ( v16 != 1114596673 || !DWORD1(v17) )
              {
                v5 = -1072431089;
                WdLogSingleEntry1(2LL, -1072431089LL);
                WdLogGlobalForLineNumber = 1055;
                goto LABEL_19;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 3432) + 16LL * *(unsigned int *)(a1 + 3416)) = HIDWORD(v17);
              *(_QWORD *)(*(_QWORD *)(a1 + 3432) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3416))++ + 8) = v9 + 8;
            }
            else
            {
              WdLogSingleEntry1(3LL, v12);
              v5 = 0;
              WdLogGlobalForLineNumber = 1037;
            }
          }
          ++v8;
        }
        if ( v5 >= 0 )
          return (unsigned int)v5;
      }
      else
      {
        v5 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 975;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      WdLogGlobalForLineNumber = 953;
    }
LABEL_19:
    *(_DWORD *)(a1 + 3416) = -1;
    v13 = *(void **)(a1 + 3432);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(a1 + 3432) = 0LL;
    }
    return (unsigned int)v5;
  }
  return result;
}
