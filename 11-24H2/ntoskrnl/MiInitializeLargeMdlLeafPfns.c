/*
 * XREFs of MiInitializeLargeMdlLeafPfns @ 0x1404A6B00
 * Callers:
 *     MiDoGangAssignment @ 0x14026FEE4 (MiDoGangAssignment.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiInitializeMdlLeafPfns @ 0x140393570 (MiInitializeMdlLeafPfns.c)
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MiInitializeLargeMdlLeafPfns(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  int v4; // r8d
  int DemandZeroPte; // ebx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int64 LeafPfnBuddy; // r12
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v13; // r14d
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  _QWORD *v17; // rbp
  _QWORD *v18; // rcx
  _QWORD *v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 *v21; // rdi
  int v23; // [rsp+38h] [rbp-A0h]
  _QWORD v24[12]; // [rsp+40h] [rbp-98h] BYREF

  v2 = *(_QWORD *)(a2 + 72);
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 56);
  v23 = v2;
  if ( (v4 & 0x80000200) != 0 )
    DemandZeroPte = 0;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4);
  v7 = (_QWORD *)*a1;
  if ( v4 >= 0 )
    goto LABEL_4;
  if ( (v4 & 0x1000) != 0 )
  {
    v10 = 2;
  }
  else if ( (v4 & 0x1000000) != 0 )
  {
    v10 = 1;
  }
  else
  {
    if ( (v4 & 0x2000000) == 0 )
      goto LABEL_4;
    v10 = 0;
  }
  memset_0(v24, 0, sizeof(v24));
  if ( v7 )
  {
    do
    {
      LeafPfnBuddy = MiGetLeafPfnBuddy(v7);
      PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v7);
      v13 = PfnPageSizeIndex;
      if ( PfnPageSizeIndex != v10 )
      {
        v14 = v24;
        v15 = 4LL;
        do
        {
          v14[2] = 0LL;
          v14[1] = v14;
          *v14 = v14;
          v14 += 3;
          --v15;
        }
        while ( v15 );
        v16 = PfnPageSizeIndex;
        v17 = &v24[3 * PfnPageSizeIndex];
        v18 = (_QWORD *)v17[1];
        if ( (_QWORD *)*v18 != v17 )
          __fastfail(3u);
        *v7 = v17;
        v7[1] = v18;
        *v18 = v7;
        v17[1] = v7;
        ++v24[3 * PfnPageSizeIndex + 2];
        while ( v13 < v10 )
        {
          while ( (_QWORD *)*v17 != v17 )
            MiDemotePfnListChain(v24, v10);
          ++v13;
          v17 += 3;
        }
        v19 = &v7[6 * MiPageSizes[v16]];
        if ( v7 != v19 )
        {
          do
          {
            v20 = (unsigned __int64)&v7[6 * MiPageSizes[v10]];
            *v7 = (2 * (v20 >> 4)) ^ (*v7 ^ (2 * (v20 >> 4))) & 0xFFFFF00000000001uLL;
            v7 = (_QWORD *)v20;
          }
          while ( (_QWORD *)v20 != v19 );
        }
        v21 = &v7[-6 * MiPageSizes[v10]];
        *v21 = (2 * (LeafPfnBuddy >> 4)) ^ (*v21 ^ (2 * (LeafPfnBuddy >> 4))) & 0xFFFFF00000000001uLL;
      }
      v7 = (_QWORD *)LeafPfnBuddy;
    }
    while ( LeafPfnBuddy );
    v3 = a2;
    LODWORD(v2) = v23;
  }
  v7 = (_QWORD *)*a1;
  do
  {
LABEL_4:
    if ( !v7 )
      break;
    v8 = (*v7 & 0xFFFFFFFFFFELL) != 0 ? 8 * (*v7 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL) : 0LL;
    *a1 = v8;
    v9 = MiGetPfnPageSizeIndex((__int64)v7);
    MiInitializeMdlLeafPfns((__int64)v7, MiPageSizes[v9], v2, DemandZeroPte, *(_DWORD *)(v3 + 56));
    v7 = (_QWORD *)v8;
    if ( !v8 )
      break;
  }
  while ( !KeShouldYieldProcessor() );
}
