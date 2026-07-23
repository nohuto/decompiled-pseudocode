/*
 * XREFs of KiIntSteerCalculatePriorityDistribution @ 0x1402B20C0
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x1402B1990 (KiIntSteerCalculateDistribution.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402B2334 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

int __fastcall KiIntSteerCalculatePriorityDistribution(char *a1, _QWORD **a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int16 v5; // ax
  __int64 v6; // rbp
  char *v7; // r14
  __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // r13
  unsigned __int16 v12; // ax
  _QWORD *v13; // rax
  _DWORD *v14; // rcx
  unsigned int v15; // r9d
  signed __int64 v16; // r10
  __int64 v17; // r8
  _QWORD *v18; // rbx
  __int128 *v19; // rdi
  unsigned int v20; // esi
  __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  char v25; // al
  unsigned int v26; // edx
  _QWORD v28[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v29; // [rsp+30h] [rbp-78h] BYREF
  __int128 v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]

  v5 = *((_WORD *)a3 + 4);
  v6 = *a3;
  v7 = a1;
  v9 = *a4;
  v29 = 0LL;
  WORD4(v29) = v5;
  v10 = *((_WORD *)a4 + 4);
  v11 = *a5;
  *(_QWORD *)&v29 = v6;
  v30 = 0LL;
  WORD4(v30) = v10;
  v12 = *((_WORD *)a5 + 4);
  *(_QWORD *)&v30 = v9;
  v32 = v12;
  v31 = v11;
  if ( !a1 )
  {
    v7 = (char *)KiIntSteerDistributionContext;
    memset_0((char *)KiIntSteerDistributionContext + 260, 0, 0x100uLL);
  }
  LODWORD(v13) = KeQueryActiveProcessorCountEx(0);
  if ( (_DWORD)v13 )
  {
    v14 = KiGlobalState;
    v15 = *(_DWORD *)v7;
    v16 = v7 - (_BYTE *)KiGlobalState;
    v17 = (unsigned int)v13;
    do
    {
      if ( v15 <= *(_DWORD *)((char *)v14 + v16 + 4) )
      {
        v25 = *v14 & 0x3F;
        v26 = *v14 & 0x3F;
        v6 &= ~(1LL << v25);
        v9 &= ~(1LL << v25);
        *(_QWORD *)&v29 = v6;
        LODWORD(v13) = v26;
        _bittestandreset64(&v11, v26);
        *(_QWORD *)&v30 = v9;
        v31 = v11;
      }
      ++v14;
      --v17;
    }
    while ( v17 );
  }
  v18 = *a2;
  if ( *a2 == a2 )
    return (int)v13;
  do
  {
    LODWORD(v13) = -1;
    v19 = &v29;
    v20 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v19 )
      {
        v21 = *(v18 - 18) & *(_QWORD *)v19;
        v28[1] = *((unsigned __int16 *)v19 + 4);
        v28[0] = v21;
        if ( !v21 )
        {
          LODWORD(v13) = -1;
          goto LABEL_19;
        }
        LODWORD(v13) = KiIntPartGetLowestClassProcessorInMask(v28);
        if ( (_DWORD)v13 != -1 )
          break;
      }
LABEL_19:
      ++v20;
      ++v19;
      if ( v20 >= 3 )
        goto LABEL_22;
    }
    *(_DWORD *)&v7[4 * (unsigned int)v13 + 260] += 10000LL
                                                 * *(v18 - 2)
                                                 / (KiIntSteerPreviousPerfSnapDelta
                                                  * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[(unsigned int)v13]
                                                                                      + 68));
    if ( *(_DWORD *)v7 <= (unsigned int)(*(_DWORD *)&v7[4 * (unsigned int)v13 + 4]
                                       + *(_DWORD *)&v7[4 * (unsigned int)v13 + 260]) )
    {
      v24 = *((_DWORD *)KiGlobalState + (unsigned int)v13) & 0x3F;
      v6 &= ~(1LL << (*((_BYTE *)KiGlobalState + 4 * (unsigned int)v13) & 0x3F));
      v9 &= ~(1LL << (*((_BYTE *)KiGlobalState + 4 * (unsigned int)v13) & 0x3F));
      *(_QWORD *)&v29 = v6;
      v11 &= ~(1LL << v24);
      *(_QWORD *)&v30 = v9;
      v31 = v11;
    }
    v22 = *((_DWORD *)KiGlobalState + (unsigned int)v13);
    *(_DWORD *)((char *)v18 - 22) = 0;
    *((_WORD *)v18 - 9) = 0;
    *((_WORD *)v18 - 12) = v22 >> 6;
    *(v18 - 4) = 1LL << (v22 & 0x3F);
    v23 = *v18;
    v13 = (_QWORD *)v18[1];
    if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v13 != v18 )
      __fastfail(3u);
    *v13 = v23;
    *(_QWORD *)(v23 + 8) = v13;
LABEL_22:
    v18 = (_QWORD *)*v18;
  }
  while ( v18 != a2 );
  return (int)v13;
}
