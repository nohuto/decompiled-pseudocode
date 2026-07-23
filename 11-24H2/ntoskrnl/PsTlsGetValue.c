/*
 * XREFs of PsTlsGetValue @ 0x1409E1650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsTlsGetValue(int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v4; // r9
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // r11
  __int64 v8; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)&CurrentThread[1].UserAffinityPrimaryGroup & 3) != 0 )
  {
    return (unsigned int)-1073741749;
  }
  else
  {
    v4 = *(_QWORD *)&CurrentThread[1].UserAffinityPrimaryGroup;
    if ( (unsigned int)(a1 - 1) > 0xEE )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v5 = 0;
      if ( v4 )
      {
        v6 = a1 + 16;
        _BitScanReverse((unsigned int *)&a1, a1 + 16);
        v7 = *(_QWORD *)(v4 + 8LL * (unsigned int)(a1 - 4));
        if ( v7 )
          v8 = *(_QWORD *)(v7 + 24LL * (v6 ^ (unsigned int)(1 << a1)) + 8);
        else
          v8 = 0LL;
        *a2 = v8;
      }
      else
      {
        *a2 = 0LL;
      }
    }
  }
  return v5;
}
