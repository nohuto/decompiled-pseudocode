/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x140968810
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140967F8C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapExtendStorage @ 0x140968314 (HvpViewMapExtendStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14096AEDC (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404631DC (CmSiProtectViewOfSection.c)
 *     CmSiPrefetchVirtualMemoryRange @ 0x140483CEC (CmSiPrefetchVirtualMemoryRange.c)
 *     HvpViewMapTouchPages @ 0x1409687BC (HvpViewMapTouchPages.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140968A90 (HvpViewMapAcquireChargesAndLockViewPages.c)
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
  void ***v16; // r12
  _DWORD *v17; // r9
  char v18; // al
  _DWORD *v19; // r10
  int v20; // eax
  ULONG_PTR v21; // rcx
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
    if ( (*v15 & 2) != 0 )
    {
      v16 = v5;
      if ( a5 )
      {
        if ( (int)HvpViewMapAcquireChargesAndLockViewPages(v14, *v5, v8, v7) >= 0 )
        {
          v17 = v31;
          v18 = 1;
          a2[8] += v7 >> 12;
          *v17 |= 4u;
LABEL_6:
          v19 = (_DWORD *)(a1 + 32);
          goto LABEL_9;
        }
        v16 = (void ***)(a1 + 24);
      }
      v13 = CmSiProtectViewOfSection(v14, *v5, v8, v7, 8u, (ULONG *)&v30);
      if ( v13 >= 0 )
      {
        v13 = HvpViewMapTouchPages(v8, v7, 1);
        if ( v13 >= 0 )
        {
          CmSiProtectViewOfSection(v21, *v5, v8, v7, 2u, (ULONG *)&v30);
          v18 = 0;
          v17 = v31;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v20 = HvpViewMapTouchPages(v8, v7, 0);
      v19 = v15;
      v16 = v5;
      v13 = v20;
      if ( v20 >= 0 )
      {
        v18 = 0;
        v17 = v19;
LABEL_9:
        v22 = a3;
        if ( a3 < a4 )
        {
          if ( v18 )
          {
            do
            {
              v23 = (unsigned __int64)(v22 - a2[3]) >> 12;
              v24 = *((_BYTE *)a2 + v23 + 72);
              *((_BYTE *)a2 + v23 + 72) = v24 | 1;
              if ( (*v17 & 2) != 0 )
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
              if ( (*v19 & 2) != 0 )
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
    }
    CmSiProtectViewOfSection(v21, *v16, v8, v7, 0x80000001, (ULONG *)&v30);
  }
  return (unsigned int)v13;
}
