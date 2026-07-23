/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x140883560
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x14088274C (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x1408834A4 (HvpViewMapExtendStorage.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140884B94 (HvpViewMapCreateViewsForRegion.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x14046BB00 (CmSiProtectViewOfSection.c)
 *     CmSiPrefetchVirtualMemoryRange @ 0x1404893D4 (CmSiPrefetchVirtualMemoryRange.c)
 *     HvpViewMapTouchPages @ 0x140882A78 (HvpViewMapTouchPages.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140A4D5D8 (HvpViewMapAcquireChargesAndLockViewPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeValid(ULONG_PTR a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  void ***v5; // r13
  __int64 v6; // rbp
  SIZE_T v7; // rdi
  _BYTE *v8; // rbp
  int v13; // esi
  ULONG_PTR v14; // rcx
  _DWORD *v15; // r12
  int v16; // eax
  ULONG_PTR v17; // rcx
  _DWORD *v18; // r10
  void ***v19; // r12
  char v20; // al
  _DWORD *v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  char v24; // r8
  __int64 v25; // rax
  unsigned __int64 v27; // rdx
  char v28; // r8
  __int64 v30; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v31; // [rsp+98h] [rbp+20h]

  v5 = (void ***)(a1 + 24);
  v6 = a2[7] - a2[3];
  LODWORD(v30) = 0;
  v7 = a4 - a3;
  v8 = (_BYTE *)(a3 + v6);
  v13 = CmSiProtectViewOfSection(a1, *(void ***)(a1 + 24), v8, a4 - a3, 2u, (ULONG *)&v30);
  if ( v13 >= 0 )
  {
    CmSiPrefetchVirtualMemoryRange(*v5, v8, v7);
    v15 = (_DWORD *)(a1 + 32);
    v31 = v15;
    if ( (*v15 & 2) == 0 )
    {
      v16 = HvpViewMapTouchPages(v8, v7, 0);
      v18 = v15;
      v19 = v5;
      v13 = v16;
      if ( v16 >= 0 )
      {
        v20 = 0;
        v21 = v18;
        goto LABEL_5;
      }
LABEL_29:
      CmSiProtectViewOfSection(v17, *v19, v8, v7, 0x80000001, (ULONG *)&v30);
      return (unsigned int)v13;
    }
    v19 = v5;
    if ( a5 )
    {
      if ( (int)HvpViewMapAcquireChargesAndLockViewPages(v14, *v5, v8, v7) >= 0 )
      {
        v21 = v31;
        v20 = 1;
        a2[8] += v7 >> 12;
        *v21 |= 4u;
        goto LABEL_19;
      }
      v19 = (void ***)(a1 + 24);
    }
    v13 = CmSiProtectViewOfSection(v14, *v5, v8, v7, 8u, (ULONG *)&v30);
    if ( v13 < 0 )
      goto LABEL_29;
    v13 = HvpViewMapTouchPages(v8, v7, 1);
    if ( v13 < 0 )
      goto LABEL_29;
    CmSiProtectViewOfSection(v17, *v5, v8, v7, 2u, (ULONG *)&v30);
    v20 = 0;
    v21 = v31;
LABEL_19:
    v18 = (_DWORD *)(a1 + 32);
LABEL_5:
    v22 = a3;
    if ( a3 < a4 )
    {
      if ( v20 )
      {
        do
        {
          v23 = (unsigned __int64)(v22 - a2[3]) >> 12;
          v24 = *((_BYTE *)a2 + v23 + 72);
          *((_BYTE *)a2 + v23 + 72) = v24 | 1;
          if ( (*v21 & 2) != 0 )
            *((_BYTE *)a2 + v23 + 72) = v24 | 0x11;
          v22 += 4096LL;
        }
        while ( v22 < a4 );
      }
      else
      {
        do
        {
          v27 = (unsigned __int64)(v22 - a2[3]) >> 12;
          v28 = *((_BYTE *)a2 + v27 + 72);
          *((_BYTE *)a2 + v27 + 72) = v28 | 1;
          if ( (*v18 & 2) != 0 )
            *((_BYTE *)a2 + v27 + 72) = v28 | 5;
          v22 += 4096LL;
        }
        while ( v22 < a4 );
      }
    }
    v25 = a2[5];
    if ( v25 || a2[6] )
    {
      if ( v25 == a4 )
      {
        a2[5] = a3;
        return 0;
      }
      if ( a2[6] != a3 )
        return 0;
    }
    else
    {
      a2[5] = a3;
    }
    a2[6] = a4;
    return 0;
  }
  return (unsigned int)v13;
}
