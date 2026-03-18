/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x140251AD4
 * Callers:
 *     DpiAcpiExposeInfo @ 0x140251594 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x140251890 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiGetAcpiChildUidFromName @ 0x1402518EC (DpiAcpiGetAcpiChildUidFromName.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DpiAcpiPrepareAcpiEnumChildCache @ 0x140251D54 (DpiAcpiPrepareAcpiEnumChildCache.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x14038DD94 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  int v4; // edi
  __int64 v5; // rax
  __int64 Pool2; // rax
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // eax
  void *v12; // rcx
  int v13[6]; // [rsp+50h] [rbp-1h] BYREF
  struct _STRING DestinationString; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+78h] [rbp+27h] BYREF
  __int128 v16; // [rsp+7Ch] [rbp+2Bh]
  int v17; // [rsp+8Ch] [rbp+3Bh]

  result = 0LL;
  v15 = 0;
  DestinationString = 0LL;
  v17 = 0;
  memset(v13, 0, sizeof(v13));
  v16 = 0LL;
  if ( !*(_QWORD *)(a1 + 3432) )
  {
    if ( *(_DWORD *)(a1 + 3416) )
      return 3221225473LL;
    v3 = DpiAcpiPrepareAcpiEnumChildCache();
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 3424);
      *(_DWORD *)(a1 + 3416) = 0;
      Pool2 = ExAllocatePool2(256LL, 16LL * *(unsigned int *)(v5 + 4), 1953656900LL);
      *(_QWORD *)(a1 + 3432) = Pool2;
      if ( Pool2 )
      {
        v7 = 1;
        v8 = *(_QWORD *)(a1 + 3424) + 8LL;
        while ( v7 < *(_DWORD *)(*(_QWORD *)(a1 + 3424) + 4LL) )
        {
          v8 += *(unsigned int *)(v8 + 4) + 8LL;
          if ( (*(_BYTE *)v8 & 1) != 0 )
          {
            RtlInitAnsiString(&DestinationString, (PCSZ)(v8 + 8));
            v9 = *(_QWORD *)(a1 + 24);
            *(_OWORD *)&v13[2] = 0LL;
            qmemcpy(v13, "AeiC_ADR", 8);
            v11 = DpiAcpiEvalAcpiMethodEx(v9, (int)&DestinationString, (int)v13, v10, &v15, 0x18u, 1);
            v4 = v11;
            if ( v11 >= 0 )
            {
              if ( v15 != 1114596673 || !DWORD1(v16) )
              {
                v4 = -1072431089;
                WdLogSingleEntry1(2LL, -1072431089LL);
                WdLogGlobalForLineNumber = 1055;
                goto LABEL_19;
              }
              *(_DWORD *)(*(_QWORD *)(a1 + 3432) + 16LL * *(unsigned int *)(a1 + 3416)) = HIDWORD(v16);
              *(_QWORD *)(*(_QWORD *)(a1 + 3432) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3416))++ + 8) = v8 + 8;
            }
            else
            {
              WdLogSingleEntry1(3LL, v11);
              v4 = 0;
              WdLogGlobalForLineNumber = 1037;
            }
          }
          ++v7;
        }
        if ( v4 >= 0 )
          return (unsigned int)v4;
      }
      else
      {
        v4 = -1073741801;
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
    v12 = *(void **)(a1 + 3432);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *(_QWORD *)(a1 + 3432) = 0LL;
    }
    return (unsigned int)v4;
  }
  return result;
}
