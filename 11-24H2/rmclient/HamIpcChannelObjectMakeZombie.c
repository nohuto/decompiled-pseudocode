/*
 * XREFs of HamIpcChannelObjectMakeZombie @ 0x18000A1C0
 * Callers:
 *     HamCompleteExtendedExecution @ 0x180012740 (HamCompleteExtendedExecution.c)
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x18000A520 (HampIpcChannelObjectComparePayloadForTree.c)
 */

__int64 __fastcall HamIpcChannelObjectMakeZombie(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 **v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rbx
  int v11; // edx
  __int64 v12; // rcx

  RtlAcquireSRWLockExclusive(a1 + 1);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v4 = a1[3];
  v5 = a1[4] & 1;
  if ( (a1[4] & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_13;
    v4 ^= (unsigned __int64)(a1 + 3);
  }
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = HampIpcChannelObjectComparePayloadForTree(a2, v4);
      if ( v6 < 0 )
      {
        v7 = *(_QWORD *)v4;
        if ( v5 && v7 )
          goto LABEL_20;
      }
      else
      {
        if ( v6 <= 0 )
          goto LABEL_8;
        v7 = *(_QWORD *)(v4 + 8);
        if ( v5 && v7 )
        {
LABEL_20:
          v4 ^= v7;
          goto LABEL_7;
        }
      }
      v4 = v7;
LABEL_7:
      if ( !v4 )
      {
LABEL_8:
        if ( v4 )
        {
          RtlRbRemoveNode(a1 + 3, v4);
          v8 = (__int64 **)a1[6];
          v9 = (__int64 *)(v4 + 24);
          if ( *v8 != a1 + 5 )
            __fastfail(3u);
          v9[1] = (__int64)v8;
          *v9 = (__int64)(a1 + 5);
          *v8 = v9;
          a1[6] = (__int64)v9;
          v10 = *a1;
          RtlAcquireSRWLockExclusive(*a1 + 32);
          v11 = *(_DWORD *)(v10 + 64);
          *(_DWORD *)(v10 + 64) = v11 | 2;
          if ( (v11 & 1) == 0 )
          {
            v12 = *(_QWORD *)(v10 + 56);
            *(_DWORD *)(v10 + 64) = v11 | 3;
            TpPostWork(v12);
          }
          RtlReleaseSRWLockExclusive(v10 + 32);
        }
        break;
      }
    }
  }
LABEL_13:
  *((_DWORD *)a1 + 4) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 1);
}
