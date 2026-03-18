/*
 * XREFs of ResFwpDestroyBackground @ 0x140BA1B3C
 * Callers:
 *     ResFwBackgroundTransition @ 0x140BA5D28 (ResFwBackgroundTransition.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ResFwpDestroyBackground(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  PVOID v3; // rbx

  if ( (dword_140EEFD90 & 0xC00) != 0xC00 )
  {
    v2 = qword_140EEFDD8;
    if ( qword_140EEFDD8 )
    {
      _InterlockedExchange64((volatile __int64 *)&qword_140EEFDD8, 0LL);
      BgpFwFreeMemory((__int64)v2);
    }
    v3 = qword_140EEFDE0;
    if ( qword_140EEFDE0 )
    {
      _InterlockedExchange64((volatile __int64 *)&qword_140EEFDE0, 0LL);
      BgpFwReleaseLock((__int64)v2, a2);
      ExFreePoolWithTag(v3, 0x4B494742u);
      BgpFwAcquireLock();
    }
    LODWORD(Size) = 0;
  }
}
