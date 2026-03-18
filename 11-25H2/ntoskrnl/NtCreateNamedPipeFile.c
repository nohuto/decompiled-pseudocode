/*
 * XREFs of NtCreateNamedPipeFile @ 0x140A2A640
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 */

__int64 __fastcall NtCreateNamedPipeFile(
        HANDLE *a1,
        int a2,
        __int64 a3,
        NTSTATUS *a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 *a14)
{
  _DWORD v15[6]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v16; // [rsp+98h] [rbp-20h]
  char v17; // [rsp+A0h] [rbp-18h]
  int v18; // [rsp+A1h] [rbp-17h]
  __int16 v19; // [rsp+A5h] [rbp-13h]
  char v20; // [rsp+A7h] [rbp-11h]

  v16 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( a14 )
  {
    v17 = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)a14 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = *a14;
    }
    else
    {
      v16 = *a14;
    }
  }
  else
  {
    v17 = 0;
  }
  v15[0] = a8;
  v15[1] = a9;
  v15[2] = a10;
  v15[3] = a11;
  v15[4] = a12;
  v15[5] = a13;
  return IopCreateFile(a1, a2, a3, a4, 0LL, 0, a5, a6, a7, 0LL, 0, 1, v15, 0, 0, 0LL);
}
