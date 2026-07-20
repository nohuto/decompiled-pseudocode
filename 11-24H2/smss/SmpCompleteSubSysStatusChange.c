/*
 * XREFs of SmpCompleteSubSysStatusChange @ 0x14000D5E0
 * Callers:
 *     SmpDeleteSubSys @ 0x140019398 (SmpDeleteSubSys.c)
 * Callees:
 *     SmpDisposeSubSysSynch @ 0x14001942C (SmpDisposeSubSysSynch.c)
 */

NTSTATUS __fastcall SmpCompleteSubSysStatusChange(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE *v2; // rcx

  result = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = (HANDLE *)_InterlockedExchange64((volatile __int64 *)(a1 + 16), 0LL);
    if ( v2 )
    {
      if ( *(_DWORD *)v2 )
        return NtSetEvent(v2[1], 0LL);
      else
        return SmpDisposeSubSysSynch(v2);
    }
  }
  return result;
}
