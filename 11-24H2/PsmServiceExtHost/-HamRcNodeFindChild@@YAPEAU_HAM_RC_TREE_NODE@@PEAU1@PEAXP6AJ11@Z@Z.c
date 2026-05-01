/*
 * XREFs of ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x1800593F0
 * Callers:
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x1800592C8 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeFindChild(
        struct _HAM_RC_TREE_NODE *a1,
        void *a2,
        __int64 (__fastcall *a3)(void *, __int64))
{
  unsigned __int64 v3; // r14
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // eax
  __int64 v9; // rax

  v3 = (unsigned __int64)a1 + 40;
  RtlAcquireSRWLockShared((char *)a1 + 56);
  v6 = *(_QWORD *)v3;
  v7 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_15;
    v6 ^= v3;
  }
  if ( !v6 )
  {
LABEL_15:
    v6 = 0LL;
    goto LABEL_11;
  }
  do
  {
    v8 = a3(a2, v6);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)v6;
      if ( !v7 )
        goto LABEL_6;
    }
    else
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( !v7 )
      {
LABEL_6:
        v6 = v9;
        continue;
      }
    }
    if ( !v9 )
      goto LABEL_6;
    v6 ^= v9;
  }
  while ( v6 );
  if ( !v6 || !*(_QWORD *)(v6 + 24) )
    goto LABEL_15;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_11:
  RtlReleaseSRWLockShared(v3 + 16);
  return (struct _HAM_RC_TREE_NODE *)v6;
}
