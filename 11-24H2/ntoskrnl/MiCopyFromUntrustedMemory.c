/*
 * XREFs of MiCopyFromUntrustedMemory @ 0x14067F3E4
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiCopyFromUntrustedMemory(_BYTE *a1, _BYTE *a2, unsigned int a3, unsigned int a4)
{
  _BYTE *v5; // r10
  unsigned int v6; // edx
  unsigned int i; // r9d
  unsigned int v9; // [rsp+20h] [rbp-48h]
  _BYTE *v10; // [rsp+30h] [rbp-38h]
  _BYTE *v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  v5 = a2;
  v10 = a2;
  v9 = a3;
  v12 = 0LL;
  if ( a4 || (((unsigned __int8)a1 | (unsigned __int8)a2) & 7) != 0 || (a3 & 7) != 0 )
  {
    v11 = a1;
    while ( 1 )
    {
      if ( !a3 )
        return 0LL;
      if ( a4 )
      {
        v6 = a4;
        if ( a4 > a3 )
          v6 = 1;
      }
      else
      {
        v6 = a3 & 7;
        if ( (a3 & 7) != 0 )
        {
          if ( ((v6 - 1) & v6) != 0 )
            v6 = 1;
        }
        else
        {
          v6 = 8;
        }
      }
      if ( ((v6 - 1) & (unsigned int)v5) != 0 )
        v6 = 1;
      if ( v6 == 1 )
      {
        LOBYTE(v12) = *v5;
        goto LABEL_24;
      }
      if ( v6 == 2 )
      {
        LOWORD(v12) = *(_WORD *)v5;
        goto LABEL_24;
      }
      if ( v6 == 4 )
        break;
      if ( v6 == 8 )
      {
        v12 = *(_QWORD *)v5;
LABEL_24:
        a3 = v9;
        v5 = v10;
      }
      for ( i = 0; i < v6; ++i )
        *v11++ = *((_BYTE *)&v12 + i);
      a3 -= v6;
      v9 = a3;
      v5 += v6;
      v10 = v5;
    }
    LODWORD(v12) = *(_DWORD *)v5;
    goto LABEL_24;
  }
  memmove(a1, a2, a3);
  return 0LL;
}
