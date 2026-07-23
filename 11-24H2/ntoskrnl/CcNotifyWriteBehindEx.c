/*
 * XREFs of CcNotifyWriteBehindEx @ 0x140262B14
 * Callers:
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcNotifyWriteBehindEx(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = a1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
    return CcNotifyWriteBehindInternal(v3, (unsigned int)result);
  return result;
}
