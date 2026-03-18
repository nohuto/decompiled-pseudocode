/*
 * XREFs of ProcessInfoFromPID @ 0x1C0035A54
 * Callers:
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C003214C (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 */

__int64 __fastcall ProcessInfoFromPID(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 ProcessWin32Process; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(a1, &Object, a3, a4) >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
      ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    v4 = ProcessWin32Process;
    ObfDereferenceObject(Object);
  }
  return v4;
}
