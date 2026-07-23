/*
 * XREFs of MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C
 * Callers:
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiEnumerateBadHugeRangePages @ 0x140670E20 (MiEnumerateBadHugeRangePages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiEnumerateQuarantinedBadHugeRangePages(unsigned __int64 a1)
{
  unsigned __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned __int64 *Pool; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // bp
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 **v12; // rax

  while ( 1 )
  {
    v2 = qword_140E30068;
    if ( !qword_140E30068 )
      break;
    if ( (unsigned __int64)qword_140E30068 > 0x1FFFFFFFFFFFFFFFLL
      || (v3 = 8 * qword_140E30068 + 32, v3 <= 8 * qword_140E30068)
      || (Pool = (unsigned __int64 *)MiAllocatePool(0x40uLL, v3, 1631743309)) == 0LL )
    {
      *(_DWORD *)(a1 + 16) = -1073741670;
      return;
    }
    v5 = ExAcquireSpinLockShared(&dword_140E30010);
    v8 = v5;
    if ( v2 >= qword_140E30068 )
    {
      Pool[3] = (unsigned __int64)(Pool + 4);
      v9 = MiEnumerateBadHugeRangePages(Pool + 4, v2, 1);
      MiReleaseSpinLockShared(&dword_140E30010, v8, v10, v11);
      if ( v9 )
      {
        Pool[2] = v9;
        *(_QWORD *)(a1 + 24) += v9;
        v12 = *(unsigned __int64 ***)(a1 + 8);
        if ( *v12 != (unsigned __int64 *)a1 )
          __fastfail(3u);
        *Pool = a1;
        Pool[1] = (unsigned __int64)v12;
        *v12 = Pool;
        *(_QWORD *)(a1 + 8) = Pool;
      }
      else
      {
        ExFreePoolWithTag(Pool, 0);
      }
      return;
    }
    MiReleaseSpinLockShared(&dword_140E30010, v5, v6, v7);
    ExFreePoolWithTag(Pool, 0);
  }
}
