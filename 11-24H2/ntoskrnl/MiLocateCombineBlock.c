/*
 * XREFs of MiLocateCombineBlock @ 0x14020CD3C
 * Callers:
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiLocateCombineBlock(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  unsigned __int64 v7; // rsi
  volatile LONG *v8; // rdi
  __int64 v9; // rbx

  v7 = a2;
  v8 = (volatile LONG *)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( a4 )
    LOBYTE(a2) = 17;
  else
    LOBYTE(a2) = ExAcquireSpinLockShared(v8 + 2);
  v9 = *(_QWORD *)v8;
  if ( *(_QWORD *)v8 )
  {
    while ( v7 <= *(_QWORD *)(v9 + 24) )
    {
      if ( v7 >= *(_QWORD *)(v9 + 24) )
      {
        if ( a3 > (*(_DWORD *)(v9 + 48) & 0x1Fu) )
          break;
        if ( a3 >= (*(_DWORD *)(v9 + 48) & 0x1Fu) )
        {
          if ( !a5 )
            goto LABEL_8;
          if ( *a5 > *(_QWORD *)(v9 + 64) )
            break;
          if ( *a5 >= *(_QWORD *)(v9 + 64) )
            goto LABEL_8;
        }
      }
      v9 = *(_QWORD *)v9;
LABEL_7:
      if ( !v9 )
        goto LABEL_8;
    }
    v9 = *(_QWORD *)(v9 + 8);
    goto LABEL_7;
  }
LABEL_8:
  if ( !a4 )
    MiReleaseSpinLockShared(v8 + 2, a2);
  if ( v9 )
    return v9 & -(__int64)(*(_QWORD *)(v9 + 56) != 0LL);
  else
    return 0LL;
}
