/*
 * XREFs of NtOpenSession @ 0x140A54C80
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall NtOpenSession(_QWORD *a1, int a2, __int64 a3)
{
  char PreviousMode; // si
  __int64 v7; // rdx
  POBJECT_TYPE v8; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 result; // rax
  _QWORD v11[3]; // [rsp+48h] [rbp-30h] BYREF

  v11[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = MmSessionObjectType;
  CurrentSilo = PsGetCurrentSilo();
  result = ObOpenObjectByNameEx(a3, (__int64)v8, PreviousMode, 0LL, a2, 0, (__int64)CurrentSilo, v11);
  *a1 = v11[0];
  return result;
}
