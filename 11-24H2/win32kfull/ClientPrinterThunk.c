/*
 * XREFs of ClientPrinterThunk @ 0x1400D9D34
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140082A00 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1400D9D9C (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 */

__int64 __fastcall ClientPrinterThunk(_DWORD *a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // ecx

  v6 = a2;
  if ( IS_USERCRIT_OWNED_AT_ALL((__int64)a1, a2, (__int64)a3) )
    return 0xFFFFFFFFLL;
  a1[3] = 0;
  a1[2] = a4;
  return (unsigned int)(pppUserModeCallback(v8, a1, v6, a3, a4) >> 31);
}
