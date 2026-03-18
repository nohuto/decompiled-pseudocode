/*
 * XREFs of VidSchQueryProcessVidPnSourceStatistics @ 0x1400A5AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryProcessVidPnSourceStatistics(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  _DWORD *v10; // r8

  v7 = a2;
  if ( a2 < *(_DWORD *)(a1 + 40) )
  {
    v8 = a3 + 2664;
    ExAcquirePushLockSharedEx(a3 + 2664, 0LL);
    v9 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL * *(unsigned int *)(a1 + 4));
    if ( v9 && *(_QWORD *)(v9 + 8 * v7 + 88) )
    {
      _mm_lfence();
      v10 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL * *(unsigned int *)(a1 + 4)) + 8 * v7 + 88);
      *a4 = *v10;
      a4[1] = v10[1];
      a4[2] = v10[2];
      ExReleasePushLockSharedEx(v8, 0LL);
      return 0LL;
    }
    ExReleasePushLockSharedEx(v8, 0LL);
  }
  return 3221225485LL;
}
