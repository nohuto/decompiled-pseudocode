/*
 * XREFs of ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x14024FCBC
 * Callers:
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1402503B0 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     DpiKsrCallback @ 0x140250B20 (DpiKsrCallback.c)
 *     DpiKsrDoKsrSave @ 0x140250C34 (DpiKsrDoKsrSave.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DpIterateFdoContexts(__int64 (__fastcall *a1)(__int64 *, void *), void *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  int v6; // eax

  AcquireMiniportListMutex();
  v4 = qword_140160D48;
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v4 + 72), Executive, 0, 0, 0LL);
      v5 = *(__int64 **)(v4 + 56);
      if ( (__int64 *)*v5 != v5 )
      {
        do
        {
          if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
          {
            v6 = a1(v5, a2);
            if ( v6 < 0 )
            {
              WdLogSingleEntry1(2LL, v6);
              WdLogGlobalForLineNumber = 538;
            }
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != *(_QWORD *)(v4 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v4 + 72), 0);
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != qword_140160D48 );
  }
  ReleaseMiniportListMutex();
}
