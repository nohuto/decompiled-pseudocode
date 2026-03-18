/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14036A434
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x140369558 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x140369D2C (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14036A0C8 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x14036A610 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1403EE2B8 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(
        struct _UNICODE_STRING *a1,
        const struct _STRING *a2,
        __int64 a3,
        __int64 a4)
{
  USHORT Length; // si
  unsigned __int64 v7; // rax
  wchar_t *v8; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // r14d
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  unsigned int v13; // esi
  __int64 result; // rax
  struct _STRING SourceString; // [rsp+30h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v7 = 2LL * (unsigned __int16)(Length + 34);
  if ( !is_mul_ok((unsigned __int16)(Length + 34), 2uLL) )
    v7 = -1LL;
  v8 = (wchar_t *)operator new[](v7, 0x63644356u, 256LL, a4);
  a1->Buffer = v8;
  if ( v8 )
  {
    a1->Length = 0;
    SourceString.Length = Length;
    SourceString.MaximumLength = Length;
    a1->MaximumLength = 2 * (Length + 1);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
    SourceString.Buffer = a2->Buffer;
    v9 = RtlAnsiStringToUnicodeString(a1, &SourceString, 0);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry5(1LL, v9, a2, a2->Length, Length, a1->MaximumLength);
      WdLogGlobalForLineNumber = 1814;
      CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
      return v10;
    }
    else
    {
      Buffer = a1->Buffer;
      a1->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)a2->Buffer, a2->Length, &a1->Buffer[Length + 1]);
      v13 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        WdLogSingleEntry4(1LL, Md5Checksum, a2, a2->Buffer, a2->Length);
        WdLogGlobalForLineNumber = 1837;
        CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
        return v13;
      }
      else
      {
        a1->Length = a1->MaximumLength - 2;
        return 0LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry3(6LL, a2, a2->Length, (unsigned __int16)(Length + 34));
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1788;
  }
  return result;
}
