/*
 * XREFs of sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800F42FC
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(_BYTE *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  CHAR *v6; // r9
  ULONG v7; // r8d
  __int64 v8; // rax
  wchar_t **v9; // rsi
  wchar_t *v10; // rax
  _WORD *v11; // rax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 0x20Bu, (PSTR)"This != NULL");
  if ( !a1[80] )
    goto LABEL_8;
  v2 = *((_QWORD *)a1 + 8);
  if ( v2 && *(_QWORD *)(v2 + 8) )
  {
    v6 = (CHAR *)"(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)";
    v7 = 531;
    goto LABEL_10;
  }
  v3 = *((_QWORD *)a1 + 7);
  if ( v3 && *(_QWORD *)(v3 + 8) == *((_QWORD *)a1 + 1) )
  {
    if ( *(_WORD *)a1 <= *(_WORD *)(v3 + 2) )
    {
      *(_WORD *)v3 = *(_WORD *)a1;
      v4 = (_QWORD *)*((_QWORD *)a1 + 9);
      if ( v4 )
      {
        v8 = *((_QWORD *)a1 + 7);
LABEL_15:
        *v4 = v8;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    v6 = "rUS.Length <= This->PrivatePreallocatedString->MaximumLength";
    v7 = 536;
LABEL_10:
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", v7, v6);
  }
  if ( v2 )
  {
    *(_OWORD *)v2 = *(_OWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 9);
    if ( v4 )
    {
      v8 = *((_QWORD *)a1 + 8);
      goto LABEL_15;
    }
  }
  else
  {
    v9 = (wchar_t **)(a1 + 16);
    if ( a1 != (_BYTE *)-16LL )
    {
      v10 = *v9;
      if ( *v9 )
      {
        if ( v10 != *((wchar_t **)a1 + 3) )
        {
          *(_QWORD *)&UnicodeString.Length = 0LL;
          UnicodeString.Buffer = v10;
          RtlFreeAnsiString(&UnicodeString);
        }
        *v9 = (wchar_t *)*((_QWORD *)a1 + 3);
      }
    }
    v11 = (_WORD *)*((_QWORD *)a1 + 3);
    if ( v11 )
      *v11 = 0;
  }
LABEL_8:
  memset_thunk_772440563353939046(a1, 0, 0x58uLL);
  return 0LL;
}
