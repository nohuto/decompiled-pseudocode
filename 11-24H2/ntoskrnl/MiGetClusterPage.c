/*
 * XREFs of MiGetClusterPage @ 0x1404CBFA4
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInitializePageChainPacket @ 0x1402F4870 (MiInitializePageChainPacket.c)
 *     MiIsPteEvaluated @ 0x140305E8C (MiIsPteEvaluated.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiComputeZeroClusterMaximum @ 0x14043CB7C (MiComputeZeroClusterMaximum.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiGetClusterPage(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned int v10; // esi
  unsigned int *p_Blink; // r14
  unsigned __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 *v18; // r15
  __int64 ProtoPteAddress; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 j; // r14
  bool v27; // zf
  unsigned __int64 v28; // rdx
  int IsPteEvaluated; // eax
  __int64 v30; // r15
  int v31; // eax
  __int64 LargePage; // rax
  __int64 v33; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r12
  int v38; // eax
  __int64 v39; // r9
  __int64 *v40; // r8
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+7Ch] [rbp-84h]
  unsigned __int64 v44[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  unsigned int *v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 *v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v51; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  _QWORD v56[11]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v57[16]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  _QWORD v59[16]; // [rsp+1C0h] [rbp+C0h]

  v48 = a2;
  v42 = a5;
  v43 = a3;
  v47 = a4;
  v45 = a7;
  v49 = a8;
  v50 = 0LL;
  memset_0(&v51, 0, 0x78uLL);
  v10 = 0;
  v41 = 0LL;
  memset_0(v56, 0, 0x70uLL);
  *(_OWORD *)a8 = 0LL;
  a8[2] = 0LL;
  p_Blink = (unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v12 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  v46 = p_Blink;
  v44[0] = a2 & 0xFFFFFFFFFFFF0000uLL;
  v44[1] = 0x10000LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) >> 12 < v12
    || ((a2 & 0xFFFFFFFFFFFF0000uLL) + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v13 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
  MiInitializePageColorBase((__int64)p_Blink, 3, v13, (__int64)&v50);
  v14 = 1LL;
  v15 = (DWORD2(v50) >> 9) & 0x3F;
  v51 = 2;
  v27 = (*(_DWORD *)(a1 + 48) & 0x200000) == 0;
  v52 = v44;
  v53 = 1LL;
  v54 = 0LL;
  v55 = 0LL;
  if ( v27 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 8u, &v41);
    v20 = *(_QWORD *)(v41 + 8);
    v21 = ((a2 & 0xFFFFFFFFFFFFF000uLL) - v44[0]) >> 12;
    v22 = v20 + 8 * (*(unsigned int *)(v41 + 44) - (unsigned __int64)(*(_DWORD *)(v41 + 52) & 0x3FFFFFFF));
    if ( (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) > v20 )
      v20 = ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL;
    if ( v22 > (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v22 = (ProtoPteAddress & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v23 = 8 * v21;
    v17 = ProtoPteAddress - 8 * v21;
    if ( v17 < v20 || ProtoPteAddress - v23 + 128 > v22 )
      return 0LL;
    v18 = (__int64 *)(((v44[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = 1LL;
    v16 = *(_WORD *)(*(_QWORD *)v41 + 60LL) & 0x3FF;
  }
  else
  {
    v16 = *((unsigned __int16 *)p_Blink + 87);
    v17 = ((v44[0] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = 0LL;
  }
  v24 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + v16) + 16LL);
  v41 = *((_QWORD *)qword_140E300C8 + v16);
  *(_BYTE *)(57216LL * v15 + v24 + 5187) = 1;
  for ( i = 0LL; i < 0x10; ++i )
    v59[i] = *(_QWORD *)(v17 + 8 * i);
  j = 0LL;
  do
  {
    if ( j >= 0x10 )
      break;
    if ( a6 )
    {
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v59[j]) )
        break;
      v27 = ((v28 >> 5) & 0x1F) == a6;
    }
    else
    {
      v27 = v59[j] == 0LL;
    }
    if ( !v27 )
      break;
    if ( v18 )
    {
      IsPteEvaluated = MiIsPteEvaluated(v18, a6);
      v14 = 1LL;
      if ( IsPteEvaluated )
        break;
    }
    j += v14;
  }
  while ( j != v47 );
  v30 = -1LL;
  if ( j == 16 )
  {
    if ( MiComputeZeroClusterMaximum((__int64)&v51, (__int64)v46, a1) != 16 )
      return 0LL;
    v31 = MiProtectionToCacheAttribute(v42);
    LargePage = MiGetLargePage(v41, v44[0], 2u, v15, v31, 0x12u, v45, 0LL);
    v33 = LargePage;
    if ( LargePage )
    {
      MiConvertLargeActivePageToChain(LargePage);
      *a8 = v33;
      a8[1] = v33 + 720;
      a8[2] = 16LL;
      return 0LL;
    }
  }
  else
  {
    for ( j = 0LL; j < 0x10; j += v14 )
    {
      v35 = v59[j];
      if ( ((unsigned __int8)v35 & (unsigned __int8)v14) != 0 )
      {
        v30 = (v35 >> 12) & 0xFFFFFFFFFFLL;
        if ( (unsigned __int16)v35 >> 12 != j )
          return 0LL;
        break;
      }
    }
  }
  v36 = (v48 >> 9) & 0x7FFFFFFFF8LL;
  v37 = ((__int64)(v36 - ((v44[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) & 0xF;
  v38 = MiProtectionToCacheAttribute(v42);
  MiInitializePageChainPacket(v41, v46, v43, v39, v13, v38, 49, v37, v45, 9u, 0LL, 1LL, (__int64)v56);
  MiGetPageChain(v56);
  if ( !v58 )
    return 0LL;
  v40 = MiUnlinkPageChainHead((__int64)v57);
  if ( j == 16 )
  {
    if ( (((__int64)(v40 + 0x44000000000LL) / 48) & 0xF) != v37 )
      v10 = 1;
  }
  else
  {
    LOBYTE(v10) = v30 + ((__int64)(v36 - ((v44[0] >> 9) & 0x7FFFFFFFF8LL)) >> 3) - j != (__int64)(v40 + 0x44000000000LL)
                                                                                      / 48;
  }
  MiInsertPageChainHead(v49, v40);
  return v10;
}
