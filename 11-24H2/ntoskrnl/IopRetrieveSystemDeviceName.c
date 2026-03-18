/*
 * XREFs of IopRetrieveSystemDeviceName @ 0x140A550C8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopRetrieveSystemDeviceName(__int64 a1, unsigned __int64 a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  unsigned int v8; // r14d
  unsigned __int64 v9; // r15
  int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  __int64 v14; // rcx
  _DWORD v15[14]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0;
  v15[0] = 0;
  if ( a2 && a3 > 0x10 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v14 = a2;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 15) = *(_BYTE *)(v14 + 15);
    }
    v8 = a3 - 16;
    v9 = a2 + 16;
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
  }
  if ( v8 > 0xFFFF )
    v8 = 0xFFFF;
  v10 = guard_dispatch_icall_no_overrides(v9, v8, v15, a1);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741789 )
    {
      *a4 = v15[0] + 16;
      return v11;
    }
  }
  else
  {
    v12 = v15[0];
    *(_WORD *)a2 = LOWORD(v15[0]) - 2;
    *(_WORD *)(a2 + 2) = v8;
    *(_QWORD *)(a2 + 8) = v9;
    v7 = v12 + 16;
  }
  *a4 = v7;
  return v11;
}
