/*
 * XREFs of DpiAcpiPrepareDisplayMuxSupport @ 0x14024B2CC
 * Callers:
 *     DpiFdoIsMdmDeviceAndOwnsMux @ 0x1400886D4 (DpiFdoIsMdmDeviceAndOwnsMux.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1400510FC (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z @ 0x14008AAAC (-DpiAcpiDoesDepContainMux@@YAEPEAU_FDO_CONTEXT@@PEAU_ACPI_EVAL_OUTPUT_BUFFER_V1@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiAcpiPrepareAcpiEnumChildCache @ 0x14024AF24 (DpiAcpiPrepareAcpiEnumChildCache.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x140395EF4 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareDisplayMuxSupport(struct _FDO_CONTEXT *a1)
{
  int v2; // eax
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  __int64 v12; // r11
  int v13; // eax
  _BYTE *v14; // r10
  __int64 v15; // rdx
  bool v16; // cf
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // eax
  int v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  struct _STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _ACPI_EVAL_OUTPUT_BUFFER_V1 v23[8]; // [rsp+70h] [rbp-90h] BYREF

  memset(v23, 0, 148);
  v21 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( !*((_BYTE *)a1 + 6392) )
  {
    *((_BYTE *)a1 + 6392) = 1;
    v2 = DpiAcpiPrepareAcpiEnumChildCache((__int64)a1);
    v3 = v2;
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(2LL, v2);
      result = v3;
      WdLogGlobalForLineNumber = 1143;
      return result;
    }
    v5 = *((_QWORD *)a1 + 428);
    v6 = 1;
    v7 = v5 + 8;
    if ( *(_DWORD *)(v5 + 4) > 1u )
    {
      do
      {
        v7 += *(unsigned int *)(v7 + 4) + 8LL;
        if ( (*(_BYTE *)v7 & 1) != 0 )
        {
          RtlInitAnsiString(&DestinationString, (PCSZ)(v7 + 8));
          v8 = *((_QWORD *)a1 + 3);
          BYTE1(v20[2]) = 0;
          HIWORD(v20[2]) = 0;
          v20[3] = 0;
          strcpy((char *)v20, "AeiCDMID");
          v21 = 1LL;
          v10 = DpiAcpiEvalAcpiMethodEx(v8, (int)&DestinationString, (int)v20, v9, v23, 0x94u, 1);
          if ( v10 == -1073741772 )
          {
            WdLogSingleEntry1(4LL, -1073741772LL);
            WdLogGlobalForLineNumber = 1205;
          }
          else if ( v10 >= 0 )
          {
            if ( v23[0].Signature != 1114596673 || v23[0].Count != 1 || v23[0].Argument[0].Type != 1 )
            {
              WdLogSingleEntry1(2LL, -1072431089LL);
              WdLogGlobalForLineNumber = 1223;
              goto LABEL_23;
            }
            v11 = RtlStringCchCopyA((char *)a1 + 6120, 128LL, (const char *)v23[0].Argument[0].Data);
            if ( v11 >= 0 )
            {
              v13 = RtlStringCchCopyA(
                      (char *)a1 + 6248,
                      v12,
                      &DestinationString.Buffer[*DestinationString.Buffer == 92]);
              if ( v13 >= 0 )
              {
                v15 = *((_QWORD *)a1 + 428);
                ++*((_DWORD *)a1 + 1595);
                *((_QWORD *)a1 + 798) = v7 + 8;
                RtlInitAnsiString(&DestinationString, (PCSZ)(v15 + 16));
                v21 = 0LL;
                v16 = *((_BYTE *)a1 + 2716) != 0;
                LOWORD(v21) = 1;
                *(_OWORD *)v20 = 0LL;
                v20[1] = v16 ? 1346716755 : 1346716767;
                v17 = *((_QWORD *)a1 + 3);
                v20[0] = 1130980673;
                v19 = DpiAcpiEvalAcpiMethodEx(v17, (int)&DestinationString, (int)v20, v18, v23, 0x94u, 1);
                if ( v19 < 0 )
                {
                  WdLogSingleEntry1(2LL, v19);
                  WdLogGlobalForLineNumber = 1305;
LABEL_21:
                  *((_DWORD *)a1 + 1529) = 5;
                  goto LABEL_23;
                }
                if ( !DpiAcpiDoesDepContainMux(a1, v23) )
                {
                  WdLogSingleEntry1(2LL, -1072431089LL);
                  WdLogGlobalForLineNumber = 1317;
                  goto LABEL_21;
                }
              }
              else
              {
                *v14 = 0;
                WdLogSingleEntry1(2LL, v13);
                WdLogGlobalForLineNumber = 1263;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v11);
              WdLogGlobalForLineNumber = 1239;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v10);
            WdLogGlobalForLineNumber = 1213;
          }
        }
LABEL_23:
        ++v6;
      }
      while ( v6 < *(_DWORD *)(*((_QWORD *)a1 + 428) + 4LL) );
    }
  }
  return 0LL;
}
