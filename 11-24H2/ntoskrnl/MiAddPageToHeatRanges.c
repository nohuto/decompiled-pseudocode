/*
 * XREFs of MiAddPageToHeatRanges @ 0x14043F904
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiReplenishPageSlist @ 0x1404F40C0 (MiReplenishPageSlist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddPageToHeatRanges(unsigned int *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned __int64 *v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // ecx

  v3 = a1[1];
  v4 = 0;
  if ( (_DWORD)v3 )
    v7 = (unsigned __int64 *)&a1[2 * (unsigned int)(v3 - 1) + 4];
  else
    v7 = 0LL;
  if ( a3 == 3 )
  {
    if ( v7 )
    {
      v8 = *v7;
      if ( (*v7 & 0xC00) == 0 && (*v7 & 0x3FF) != 0x3FF )
      {
        v9 = (*v7 & 0x3FF) + 1;
        if ( a2 == v9 + (v8 >> 12) )
        {
          *v7 = v9 ^ (v9 ^ v8) & 0xFFFFFFFFFFFFFC00uLL;
          return 0LL;
        }
        if ( a2 == (v8 >> 12) - 1 )
        {
          *v7 = v9 & 0x3FF | (a2 << 12);
          return 0LL;
        }
      }
    }
  }
  v11 = a2 << 12;
  *(_QWORD *)&a1[2 * v3 + 4] = v11;
  if ( a3 != 3 )
  {
    if ( a3 == 2 )
    {
      v12 = v11 | 0xF;
    }
    else if ( a3 == 1 )
    {
      v12 = v11 | 0x400;
    }
    else
    {
      v12 = v11 | 0x800;
    }
    *(_QWORD *)&a1[2 * v3 + 4] = v12;
  }
  v13 = *a1;
  LOBYTE(v4) = ++a1[1] == v13 >> 3;
  return v4;
}
