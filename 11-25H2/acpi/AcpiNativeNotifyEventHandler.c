/*
 * XREFs of AcpiNativeNotifyEventHandler @ 0x1400535D0
 * Callers:
 *     <none>
 * Callees:
 *     NotifyHandler @ 0x140017F80 (NotifyHandler.c)
 *     AcpiHandleInternalNotify @ 0x140064954 (AcpiHandleInternalNotify.c)
 */

__int64 __fastcall AcpiNativeNotifyEventHandler(_QWORD *a1)
{
  int v1; // edx
  __int64 v2; // rbx

  v1 = *((_DWORD *)a1 + 2);
  v2 = *a1;
  if ( v1 == 0xFFFF )
  {
    AcpiHandleInternalNotify(*a1);
    v1 = 0;
  }
  return NotifyHandler(2LL, v1, v2, 0);
}
