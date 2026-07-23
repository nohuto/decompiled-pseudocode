/*
 * XREFs of PiUpdateDriverDBCache @ 0x140A706C4
 * Callers:
 *     PiIsDriverBlocked @ 0x1409ADF08 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     RtlNumberGenericTableElementsAvl @ 0x14045C4D0 (RtlNumberGenericTableElementsAvl.c)
 *     wcsrchr @ 0x1404FDA00 (wcsrchr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PiUpdateDriverDBCache(__int64 a1, void *a2, __int64 a3, int a4, __int128 *a5)
{
  _QWORD *result; // rax
  _QWORD *v8; // r14
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  void *v16; // rbx
  _WORD *v17; // rbx
  _QWORD *v18; // rcx
  __int128 v19; // xmm0
  const wchar_t *v20; // rcx
  wchar_t *v21; // rax
  __int64 v22; // rcx
  __int128 Buffer; // [rsp+20h] [rbp-40h] BYREF
  __int128 v24; // [rsp+30h] [rbp-30h]
  _BYTE v25[24]; // [rsp+40h] [rbp-20h] BYREF

  Buffer = 0LL;
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  result = RtlImageNtHeader(a2);
  v8 = result;
  if ( !result )
    return result;
  PiDDBCacheTable.TableContext = (void *)1;
  v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
  if ( v9 )
    v10 = v9 + 1;
  else
    v10 = *(wchar_t **)(a1 + 8);
  v11 = -1LL;
  *((_QWORD *)&v24 + 1) = v10;
  v12 = -1LL;
  do
    ++v12;
  while ( v10[v12] );
  LOWORD(v24) = 2 * v12;
  WORD1(v24) = 2 * v12;
  v13 = RtlLookupElementGenericTableAvl(&PiDDBCacheTable, &Buffer);
  if ( v13 )
  {
    v14 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
      goto LABEL_9;
    v15 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v15 != v13 )
      goto LABEL_9;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  else
  {
    if ( RtlNumberGenericTableElementsAvl(&PiDDBCacheTable) < 0x100 )
      goto LABEL_20;
    v13 = (_QWORD *)PiDDBCacheList;
    v22 = *(_QWORD *)PiDDBCacheList;
    if ( *(__int64 **)(PiDDBCacheList + 8) != &PiDDBCacheList || *(_QWORD *)(v22 + 8) != PiDDBCacheList )
LABEL_9:
      __fastfail(3u);
    PiDDBCacheList = *(_QWORD *)PiDDBCacheList;
    *(_QWORD *)(v22 + 8) = &PiDDBCacheList;
    if ( !v13 )
      goto LABEL_20;
  }
  v16 = (void *)v13[3];
  RtlDeleteElementGenericTableAvl(&PiDDBCacheTable, v13);
  ExFreePoolWithTag(v16, 0);
LABEL_20:
  v19 = *a5;
  v20 = *(const wchar_t **)(a1 + 8);
  *(_DWORD *)&v25[4] = a4;
  *(_OWORD *)&v25[8] = v19;
  *(_DWORD *)v25 = *((_DWORD *)v8 + 2);
  v21 = wcsrchr(v20, 0x5Cu);
  if ( v21 )
    v17 = v21 + 1;
  else
    v17 = *(_WORD **)(a1 + 8);
  do
    ++v11;
  while ( v17[v11] );
  WORD1(v24) = 2 * v11;
  LOWORD(v24) = 2 * v11;
  result = (_QWORD *)ExAllocatePool2(0x100uLL);
  *((_QWORD *)&v24 + 1) = result;
  if ( result )
  {
    memmove(result, v17, (unsigned __int16)v24);
    result = RtlInsertElementGenericTableAvl(&PiDDBCacheTable, &Buffer, 0x38u, 0LL);
    if ( result )
    {
      v18 = (_QWORD *)qword_140FD90A0;
      if ( *(__int64 **)qword_140FD90A0 != &PiDDBCacheList )
        goto LABEL_9;
      *result = &PiDDBCacheList;
      result[1] = v18;
      *v18 = result;
      qword_140FD90A0 = (__int64)result;
    }
  }
  return result;
}
