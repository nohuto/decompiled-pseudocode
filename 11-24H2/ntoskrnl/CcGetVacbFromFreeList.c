/*
 * XREFs of CcGetVacbFromFreeList @ 0x140425B70
 * Callers:
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     CcInitializePartitionVacbs @ 0x14057A840 (CcInitializePartitionVacbs.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 *__fastcall CcGetVacbFromFreeList(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 *v3; // rdx
  int *v4; // r9
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 **v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  _DWORD *v11; // r8

  result = 0LL;
  if ( a2 )
  {
    v3 = (__int64 *)(a1 + 1232);
    v4 = (int *)(a1 + 1248);
  }
  else
  {
    v3 = &CcVacbFreeList;
    v4 = &CcNumberOfFreeVacbs;
  }
  v5 = (__int64 *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    v6 = *v5;
    result = v5 - 2;
    ++CcNumberOfMappedVacbs;
    if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !*v4 )
      KeBugCheckEx(0x34u, 0x394uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*v4;
    v8 = result[4];
    v9 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)result - v8 - 16) >> 3);
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)(v8 + 8) = v9;
    if ( !*result )
    {
      v10 = *(unsigned int *)result[4];
      v11 = *(_DWORD **)(CcVacbArrays + 8 * v10);
      if ( v11 )
      {
        ++v11[1];
        if ( *v11 != (_DWORD)v10 )
          KeBugCheckEx(0x34u, 0x176uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
    }
    result[1] = -1LL;
  }
  return result;
}
