/*
 * XREFs of PiSwDeviceMakeCompatibleIds @ 0x1409F3F3C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwDeviceMakeCompatibleIds(__int64 a1, __int64 *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 Pool2; // rax
  __int64 v9; // r12
  _WORD *v10; // r14
  _OWORD *v11; // rsi
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // r15

  v2 = *(const wchar_t **)(a1 + 32);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    while ( *v2 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v2[v13] );
      v14 = v13 + 1;
      if ( wcsicmp(v2, &PiSwGenericRawCompatibleId) && wcsicmp(v2, &PiSwGenericCompatibleId) )
        v6 += 2 * v14;
      v2 += v14;
    }
  }
  v7 = v6 + 30;
  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    v7 = v6;
  Pool2 = ExAllocatePool2(0x100uLL, v7 + 26, 0x57706E50u);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = *(_WORD **)(a1 + 32);
    v11 = (_OWORD *)Pool2;
    if ( v10 )
    {
      while ( *v10 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( v10[v15] );
        v16 = v15 + 1;
        if ( wcsicmp(v10, &PiSwGenericRawCompatibleId) && wcsicmp(v10, &PiSwGenericCompatibleId) )
        {
          memmove(v11, v10, 2 * v16);
          v11 = (_OWORD *)((char *)v11 + 2 * v16);
        }
        v10 += v16;
      }
    }
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *v11 = *(_OWORD *)&PiSwGenericRawCompatibleId;
      *((_QWORD *)v11 + 2) = 0x52006300690072LL;
      *((_DWORD *)v11 + 6) = 7798881;
      *((_WORD *)v11 + 14) = 0;
      v11 = (_OWORD *)((char *)v11 + 30);
    }
    *v11 = *(_OWORD *)&PiSwGenericCompatibleId;
    *((_QWORD *)v11 + 2) = 0x6300690072LL;
    *((_WORD *)v11 + 12) = 0;
  }
  else
  {
    v3 = -1073741670;
  }
  result = v3;
  *a2 = v9;
  return result;
}
