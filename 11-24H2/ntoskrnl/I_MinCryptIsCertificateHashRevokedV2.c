/*
 * XREFs of I_MinCryptIsCertificateHashRevokedV2 @ 0x1406A0214
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincryptIsTimestampBeforeRevocation @ 0x140826528 (MincryptIsTimestampBeforeRevocation.c)
 * Callees:
 *     bsearch_s @ 0x1404FC130 (bsearch_s.c)
 */

char __fastcall I_MinCryptIsCertificateHashRevokedV2(
        int a1,
        const void *a2,
        unsigned int a3,
        _QWORD *a4,
        bool *a5,
        int *a6)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned int v13; // eax
  __int64 v14; // rbx
  char *v15; // rax
  int v16; // ecx

  if ( !qword_140FD8098 )
    return 0;
  v7 = a1 - 32771;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 8;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
            return 0;
          v11 = 144LL;
          v12 = 152LL;
        }
        else
        {
          v11 = 128LL;
          v12 = 136LL;
        }
      }
      else
      {
        v11 = 112LL;
        v12 = 120LL;
      }
    }
    else
    {
      v11 = 96LL;
      v12 = 104LL;
    }
  }
  else
  {
    v11 = 80LL;
    v12 = 88LL;
  }
  v13 = *(_DWORD *)(v11 + qword_140FD8098);
  if ( !v13 )
    return 0;
  v14 = a3;
  v15 = (char *)bsearch_s(
                  a2,
                  *(const void **)(v12 + qword_140FD8098),
                  v13 / (a3 + 12),
                  a3 + 12,
                  I_MinCryptHashSearchCompare,
                  (void *)a3);
  if ( !v15 )
    return 0;
  v16 = *(_DWORD *)&v15[v14 + 8];
  if ( a4 )
    *a4 = *(_QWORD *)&v15[v14];
  if ( a5 )
    *a5 = v16 < 0;
  if ( a6 )
    *a6 = v16 & 0xFFFFFFF;
  return 1;
}
