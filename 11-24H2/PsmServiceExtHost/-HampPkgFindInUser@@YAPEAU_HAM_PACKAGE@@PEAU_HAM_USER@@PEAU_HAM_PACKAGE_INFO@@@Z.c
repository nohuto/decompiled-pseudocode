/*
 * XREFs of ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013D00
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180040708 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInUser(struct _HAM_USER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  unsigned __int64 v2; // rdi
  char *v4; // rbp
  unsigned __int64 v5; // rbx
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi

  v2 = (unsigned __int64)a1 + 40;
  v4 = (char *)a1 + 56;
  RtlAcquireSRWLockShared((char *)a1 + 56);
  v5 = *(_QWORD *)v2;
  v6 = *(_BYTE *)(v2 + 8) & 1;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( v5 )
    {
      v5 ^= v2;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    while ( v5 )
    {
      v7 = HampPkgCompareByIdentity(a2, (void *)v5);
      if ( v7 < 0 )
      {
        v8 = *(_QWORD *)v5;
      }
      else
      {
        if ( v7 <= 0 )
          break;
        v8 = *(_QWORD *)(v5 + 8);
      }
      if ( v6 && v8 )
        v5 ^= v8;
      else
        v5 = v8;
    }
  }
  v9 = v5;
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v9 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v4);
  return (struct _HAM_PACKAGE *)v9;
}
