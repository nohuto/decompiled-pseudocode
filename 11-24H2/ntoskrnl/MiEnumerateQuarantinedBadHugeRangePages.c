/*
 * XREFs of MiEnumerateQuarantinedBadHugeRangePages @ 0x1406739AC
 * Callers:
 *     MmEnumerateBadPages @ 0x1407ED198 (MmEnumerateBadPages.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiEnumerateBadHugeRangePages @ 0x14066FC50 (MiEnumerateBadHugeRangePages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiEnumerateQuarantinedBadHugeRangePages(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned __int64 *Pool; // rbx
  KIRQL v5; // al
  unsigned __int8 v6; // bp
  __int64 v7; // rsi
  unsigned __int64 **v8; // rax

  while ( 1 )
  {
    v2 = qword_140E2FF28;
    if ( !qword_140E2FF28 )
      break;
    if ( (unsigned __int64)qword_140E2FF28 > 0x1FFFFFFFFFFFFFFFLL
      || (v3 = 8 * qword_140E2FF28 + 32, v3 <= 8 * qword_140E2FF28)
      || (Pool = (unsigned __int64 *)MiAllocatePool(0x40uLL, v3, 1631743309)) == 0LL )
    {
      *(_DWORD *)(a1 + 16) = -1073741670;
      return;
    }
    v5 = ExAcquireSpinLockShared(&dword_140E2FED0);
    v6 = v5;
    if ( v2 >= qword_140E2FF28 )
    {
      Pool[3] = (unsigned __int64)(Pool + 4);
      v7 = MiEnumerateBadHugeRangePages(Pool + 4, v2, 1);
      MiReleaseSpinLockShared(&dword_140E2FED0, v6);
      if ( v7 )
      {
        Pool[2] = v7;
        *(_QWORD *)(a1 + 24) += v7;
        v8 = *(unsigned __int64 ***)(a1 + 8);
        if ( *v8 != (unsigned __int64 *)a1 )
          __fastfail(3u);
        *Pool = a1;
        Pool[1] = (unsigned __int64)v8;
        *v8 = Pool;
        *(_QWORD *)(a1 + 8) = Pool;
      }
      else
      {
        ExFreePoolWithTag(Pool, 0);
      }
      return;
    }
    MiReleaseSpinLockShared(&dword_140E2FED0, v5);
    ExFreePoolWithTag(Pool, 0);
  }
}
