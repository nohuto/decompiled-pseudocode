/*
 * XREFs of DpiFdoCleanupDP @ 0x14007D54C
 * Callers:
 *     DpiFdoInitializeDP @ 0x14007D620 (DpiFdoInitializeDP.c)
 *     DpiFdoResetFdo @ 0x1402453A8 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupDP(_QWORD *a1))(_QWORD)
{
  void *v1; // rbx
  void (__fastcall *result)(_QWORD); // rax

  v1 = a1 + 707;
  result = (void (__fastcall *)(_QWORD))a1[710];
  if ( result )
  {
    result(a1[708]);
    return (void (__fastcall *)(_QWORD))memset(v1, 0, 0x48uLL);
  }
  return result;
}
