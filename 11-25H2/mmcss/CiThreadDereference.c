/*
 * XREFs of CiThreadDereference @ 0x1C000E440
 * Callers:
 *     CiThreadNotification @ 0x1C0003A60 (CiThreadNotification.c)
 *     CiThreadCreate @ 0x1C000D720 (CiThreadCreate.c)
 *     CiDispatchClose @ 0x1C000E390 (CiDispatchClose.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadDereference(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0x4873634Du);
  }
}
