/*
 * XREFs of ?HampUserFindInSession@@YAPEAU_HAM_USER@@PEAU_HAM_SESSION@@PEAT_RM_SID@@@Z @ 0x180013BB8
 * Callers:
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007F7F4 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 */

struct _HAM_USER *__fastcall HampUserFindInSession(struct _HAM_SESSION *a1, union _RM_SID *a2)
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
      v7 = HampUserCompareByIdentity(a2, (void *)v5);
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
  return (struct _HAM_USER *)v9;
}
