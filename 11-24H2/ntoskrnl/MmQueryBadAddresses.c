/*
 * XREFs of MmQueryBadAddresses @ 0x14096FEB8
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiUpdateBadPfnIdentity @ 0x140675B60 (MiUpdateBadPfnIdentity.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiDeleteTrimViewInfoList @ 0x140A42F00 (MiDeleteTrimViewInfoList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmQueryBadAddresses(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  _QWORD *v6; // r14
  unsigned __int64 v7; // rsi
  signed int ListOfPendingBadPages; // ebx
  unsigned __int64 v9; // r12
  __int64 Pool; // rax
  __int64 *v11; // r13
  _QWORD *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r12
  unsigned int v16; // r15d
  int updated; // eax
  __int64 *v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // r11d
  int v21; // eax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdx
  void *v27; // rdx
  _QWORD *i; // rcx
  PVOID v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-98h]
  PVOID P[2]; // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+60h] [rbp-68h]
  int v35; // [rsp+64h] [rbp-64h]
  unsigned __int64 v36; // [rsp+68h] [rbp-60h]
  unsigned __int64 v37; // [rsp+70h] [rbp-58h]
  __int128 v38; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+E8h] [rbp+20h]
  int v43; // [rsp+E8h] [rbp+20h]

  v5 = a3;
  v38 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v34 = 0;
  P[1] = P;
  P[0] = P;
  v6 = 0LL;
  v7 = 0LL;
  ListOfPendingBadPages = 0;
  v9 = a4 >> 4;
  v42 = a4 >> 4;
  v37 = a4 >> 4;
  if ( !qword_140E30008 )
  {
LABEL_49:
    if ( ListOfPendingBadPages < 0 )
      goto LABEL_51;
    goto LABEL_50;
  }
  ListOfPendingBadPages = MiGetListOfPendingBadPages((__int64)P);
  if ( v34 < 0 )
  {
    ListOfPendingBadPages = v34;
    goto LABEL_49;
  }
  if ( v36 )
  {
    if ( v36 > 0xAAAAAAAAAAAAAAALL
      || (Pool = MiAllocatePool(0x40uLL, 24 * v36, 1816291661), (v6 = (_QWORD *)Pool) == 0LL) )
    {
LABEL_6:
      ListOfPendingBadPages = -1073741670;
      goto LABEL_51;
    }
    v11 = (__int64 *)Pool;
    v32 = 0LL;
    while ( 1 )
    {
      v12 = P[0];
      if ( P[0] == P )
        break;
      v13 = *(_QWORD *)P[0];
      if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
LABEL_57:
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v13 + 8) = P;
      if ( v12[2] )
      {
        v14 = v32;
        v15 = (_QWORD *)v12[3];
        v16 = 0;
        do
        {
          updated = MiUpdateBadPfnIdentity(*v15 & 0xFFFFFFFFFFFFFLL, v11);
          v18 = v11 + 3;
          if ( !updated )
            v18 = v11;
          v11 = v18;
          v19 = v14 + 1;
          if ( !updated )
            v19 = v14;
          v14 = v19;
          ++v15;
          ++v16;
        }
        while ( (unsigned __int64)v16 < v12[2] );
        v32 = v19;
        v7 = 0LL;
        v5 = a3;
        v9 = v42;
      }
      ExFreePoolWithTag(v12, 0);
    }
    v20 = *(_DWORD *)(a1 + 464);
    v43 = v20;
    v21 = a2;
    if ( a2 == 13 )
      DWORD1(v38) = 1;
    else
      LODWORD(v38) = *(_DWORD *)(a1 + 464);
    v22 = 0LL;
    v23 = v32;
    while ( 1 )
    {
      if ( v22 >= v23 )
        goto LABEL_49;
      v24 = v6[3 * v22 + 1];
      if ( v24 != -1 )
      {
        if ( v21 == 13 || (v21 = a2, (v6[3 * v22] & 0xF) != 0xE) )
        {
          v25 = (v6[3 * v22] >> 7) & 1LL;
          v26 = v6[3 * v22] & 0xFLL;
          if ( v26 == 14 )
          {
            if ( v7 < v9 )
            {
              *v5 = v24;
              v5[1] = v25 | 2;
              v5 += 2;
            }
            ++v7;
          }
          else
          {
            if ( (unsigned __int64)(v26 - 1) <= 1 || v26 == 8 )
            {
              if ( (int)MiLocateSharedPageViews(v6[3 * v22 + 1], (__int64)&v38, a1) < 0 )
                goto LABEL_6;
              v27 = (void *)*((_QWORD *)&v38 + 1);
              for ( i = (_QWORD *)*((_QWORD *)&v38 + 1); i; i = (_QWORD *)*i )
              {
                if ( v7 < v9 )
                {
                  *v5 = i[2];
                  v5[1] = v25;
                  v5 += 2;
                }
                ++v7;
              }
              MiDeleteTrimViewInfoList(v27);
              v23 = v32;
              v20 = v43;
              goto LABEL_47;
            }
            if ( v20 == ((v6[3 * v22] >> 9) & 0xFFFFFFFFFFFFLL) || (v21 = a2, a2 == 13) )
            {
              if ( v7 < v9 )
              {
                *v5 = v6[3 * v22 + 2];
                v5[1] = v25;
                v5 += 2;
              }
              ++v7;
LABEL_47:
              v21 = a2;
            }
          }
        }
      }
      ++v22;
    }
  }
LABEL_50:
  ListOfPendingBadPages = v9 < v7 ? 0xC0000023 : 0;
LABEL_51:
  if ( a5 )
    *a5 = 16 * v7;
  while ( 1 )
  {
    v29 = P[0];
    if ( P[0] == P )
      break;
    v30 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v30 + 8) != P[0] )
      goto LABEL_57;
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v30 + 8) = P;
    ExFreePoolWithTag(v29, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)ListOfPendingBadPages;
}
