/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140974D5C
 * Callers:
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140462DCC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpIsRegistryLockContended @ 0x140494A68 (CmpIsRegistryLockContended.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1408715A0 (CmpLockKcbStackShared.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetKeyNodeForKcb @ 0x140879920 (CmpGetKeyNodeForKcb.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CC80 (CmpQueryKeyDataFromNode.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpFindSubKeyByNumber @ 0x14088A4F0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140974254 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackAdvance @ 0x140975590 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14097576C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140975C3C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14097655C (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A530B8 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
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
  __int64 v13; // rcx
  struct _PRIVILEGE_SET *v14; // rbx
  int started; // edi
  __int16 v16; // cx
  char v17; // dl
  signed __int64 v18; // r9
  PPRIVILEGE_SET *v19; // r8
  PPRIVILEGE_SET *v20; // rax
  __int64 v21; // r12
  ULONG Control; // r14d
  unsigned int i; // esi
  __int16 v24; // r13
  __int64 Pool; // rdi
  __int16 v26; // r14
  volatile signed __int64 **v27; // rcx
  _QWORD *v28; // r12
  PPRIVILEGE_SET v29; // rdi
  __int64 v30; // rax
  __int16 *v31; // rsi
  volatile signed __int64 *v32; // rbx
  _DWORD *v33; // rcx
  signed __int64 v34; // rsi
  __int64 v35; // rdx
  _DWORD *KeyNodeForKcb; // r12
  __int64 v37; // rcx
  __int64 v38; // rcx
  ULONG_PTR *p_Attributes; // rbx
  __int64 v40; // rsi
  __int64 v41; // rcx
  ULONG_PTR v43; // rcx
  __int64 CellFlat; // rax
  int ResumeContext; // eax
  __int64 v46; // rsi
  __int64 v47; // rax
  char v48; // [rsp+40h] [rbp-C0h]
  struct _PRIVILEGE_SET *v49; // [rsp+50h] [rbp-B0h] BYREF
  PPRIVILEGE_SET v50; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  struct _PRIVILEGE_SET **v54; // [rsp+78h] [rbp-88h]
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+90h] [rbp-70h]
  unsigned int v57; // [rsp+A0h] [rbp-60h]
  struct _PRIVILEGE_SET *v58; // [rsp+A8h] [rbp-58h]
  __int64 v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  __int64 v63; // [rsp+D0h] [rbp-30h]
  __int128 v64; // [rsp+D8h] [rbp-28h] BYREF
  char v65[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v66[168]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v67; // [rsp+248h] [rbp+148h]

  v57 = a3;
  v60 = a1;
  v61 = a6;
  v54 = a7;
  v62 = a4;
  memset_0(v65, 0, 0x160uLL);
  v53 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v52 = 0LL;
  v55 = 0LL;
  WORD1(v55) = -1;
  v64 = 0LL;
  v48 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpKeyEnumStackInitialize(v65);
  v11 = 0LL;
  HvpGetCellContextInitialize(&v53);
  v59 = 0LL;
  HvpGetCellContextInitialize(&v52);
  v58 = 0LL;
  v12 = 0LL;
  CmpInitializeDelayDerefContext(&v64);
  v14 = *a7;
  *a7 = 0LL;
  v49 = v14;
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v13);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v55, *(_QWORD *)(a1 + 8));
  if ( started < 0
    || (CmpLockKcbStackShared((__int64)&v55), v48 = 1, started = CmpPerformKeyBodyDeletionCheck(a1, 0LL), started < 0) )
  {
    KeyNodeForKcb = 0LL;
  }
  else
  {
    v16 = WORD1(v55);
    v17 = 0;
    if ( SWORD1(v55) <= 0 )
      goto LABEL_57;
    v18 = (char *)Privileges[1] - ((char *)&v55 + 8);
    v19 = &Privileges[SWORD1(v55) - 1];
    do
    {
      if ( (unsigned __int16)v16 >= 2u )
        v20 = (PPRIVILEGE_SET *)((char *)v19 + v18 - 16);
      else
        v20 = v19;
      v50 = *v20;
      if ( v50[2].PrivilegeCount != -1 )
        v17 = 1;
      --v16;
      --v19;
    }
    while ( v16 > 0 );
    v21 = v60;
    if ( v17 )
    {
      if ( v14
        || (v14 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v60 + 88), 0LL),
            (v49 = v14) != 0LL) )
      {
        if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(&v55, v14, v19, v18) == -1073741735 || v14->Control > a2 )
        {
          v12 = v14;
          v58 = v14;
          v14 = 0LL;
          v49 = 0LL;
        }
      }
      started = CmpKeyEnumStackStartFromKcbStack(v65, &v55, v21, v14);
      if ( started >= 0 )
      {
        if ( v14 )
        {
          Control = v14->Control;
          v12 = v14;
          v58 = v14;
          v14 = 0LL;
          v49 = 0LL;
        }
        else
        {
          Control = 0;
        }
        started = CmpKeyEnumStackAdvance(v65);
        if ( started >= 0 )
        {
          for ( i = Control; i < a2; ++i )
          {
            if ( CmpIsRegistryLockContended() && i - Control >= 0xA && a8 )
            {
              ResumeContext = CmpKeyEnumStackCreateResumeContext((__int64)&v55, (__int64)v65, i, 1, (__int64 *)&v49);
              v11 = v50;
              started = ResumeContext;
              KeyNodeForKcb = 0LL;
              if ( ResumeContext < 0 )
              {
                v14 = v49;
              }
              else
              {
                v14 = 0LL;
                started = -1073741267;
                *v54 = v49;
              }
              goto LABEL_36;
            }
            started = CmpKeyEnumStackAdvance(v65);
            if ( started < 0 )
              goto LABEL_35;
          }
          v24 = WORD1(v55);
          Pool = CmpAllocatePool(0x100uLL);
          v63 = Pool;
          if ( Pool )
          {
            *(_DWORD *)(Pool + 4) = i;
            v26 = 0;
            *(_WORD *)Pool = v24;
            *(_BYTE *)(Pool + 2) = 0;
            if ( v24 >= 0 )
            {
              v27 = (volatile signed __int64 **)&v55 + 1;
              v28 = (_QWORD *)(Pool + 8);
              v54 = (struct _PRIVILEGE_SET **)&v55 + 1;
              v29 = Privileges[1];
              do
              {
                v30 = (unsigned int)v26;
                if ( v26 >= 2 )
                {
                  v46 = (unsigned int)(v30 - 2);
                  v47 = (int)v46;
                  v31 = (__int16 *)(v67 + (v46 << 7));
                  v27 = (volatile signed __int64 **)((char *)v29 + 8 * v47);
                }
                else
                {
                  v31 = &v66[64 * v30 + 40];
                }
                v32 = *v27;
                CmpReferenceKeyControlBlockUnsafe(*v27);
                v33 = v28 + 2;
                v34 = (char *)v31 - (char *)v28;
                v28[1] = v32;
                v35 = 2LL;
                *v28 = *((_QWORD *)v32 + 38);
                do
                {
                  *v33 = *(_DWORD *)((char *)v33 + v34 + 8);
                  ++v33;
                  --v35;
                }
                while ( v35 );
                ++v26;
                v27 = (volatile signed __int64 **)(v54 + 1);
                v28 += 3;
                ++v54;
              }
              while ( v26 <= SWORD1(v55) );
              Pool = v63;
              v12 = v58;
              v21 = v60;
            }
            v14 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(v21 + 88), Pool);
          }
          started = CmpQueryKeyDataFromKeyNodeStack(v66, v57, v62, a5, v61);
          if ( started >= 0 )
          {
            v11 = v50;
            started = 0;
            KeyNodeForKcb = 0LL;
            goto LABEL_36;
          }
        }
      }
LABEL_35:
      v11 = v50;
      KeyNodeForKcb = 0LL;
    }
    else
    {
LABEL_57:
      v11 = (PPRIVILEGE_SET)*((_QWORD *)&v55 + 1);
      KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(*((__int64 *)&v55 + 1), (unsigned int *)&v53, 0);
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
          v43 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
          if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v43, (unsigned int)BugCheckParameter4, &v52);
          else
            CellFlat = HvpGetCellPaged(v43, BugCheckParameter4, &v52);
          v59 = CellFlat;
          started = CmpQueryKeyDataFromNode(
                      *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart,
                      CellFlat,
                      a3,
                      v62,
                      a5,
                      (_DWORD *)v61,
                      0LL,
                      0LL);
          if ( started >= 0 )
            started = 0;
        }
      }
    }
  }
LABEL_36:
  CmpKeyEnumStackCleanup(v65);
  if ( v59 )
  {
    v37 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v37, &v52);
    else
      HvpReleaseCellPaged(v37, (unsigned int *)&v52);
  }
  if ( KeyNodeForKcb )
  {
    v38 = *(_QWORD *)&v11[1].Privilege[0].Luid.HighPart;
    if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v38, &v53);
    else
      HvpReleaseCellPaged(v38, (unsigned int *)&v53);
  }
  if ( v48 )
    CmpUnlockKcbStack((__int64)&v55);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v14 )
    CmpKeyEnumStackFreeResumeContext(v14);
  if ( v12 )
  {
    if ( SLOWORD(v12->PrivilegeCount) >= 0 )
    {
      p_Attributes = (ULONG_PTR *)&v12->Privilege[0].Attributes;
      v40 = (unsigned __int16)(LOWORD(v12->PrivilegeCount) + 1);
      do
      {
        if ( *p_Attributes )
          CmpDereferenceKeyControlBlock(*p_Attributes);
        p_Attributes += 3;
        --v40;
      }
      while ( v40 );
    }
    CmSiFreeMemory(v12);
  }
  CmpDrainDelayDerefContext((_QWORD **)&v64);
  CmpUnlockRegistry(v41);
  return (unsigned int)started;
}
