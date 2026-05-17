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
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  const char *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  wchar_t **v10; // rsi
  wchar_t *v11; // rax
  _WORD *v12; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !a1 )
  {
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 523LL, "This != NULL");
    return (unsigned int)-1073741595;
  }
  if ( !a1[80] )
    goto LABEL_8;
  v3 = *((_QWORD *)a1 + 8);
  if ( v3 && *(_QWORD *)(v3 + 8) )
  {
    v7 = "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)";
    v8 = 531LL;
    goto LABEL_11;
  }
  v4 = *((_QWORD *)a1 + 7);
  if ( v4 && *(_QWORD *)(v4 + 8) == *((_QWORD *)a1 + 1) )
  {
    if ( *(_WORD *)a1 <= *(_WORD *)(v4 + 2) )
    {
      *(_WORD *)v4 = *(_WORD *)a1;
      v5 = (_QWORD *)*((_QWORD *)a1 + 9);
      if ( v5 )
      {
        v9 = *((_QWORD *)a1 + 7);
LABEL_16:
        *v5 = v9;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    v7 = "rUS.Length <= This->PrivatePreallocatedString->MaximumLength";
    v8 = 536LL;
LABEL_11:
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", v8, v7);
    v1 = -1073741595;
    goto LABEL_8;
  }
  if ( !v3 )
  {
    v10 = (wchar_t **)(a1 + 16);
    if ( a1 != (_BYTE *)-16LL )
    {
      v11 = *v10;
      if ( *v10 )
      {
        if ( v11 != *((wchar_t **)a1 + 3) )
        {
          *(_QWORD *)&UnicodeString.Length = 0LL;
          UnicodeString.Buffer = v11;
          RtlFreeAnsiString(&UnicodeString);
        }
        *v10 = (wchar_t *)*((_QWORD *)a1 + 3);
      }
    }
    v12 = (_WORD *)*((_QWORD *)a1 + 3);
    if ( v12 )
      *v12 = 0;
    goto LABEL_8;
  }
  *(_OWORD *)v3 = *(_OWORD *)a1;
  v5 = (_QWORD *)*((_QWORD *)a1 + 9);
  if ( v5 )
  {
    v9 = *((_QWORD *)a1 + 8);
    goto LABEL_16;
  }
LABEL_8:
  memset_thunk_772440563353939046(a1, 0, 0x58uLL);
  return v1;
}
