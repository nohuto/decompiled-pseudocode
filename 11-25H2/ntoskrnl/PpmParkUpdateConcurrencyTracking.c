/*
 * XREFs of PpmParkUpdateConcurrencyTracking @ 0x140A4D8BC
 * Callers:
 *     PpmCheckReInit @ 0x140A4D648 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1403B2EE8 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall PpmParkUpdateConcurrencyTracking(char a1)
{
  char v1; // r15
  unsigned __int64 result; // rax
  unsigned __int16 v3; // r14
  __int64 v4; // rbx
  char v5; // al
  char v6; // cl
  unsigned __int8 v7; // si
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v15[33]; // [rsp+40h] [rbp-C8h] BYREF

  v1 = a1;
  result = (unsigned __int64)memset_0(&v14, 0, 0x108uLL);
  v3 = 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v4 = PpmParkNodes + 208LL * v3;
      v5 = *(_BYTE *)(v4 + 120);
      v6 = v5 & 8;
      if ( !v1 )
        break;
      if ( !v6 )
      {
        v7 = 0;
        *(_BYTE *)(v4 + 120) = v5 | 8;
        if ( *(_BYTE *)(v4 + 11) )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(v4 + 200) + 104LL * v7;
            if ( *(_BYTE *)v8 )
              break;
LABEL_6:
            if ( ++v7 >= *(_BYTE *)(v4 + 11) )
            {
              v1 = a1;
              goto LABEL_11;
            }
          }
          v14 = 2097153LL;
          memset_0(v15, 0, 0x100uLL);
          v11 = *(unsigned __int16 *)(v4 + 4);
          v12 = *(_QWORD *)(v8 + 16);
          if ( (unsigned __int16)v14 <= (unsigned __int16)v11 )
          {
            if ( WORD1(v14) > (unsigned __int16)v11 )
            {
              LOWORD(v14) = v11 + 1;
              goto LABEL_14;
            }
          }
          else
          {
LABEL_14:
            v15[v11] |= v12;
          }
          PopExecuteOnTargetProcessors(
            (__int64)&v14,
            (__int64)PpmIdleInstallConcurrency,
            *(_QWORD *)(v4 + 48),
            *(_QWORD *)(v8 + 32));
          goto LABEL_6;
        }
      }
LABEL_11:
      result = ++v3;
      if ( v3 >= (unsigned int)PpmParkNumNodes )
        return result;
    }
    if ( !v6 )
      goto LABEL_11;
    *(_BYTE *)(v4 + 120) = v5 & 0xF7;
    v14 = 2097153LL;
    memset_0(v15, 0, 0x100uLL);
    v9 = *(unsigned __int16 *)(v4 + 4);
    v10 = *(_QWORD *)(v4 + 16);
    if ( (unsigned __int16)v14 <= (unsigned __int16)v9 )
    {
      if ( WORD1(v14) <= (unsigned __int16)v9 )
        goto LABEL_10;
      LOWORD(v14) = v9 + 1;
    }
    v15[v9] |= v10;
LABEL_10:
    PopExecuteOnTargetProcessors((__int64)&v14, (__int64)PpmIdleRemoveConcurrency, 0LL, 0LL);
    goto LABEL_11;
  }
  return result;
}
