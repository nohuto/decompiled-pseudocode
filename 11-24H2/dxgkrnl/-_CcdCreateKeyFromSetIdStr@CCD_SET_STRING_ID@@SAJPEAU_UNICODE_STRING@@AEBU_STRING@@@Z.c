/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x14033F138
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x14033E3F8 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033E948 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x14033ECE4 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x14033F314 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1403E8528 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(struct _UNICODE_STRING *a1, const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // rax
  wchar_t *v6; // rax
  NTSTATUS v7; // eax
  unsigned int v8; // r14d
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  unsigned int v11; // esi
  __int64 result; // rax
  struct _STRING SourceString; // [rsp+30h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = 2LL * (unsigned __int16)(Length + 34);
  if ( !is_mul_ok((unsigned __int16)(Length + 34), 2uLL) )
    v5 = -1LL;
  v6 = (wchar_t *)operator new[](v5, 0x63644356u, 256LL);
  a1->Buffer = v6;
  if ( v6 )
  {
    a1->Length = 0;
    SourceString.Length = Length;
    SourceString.MaximumLength = Length;
    a1->MaximumLength = 2 * (Length + 1);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
    SourceString.Buffer = a2->Buffer;
    v7 = RtlAnsiStringToUnicodeString(a1, &SourceString, 0);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry5(1LL, v7, a2, a2->Length, Length, a1->MaximumLength);
      WdLogGlobalForLineNumber = 1814;
      CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
      return v8;
    }
    else
    {
      Buffer = a1->Buffer;
      a1->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)a2->Buffer, a2->Length, &a1->Buffer[Length + 1]);
      v11 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        WdLogSingleEntry4(1LL, Md5Checksum, a2, a2->Buffer, a2->Length);
        WdLogGlobalForLineNumber = 1837;
        CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
        return v11;
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
