/*
 * XREFs of PiSwDeviceMakeCompatibleIds @ 0x140A6B768
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwDeviceMakeCompatibleIds(__int64 a1, __int64 *a2)
{
  const wchar_t *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 Pool2; // rax
  __int64 v8; // r12
  _WORD *v9; // r14
  _OWORD *v10; // rsi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r15

  v2 = *(const wchar_t **)(a1 + 32);
  v3 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    while ( *v2 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v2[v12] );
      v13 = v12 + 1;
      if ( wcsicmp(v2, &PiSwGenericRawCompatibleId) && wcsicmp(v2, &PiSwGenericCompatibleId) )
        v6 += 2 * v13;
      v2 += v13;
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( Pool2 )
  {
    v9 = *(_WORD **)(a1 + 32);
    v10 = (_OWORD *)Pool2;
    if ( v9 )
    {
      while ( *v9 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v9[v14] );
        v15 = v14 + 1;
        if ( wcsicmp(v9, &PiSwGenericRawCompatibleId) && wcsicmp(v9, &PiSwGenericCompatibleId) )
        {
          memmove(v10, v9, 2 * v15);
          v10 = (_OWORD *)((char *)v10 + 2 * v15);
        }
        v9 += v15;
      }
    }
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *v10 = *(_OWORD *)&PiSwGenericRawCompatibleId;
      *((_QWORD *)v10 + 2) = 0x52006300690072LL;
      *((_DWORD *)v10 + 6) = 7798881;
      *((_WORD *)v10 + 14) = 0;
      v10 = (_OWORD *)((char *)v10 + 30);
    }
    *v10 = *(_OWORD *)&PiSwGenericCompatibleId;
    *((_QWORD *)v10 + 2) = 0x6300690072LL;
    *((_WORD *)v10 + 12) = 0;
  }
  else
  {
    v3 = -1073741670;
  }
  result = v3;
  *a2 = v8;
  return result;
}
