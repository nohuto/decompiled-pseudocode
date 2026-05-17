/*
 * XREFs of RtlNtPathNameToDosPathName @ 0x18008A780
 * Callers:
 *     <none>
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x180077BE0 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x18008AA00 (RtlPrefixUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18008B0C0 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlNtPathNameToDosPathName(int a1, unsigned __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rsi
  unsigned __int64 v8; // rbp
  const wchar_t *v10; // r14
  __int64 v11; // r8
  unsigned __int16 *v12; // r12
  unsigned __int16 v13; // si
  unsigned __int64 v14; // r8
  __int64 *v15; // rax
  unsigned __int64 *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int16 v19; // si
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d

  v4 = 0;
  v6 = a3;
  v8 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( a1 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    if ( *a4 )
    {
      v8 = (__int64)(*a4 - *((_QWORD *)a2 + 1)) >> 1;
      if ( v8 >= (unsigned __int64)*a2 >> 1 )
        return (unsigned int)-1073741811;
    }
  }
  v10 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
  LOBYTE(a3) = 1;
  if ( (unsigned __int8)RtlPrefixUnicodeString(&RtlpDosDevicesUncPrefix, a2, a3) )
  {
    v12 = (unsigned __int16 *)&unk_180174DB8;
    if ( v6 )
      *v6 = 2;
    goto LABEL_12;
  }
  v10 = L"\b\n";
  LOBYTE(v11) = 1;
  if ( !(unsigned __int8)RtlPrefixUnicodeString(L"\b\n", a2, v11) )
  {
    if ( !v6 )
      return v4;
    v20 = RtlDetermineDosPathNameType_Ustr(a2);
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_25;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_25;
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( (unsigned int)(v25 - 1) > 1 )
              return v4;
LABEL_25:
            *v6 = 4;
            return v4;
          }
        }
      }
    }
    *v6 = 1;
    return v4;
  }
  v12 = (unsigned __int16 *)&RtlpEmptyString;
  if ( v6 )
    *v6 = 3;
LABEL_12:
  v13 = (*v12 >> 1) + (*a2 >> 1) - (*v10 >> 1);
  v14 = 2LL * v13 + 2;
  if ( v14 > 0xFFFE )
    return (unsigned int)-1073741562;
  v15 = (__int64 *)(a2 + 8);
  v16 = (unsigned __int64 *)(a2 + 16);
  if ( a2 == (unsigned __int16 *)-16LL || v14 > *v16 )
  {
    if ( (int)RtlpEnsureBufferSize(0LL, a2 + 8, v14) < 0 )
      return (unsigned int)-1073741801;
    v15 = (__int64 *)(a2 + 8);
  }
  v17 = *v15;
  v18 = *a2;
  a2[1] = *(_WORD *)v16;
  *((_QWORD *)a2 + 1) = v17;
  memmove(
    (void *)(v17 + 2 * ((unsigned __int64)*v12 >> 1)),
    (const void *)(v17 + 2 * ((unsigned __int64)*v10 >> 1)),
    v18 - *v10);
  memmove(*((void **)a2 + 1), *((const void **)v12 + 1), *v12);
  v19 = 2 * v13;
  *a2 = v19;
  *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v19 >> 1)) = 0;
  if ( v8 )
    *a4 = *((_QWORD *)a2 + 1) + 2 * (v8 + ((unsigned __int64)*v12 >> 1) - ((unsigned __int64)*v10 >> 1));
  return v4;
}
