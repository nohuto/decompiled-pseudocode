/*
 * XREFs of CcInsertVacbArray @ 0x1404844C8
 * Callers:
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcInitializePartitionVacbs @ 0x14057A840 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CcInsertVacbArray(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  __int64 v5; // rdx
  _QWORD *result; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // r9
  bool v9; // cc

  if ( (unsigned int)CcVacbArraysAllocated > 0x500 )
    KeBugCheckEx(0x34u, 0x1EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x500 )
    {
      if ( (_DWORD)i == 1280 )
        KeBugCheckEx(0x34u, 0x207uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      goto LABEL_5;
    }
    if ( !*(_QWORD *)(CcVacbArrays + 8 * i) )
      break;
  }
  v9 = (unsigned int)i <= CcVacbArraysHighestUsedIndex;
  *(_QWORD *)(CcVacbArrays + 8 * i) = a2;
  *a2 = i;
  if ( !v9 )
    CcVacbArraysHighestUsedIndex = i;
LABEL_5:
  v5 = 0LL;
  do
  {
    result = &a2[10 * v5 + 8];
    if ( *(_QWORD *)&a2[10 * v5 + 4] )
    {
      v8 = *(_QWORD **)(a1 + 1240);
      if ( *v8 != a1 + 1232 )
LABEL_8:
        __fastfail(3u);
      *result = a1 + 1232;
      result[1] = v8;
      *v8 = result;
      *(_QWORD *)(a1 + 1240) = result;
      ++*(_DWORD *)(a1 + 1248);
    }
    else
    {
      v7 = (_QWORD *)qword_140F8E8F8;
      if ( *(__int64 **)qword_140F8E8F8 != &CcVacbFreeList )
        goto LABEL_8;
      *result = &CcVacbFreeList;
      result[1] = v7;
      *v7 = result;
      ++CcNumberOfFreeVacbs;
      qword_140F8E8F8 = (__int64)&a2[10 * v5 + 8];
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 0xCCC );
  return result;
}
