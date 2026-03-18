/*
 * XREFs of ClientPrinterThunk @ 0x1C020557C
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02B7B44 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C0204B8C (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 */

__int64 __fastcall ClientPrinterThunk(_DWORD *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v6; // ebp
  __int64 v8; // rcx
  int v10; // eax
  unsigned int v11; // ecx

  v4 = a4;
  v6 = a2;
  if ( IS_USERCRIT_OWNED_AT_ALL((__int64)a1, a2, (__int64)a3, a4) )
    return 0xFFFFFFFFLL;
  a1[2] = v4;
  a1[3] = 0;
  v10 = pppUserModeCallback(v8, a1, v6, a3, v4);
  v11 = -1;
  if ( v10 >= 0 )
    return 0;
  return v11;
}
