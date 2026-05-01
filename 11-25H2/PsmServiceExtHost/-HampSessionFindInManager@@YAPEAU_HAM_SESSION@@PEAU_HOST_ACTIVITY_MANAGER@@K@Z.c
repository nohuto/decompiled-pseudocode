/*
 * XREFs of ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180013C9C
 * Callers:
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180045F8C (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180046E74 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180064EBC (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18007F7F4 (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180014AB0 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 */

struct _HAM_SESSION *__fastcall HampSessionFindInManager(struct _HOST_ACTIVITY_MANAGER *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbp
  char *v4; // r14
  unsigned __int64 v5; // rbx
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi

  v2 = (unsigned __int64)a1 + 392;
  v3 = a2;
  v4 = (char *)a1 + 408;
  RtlAcquireSRWLockShared((char *)a1 + 408);
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
      v7 = HampSessionCompareById((void *)v3, (void *)v5);
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
  return (struct _HAM_SESSION *)v9;
}
