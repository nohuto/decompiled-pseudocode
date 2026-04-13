/*
 * XREFs of ??R_lambda_30b10436083aba01be8f7c4a25a13343_@@QEBA@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@Z @ 0x18006035C
 * Callers:
 *     ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x18005EF8C (--$_Find_if@V-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$.c)
 * Callees:
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18005FFE4 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@XZ.c)
 */

char __fastcall _lambda_30b10436083aba01be8f7c4a25a13343_::operator()(const WCHAR *a1, WCHAR *a2)
{
  const WCHAR *v3; // rdi
  const WCHAR *v4; // r8
  char v5; // si
  const WCHAR *v6; // r8
  const WCHAR *v7; // rcx

  v3 = a1;
  if ( *((_QWORD *)a2 + 3) < 8uLL )
    v4 = a2;
  else
    v4 = *(const WCHAR **)a2;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(const WCHAR **)a1;
  v5 = 1;
  if ( CompareStringOrdinal(a1, -1, v4, -1, 1) != 2 )
    goto LABEL_12;
  v6 = a2 + 16;
  if ( *((_QWORD *)a2 + 7) >= 8uLL )
    v6 = *(const WCHAR **)v6;
  v7 = v3 + 16;
  if ( *((_QWORD *)v3 + 7) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  if ( CompareStringOrdinal(v7, -1, v6, -1, 1) != 2 )
LABEL_12:
    v5 = 0;
  std::pair<std::wstring const,std::wstring>::~pair<std::wstring const,std::wstring>(a2);
  return v5;
}
