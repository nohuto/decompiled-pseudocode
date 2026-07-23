/*
 * XREFs of PnpAddVetoInformation @ 0x140A8D6C4
 * Callers:
 *     PnpCollectOpenHandlesCallBack @ 0x14072BBD0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpAddVetoInformation(void *a1, char **a2, unsigned int a3)
{
  char *v3; // rax
  void **v4; // rbx
  void **v5; // rdi
  char **v7; // rsi
  char v9; // r10
  void **v10; // rax
  _QWORD *v11; // rsi
  void ***v12; // rax
  void ***v13; // rcx
  char *v14; // rcx
  void **v15; // rcx
  __int64 Pool2; // rax
  char *v17; // rax
  char ***v18; // rcx

  v3 = *a2;
  v4 = 0LL;
  v5 = 0LL;
  v7 = a2;
  v9 = 1;
  while ( 1 )
  {
    v10 = (void **)(v3 - 24);
    if ( a2 == (char **)(v10 + 3) )
      break;
    if ( *((_DWORD *)v10 + 4) == a3 )
    {
      v14 = (char *)*v10;
      v5 = v10;
      v9 = 0;
      while ( 1 )
      {
        v15 = (void **)(v14 - 8);
        if ( v10 == v15 + 1 )
          break;
        if ( *v15 == a1 )
          return;
        if ( *v15 > a1 )
        {
          v5 = v15 + 1;
          break;
        }
        v14 = (char *)v15[1];
      }
    }
    else if ( *((_DWORD *)v10 + 4) > a3 )
    {
      v7 = (char **)(v10 + 3);
      break;
    }
    v3 = (char *)v10[3];
  }
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x4F706E50u);
    v4 = (void **)Pool2;
    if ( !Pool2 )
      return;
    *(_DWORD *)(Pool2 + 16) = a3;
    v17 = (char *)(Pool2 + 24);
    v18 = (char ***)v7[1];
    if ( *v18 != v7 )
LABEL_9:
      __fastfail(3u);
    *(_QWORD *)v17 = v7;
    v5 = v4;
    *((_QWORD *)v17 + 1) = v18;
    *v18 = (char **)v17;
    v7[1] = v17;
    v4[1] = v4;
    *v4 = v4;
  }
  v11 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x18uLL, 0x50706E50u);
  if ( v11 )
  {
    PsReferenceSiloContext(a1);
    *v11 = a1;
    v12 = (void ***)(v11 + 1);
    v13 = (void ***)v5[1];
    if ( *v13 != v5 )
      goto LABEL_9;
    *v12 = v5;
    v11[2] = v13;
    *v13 = (void **)v12;
    v5[1] = v12;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x4F706E50u);
  }
}
