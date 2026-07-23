/*
 * XREFs of IoInitializeIrpEx @ 0x140432550
 * Callers:
 *     <none>
 * Callees:
 *     IoInitializeIrpPriv @ 0x1404325B0 (IoInitializeIrpPriv.c)
 */

__int64 __fastcall IoInitializeIrpEx(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = IoInitializeIrpPriv(a1);
  if ( a2 && (a2 == -1 || (*(_DWORD *)(a2 + 48) & 0x8000000) != 0) )
  {
    result = a1[23];
    a1[25] = result;
  }
  return result;
}
