/*
 * XREFs of ExSecurePoolUpdate @ 0x14064C610
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolFromHandle @ 0x1404F5968 (ExpSecurePoolFromHandle.c)
 *     VslSecurePoolUpdate @ 0x14058AE4C (VslSecurePoolUpdate.c)
 */

__int64 __fastcall ExSecurePoolUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _MDL *a7)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d

  v9 = ExpSecurePoolFromHandle(a1);
  if ( a6 && a7 && v9 )
    return VslSecurePoolUpdate(*(_QWORD *)(v9 + 8), v10, v7, v8, a5, a6, a7);
  else
    return 3221225485LL;
}
