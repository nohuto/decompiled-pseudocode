/*
 * XREFs of ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x140248E8C
 * Callers:
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x140249580 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     DpiKsrCallback @ 0x140249CF0 (DpiKsrCallback.c)
 *     DpiKsrDoKsrSave @ 0x140249E04 (DpiKsrDoKsrSave.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DpIterateFdoContexts(__int64 (__fastcall *a1)(__int64 *, void *), void *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  int v6; // eax

  AcquireMiniportListMutex();
  v4 = qword_14015DD88;
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
    while ( *(_QWORD *)v4 != qword_14015DD88 );
  }
  ReleaseMiniportListMutex();
}
