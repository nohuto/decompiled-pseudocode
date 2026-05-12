/*
 * XREFs of RaidBusEnumeratorFreeUnitResources @ 0x14000E930
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x14000E8A0 (RaidDeleteBusEnumerator.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidBusEnumeratorFreeUnitResources(__int64 a1)
{
  IRP *v2; // rcx
  __int64 v3; // rdx
  void *v4; // rcx
  void *v5; // rcx
  struct _MDL *v6; // rcx
  IRP *v7; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  struct _MDL *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax

  v2 = *(IRP **)(a1 + 8);
  if ( v2 )
  {
    IoFreeIrp(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    if ( *(_BYTE *)(v3 + 2) == 40 )
    {
      *(_QWORD *)(v3 + 80) = 0LL;
      if ( !*(_DWORD *)(v3 + 20) )
      {
        v12 = 0;
        if ( *(_DWORD *)(v3 + 56) )
        {
          while ( 1 )
          {
            v14 = *(unsigned int *)(v3 + 4LL * v12 + 120);
            if ( (unsigned int)v14 >= 0x80 )
            {
              v15 = *(unsigned int *)(v3 + 16);
              if ( (unsigned int)v14 <= (unsigned int)v15 && *(_DWORD *)(v14 + v3) == 64 && v14 + 40 <= v15 )
                break;
            }
            if ( ++v12 >= *(_DWORD *)(v3 + 56) )
              goto LABEL_36;
          }
          *(_QWORD *)((unsigned int)v14 + v3 + 16) = 0LL;
        }
      }
    }
    else
    {
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) = 0LL;
    }
LABEL_36:
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x72536152u);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x4E536152u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v5 = *(void **)(a1 + 40);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v6 = *(struct _MDL **)(a1 + 16);
  if ( v6 )
    IoFreeMdl(v6);
  v7 = *(IRP **)(a1 + 64);
  if ( v7 )
  {
    IoFreeIrp(v7);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      *(_QWORD *)(v8 + 80) = 0LL;
      if ( !*(_DWORD *)(v8 + 20) )
      {
        v13 = 0;
        if ( *(_DWORD *)(v8 + 56) )
        {
          while ( 1 )
          {
            v16 = *(unsigned int *)(v8 + 4LL * v13 + 120);
            if ( (unsigned int)v16 >= 0x80 )
            {
              v17 = *(unsigned int *)(v8 + 16);
              if ( (unsigned int)v16 <= (unsigned int)v17 && *(_DWORD *)(v16 + v8) == 64 && v16 + 40 <= v17 )
                break;
            }
            if ( ++v13 >= *(_DWORD *)(v8 + 56) )
              goto LABEL_45;
          }
          *(_QWORD *)((unsigned int)v16 + v8 + 16) = 0LL;
        }
      }
    }
    else
    {
      *(_QWORD *)(v8 + 48) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL) = 0LL;
    }
LABEL_45:
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x72536152u);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v9 = *(void **)(a1 + 88);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x4E536152u);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  v10 = *(void **)(a1 + 96);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x32316152u);
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_DWORD *)(a1 + 104) = 0;
  }
  v11 = *(struct _MDL **)(a1 + 72);
  if ( v11 )
    IoFreeMdl(v11);
}
