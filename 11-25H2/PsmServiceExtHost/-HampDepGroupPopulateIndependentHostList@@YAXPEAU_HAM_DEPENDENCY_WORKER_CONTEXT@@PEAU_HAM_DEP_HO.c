/*
 * XREFs of ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180036534
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003667C (-HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampDepGroupPopulateIndependentHostList(
        struct _HAM_DEPENDENCY_WORKER_CONTEXT **a1,
        unsigned __int64 a2)
{
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *i; // rdi
  char *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  for ( i = *a1; i != (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)a1; i = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)i )
  {
    v5 = (char *)i - 744;
    *((_QWORD *)i + 29) = 0LL;
    HampHostCheckSetStaticDonation((struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)i - 744));
    v6 = *((_QWORD *)i - 10);
    v7 = (4 * ((v6 & 0x300000000LL) != 0)) | *((_DWORD *)i + 10) & 0xFFFFFFF3;
    *((_DWORD *)i + 10) = v7;
    if ( (v6 & 0x1000000000LL) != 0 )
    {
      v8 = *(_QWORD *)a2;
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( v8 )
          v8 ^= a2;
      }
      v9 = 0;
      if ( v8 )
      {
        v7 = ((unsigned int)v7 >> 2) & 3;
        while ( 1 )
        {
          if ( (unsigned int)v7 > ((*(_DWORD *)(v8 + 24) >> 2) & 3u) )
          {
            v10 = *(_QWORD *)v8;
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
            {
              if ( !v10 )
              {
LABEL_18:
                v9 = 0;
                break;
              }
              v10 ^= v8;
            }
            if ( !v10 )
              goto LABEL_18;
          }
          else
          {
            v10 = *(_QWORD *)(v8 + 8);
            if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
            {
              if ( !v10 )
              {
LABEL_10:
                v9 = 1;
                break;
              }
              v10 ^= v8;
            }
            if ( !v10 )
              goto LABEL_10;
          }
          v8 = v10;
        }
      }
      LOBYTE(v7) = v9;
      RtlRbInsertNodeEx(a2, v8, v7, v5 + 760);
      *((_DWORD *)v5 + 196) |= 2u;
    }
  }
}
