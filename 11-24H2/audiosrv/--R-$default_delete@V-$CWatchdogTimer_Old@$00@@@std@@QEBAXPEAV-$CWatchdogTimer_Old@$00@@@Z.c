/*
 * XREFs of ??R?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@QEBAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800ADA60
 * Callers:
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CWatchdogTimer_Old<1>>::operator()(__int64 a1, void *a2)
{
  if ( a2 )
  {
    CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>((__int64)a2);
    operator delete(a2, (const struct std::nothrow_t *)0x38);
  }
}
