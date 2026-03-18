/*
 * XREFs of VidSchiExecuteMmIoFlipAtISR @ 0x1400361E0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x140036284 (VidSchiUpdateCurrentIsrFrameTime.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

char __fastcall VidSchiExecuteMmIoFlipAtISR(_QWORD *a1)
{
  unsigned int *v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx

  v2 = (unsigned int *)(a1 + 1);
  *((_DWORD *)a1 + 530) = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[32])(
                            *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 3120LL),
                            a1 + 1);
  if ( (a1[70] & 2) != 0 )
  {
    VidSchiUpdateCurrentIsrFrameTime(*a1, *(_QWORD *)(*a1 + 8LL * *v2 + 3432), 0LL);
    v4 = *v2;
    v5 = *a1;
    a1[267] = *(_QWORD *)(*(_QWORD *)(*a1 + 8 * v4 + 3432) + 44304LL);
    a1[266] = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v4 + 3432) + 44312LL);
  }
  return 1;
}
