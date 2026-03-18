/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x14004AAD4
 * Callers:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x14004AA98 (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14004B5B8 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082414 (--1FxTagTracker@@QEAA@XZ.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x14009D9D0 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
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
