/*
 * XREFs of RtlpHpSegProtect @ 0x180158420
 * Callers:
 *     RtlpHpHeapProtect @ 0x180157DB4 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpSegProtect(__int64 a1, unsigned int a2)
{
  char *v2; // rsi
  char *v3; // rbx
  char *v6; // rcx
  __int64 v7; // rdi
  char *v8; // rdi
  char *i; // rax
  __int64 result; // rax
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+90h] [rbp+30h] BYREF
  _QWORD *v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0LL;
  v2 = (char *)(a1 + 72);
  v14 = 0;
  v3 = *(char **)(a1 + 72);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( v3 != v2 )
  {
    v6 = v3;
    v7 = (unsigned int)-*(_DWORD *)a1;
    v15 = v3;
    v8 = &v3[v7];
    for ( i = v3; i < v8; i = v6 )
    {
      result = ZwQueryVirtualMemory(-1LL, v6, 0LL, &v11, 48LL, 0LL);
      if ( (int)result < 0 )
        return result;
      if ( (_DWORD)v13 == 4096 )
      {
        v16 = *((_QWORD *)&v12 + 1);
        result = ZwProtectVirtualMemory(-1LL, &v15, &v16, a2, &v14);
        if ( (int)result < 0 )
          return result;
      }
      v6 = (char *)v15 + *((_QWORD *)&v12 + 1);
      v15 = v6;
    }
    v3 = *(char **)v3;
  }
  return 0LL;
}
