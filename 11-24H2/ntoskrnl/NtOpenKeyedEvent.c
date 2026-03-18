/*
 * XREFs of NtOpenKeyedEvent @ 0x1407C52D0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 */

__int64 __fastcall NtOpenKeyedEvent(_QWORD *a1, int a2, int a3)
{
  int v3; // r10d
  __int64 result; // rax
  __int64 v6; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v6 = 0LL;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a3 && ((unsigned __int8)a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a1 = 0LL;
  result = ObOpenObjectByName(v3, (_DWORD)ExpKeyedEventObjectType, a3, 0, a2, 0LL, (__int64)&v6);
  if ( (int)result >= 0 )
    *a1 = v6;
  return result;
}
