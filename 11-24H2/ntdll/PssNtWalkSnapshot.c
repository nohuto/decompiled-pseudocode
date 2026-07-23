/*
 * XREFs of PssNtWalkSnapshot @ 0x1800BC610
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x1800BC890 (PssNtValidateDescriptor.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x1800BC9A0 (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x1800BCAE0 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x1800BCC64 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 */

NTSTATUS __fastcall PssNtWalkSnapshot(__int64 a1, int a2, char **a3, __int64 a4, int a5)
{
  NTSTATUS result; // eax
  void *v10; // rcx
  unsigned int *v11; // r8
  unsigned __int64 v12; // rdx
  char *v13; // r9
  char *v14; // r9
  __int64 v15; // r10
  _QWORD *v16; // r11
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebp
  ULONG_PTR ViewSize[3]; // [rsp+50h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( result < 0 )
    return result;
  if ( a2 != 1 )
  {
    if ( a2 )
    {
      v19 = a2 - 2;
      if ( v19 )
      {
        if ( v19 != 1 )
          return -1073741821;
        if ( !a4 || a5 == 144 )
          return PsspWalkInfoClass_PSS_WALK_THREADS(a1, a3, a4);
      }
      else if ( !a4 || a5 == 72 )
      {
        return PsspWalkInfoClass_PSS_WALK_HANDLES(a1, a3, a4);
      }
    }
    else if ( !a4 || a5 == 80 )
    {
      return PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(a1, a3, a4);
    }
    return -1073741820;
  }
  if ( a4 && a5 != 80 )
    return -1073741820;
  v10 = *(void **)(a1 + 920);
  ViewSize[0] = 0LL;
  if ( !v10 )
    return -1073741275;
  if ( !a3 )
    return -1073741811;
  if ( *a3 )
  {
    v11 = (unsigned int *)(a3 + 1);
  }
  else
  {
    result = ZwMapViewOfSection(
               v10,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)a3,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewShare,
               0,
               2u);
    if ( result < 0 )
      return result;
    v11 = (unsigned int *)(a3 + 1);
    a3[1] = 0LL;
  }
  v12 = *v11;
  if ( v12 >= *(unsigned int *)(a1 + 916) )
    return -2147483622;
  if ( !a4 )
    return 261;
  v13 = *a3;
  *(_OWORD *)a4 = 0LL;
  v14 = &v13[v12];
  v15 = 72LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  v16 = v11;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_OWORD *)(a4 + 48) = 0LL;
  *(_OWORD *)(a4 + 64) = 0LL;
  *(_QWORD *)a4 = *(_QWORD *)v14;
  *(_QWORD *)(a4 + 8) = *((_QWORD *)v14 + 1);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)v14 + 4);
  *(_QWORD *)(a4 + 24) = *((_QWORD *)v14 + 3);
  *(_DWORD *)(a4 + 32) = *((_DWORD *)v14 + 8);
  *(_DWORD *)(a4 + 36) = *((_DWORD *)v14 + 9);
  *(_DWORD *)(a4 + 40) = *((_DWORD *)v14 + 10);
  *(_DWORD *)(a4 + 44) = *((_DWORD *)v14 + 12);
  *(_DWORD *)(a4 + 48) = *((_DWORD *)v14 + 13);
  *(_QWORD *)(a4 + 56) = *((_QWORD *)v14 + 7);
  *(_DWORD *)(a4 + 64) = *((_DWORD *)v14 + 16);
  if ( (*(_DWORD *)(a1 + 8) & 0x1000) != 0 && v12 + 76 <= *(unsigned int *)(a1 + 916) )
  {
    v17 = *((_DWORD *)v14 + 10);
    if ( v17 == 0x1000000 || v17 == 0x40000 )
    {
      v18 = *((unsigned __int16 *)v14 + 36);
      *(_WORD *)(a4 + 68) = v18;
      if ( (_WORD)v18 )
        *(_QWORD *)(a4 + 72) = v14 + 74;
      v15 = v18 + 74;
      v16 = a3 + 1;
    }
  }
  *v16 = v12 + ((v15 + 7) & 0xFFFFFFF8LL);
  return 0;
}
