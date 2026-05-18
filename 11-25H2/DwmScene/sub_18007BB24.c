/*
 * XREFs of sub_18007BB24 @ 0x18007BB24
 * Callers:
 *     sub_18004D35C @ 0x18004D35C (sub_18004D35C.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180078568 @ 0x180078568 (sub_180078568.c)
 *     sub_180078770 @ 0x180078770 (sub_180078770.c)
 *     sub_1800789B4 @ 0x1800789B4 (sub_1800789B4.c)
 *     sub_180078B0C @ 0x180078B0C (sub_180078B0C.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079CCC @ 0x180079CCC (sub_180079CCC.c)
 *     sub_180079DE0 @ 0x180079DE0 (sub_180079DE0.c)
 *     sub_18007A1E0 @ 0x18007A1E0 (sub_18007A1E0.c)
 */

__int64 __fastcall sub_18007BB24(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r9
  const void *v14; // rdx
  Spectre::Utils::SpectreException *v17; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v18[56]; // [rsp+30h] [rbp-58h] BYREF

  sub_180079DE0(*(_QWORD *)(a1 + 16));
  try
  {
    v4 = (unsigned __int16)sub_18007965C(*(_QWORD *)(a1 + 16), a2, 1);
    v5 = *(_QWORD *)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v17 )
  {
    sub_180079CCC(*(_QWORD *)(a1 + 16));
    sub_1800171A8((__int64)v18, (__int64)v17);
    throw (Spectre::Utils::SpectreException *)v18;
  }
  sub_180079CCC(v5);
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v6 + 1242);
  v7 = *(_QWORD *)(v6 + 56) + 56LL * *(unsigned __int16 *)(v6 + 2 * v4 + 128);
  if ( *(_DWORD *)(v7 + 36) != 8 )
  {
    v8 = (unsigned int)((__int64)(*(_QWORD *)(v6 + 88) - *(_QWORD *)(v6 + 80)) >> 2);
    v9 = *(_QWORD *)(a1 + 32);
    v10 = (*(_QWORD *)(a1 + 40) - v9) >> 2;
    if ( v8 < v10 )
    {
      v11 = v9 + 4 * v8;
LABEL_12:
      *(_QWORD *)(a1 + 40) = v11;
      goto LABEL_13;
    }
    if ( v8 > v10 )
    {
      if ( v8 <= (*(_QWORD *)(a1 + 48) - v9) >> 2 )
      {
        v11 = sub_180078B0C(*(_QWORD *)(a1 + 40), v8 - v10, a1 + 32);
        goto LABEL_12;
      }
      sub_1800789B4((const void **)(a1 + 32), v8, v9);
    }
LABEL_13:
    v12 = sub_18007A1E0(*(_DWORD *)(v7 + 36));
    memmove((void *)(*(_QWORD *)(a1 + 32) + 4 * v13), v14, 4LL * v12);
    ++*(_DWORD *)(a1 + 80);
    return (unsigned __int16)v4;
  }
  if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 72) )
  {
    sub_180078770((__int64 *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(v6 + 104) + 40LL * *(unsigned int *)(v7 + 40));
  }
  else
  {
    sub_180078568();
    *(_QWORD *)(a1 + 64) += 40LL;
  }
  return (unsigned __int16)v4;
}
