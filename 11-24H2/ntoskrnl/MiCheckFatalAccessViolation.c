/*
 * XREFs of MiCheckFatalAccessViolation @ 0x140393220
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckFatalAccessViolation(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = BugCheckParameter2 - 0x10000;
  if ( BugCheckParameter2 - 0x10000 <= 0x7FFFFFFDFFFFLL && !a2 && (a3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 1532) & 0x1000) != 0 )
      KeBugCheckEx(0x1Au, 0x4477uLL, BugCheckParameter2, a3, 0LL);
    v5 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a4 + 1198));
    result = *(unsigned int *)(v5 + 1204);
    if ( (_DWORD)result != -1 && *(_QWORD *)(v5 + 1696) == a4 )
      KeBugCheckEx(0x1Au, 0x4478uLL, BugCheckParameter2, a3, 0LL);
  }
  return result;
}
