/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1400DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401BE3F0 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(struct _RTL_ATOM_TABLE *a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // ebx
  __int64 result; // rax
  RTL_ATOM v8[12]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0;
  v6 = RtlAddAtomToAtomTableEx(a1, a2, v8, a4);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741773 )
  {
    LkdForAtomAdditionFailure(a1, v6);
    SetLastNtError(v6);
  }
  result = v8[0];
  if ( v8[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(a1, v8[0]);
      return v8[0];
    }
  }
  return result;
}
