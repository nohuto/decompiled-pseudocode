/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x18000C48C
 * Callers:
 *     DllMain @ 0x18000C2F0 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_18002FD30 )
    (**(void (__fastcall ***)(__int64, __int64))qword_18002FD30)(qword_18002FD30, 1LL);
  qword_18002FD30 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
