/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1404AAB30
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140A5536C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409D7C08 (MiInitializePrivateFixupBitmap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(__int64 a1, __int64 a2)
{
  void *Pool; // rdi
  _QWORD *v6; // rbx
  KIRQL v7; // al
  _QWORD *v8; // rcx

  Pool = (void *)MiAllocatePool(
                   0x40uLL,
                   8
                 * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
                  + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
                  + 2LL),
                   1767075149);
  if ( !Pool )
    return 0LL;
  v6 = (_QWORD *)MiAllocatePool(0x40uLL, 0x38uLL, 1766222157);
  if ( !v6 )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(Pool, a1, 1LL);
  v6[5] = Pool;
  v6[6] = a1;
  v6[2] = a2;
  v6[3] = a2 + (unsigned int)((*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) - 1);
  v6[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v7 = ExAcquireSpinLockExclusive(dword_140E2D95C);
  v8 = (_QWORD *)qword_140E2D948;
  if ( *(__int64 **)qword_140E2D948 != &qword_140E2D940 )
    __fastfail(3u);
  *v6 = &qword_140E2D940;
  v6[1] = v8;
  *v8 = v6;
  qword_140E2D948 = (__int64)v6;
  MiReleaseSpinLockExclusive(dword_140E2D95C, v7);
  return 1LL;
}
