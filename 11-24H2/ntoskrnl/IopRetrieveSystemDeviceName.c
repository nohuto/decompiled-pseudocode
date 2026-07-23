/*
 * XREFs of IopRetrieveSystemDeviceName @ 0x140A4D018
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopRetrieveSystemDeviceName(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  int v6; // ebx
  unsigned int v7; // r14d
  unsigned __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rcx

  v6 = 0;
  if ( a2 && a3 > 0x10 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v10 = a2;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 15) = *(_BYTE *)(v10 + 15);
    }
    v7 = a3 - 16;
    v8 = a2 + 16;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
  }
  if ( v7 > 0xFFFF )
    v7 = 0xFFFF;
  LODWORD(result) = guard_dispatch_icall_no_overrides(v8, v7);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741789 )
    {
      *a4 = 16;
      return (unsigned int)result;
    }
  }
  else
  {
    *(_WORD *)a2 = -2;
    *(_WORD *)(a2 + 2) = v7;
    *(_QWORD *)(a2 + 8) = v8;
    v6 = 16;
  }
  *a4 = v6;
  return (unsigned int)result;
}
