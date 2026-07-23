/*
 * XREFs of SymCryptParallelHashSetNextWork @ 0x14051DC28
 * Callers:
 *     SymCryptParallelHashProcess @ 0x14051D7E4 (SymCryptParallelHashProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char __fastcall SymCryptParallelHashSetNextWork(__int64 *a1, unsigned int **a2)
{
  unsigned int *v2; // rsi
  __int64 v4; // r15
  unsigned int *v6; // rdi
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  size_t v10; // r8
  __int64 v11; // rcx
  size_t v12; // rbp
  unsigned __int64 v13; // rcx

  v2 = *a2;
  v4 = *a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = a2[3];
      if ( !*((_BYTE *)a2 + 8) )
        break;
      switch ( *((_BYTE *)a2 + 8) )
      {
        case 1:
          v8 = *((unsigned __int8 *)a2 + 9);
          a2[4] = (unsigned int *)(v8 + *((_QWORD *)v6 + 2));
          v9 = *((_QWORD *)v6 + 3) - v8;
          a2[5] = (unsigned int *)v9;
          if ( v9 >= *(unsigned int *)(v4 + 48) )
          {
            *((_BYTE *)a2 + 8) = 2;
            return 1;
          }
          goto LABEL_12;
        case 2:
LABEL_12:
          v10 = (size_t)a2[5];
          if ( v10 )
          {
            memmove(v2 + 8, a2[4], v10);
            *v2 = *((_DWORD *)a2 + 10);
          }
LABEL_8:
          a2[3] = (unsigned int *)*((_QWORD *)v6 + 4);
          *((_BYTE *)a2 + 8) = 0;
          break;
        case 3:
LABEL_9:
          if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v2) )
            return 0;
          break;
        case 4:
          guard_dispatch_icall_no_overrides(a1, v2);
          goto LABEL_8;
      }
    }
    if ( !v6 )
      return 0;
    v11 = *v2;
    if ( v6[2] != 1 )
      goto LABEL_9;
    *((_QWORD *)v2 + 2) += *((_QWORD *)v6 + 3);
    if ( *((_QWORD *)v2 + 2) < *((_QWORD *)v6 + 3) )
      ++*((_QWORD *)v2 + 3);
    if ( v11 )
    {
      v12 = *(unsigned int *)(v4 + 48) - v11;
      if ( v12 >= *((_QWORD *)v6 + 3) )
        v12 = *((_QWORD *)v6 + 3);
      memmove((char *)v2 + v11 + 32, *((const void **)v6 + 2), v12);
      *v2 += v12;
      if ( *v2 == *(_DWORD *)(v4 + 48) )
      {
        a2[4] = v2 + 8;
        a2[5] = (unsigned int *)*(unsigned int *)(v4 + 48);
        if ( v12 == *((_QWORD *)v6 + 3) )
        {
          a2[3] = (unsigned int *)*((_QWORD *)v6 + 4);
        }
        else
        {
          *((_BYTE *)a2 + 8) = 1;
          *((_BYTE *)a2 + 9) = v12;
        }
        *v2 = 0;
        return 1;
      }
      a2[3] = (unsigned int *)*((_QWORD *)v6 + 4);
    }
    else
    {
      a2[4] = (unsigned int *)*((_QWORD *)v6 + 2);
      v13 = *((_QWORD *)v6 + 3);
      a2[5] = (unsigned int *)v13;
      *((_BYTE *)a2 + 8) = 2;
      if ( v13 >= *(unsigned int *)(v4 + 48) )
        return 1;
    }
  }
}
