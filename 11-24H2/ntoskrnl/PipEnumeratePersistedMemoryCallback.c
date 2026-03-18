/*
 * XREFs of PipEnumeratePersistedMemoryCallback @ 0x1405A4300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PipMatchPersistentMemory @ 0x14071C4CC (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x14071C5B0 (PipMatchPersistentMemoryV1.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumeratePersistedMemoryCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  int matched; // ebx
  __int64 v6; // r12
  __int64 v7; // r13
  _DWORD *Pool2; // rax
  _WORD *v9; // rdi
  __int64 v10; // r8
  __int16 v11; // ax
  __int16 *v12; // r14
  char v13; // cl
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+44h] [rbp-1Ch]
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]
  char v19; // [rsp+B0h] [rbp+50h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0;
  v16 = 0;
  v15 = 0;
  if ( a3[3] )
  {
    v6 = a3[1];
    v7 = a3[2];
    v18 = *a3;
    v17 = a3[4];
    KsrQueryMetadata(a1, a2, 0LL, 0LL, &v15);
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v9 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *Pool2 = 0;
    matched = KsrQueryMetadata(a1, a2, Pool2, v15, &v15);
    if ( matched < 0 )
      goto LABEL_17;
    if ( v15 >= 2 )
    {
      v11 = *v9;
      v12 = 0LL;
      v19 = 0;
      if ( v11 == 2 )
      {
        matched = PipMatchPersistentMemory(v6, v7, 0, (_DWORD)v9, 1, (__int64)&v19);
        if ( matched >= 0 )
        {
          v13 = v19;
          if ( v19 )
          {
            v12 = &v20;
            v20 = v9[8];
            v16 = *((_DWORD *)v9 + 5);
            goto LABEL_14;
          }
        }
        goto LABEL_17;
      }
      if ( v11 == 1 )
      {
        LOBYTE(v10) = 1;
        matched = PipMatchPersistentMemoryV1(v6, v9, v10, &v19);
        if ( matched >= 0 )
        {
          v13 = v19;
LABEL_14:
          if ( v13 )
            matched = guard_dispatch_icall_no_overrides(v18, v6, v7, v12);
        }
LABEL_17:
        ExFreePoolWithTag(v9, 0x61706E50u);
        return (unsigned int)matched;
      }
    }
    matched = -1073741637;
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
