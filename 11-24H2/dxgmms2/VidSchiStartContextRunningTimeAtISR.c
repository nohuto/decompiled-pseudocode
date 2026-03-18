/*
 * XREFs of VidSchiStartContextRunningTimeAtISR @ 0x140036A50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14000D3D0 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiStartContextRunningTimeAtISR(LARGE_INTEGER *a1)
{
  LARGE_INTEGER v1; // rdi

  v1 = a1[12];
  a1[56].QuadPart = 0LL;
  if ( *(_DWORD *)(v1.QuadPart + 3020) == 1 )
    a1[58] = KeQueryPerformanceCounter(0LL);
  if ( (byte_140081241 & 2) != 0 )
    McTemplateK0piixqq_EtwWriteTransfer();
  return 1;
}
