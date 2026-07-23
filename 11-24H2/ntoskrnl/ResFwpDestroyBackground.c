/*
 * XREFs of ResFwpDestroyBackground @ 0x140BB3B3C
 * Callers:
 *     ResFwBackgroundTransition @ 0x140BB7D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ResFwpDestroyBackground(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  PVOID v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( (dword_140EF0270 & 0xC00) != 0xC00 )
  {
    v2 = qword_140EF02B8;
    if ( qword_140EF02B8 )
    {
      _InterlockedExchange64((volatile __int64 *)&qword_140EF02B8, 0LL);
      BgpFwFreeMemory((__int64)v2);
    }
    v3 = qword_140EF02C0;
    if ( qword_140EF02C0 )
    {
      _InterlockedExchange64((volatile __int64 *)&qword_140EF02C0, 0LL);
      BgpFwReleaseLock((__int64)v2, a2);
      ExFreePoolWithTag(v3, 0x4B494742u);
      BgpFwAcquireLock(v5, v4, v6, v7);
    }
    LODWORD(Size) = 0;
  }
}
