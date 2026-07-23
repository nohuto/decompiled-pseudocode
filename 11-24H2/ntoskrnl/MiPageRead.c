/*
 * XREFs of MiPageRead @ 0x14025BA74
 * Callers:
 *     MiPfExecuteReadList @ 0x14093A5EC (MiPfExecuteReadList.c)
 *     MiReadImageHeaders @ 0x14098F538 (MiReadImageHeaders.c)
 * Callees:
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
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
