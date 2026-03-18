/*
 * XREFs of NtCreateMailslotFile @ 0x140A7B9B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 */

__int64 __fastcall NtCreateMailslotFile(
        HANDLE *a1,
        unsigned int a2,
        __int64 a3,
        NTSTATUS *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 v9[2]; // [rsp+80h] [rbp-28h] BYREF
  __int64 v10; // [rsp+90h] [rbp-18h]

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  if ( a8 )
  {
    LOBYTE(v10) = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9[1] = *(_QWORD *)a8;
    }
    else
    {
      v9[1] = *(_QWORD *)a8;
    }
  }
  v9[0] = __PAIR64__(a7, a6);
  return IopCreateFile(a1, a2, a3, a4, 0LL, 0, 3, 2u, a5, 0LL, 0, 2, v9, 0, 0, 0LL);
}
