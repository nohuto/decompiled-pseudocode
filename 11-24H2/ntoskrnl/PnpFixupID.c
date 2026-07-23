/*
 * XREFs of PnpFixupID @ 0x140A2830C
 * Callers:
 *     PnpQueryDeviceID @ 0x140A27FC0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A28110 (PnpQueryID.c)
 * Callees:
 *     PnpLogEvent @ 0x140720FF0 (PnpLogEvent.c)
 */

__int64 __fastcall PnpFixupID(int *a1, unsigned int a2, int a3, unsigned int a4, const void **a5)
{
  unsigned int v7; // r10d
  unsigned __int64 v8; // rdx
  int *v9; // rbx
  int *i; // r9
  __int16 v11; // cx
  const void **v12; // rcx
  const wchar_t *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0;
  v16 = 0LL;
  v8 = (unsigned __int64)a1 + 2 * a2;
  v9 = 0LL;
  for ( i = a1; ; i = (int *)((char *)i + 2) )
  {
    if ( (unsigned __int64)i >= v8 )
      goto LABEL_20;
    v11 = *(_WORD *)i;
    if ( *(_WORD *)i )
      break;
    if ( !a3 || v9 && i == (int *)((char *)v9 + 2) )
    {
      if ( a4 == -1 || v7 == a4 )
        return (unsigned int)(((char *)i - (char *)a1) >> 1) + 1;
LABEL_20:
      v12 = a5;
      if ( !a5 )
        return 0LL;
      LODWORD(v16) = 7471216;
      v13 = L"not terminated, too long or invalid number of separators";
      v15 = 0;
      i = 0LL;
      goto LABEL_25;
    }
    v9 = i;
LABEL_8:
    ;
  }
  if ( v11 == 32 )
  {
    *(_WORD *)i = 95;
    goto LABEL_8;
  }
  if ( (unsigned __int16)(v11 - 32) <= 0x5Fu && v11 != 44 )
  {
    if ( v11 == 92 )
    {
      v17 = ++v7;
      if ( v7 > a4 )
      {
        v12 = a5;
        if ( !a5 )
          return 0LL;
        LODWORD(v16) = 2621478;
        v13 = L"too many separators";
        v15 = 4;
        i = &v17;
        goto LABEL_25;
      }
    }
    goto LABEL_8;
  }
  v12 = a5;
  if ( !a5 )
    return 0LL;
  LODWORD(v16) = 2359330;
  v13 = L"invalid character";
  v15 = 2;
LABEL_25:
  *((_QWORD *)&v16 + 1) = v13;
  PnpLogEvent(v12, (const void **)&v16, -1073479624, i, v15);
  return 0LL;
}
