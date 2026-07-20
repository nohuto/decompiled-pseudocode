/*
 * XREFs of _tlgEnableCallback @ 0x140008220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140020010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall tlgEnableCallback(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  int v9; // ecx

  result = a7;
  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( a3 )
          v9 = a3 + 1;
        else
          v9 = 256;
        *(_DWORD *)a7 = v9;
        *(_QWORD *)(a7 + 16) = a4;
        *(_QWORD *)(a7 + 24) = a5;
      }
    }
    else
    {
      *(_DWORD *)a7 = 0;
    }
    if ( *(_QWORD *)(a7 + 40) )
      return (*(__int64 (__fastcall **)(__int64))(a7 + 40))(a1);
  }
  return result;
}
