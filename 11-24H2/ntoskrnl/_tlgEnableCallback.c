/*
 * XREFs of _tlgEnableCallback @ 0x140A50E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall tlgEnableCallback(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax

  if ( a7 )
  {
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 == 1 )
      {
        if ( a3 )
          v7 = a3 + 1;
        else
          v7 = 256;
        *(_DWORD *)a7 = v7;
        *(_QWORD *)(a7 + 16) = a4;
        *(_QWORD *)(a7 + 24) = a5;
      }
    }
    else
    {
      *(_DWORD *)a7 = 0;
    }
    if ( *(_QWORD *)(a7 + 40) )
      guard_dispatch_icall_no_overrides(a1, a2);
  }
}
