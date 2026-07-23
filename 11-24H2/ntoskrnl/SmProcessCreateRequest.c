/*
 * XREFs of SmProcessCreateRequest @ 0x140A38664
 * Callers:
 *     SmpDirtyStoreCreate @ 0x140A3854C (SmpDirtyStoreCreate.c)
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404542F8 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SmKmStoreAdd @ 0x140A38B64 (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x140A4DC40 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmProcessCreateRequest(struct _SM_PARTITION *a1, unsigned __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  KPROCESSOR_MODE v4; // r13
  __int64 v8; // rdi
  int v9; // esi
  struct _PRIVILEGE_SET *v10; // r12
  __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // rax
  int TimeInit; // ebx
  int v15; // ecx
  unsigned int v16; // r8d
  char *v17; // rax
  _KPROCESS *v18; // rax
  size_t v20; // rbx
  signed __int32 v21[8]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v22; // [rsp+20h] [rbp-148h]
  struct _PRIVILEGE_SET *v23; // [rsp+28h] [rbp-140h]
  _KPROCESS *Process; // [rsp+30h] [rbp-138h]
  PPRIVILEGE_SET Privileges; // [rsp+38h] [rbp-130h]
  struct _SM_PARTITION *v26; // [rsp+40h] [rbp-128h]
  _QWORD v27[2]; // [rsp+48h] [rbp-120h] BYREF
  _KPROCESS *v28; // [rsp+58h] [rbp-110h]
  int v29; // [rsp+60h] [rbp-108h]
  int v30; // [rsp+64h] [rbp-104h]
  unsigned int *v31[2]; // [rsp+70h] [rbp-F8h] BYREF
  int v32; // [rsp+80h] [rbp-E8h]
  __int64 v33; // [rsp+88h] [rbp-E0h]
  struct _SM_PARTITION *v34; // [rsp+90h] [rbp-D8h]
  __int64 v35; // [rsp+98h] [rbp-D0h]
  __int64 v36; // [rsp+A0h] [rbp-C8h]
  char v37; // [rsp+ACh] [rbp-BCh]
  int v38; // [rsp+B0h] [rbp-B8h]
  int v39; // [rsp+B4h] [rbp-B4h]
  __int128 v40; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-98h]
  void *Src[2]; // [rsp+E0h] [rbp-88h]
  size_t Size[2]; // [rsp+F0h] [rbp-78h]
  __int128 v44; // [rsp+100h] [rbp-68h]
  __int64 v45; // [rsp+110h] [rbp-58h]

  v4 = a4;
  v26 = a1;
  v28 = 0LL;
  v30 = 0;
  memset_0(v31, 0, 0x48uLL);
  v8 = 0LL;
  Privileges = 0LL;
  v9 = -1;
  v22 = 0xFFFFFFFFLL;
  v10 = 0LL;
  v23 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset_0(&v40, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
    goto LABEL_29;
  }
  if ( v4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 87) = *(_BYTE *)(v11 + 87);
  }
  v40 = *(_OWORD *)a2;
  v41 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)Src = *(_OWORD *)(a2 + 32);
  *(_OWORD *)Size = *(_OWORD *)(a2 + 48);
  v44 = *(_OWORD *)(a2 + 64);
  v45 = *(_QWORD *)(a2 + 80);
  v10 = 0LL;
  if ( (_BYTE)v40 != 6 || (v40 & 0xFFFFFC00) != 0 )
  {
    TimeInit = -1073741811;
    goto LABEL_14;
  }
  if ( v4 )
  {
    if ( (v40 & 0x300) != 0 || BYTE8(v40) )
    {
      TimeInit = -1073741790;
      goto LABEL_14;
    }
  }
  else if ( BYTE8(v40) )
  {
    v12 = Size[0];
    v20 = LODWORD(Size[0]);
    if ( LODWORD(Size[0]) )
    {
      v10 = (struct _PRIVILEGE_SET *)SmAllocEx(LODWORD(Size[0]), 0x4B456D73u, -1);
      if ( !v10 )
      {
        TimeInit = -1073741670;
        v4 = a4;
        v10 = v23;
        goto LABEL_14;
      }
    }
    memmove(v10, Src[1], v20);
    v13 = v44;
    goto LABEL_13;
  }
  v12 = 0;
  v13 = 0LL;
LABEL_13:
  v31[0] = (unsigned int *)&v40 + 2;
  v31[1] = &v10->PrivilegeCount;
  v32 = v12;
  v33 = v13;
  v23 = v10;
  TimeInit = 0;
  v4 = a4;
LABEL_14:
  if ( TimeInit < 0 )
    goto LABEL_29;
  v15 = *v31[0];
  if ( (*v31[0] & 0x200FF) != 0x20000 || (v15 & 0x300) != 0 )
    goto LABEL_43;
  if ( !(_BYTE)v15 && (v15 & 0xB0000) != 0x20000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v4) )
  {
    TimeInit = -1073741790;
    goto LABEL_29;
  }
  if ( !(unsigned __int8)*v31[0] && (*v31[0] & 0x20000) != 0 && v31[0][2] > 0x20000 )
  {
LABEL_43:
    TimeInit = -1073741637;
    goto LABEL_29;
  }
  if ( (v40 & 0x200) != 0 )
  {
    v37 = BYTE6(Process[3].PerProcessorCycleTimes);
    v38 = Process->IdealGlobalNode + 1;
    v16 = Process->IdealGlobalNode | 0x80000000;
  }
  else
  {
    v37 = -1;
    v16 = -1;
  }
  v17 = (char *)SmAllocEx(0x1DC0uLL, 0x74536D73u, v16);
  v8 = (__int64)v17;
  if ( v17 )
  {
    SMKM_STORE<SM_TRAITS>::SmStInitialize(v17);
    TimeInit = SmFirstTimeInit(a1, v31[0][2]);
    if ( TimeInit >= 0 )
    {
      v34 = a1;
      v35 = *((_QWORD *)a1 + 271);
      v36 = *((_QWORD *)a1 + 270);
      v39 = *((_DWORD *)a1 + 536);
      TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v8, v31);
      if ( TimeInit >= 0 )
      {
        v30 = 0;
        v27[0] = (char *)&v40 + 8;
        v27[1] = *(_QWORD *)(v8 + 7008);
        v29 = DWORD2(v41);
        v18 = 0LL;
        if ( (v40 & 0x200) != 0 )
          v18 = Process;
        v28 = v18;
        Process = (_KPROCESS *)(v8 + 6832);
        TimeInit = SmKmStoreAdd(a1, v8, v27, v8 + 6832, v22);
        if ( TimeInit >= 0 )
        {
          LODWORD(v22) = Process->Header.LockNV;
          v9 = v22;
          _InterlockedOr(v21, 0);
          *((_BYTE *)a1 + 2200) = 5;
          v8 = 0LL;
          Privileges = 0LL;
          HIDWORD(v22) = 1;
          TimeInit = 0;
          *(_DWORD *)(a2 + 80) = v9;
          if ( (v40 & 0x100) != 0 )
            v9 = -1;
        }
      }
    }
  }
  else
  {
    TimeInit = -1073741670;
  }
LABEL_29:
  if ( v9 != -1 )
    SmKmStoreDereference((__int64)a1, v9);
  if ( v8 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v8);
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  }
  if ( v10 )
    CmSiFreeMemory(v10);
  return (unsigned int)TimeInit;
}
