/*
 * XREFs of MiUnlinkProtectedStandbyPfn @ 0x140224F70
 * Callers:
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 * Callees:
 *     MiDecayNodeNowEmpty @ 0x140225138 (MiDecayNodeNowEmpty.c)
 */

__int64 __fastcall MiUnlinkProtectedStandbyPfn(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r10
  BOOL v4; // edi
  unsigned __int64 *v5; // r11
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  signed __int64 v9; // rdx
  __int64 result; // rax
  signed __int64 i; // r8
  signed __int64 v12; // rcx

  v1 = a1[3];
  v2 = *a1 & 0xFFFFFFFFFFLL;
  v3 = v1 & 0xFFFFFFFFFFLL;
  v4 = 0;
  if ( (v1 & 0xFFFFFFFFFFuLL) >= qword_140E35C40 && v3 < qword_140E35C40 + 2048 )
    v4 = v2 == v3;
  v5 = (unsigned __int64 *)(48 * v3 - 0x220000000000LL);
  if ( v3 < qword_140E35C40 || v3 >= qword_140E35C40 + 2048 )
  {
    *v5 = *a1 ^ (*v5 ^ *a1) & 0xFFFFFF0000000000uLL;
  }
  else
  {
    v6 = (v2 << 12) | 0x880;
    if ( qword_140E2DCC0 )
    {
      v7 = (v2 << 12) | 0x890;
      if ( (qword_140E2DCC0 & v6) == 0 )
        v7 = qword_140E2DCC0 | (v2 << 12) | 0x880;
      v6 = v7;
    }
    v5[2] = v6;
  }
  v8 = 48 * v2 - 0x220000000000LL;
  if ( v2 >= qword_140E35C40 && v2 < qword_140E35C40 + 2048 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v8 + 40),
               v1 ^ (v1 ^ v9) & 0xFFFFFF0000000000uLL,
               v9);
    i = result;
    if ( v9 != result )
    {
      do
      {
        v12 = i;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v8 + 40),
                   v1 ^ (v1 ^ i) & 0xFFFFFF0000000000uLL,
                   i);
        i = result;
      }
      while ( v12 != result );
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 24);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v8 + 24),
               v1 ^ (v1 ^ v9) & 0xFFFFFF0000000000uLL,
               v9);
    for ( i = result; v9 != result; i = result )
    {
      v9 = i;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(v8 + 24),
                 v1 ^ (v1 ^ i) & 0xFFFFFF0000000000uLL,
                 i);
    }
  }
  if ( v4 )
    return MiDecayNodeNowEmpty(v3, v9, i);
  return result;
}
