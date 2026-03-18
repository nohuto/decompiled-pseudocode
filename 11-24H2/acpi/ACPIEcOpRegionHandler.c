/*
 * XREFs of ACPIEcOpRegionHandler @ 0x140018460
 * Callers:
 *     <none>
 * Callees:
 *     ACPIEcServiceDevice @ 0x14001873C (ACPIEcServiceDevice.c)
 *     ACPIEcLogAction @ 0x140019010 (ACPIEcLogAction.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIEcOpRegionHandler(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        __int64 a6,
        void (__fastcall *a7)(__int64),
        __int64 a8)
{
  size_t v8; // rsi
  char v10; // bl
  KSPIN_LOCK *v11; // rbp
  KIRQL v12; // r14
  __int64 Pool2; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rbx

  v8 = a4;
  v10 = a3;
  if ( a3 > 0xFF || a3 + a4 > 0x100 )
    goto LABEL_11;
  v11 = (KSPIN_LOCK *)(a6 + 88);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a6 + 88));
  if ( *(_BYTE *)(a6 + 121) > 1u || (Pool2 = ExAllocatePool2(64LL, 48LL, 1164993345LL), (v15 = Pool2) == 0) )
  {
    KeReleaseSpinLock(v11, v12);
LABEL_11:
    memset(a5, 255, v8);
    a7(a8);
    return 259LL;
  }
  *(_BYTE *)(Pool2 + 17) = v10;
  *(_WORD *)(Pool2 + 18) = v8;
  *(_BYTE *)(Pool2 + 16) = (a1 != 0) + 0x80;
  *(_QWORD *)(Pool2 + 32) = a7;
  *(_QWORD *)(Pool2 + 40) = a8;
  *(_QWORD *)(Pool2 + 24) = a5;
  v16 = *(__int64 **)(a6 + 472);
  if ( *v16 != a6 + 464 )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 8) = v16;
  *(_QWORD *)Pool2 = a6 + 464;
  *v16 = Pool2;
  *(_QWORD *)(a6 + 472) = Pool2;
  LOBYTE(v15) = -112;
  v17 = *(_QWORD *)(a6 + 480);
  LOBYTE(v14) = v17 == 0;
  ACPIEcLogAction(a6, v15, v14, 0LL);
  KeReleaseSpinLock(v11, v12);
  if ( !v17 )
    ACPIEcServiceDevice(a6);
  return 259LL;
}
