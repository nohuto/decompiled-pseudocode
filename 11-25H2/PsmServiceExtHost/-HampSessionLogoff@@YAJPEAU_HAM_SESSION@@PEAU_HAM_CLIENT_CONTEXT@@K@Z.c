/*
 * XREFs of ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800460F0
 * Callers:
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180045F8C (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x180044FD8 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180045EA0 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180045F00 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180046AFC (-HampSessionTerminate@@YAJPEAU_HAM_SESSION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU.c)
 *     ?HampSessionMarkLogoffInProgress@@YAJPEAU_HAM_SESSION@@@Z @ 0x1800716FC (-HampSessionMarkLogoffInProgress@@YAJPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionLogoff(struct _HAM_SESSION *a1, struct _HAM_CLIENT_CONTEXT *a2, int a3)
{
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // r8

  v7 = HampSessionMarkLogoffInProgress(a1);
  if ( v7 >= 0 )
  {
    v7 = HampSessionTerminate(a1, v6, v8, a2, a3);
    if ( v7 >= 0 )
    {
      HampHostIdStoreInvalidateForSession(
        (struct _HAM_HOSTID_STORE *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 408),
        a1);
      v7 = 0;
    }
    HampSessionAcquireLockExclusive(a1);
    *((_DWORD *)a1 + 36) &= ~2u;
    HampSessionReleaseLockExclusive(a1);
  }
  return (unsigned int)v7;
}
