/*
 * XREFs of ?GetDisplayAdapterLuidForMonitor@@YAHPEAUtagWND@@PEAU_LUID@@@Z @ 0x140285088
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDisplayAdapterLuidForMonitor(struct tagWND *a1, struct _LUID *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = 0;
  v7 = 0;
  v5 = ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256));
  if ( v5 )
    return (unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v5 + 80), 0LL, a2, &v7);
  return v3;
}
