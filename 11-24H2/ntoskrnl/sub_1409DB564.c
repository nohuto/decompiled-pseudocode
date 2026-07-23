/*
 * XREFs of sub_1409DB564 @ 0x1409DB564
 * Callers:
 *     sub_1409D9D58 @ 0x1409D9D58 (sub_1409D9D58.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     sub_14091D4BC @ 0x14091D4BC (sub_14091D4BC.c)
 *     sub_1409DABF4 @ 0x1409DABF4 (sub_1409DABF4.c)
 *     sub_1409DB878 @ 0x1409DB878 (sub_1409DB878.c)
 */

__int64 __fastcall sub_1409DB564(int *a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  unsigned __int64 v6; // rcx
  unsigned int v7; // edx
  signed int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // esi
  void **v11; // r14
  int v13; // r8d
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  const void *v18; // r14
  unsigned __int64 v19; // rax
  unsigned int v20; // esi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  SIZE_T Length; // [rsp+80h] [rbp+8h]

  v5 = *a1;
  if ( *a1 == 1 )
  {
    v22 = 16LL * *(unsigned int *)(*((_QWORD *)a1 + 1) + 240LL);
    v23 = -1;
    if ( v22 <= 0xFFFFFFFF )
      v23 = v22;
    v8 = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v22 > 0xFFFFFFFF )
      goto LABEL_11;
    v24 = v23 + 248;
    v10 = -1;
    if ( v23 + 248 >= v23 )
      v10 = v23 + 248;
    v8 = v24 < v23 ? 0xC0000095 : 0;
    if ( v24 < v23 )
      goto LABEL_11;
    Length = 248LL;
  }
  else
  {
    if ( v5 )
    {
      v8 = -1073741811;
      goto LABEL_11;
    }
    v6 = 12LL * *(unsigned int *)(*((_QWORD *)a1 + 1) + 240LL);
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = v6;
    v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v6 > 0xFFFFFFFF )
      goto LABEL_11;
    v9 = v7 + 244;
    v10 = -1;
    if ( v7 + 244 >= v7 )
      v10 = v7 + 244;
    v8 = v9 < v7 ? 0xC0000095 : 0;
    if ( v9 < v7 )
      goto LABEL_11;
    Length = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v5;
  *(_DWORD *)(a3 + 52) = a1[1];
  v11 = (void **)(a3 + 56);
  v8 = sub_1409DB878(v10, a3 + 56);
  if ( v8 >= 0 )
  {
    memmove(*v11, *(const void **)(a2 + 8), 0LL);
    v8 = sub_1409DABF4(*(PVOID *)(a2 + 8), 0, 1);
    if ( v8 >= 0 )
    {
      v8 = sub_14091D4BC((UCHAR *)*v11, 0);
      if ( v8 >= 0 )
      {
        if ( RtlCompareMemory(*((const void **)a1 + 1), *v11, Length) != Length )
        {
          v8 = -1073741811;
          goto LABEL_11;
        }
        v13 = *(_DWORD *)(a3 + 48);
        if ( v13 != 1 && v13 )
        {
          v8 = -1073741811;
          goto LABEL_11;
        }
        v14 = *v11;
        v15 = *(_QWORD *)(a2 + 8) - (*((_DWORD *)*v11 + 10) & 0xFFFFFFF);
        *(_QWORD *)(a3 + 32) = v15;
        v16 = (unsigned int)v14[12];
        v17 = v14[11] & 0xFFFFFFF;
        if ( !(_DWORD)v16 )
          goto LABEL_17;
        v18 = (const void *)(v15 + v17);
        v19 = 4 * v16;
        v20 = -1;
        if ( v19 <= 0xFFFFFFFF )
          v20 = v19;
        v8 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v19 <= 0xFFFFFFFF )
        {
          if ( v20 )
          {
            v21 = (unsigned __int64)v18 + v20;
            if ( v21 > 0x7FFFFFFF0000LL || v21 < (unsigned __int64)v18 )
              v18 = (const void *)(v15 + v17);
          }
          v8 = sub_1409DB878(v20, a3 + 40);
          if ( v8 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v18, v20);
LABEL_17:
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
      }
    }
  }
LABEL_11:
  *(_DWORD *)(a3 + 20) = v8;
  return (unsigned int)v8;
}
