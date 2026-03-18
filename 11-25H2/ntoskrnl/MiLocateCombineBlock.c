/*
 * XREFs of MiLocateCombineBlock @ 0x1403239AC
 * Callers:
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 */

__int64 __fastcall MiLocateCombineBlock(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  volatile LONG *v8; // rdi
  KIRQL v9; // dl
  __int64 v10; // rbx

  v8 = (volatile LONG *)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( a4 )
    v9 = 17;
  else
    v9 = ExAcquireSpinLockShared(v8 + 2);
  v10 = *(_QWORD *)v8;
  if ( *(_QWORD *)v8 )
  {
    while ( a2 <= *(_QWORD *)(v10 + 24) )
    {
      if ( a2 >= *(_QWORD *)(v10 + 24) )
      {
        if ( a3 > (*(_DWORD *)(v10 + 48) & 0x1Fu) )
          break;
        if ( a3 >= (*(_DWORD *)(v10 + 48) & 0x1Fu) )
        {
          if ( !a5 )
            goto LABEL_8;
          if ( *a5 > *(_QWORD *)(v10 + 64) )
            break;
          if ( *a5 >= *(_QWORD *)(v10 + 64) )
            goto LABEL_8;
        }
      }
      v10 = *(_QWORD *)v10;
LABEL_7:
      if ( !v10 )
        goto LABEL_8;
    }
    v10 = *(_QWORD *)(v10 + 8);
    goto LABEL_7;
  }
LABEL_8:
  if ( !a4 )
    MiReleaseSpinLockShared(v8 + 2, v9);
  if ( v10 )
    return v10 & -(__int64)(*(_QWORD *)(v10 + 56) != 0LL);
  else
    return 0LL;
}
