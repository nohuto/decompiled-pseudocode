/*
 * XREFs of CpcReinitializeHandler @ 0x140008E50
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 *     EnableCpcResourcePriorityRegisters @ 0x140008FC4 (EnableCpcResourcePriorityRegisters.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcReinitializeHandler(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1[18];
  if ( *((_BYTE *)a1 + 124) )
    result = WriteGenAddrMaybeHiddenEx(*a1, (char *)(v2 + 344), 1LL);
  if ( *(_QWORD *)(v2 + 536) )
    result = EnableCpcResourcePriorityRegisters(*a1);
  if ( *((_BYTE *)a1 + 136) )
  {
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 80) )
    {
      ((void (*)(void))qword_1400193E0)();
      return ((__int64 (*)(void))qword_1400193F0)();
    }
  }
  return result;
}
