/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140916054
 * Callers:
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140462458 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpIsRegistryLockContended @ 0x1404F0268 (CmpIsRegistryLockContended.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140875C90 (CmpGetKeyNodeForKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CFA0 (CmpQueryKeyDataFromNode.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpFindSubKeyByNumber @ 0x1408842B0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x1409146AC (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140915178 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140916888 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140916A64 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140916F34 (CmpKeyEnumStackInitialize.c)
 *     CmpLockKcbStackShared @ 0x140917710 (CmpLockKcbStackShared.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140917760 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A568A8 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        struct _PRIVILEGE_SET **a7,
        char a8)
{
  PPRIVILEGE_SET v11; // rsi
  struct _PRIVILEGE_SET *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _PRIVILEGE_SET *v16; // rbx
  int started; // edi
  __int16 v18; // cx
  char v19; // dl
  PPRIVILEGE_SET *v20; // r8
  PPRIVILEGE_SET *v21; // rax
  __int64 v22; // r12
  ULONG Control; // r14d
  unsigned int i; // esi
  int v25; // r9d
  __int16 v26; // r13
  __int64 Pool; // rdi
  __int16 v28; // r14
  volatile signed __int64 **v29; // rcx
  _QWORD *v30; // r12
  PPRIVILEGE_SET v31; // rdi
  __int64 v32; // rax
  __int16 *v33; // rsi
  volatile signed __int64 *v34; // rbx
  _DWORD *v35; // rcx
  signed __int64 v36; // rsi
  __int64 v37; // rdx
  _DWORD *KeyNodeForKcb; // r12
  __int64 v39; // rcx
  __int64 v40; // rcx
  ULONG_PTR *p_Attributes; // rbx
  __int64 v42; // rsi
  __int64 v43; // rcx
  ULONG_PTR v45; // rcx
  __int64 CellFlat; // rax
  int ResumeContext; // eax
  __int64 v48; // rsi
  __int64 v49; // rax
  char v50; // [rsp+40h] [rbp-C0h]
  struct _PRIVILEGE_SET *v51; // [rsp+50h] [rbp-B0h] BYREF
  PPRIVILEGE_SET v52; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  struct _PRIVILEGE_SET **v56; // [rsp+78h] [rbp-88h]
  __int128 v57; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+90h] [rbp-70h]
  unsigned int v59; // [rsp+A0h] [rbp-60h]
  struct _PRIVILEGE_SET *v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  __int128 v66; // [rsp+D8h] [rbp-28h] BYREF
  char v67[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v68[168]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v69; // [rsp+248h] [rbp+148h]

  v59 = a3;
  v62 = a1;
  v63 = a6;
  v56 = a7;
  v64 = a4;
  memset_0(v67, 0, 0x160uLL);
  v55 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v54 = 0LL;
  v57 = 0LL;
  WORD1(v57) = -1;
  v66 = 0LL;
  v50 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpKeyEnumStackInitialize(v67);
  v11 = 0LL;
  HvpGetCellContextInitialize(&v55);
  v61 = 0LL;
  HvpGetCellContextInitialize(&v54);
  v60 = 0LL;
  v12 = 0LL;
  CmpInitializeDelayDerefContext(&v66);
  v16 = *a7;
  *a7 = 0LL;
  v51 = v16;
  if ( a3 == 2 )
    CmpLockRegistryExclusive(v14, v13, v15);
  else
    CmpLockRegistry(v14);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v57, *(_QWORD *)(a1 + 8));
  if ( started < 0
    || (CmpLockKcbStackShared(&v57), v50 = 1, started = CmpPerformKeyBodyDeletionCheck(a1, 0LL), started < 0) )
  {
    KeyNodeForKcb = 0LL;
  }
  else
  {
    v18 = WORD1(v57);
    v19 = 0;
    if ( SWORD1(v57) <= 0 )
      goto LABEL_57;
    v20 = &Privileges[SWORD1(v57) - 1];
    do
    {
      if ( (unsigned __int16)v18 >= 2u )
        v21 = (PPRIVILEGE_SET *)((char *)v20 + (char *)Privileges[1] - ((char *)&v57 + 8) - 16);
      else
        v21 = v20;
      v52 = *v21;
      if ( v52[2].PrivilegeCount != -1 )
        v19 = 1;
      --v18;
      --v20;
    }
    while ( v18 > 0 );
    v22 = v62;
    if ( v19 )
    {
      if ( v16
        || (v16 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v62 + 88), 0LL),
            (v51 = v16) != 0LL) )
      {
        if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext((__int64)&v57) == -1073741735 || v16->Control > a2 )
        {
          v12 = v16;
          v60 = v16;
          v16 = 0LL;
          v51 = 0LL;
        }
      }
      started = CmpKeyEnumStackStartFromKcbStack((__int64)v67, (__int64)&v57, v22, (__int64)v16);
      if ( started >= 0 )
      {
        if ( v16 )
        {
          Control = v16->Control;
          v12 = v16;
          v60 = v16;
          v16 = 0LL;
          v51 = 0LL;
        }
        else
        {
          Control = 0;
        }
        started = CmpKeyEnumStackAdvance(v67);
        if ( started >= 0 )
        {
          for ( i = Control; i < a2; ++i )
          {
            if ( CmpIsRegistryLockContended() && i - Control >= 0xA && a8 )
            {
              LOBYTE(v25) = 1;
              ResumeContext = CmpKeyEnumStackCreateResumeContext(
                                (unsigned int)&v57,
                                (unsigned int)v67,
                                i,
                                v25,
                                (__int64)&v51);
              v11 = v52;
              started = ResumeContext;
              KeyNodeForKcb = 0LL;
              if ( ResumeContext < 0 )
              {
                v16 = v51;
              }
              else
              {
                v16 = 0LL;
                started = -1073741267;
                *v56 = v51;
              }
              goto LABEL_36;
            }
            started = CmpKeyEnumStackAdvance(v67);
            if ( started < 0 )
              goto LABEL_35;
          }
          v26 = WORD1(v57);
          Pool = CmpAllocatePool(0x100uLL);
          v65 = Pool;
          if ( Pool )
          {
            *(_DWORD *)(Pool + 4) = i;
            v28 = 0;
            *(_WORD *)Pool = v26;
            *(_BYTE *)(Pool + 2) = 0;
            if ( v26 >= 0 )
            {
              v29 = (volatile signed __int64 **)&v57 + 1;
              v30 = (_QWORD *)(Pool + 8);
              v56 = (struct _PRIVILEGE_SET **)&v57 + 1;
              v31 = Privileges[1];
              do
              {
                v32 = (unsigned int)v28;
                if ( v28 >= 2 )
                {
                  v48 = (unsigned int)(v32 - 2);
                  v49 = (int)v48;
                  v33 = (__int16 *)(v69 + (v48 << 7));
                  v29 = (volatile signed __int64 **)((char *)v31 + 8 * v49);
                }
                else
                {
                  v33 = &v68[64 * v32 + 40];
                }
                v34 = *v29;
                CmpReferenceKeyControlBlockUnsafe(*v29);
                v35 = v30 + 2;
                v36 = (char *)v33 - (char *)v30;
                v30[1] = v34;
                v37 = 2LL;
                *v30 = *((_QWORD *)v34 + 38);
                do
                {
                  *v35 = *(_DWORD *)((char *)v35 + v36 + 8);
                  ++v35;
                  --v37;
                }
                while ( v37 );
                ++v28;
                v29 = (volatile signed __int64 **)(v56 + 1);
                v30 += 3;
                ++v56;
              }
              while ( v28 <= SWORD1(v57) );
              Pool = v65;
              v12 = v60;
              v22 = v62;
            }
            v16 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v22 + 88), Pool);
          }
          started = CmpQueryKeyDataFromKeyNodeStack(v68, v59, v64, a5, v63);
          if ( started >= 0 )
          {
            v11 = v52;
            started = 0;
            KeyNodeForKcb = 0LL;
            goto LABEL_36;
          }
        }
      }
LABEL_35:
      v11 = v52;
      KeyNodeForKcb = 0LL;
    }
    else
    {
LABEL_57:
      v11 = (PPRIVILEGE_SET)*((_QWORD *)&v57 + 1);
      KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(*((__int64 *)&v57 + 1), (unsigned int *)&v55, 0);
      started = CmpFindSubKeyByNumber(
                  *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart,
                  KeyNodeForKcb,
                  a2,
                  (int *)&BugCheckParameter4);
      if ( started >= 0 )
      {
        if ( (_DWORD)BugCheckParameter4 == -1 )
        {
          started = -2147483622;
        }
        else
        {
          v45 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
          if ( (*(_BYTE *)(v45 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v45, (unsigned int)BugCheckParameter4, &v54);
          else
            CellFlat = HvpGetCellPaged(v45, BugCheckParameter4, &v54);
          v61 = CellFlat;
          started = CmpQueryKeyDataFromNode(
                      *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart,
                      CellFlat,
                      a3,
                      v64,
                      a5,
                      (_DWORD *)v63,
                      0LL,
                      0LL);
          if ( started >= 0 )
            started = 0;
        }
      }
    }
  }
LABEL_36:
  CmpKeyEnumStackCleanup(v67);
  if ( v61 )
  {
    v39 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v39, (__int64)&v54);
    else
      HvpReleaseCellPaged(v39, (unsigned int *)&v54);
  }
  if ( KeyNodeForKcb )
  {
    v40 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v40, (__int64)&v55);
    else
      HvpReleaseCellPaged(v40, (unsigned int *)&v55);
  }
  if ( v50 )
    CmpUnlockKcbStack((__int64)&v57);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v16 )
    CmpKeyEnumStackFreeResumeContext(v16);
  if ( v12 )
  {
    if ( SLOWORD(v12->PrivilegeCount) >= 0 )
    {
      p_Attributes = (ULONG_PTR *)&v12->Privilege[0].Attributes;
      v42 = (unsigned __int16)(LOWORD(v12->PrivilegeCount) + 1);
      do
      {
        if ( *p_Attributes )
          CmpDereferenceKeyControlBlock(*p_Attributes);
        p_Attributes += 3;
        --v42;
      }
      while ( v42 );
    }
    CmSiFreeMemory(v12);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v66);
  CmpUnlockRegistry(v43);
  return (unsigned int)started;
}
