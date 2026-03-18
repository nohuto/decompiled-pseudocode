/*
 * XREFs of NtOpenPartition @ 0x14077A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

__int64 __fastcall NtOpenPartition(HANDLE *a1, int a2, int a3)
{
  int v3; // r10d
  char PreviousMode; // di
  __int64 v6; // rcx
  __int64 result; // rax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  v3 = a3;
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  LOBYTE(a3) = PreviousMode;
  result = ObOpenObjectByName(v3, (_DWORD)PsPartitionType, a3, 0, a2, 0LL, (__int64)Handle);
  if ( (int)result >= 0 )
  {
    *a1 = Handle[0];
    return (unsigned int)result;
  }
  return result;
}
