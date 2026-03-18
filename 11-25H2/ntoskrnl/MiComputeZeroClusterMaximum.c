/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x1403C2038
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1403C2290 (MiGetAvailablePagesBelowPriority.c)
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdi
  _QWORD *v9; // r10
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned int v16; // ecx
  __int64 v17; // r9
  _QWORD *v18; // rsi
  unsigned int i; // r8d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v24; // rcx

  v3 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v7 = (((unsigned __int64)(*(_DWORD *)v6 & 0xFFF) + *(_QWORD *)(v6 + 8) + 4095LL) >> 12) - v3;
  v8 = *(_QWORD *)v6 + (v3 << 12);
  if ( a3 )
  {
    v24 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12);
    if ( v7 > v24 + 1 )
      v7 = v24 + 1;
  }
  v9 = (_QWORD *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a2 + 174));
  v10 = *(_QWORD *)(v9[2200] + 312LL);
  if ( v10 > 0x4E20 && (v10 & 0xFFFFFFFFFFFFFFFEuLL) > 0x4E20 )
    v11 = v10 >> 1;
  else
    v11 = 10000LL;
  v12 = v9[2336];
  v13 = v11 >> 1;
  if ( v12 < v13 )
  {
    v14 = 0;
    v15 = v9[2] + 14944LL;
    while ( v14 < (unsigned __int16)KeNumberNodes )
    {
      v16 = dword_140E2D98C;
      v17 = 0LL;
      v18 = (_QWORD *)v15;
      while ( v17 <= 1 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v12 += *(unsigned __int16 *)(*v18 + 16LL * i);
          if ( v12 >= v13 )
            goto LABEL_13;
          v16 = dword_140E2D98C;
        }
        ++v17;
        ++v18;
      }
      v15 += 57216LL;
      ++v14;
    }
    v7 = 1LL;
  }
LABEL_13:
  if ( (*(_DWORD *)(a2 + 184) & 0x40) != 0 )
  {
    v20 = *(_QWORD *)(a2 + 128);
    v21 = *(_QWORD *)(a2 + 120);
    if ( v20 >= v21 )
      return 1LL;
    if ( v20 + v7 > v21 )
      v7 = v21 - v20;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v9, ((*(_DWORD *)(a1 + 80) >> 3) & 7u) + 1);
    if ( v7 > AvailablePagesBelowPriority )
      v7 = AvailablePagesBelowPriority;
  }
  if ( !v7 )
    v7 = 1LL;
  result = 512 - ((((v8 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v7 <= result )
    return v7;
  return result;
}
