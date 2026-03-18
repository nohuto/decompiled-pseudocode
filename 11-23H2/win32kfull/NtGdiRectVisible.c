/*
 * XREFs of NtGdiRectVisible @ 0x1C00BDB10
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C00BD078 (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1, struct _RECTL *a2)
{
  struct _RECTL v3; // [rsp+28h] [rbp-20h] BYREF

  v3 = 0LL;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (struct _RECTL *)MmUserProbeAddress;
  v3 = *a2;
  return GreRectVisible(a1, &v3);
}
