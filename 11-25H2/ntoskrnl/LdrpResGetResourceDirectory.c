/*
 * XREFs of LdrpResGetResourceDirectory @ 0x1409F373C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1402F4C50 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1409F3AD8 (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  char v8; // r14
  bool v9; // si
  int v10; // r15d
  __int64 result; // rax
  int v12; // r9d
  __int64 v13; // r13
  __int16 v14; // ax
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  unsigned int *v19; // rax
  unsigned __int64 v20; // r8
  int v21; // eax
  int v22; // ecx
  __int128 v23; // [rsp+80h] [rbp-E8h]
  __int128 v24; // [rsp+A0h] [rbp-C8h]
  __int128 v25; // [rsp+B0h] [rbp-B8h]
  __int128 v26; // [rsp+C0h] [rbp-A8h]
  __int128 v27; // [rsp+D0h] [rbp-98h]
  __int64 v28; // [rsp+170h] [rbp+8h] BYREF
  unsigned __int64 *v29; // [rsp+188h] [rbp+20h]

  v29 = a4;
  v6 = a1;
  v7 = 0;
  v28 = 0LL;
  v8 = 1;
  v9 = 1;
  if ( !a1 || !a4 || !a5 )
    return 3221225485LL;
  if ( (a1 & 3) != 0 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = !(a1 & 1);
  }
  v10 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v10 == 0, v6, a2, &v28);
  if ( (int)result >= 0 )
  {
    v13 = v28;
    v14 = *(_WORD *)(v28 + 24);
    if ( v14 == 267 )
    {
      v23 = *(_OWORD *)(v28 + 72);
      v24 = *(_OWORD *)(v28 + 104);
      v25 = *(_OWORD *)(v28 + 120);
      v26 = *(_OWORD *)(v28 + 136);
      v27 = *(_OWORD *)(v28 + 152);
    }
    else
    {
      if ( v14 != 523 )
        return (unsigned int)-1073741701;
      v23 = *(_OWORD *)(v28 + 72);
      v24 = *(_OWORD *)(v28 + 104);
      v25 = *(_OWORD *)(v28 + 120);
      v26 = *(_OWORD *)(v28 + 136);
      v27 = *(_OWORD *)(v28 + 152);
      v8 = 0;
    }
    v15 = HIDWORD(v25);
    if ( v8 )
      v15 = HIDWORD(v24);
    if ( v15 <= 2 )
      return (unsigned int)-1073741687;
    v16 = (unsigned int)v27;
    if ( v8 )
      v16 = (unsigned int)v26;
    if ( !(_DWORD)v16 )
      return (unsigned int)-1073741687;
    v17 = (unsigned int)v16;
    if ( v6 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)v16 + v6 - 1 < v6 )
        return (unsigned int)-1073741701;
      v18 = v16 + v6;
      if ( v16 + v6 - 1 > 0x7FFFFFFEFFFFLL )
        return (unsigned int)-1073741701;
    }
    else
    {
      v18 = v16 + v6;
    }
    if ( v9 || (unsigned int)v16 < HIDWORD(v23) )
    {
      if ( v18 < v6 )
        return (unsigned int)-1073741701;
    }
    else
    {
      v19 = (unsigned int *)LdrpSectionTableFromVirtualAddress(v6, a2, v28, v12, v16, v10 != 0);
      if ( !v19 )
        return (unsigned int)-1073741701;
      if ( !v19[4] )
        return (unsigned int)-1073741687;
      v18 = v6 + v17 + v19[5] - (unsigned __int64)v19[3];
    }
    if ( !v18 )
      return (unsigned int)-1073741687;
    if ( !v10 )
      goto LABEL_45;
    if ( v18 <= v6 )
      return (unsigned int)-1073741701;
    v20 = (v6 & 0xFFFFFFFFFFFFFFFCuLL) + a2;
    if ( v18 + 16 > v20 )
      return (unsigned int)-1073741701;
    v21 = *(unsigned __int16 *)(v18 + 12);
    v22 = *(unsigned __int16 *)(v18 + 14);
    if ( !__PAIR32__(v22, v21) )
      return (unsigned int)-1073741686;
    if ( v18 + 8LL * (unsigned int)(v21 + v22) > v20 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
LABEL_45:
      *v29 = v18;
      *a5 = v13;
    }
    return v7;
  }
  return result;
}
