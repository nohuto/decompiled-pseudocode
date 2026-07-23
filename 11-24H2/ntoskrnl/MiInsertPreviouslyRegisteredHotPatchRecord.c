/*
 * XREFs of MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F3AD0
 * Callers:
 *     MiInsertHotPatchRecord @ 0x1407F3934 (MiInsertHotPatchRecord.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiCompareHotPatchNodes @ 0x1407F2A54 (MiCompareHotPatchNodes.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall MiInsertPreviouslyRegisteredHotPatchRecord(__int64 a1)
{
  _QWORD *v1; // rsi
  BOOL v2; // ebx
  unsigned __int64 i; // rdi
  int v5; // eax
  _QWORD **v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v1 = (_QWORD *)qword_140E375C0;
  v2 = 0;
  i = 0LL;
  while ( v1 )
  {
    v5 = MiCompareHotPatchNodes(a1, (__int64)v1);
    if ( v5 < 0 )
      goto LABEL_6;
    if ( v5 <= 0 )
    {
      i = (unsigned __int64)v1;
LABEL_6:
      v1 = (_QWORD *)*v1;
    }
    else
    {
      v1 = (_QWORD *)v1[1];
    }
  }
  while ( i && !(unsigned int)MiCompareHotPatchNodes(a1, i) )
  {
    if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(i + 32)
      && RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(i + 40), 0) )
    {
      return v2;
    }
    v6 = *(_QWORD ***)(i + 8);
    v7 = i;
    if ( v6 )
    {
      v8 = *v6;
      for ( i = *(_QWORD *)(i + 8); v8; v8 = (_QWORD *)*v8 )
        i = (unsigned __int64)v8;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v7 )
          break;
        v7 = i;
      }
    }
  }
  v9 = (_QWORD *)qword_140E375C0;
  if ( !qword_140E375C0 )
    goto LABEL_24;
  while ( 2 )
  {
    if ( (int)MiCompareHotPatchNodes(a1, (__int64)v9) < 0 )
    {
      v10 = (_QWORD *)*v9;
      if ( !*v9 )
        goto LABEL_24;
      goto LABEL_27;
    }
    v10 = (_QWORD *)v9[1];
    if ( v10 )
    {
LABEL_27:
      v9 = v10;
      continue;
    }
    break;
  }
  LOBYTE(v2) = 1;
LABEL_24:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E375C0, (unsigned __int64)v9, v2, (_QWORD *)a1);
  return 1;
}
