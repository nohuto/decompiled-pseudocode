/*
 * XREFs of MiPageRead @ 0x14035C4D4
 * Callers:
 *     MiReadImageHeaders @ 0x1409413C0 (MiReadImageHeaders.c)
 *     MiPfExecuteReadList @ 0x1409CA528 (MiPfExecuteReadList.c)
 * Callees:
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 */

__int64 __fastcall MiPageRead(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  return IoPageReadEx(a1, a5, a6, a7);
}
