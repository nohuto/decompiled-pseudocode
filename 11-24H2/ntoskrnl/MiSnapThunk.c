/*
 * XREFs of MiSnapThunk @ 0x140A11224
 * Callers:
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     strchr @ 0x1404FD0E0 (strchr.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpperChar @ 0x140905720 (RtlUpperChar.c)
 *     MiSnapThunk @ 0x140A11224 (MiSnapThunk.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSnapThunk(char *a1, __int64 a2, _WORD *a3, char **a4, unsigned __int16 *a5)
{
  char **v5; // r14
  char *v9; // rax
  char *v10; // r8
  unsigned __int16 *v11; // rcx
  char *v12; // r14
  __int64 v13; // rdx
  char *v14; // rbx
  unsigned int v15; // r10d
  unsigned __int8 *v16; // rax
  __int64 v17; // rdx
  int v18; // r11d
  int v19; // r9d
  int v20; // esi
  int v22; // r11d
  int v23; // edx
  char *v24; // rax
  __int64 v25; // r10
  char v26; // r9
  int v27; // eax
  unsigned __int16 v28; // dx
  char *v29; // rdi
  char *v30; // rbx
  PVOID *v31; // r15
  unsigned int v32; // esi
  wchar_t *Buffer; // r14
  CHAR *v34; // r13
  wchar_t *v35; // rax
  __int64 v36; // rbx
  char *v37; // r14
  __int64 Pool; // rax
  _WORD *v39; // rdi
  CHAR v40; // bl
  PVOID v41; // rcx
  CHAR Character; // [rsp+30h] [rbp-40h]
  ULONG Size[2]; // [rsp+38h] [rbp-38h] BYREF
  char *v44; // [rsp+40h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  ANSI_STRING SourceString; // [rsp+58h] [rbp-18h] BYREF
  int v47; // [rsp+A8h] [rbp+38h]

  v47 = a2;
  v5 = a4;
  Size[0] = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  v9 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, Size);
  v10 = v9;
  if ( !v9 )
    return 3221226083LL;
  v11 = a5;
  if ( *(__int64 *)a3 < 0 )
  {
    if ( !a5 )
    {
      v28 = *a3 - *((_WORD *)v9 + 8);
      goto LABEL_25;
    }
  }
  else if ( !a5 )
  {
    v11 = (unsigned __int16 *)(*(_QWORD *)a3 + a2);
  }
  v12 = &a1[*((unsigned int *)v9 + 8)];
  v13 = *v11;
  v14 = &a1[*((unsigned int *)v9 + 9)];
  v15 = *((_DWORD *)v9 + 6);
  if ( (unsigned int)v13 >= v15 )
    goto LABEL_10;
  v16 = (unsigned __int8 *)(v11 + 1);
  v17 = &a1[*(unsigned int *)&v12[4 * v13]] - (char *)(v11 + 1);
  do
  {
    v18 = v16[v17];
    v19 = *v16 - v18;
    if ( v19 )
      break;
    ++v16;
  }
  while ( v18 );
  if ( v19 )
  {
LABEL_10:
    v20 = 0;
    if ( v15 )
    {
      v22 = v15 - 1;
      while ( v22 >= v20 )
      {
        v23 = (v20 + v22) >> 1;
        v24 = (char *)(v11 + 1);
        v25 = &a1[*(unsigned int *)&v12[4 * v23]] - (char *)(v11 + 1);
        while ( 1 )
        {
          v26 = *v24;
          if ( *v24 != v24[v25] )
            break;
          ++v24;
          if ( !v26 )
          {
            v27 = 0;
            goto LABEL_18;
          }
        }
        v27 = (unsigned __int8)*v24 < (unsigned __int8)v24[v25] ? -1 : 1;
LABEL_18:
        if ( v27 >= 0 )
        {
          if ( v27 <= 0 )
          {
            v28 = *(_WORD *)&v14[2 * v23];
            goto LABEL_24;
          }
          v20 = v23 + 1;
        }
        else
        {
          if ( !v23 )
            return 3221226083LL;
          v22 = v23 - 1;
        }
      }
    }
    return 3221226083LL;
  }
  v28 = *(_WORD *)&v14[2 * *v11];
LABEL_24:
  v5 = a4;
LABEL_25:
  if ( (unsigned int)v28 >= *((_DWORD *)v10 + 5) )
    return 3221226082LL;
  v29 = &a1[*(unsigned int *)&a1[4 * v28 + *((unsigned int *)v10 + 7)]];
  *v5 = v29;
  if ( v29 <= v10 || v29 >= &v10[Size[0]] )
    return 0LL;
  SourceString.Buffer = v29;
  v30 = strchr(v29, 46);
  LOWORD(v30) = 1 - (_WORD)v29 + (_WORD)v30;
  v44 = v30;
  SourceString.Length = (unsigned __int16)v30;
  SourceString.MaximumLength = (unsigned __int16)v30;
  if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) < 0 )
    return 3221226083LL;
  v31 = (PVOID *)PsLoadedModuleList;
  v32 = -1073741213;
  while ( v31 != &PsLoadedModuleList )
  {
    Buffer = DestinationString.Buffer;
    v34 = (CHAR *)v31[12];
    if ( *((unsigned __int16 *)v31 + 44) >= (unsigned int)DestinationString.Length )
    {
      v35 = (wchar_t *)((char *)DestinationString.Buffer + DestinationString.Length);
      *(_QWORD *)Size = v35;
      while ( Buffer < v35 )
      {
        Character = *(_BYTE *)Buffer;
        if ( *(_BYTE *)Buffer != *v34 )
        {
          v40 = RtlUpperChar(*v34);
          if ( RtlUpperChar(Character) != v40 )
            goto LABEL_52;
          v35 = *(wchar_t **)Size;
        }
        Buffer = (wchar_t *)((char *)Buffer + 1);
        ++v34;
      }
      v36 = -1LL;
      v37 = &v29[(unsigned __int16)v44];
      do
        ++v36;
      while ( v37[v36] );
      Pool = MiAllocatePool(0x100uLL, v36 + 5, 538996045);
      v39 = (_WORD *)Pool;
      if ( Pool )
      {
        memmove((void *)(Pool + 2), v37, v36 + 1);
        *v39 = 0;
        v41 = v31[6];
        *(_QWORD *)Size = 0LL;
        v32 = MiSnapThunk((_DWORD)v41, v47, (unsigned int)Size, (unsigned int)Size, (__int64)v39);
        ExFreePoolWithTag(v39, 0);
        *a4 = *(char **)Size;
      }
      break;
    }
LABEL_52:
    v31 = (PVOID *)*v31;
  }
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return v32;
}
