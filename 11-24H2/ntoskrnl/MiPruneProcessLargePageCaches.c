/*
 * XREFs of MiPruneProcessLargePageCaches @ 0x140353F9C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402F3C60 (MiComputeSystemTrimCriteria.c)
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 *     MiDeleteWorkingSetList @ 0x14047CD20 (MiDeleteWorkingSetList.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFreeProcessLargePageCache @ 0x140693AC4 (MiFreeProcessLargePageCache.c)
 */

__int64 __fastcall MiPruneProcessLargePageCaches(__int64 a1, int a2)
{
  __int64 result; // rax
  _DWORD *v4; // r14
  _QWORD *v5; // rbp
  KIRQL v6; // r15
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax

  if ( !a2 || (++*(_DWORD *)(a1 + 16472), result = *(unsigned int *)(a1 + 16472), (result & 7) == 0) )
  {
    v4 = (_DWORD *)(a1 + 16448);
    v5 = 0LL;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16448));
    v7 = (_QWORD *)(a1 + 16456);
    while ( 1 )
    {
      v8 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
        return MiReleaseSpinLockExclusive(v4, v6);
      if ( (_QWORD *)v8[1] != v7 )
        goto LABEL_13;
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_13;
      *v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
      if ( v5 )
      {
        if ( v8 == v5 )
        {
          v11 = (__int64 *)(a1 + 16456);
          v12 = *v11;
          if ( *(__int64 **)(*v11 + 8) != v11 )
LABEL_13:
            __fastfail(3u);
          *v8 = v12;
          v8[1] = v11;
          *(_QWORD *)(v12 + 8) = v8;
          *v11 = (__int64)v8;
          return MiReleaseSpinLockExclusive(v4, v6);
        }
      }
      else
      {
        v5 = v8;
      }
      if ( (unsigned int)(*(_DWORD *)(a1 + 16472) - *((_DWORD *)v8 + 6)) >= 8 )
        MiFreeProcessLargePageCache(a1, v8);
      v10 = *(_QWORD **)(a1 + 16464);
      if ( (_QWORD *)*v10 != v7 )
        goto LABEL_13;
      *v8 = v7;
      v8[1] = v10;
      *v10 = v8;
      *(_QWORD *)(a1 + 16464) = v8;
    }
  }
  return result;
}
