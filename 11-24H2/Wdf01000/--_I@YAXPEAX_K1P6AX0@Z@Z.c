/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14003ECB4
 * Callers:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14003EC78 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14003F798 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x14009DAA0 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall `vector destructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void (__fastcall *__f)(void *))
{
  unsigned __int64 v5; // rdi
  char *v7; // rbx

  v5 = __n;
  v7 = &__t[__n * __s];
  do
  {
    v7 -= __s;
    __f(v7);
    --v5;
  }
  while ( v5 );
}
