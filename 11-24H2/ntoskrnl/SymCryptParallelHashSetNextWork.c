/*
 * XREFs of SymCryptParallelHashSetNextWork @ 0x140520354
 * Callers:
 *     SymCryptParallelHashProcess @ 0x14051FF14 (SymCryptParallelHashProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

char __fastcall SymCryptParallelHashSetNextWork(__int64 *a1, unsigned int **a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rsi
  __int64 v6; // r15
  unsigned int *v8; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  size_t v12; // r8
  __int64 v13; // rcx
  size_t v14; // rbp
  unsigned __int64 v15; // rcx
  char v16[8]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *a2;
  v6 = *a1;
  v16[0] = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = a2[3];
      if ( !*((_BYTE *)a2 + 8) )
        break;
      switch ( *((_BYTE *)a2 + 8) )
      {
        case 1:
          v10 = *((unsigned __int8 *)a2 + 9);
          a2[4] = (unsigned int *)(v10 + *((_QWORD *)v8 + 2));
          v11 = *((_QWORD *)v8 + 3) - v10;
          a2[5] = (unsigned int *)v11;
          if ( v11 >= *(unsigned int *)(v6 + 48) )
          {
            *((_BYTE *)a2 + 8) = 2;
            return 1;
          }
          goto LABEL_12;
        case 2:
LABEL_12:
          v12 = (size_t)a2[5];
          if ( v12 )
          {
            memmove(v4 + 8, a2[4], v12);
            *v4 = *((_DWORD *)a2 + 10);
          }
LABEL_8:
          a2[3] = (unsigned int *)*((_QWORD *)v8 + 4);
          *((_BYTE *)a2 + 8) = 0;
          break;
        case 3:
LABEL_9:
          if ( (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v4, a2, v16) )
            return v16[0];
          break;
        case 4:
          guard_dispatch_icall_no_overrides(a1, v4, a2[3], a4);
          goto LABEL_8;
      }
    }
    if ( !v8 )
      return 0;
    v13 = *v4;
    if ( v8[2] != 1 )
      goto LABEL_9;
    *((_QWORD *)v4 + 2) += *((_QWORD *)v8 + 3);
    if ( *((_QWORD *)v4 + 2) < *((_QWORD *)v8 + 3) )
      ++*((_QWORD *)v4 + 3);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v6 + 48) - v13;
      if ( v14 >= *((_QWORD *)v8 + 3) )
        v14 = *((_QWORD *)v8 + 3);
      memmove((char *)v4 + v13 + 32, *((const void **)v8 + 2), v14);
      *v4 += v14;
      if ( *v4 == *(_DWORD *)(v6 + 48) )
      {
        a2[4] = v4 + 8;
        a2[5] = (unsigned int *)*(unsigned int *)(v6 + 48);
        if ( v14 == *((_QWORD *)v8 + 3) )
        {
          a2[3] = (unsigned int *)*((_QWORD *)v8 + 4);
        }
        else
        {
          *((_BYTE *)a2 + 8) = 1;
          *((_BYTE *)a2 + 9) = v14;
        }
        *v4 = 0;
        return 1;
      }
      a2[3] = (unsigned int *)*((_QWORD *)v8 + 4);
    }
    else
    {
      a2[4] = (unsigned int *)*((_QWORD *)v8 + 2);
      v15 = *((_QWORD *)v8 + 3);
      a2[5] = (unsigned int *)v15;
      *((_BYTE *)a2 + 8) = 2;
      if ( v15 >= *(unsigned int *)(v6 + 48) )
        return 1;
    }
  }
}
