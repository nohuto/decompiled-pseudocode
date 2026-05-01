/*
 * XREFs of ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001BB64
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B7F0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800676DC (-HampActResetToStopped@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18006CC44 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 */

void __fastcall HampActCancelExpirationTimer(struct _HAM_ACTIVITY *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 67);
  if ( v2 )
  {
    if ( (unsigned int)TpSetTimerEx(v2, 0LL, 0LL, 0LL) )
      CemRcObjectDereference(a1);
    TpReleaseTimer(*((_QWORD *)a1 + 67));
    *((_QWORD *)a1 + 67) = 0LL;
    *((_QWORD *)a1 + 68) = 0LL;
  }
}
