/*
 * XREFs of ndisIfStackTablePathExist @ 0x14002B070
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x14002ADF0 (NdisIfAddIfStackEntry.c)
 *     ndisIfStackTablePathExist @ 0x14002B070 (ndisIfStackTablePathExist.c)
 * Callees:
 *     ndisIfStackTablePathExist @ 0x14002B070 (ndisIfStackTablePathExist.c)
 */

char __fastcall ndisIfStackTablePathExist(int a1, unsigned int a2, __int16 a3)
{
  unsigned __int16 v3; // si
  PVOID *v6; // rbx
  PVOID *v7; // rax
  __int64 v8; // rcx

  v3 = a3 + 1;
  if ( (unsigned __int16)(a3 + 1) < 0x10u )
  {
    v6 = (PVOID *)P;
    while ( v6 != &P )
    {
      v7 = v6;
      v6 = (PVOID *)*v6;
      if ( *((_DWORD *)v7 + 5) == a1 )
      {
        v8 = *((unsigned int *)v7 + 4);
        if ( (_DWORD)v8 == a2 || (unsigned __int8)ndisIfStackTablePathExist(v8, a2, v3) )
          return 1;
      }
    }
  }
  return 0;
}
