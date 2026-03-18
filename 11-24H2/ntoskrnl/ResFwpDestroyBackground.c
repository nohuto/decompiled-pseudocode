/*
 * XREFs of ResFwpDestroyBackground @ 0x140BB1B3C
 * Callers:
 *     ResFwBackgroundTransition @ 0x140BB5D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ResFwpDestroyBackground(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  PVOID v3; // rbx

  if ( (dword_140EF0050 & 0xC00) != 0xC00 )
  {
    v2 = qword_140EF0098;
    if ( qword_140EF0098 )
    {
      _InterlockedExchange64((volatile __int64 *)&qword_140EF0098, 0LL);
      BgpFwFreeMemory((__int64)v2);
    }
    v3 = qword_140EF00A0;
    if ( qword_140EF00A0 )
    {
      _InterlockedExchange64((volatile __int64 *)&qword_140EF00A0, 0LL);
      BgpFwReleaseLock((__int64)v2, a2);
      ExFreePoolWithTag(v3, 0x4B494742u);
      BgpFwAcquireLock();
    }
    LODWORD(Size) = 0;
  }
}
