/*
 * XREFs of CmpParseKey @ 0x14085EAA0
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     PsGetPermanentSiloContext @ 0x1403EA530 (PsGetPermanentSiloContext.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     PspGetJobSilo @ 0x14041A350 (PspGetJobSilo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     CmpRollbackTransactionArray @ 0x14086AFEC (CmpRollbackTransactionArray.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v13; // rbx
  __int64 v14; // rdi
  PPRIVILEGE_SET v15; // r11
  unsigned int v16; // r15d
  __int128 v17; // xmm1
  POBJECT_TYPE *v18; // r10
  int v19; // ebx
  __int64 v20; // r14
  __int64 JobSilo; // rbx
  unsigned __int16 v22; // cx
  _WORD *v23; // rdx
  bool v24; // zf
  __int16 v25; // ax
  struct _PRIVILEGE_SET *Pool; // rax
  int v27; // r14d
  __int64 v28; // r8
  __int64 v29; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // r12
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  __int64 *v38; // rcx
  __int64 v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // rax
  _DWORD *v42; // rsi
  int v43; // eax
  __int64 v44; // rax
  unsigned int Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+28h] [rbp-D8h]
  __int128 v48; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+98h] [rbp-68h]
  int v55; // [rsp+9Ch] [rbp-64h]
  __int128 *v56; // [rsp+A0h] [rbp-60h]
  int v57; // [rsp+A8h] [rbp-58h]
  __int128 v58; // [rsp+ACh] [rbp-54h]
  __int64 v59; // [rsp+BCh] [rbp-44h]
  int v60; // [rsp+C4h] [rbp-3Ch]
  __int64 *v61; // [rsp+C8h] [rbp-38h] BYREF
  __int128 *v62; // [rsp+D0h] [rbp-30h]
  _WORD v63[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v64; // [rsp+DCh] [rbp-24h]
  __int64 v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v67; // [rsp+100h] [rbp+0h]
  __int128 v68; // [rsp+110h] [rbp+10h]
  __int128 v69; // [rsp+120h] [rbp+20h]
  __int128 v70; // [rsp+130h] [rbp+30h]
  __int128 v71; // [rsp+140h] [rbp+40h]
  __int128 v72; // [rsp+150h] [rbp+50h]
  __int128 v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+170h] [rbp+70h]
  __int128 v75; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v76[4]; // [rsp+190h] [rbp+90h] BYREF
  char v77; // [rsp+1E0h] [rbp+E0h]
  PPRIVILEGE_SET Privileges; // [rsp+1E8h] [rbp+E8h]

  v76[0] = 0LL;
  v48 = 0LL;
  v75 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v76);
  v13 = (__int64)a11;
  v14 = a8;
  v15 = 0LL;
  v77 = 0;
  v16 = 0;
  v17 = *a7;
  *a11 = 0LL;
  v74 = 0LL;
  v52 = 0LL;
  v49[1] = v49;
  v49[0] = v49;
  v48 = v17;
  v50 = 0LL;
  Privileges = 0LL;
  v66 = 0LL;
  LODWORD(a7) = 0;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v51 = 0LL;
  if ( v18 != CmKeyObjectType )
  {
    v19 = -1073741788;
    goto LABEL_88;
  }
  v20 = a10;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    JobSilo = *(_QWORD *)(a10 + 8);
    while ( 1 )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(JobSilo, CmpSiloContextSlot, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        a1 = *(_QWORD *)(a8 + 32);
        if ( a1 )
          break;
      }
      if ( JobSilo )
        JobSilo = PspGetJobSilo(*(_QWORD *)(JobSilo + 1304));
      else
        JobSilo = 0LL;
    }
    v13 = (__int64)a11;
    v15 = 0LL;
  }
  v22 = v48;
  if ( (_WORD)v48 )
  {
    v23 = (_WORD *)*((_QWORD *)&v48 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v48 + 1) + 2 * ((unsigned __int64)v22 >> 1) - 2) == 92 )
    {
      v24 = v22 == 2;
      v22 -= 2;
      LOWORD(v48) = v22;
      if ( v24 )
        goto LABEL_20;
    }
    if ( v22 )
    {
      v25 = WORD1(v48);
      do
      {
        if ( *v23 != 92 )
          break;
        ++v23;
        v22 -= 2;
        v25 -= 2;
        *((_QWORD *)&v48 + 1) = v23;
        LOWORD(v48) = v22;
        WORD1(v48) = v25;
      }
      while ( v22 );
    }
  }
LABEL_20:
  if ( !v14 )
  {
    Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x40uLL);
    Privileges = Pool;
    v15 = Pool;
    if ( Pool )
    {
      CmpInitializeParseContext(Pool);
      v15 = Privileges;
    }
    v14 = (__int64)v15;
  }
  v27 = *(_DWORD *)(v20 + 4) & *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v14 + 96) = v27;
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *((_QWORD *)CmpRegistryRootObject + 1);
  if ( v28 == v29
    && (_WORD)v48
    && ((**((_WORD **)&v48 + 1) - 65) & 0xFFDF) == 0
    && ((unsigned __int16)v48 <= 2u || *(_WORD *)(*((_QWORD *)&v48 + 1) + 2LL) == 92)
    && (*(_DWORD *)v14 & 0x40) == 0 )
  {
    v19 = -1073741790;
    goto LABEL_86;
  }
  if ( (*(_DWORD *)v14 & 0x800) != 0
    && (v28 != v29
     || !(_WORD)v48
     || ((**((_WORD **)&v48 + 1) - 65) & 0xFFDF) != 0
     || (unsigned __int16)v48 > 2u && *(_WORD *)(*((_QWORD *)&v48 + 1) + 2LL) != 92) )
  {
    v19 = -1073741790;
    goto LABEL_86;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
    *(_DWORD *)(v14 + 24) |= 0x10u;
  CurrentThread = KeGetCurrentThread();
  v31 = a9;
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
    while ( 1 )
    {
LABEL_53:
      while ( 1 )
      {
        v75 = v48;
        v19 = CmpDoParseKey(a1, a3, a4, a5, a6, (__int64)&v75, v14, v31, (__int64)&v50);
        if ( v19 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140E097C0 + 184 * *(unsigned int *)(v14 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v14 &= ~0x100u;
      }
      if ( v19 != -1073741267 )
        break;
      if ( v16 >= 0x40 )
      {
        v19 = -1073741772;
        v27 = *(_DWORD *)(a1 + 96) & *(_DWORD *)(a10 + 4);
LABEL_61:
        v38 = a11;
        goto LABEL_62;
      }
      if ( (*(_DWORD *)(v14 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v14 + 120), *(_QWORD *)(v14 + 128), v35, &a7);
        *(_DWORD *)(v14 + 100) &= ~4u;
        *(_DWORD *)(v14 + 120) = 0;
        *(_QWORD *)(v14 + 128) = 0LL;
      }
      ++v16;
    }
    v27 = *(_DWORD *)(a10 + 4) & *(_DWORD *)(a1 + 96);
    if ( v19 < 0 )
      goto LABEL_61;
    v41 = v50;
    v38 = a11;
    v50 = 0LL;
    *a11 = v41;
LABEL_62:
    if ( !v77 )
      goto LABEL_81;
    v39 = *v38;
    HIDWORD(v69) = *(_DWORD *)(a3 + 20);
    if ( (*(_DWORD *)v14 & 1) != 0 )
    {
      if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() || (_QWORD *)v49[0] == v49 )
        goto LABEL_75;
      v55 = 0;
      v56 = &v66;
      v40 = 27;
      v59 = 0LL;
      v61 = &v53;
      v62 = &v51;
      v47 = v39;
      Timeout = 27;
      v60 = 0;
    }
    else
    {
      v42 = (_DWORD *)(a3 + 20);
      if ( !CmpCallBackCount )
        goto LABEL_76;
      v42 = (_DWORD *)(a3 + 20);
      if ( CmpIsRegistryLockAcquired() )
        goto LABEL_76;
      if ( (_QWORD *)v49[0] == v49 )
      {
LABEL_75:
        v42 = (_DWORD *)(a3 + 20);
LABEL_76:
        if ( v19 >= 0 )
        {
          v43 = HIDWORD(v69);
          if ( HIDWORD(v69) != *v42 )
          {
            *v42 = HIDWORD(v69);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v43 | 0x2000000);
          }
        }
        if ( *a11 )
          *(_DWORD *)(*a11 + 96) = DWORD2(v51);
        goto LABEL_81;
      }
      v40 = 29;
      v55 = 0;
      v59 = 0LL;
      v60 = 0;
      v56 = &v66;
      v61 = &v53;
      v62 = &v51;
      v47 = v39;
      Timeout = 29;
    }
    v53 = v39;
    v54 = v19;
    v57 = v19;
    v58 = 0LL;
    CmpCallCallBacksEx(v40, (__int64)&v53, (__int64)&v61, 0, Timeout, v47, (__int64)v49);
    v19 = v57;
    goto LABEL_75;
  }
  *((_QWORD *)&v72 + 1) = 1LL;
  DWORD2(v73) = *(_DWORD *)(v14 + 28);
  HIDWORD(v73) = a5;
  *(_QWORD *)&v73 = &v48;
  LOBYTE(v74) = a4;
  DWORD2(v67) = *(_DWORD *)(v14 + 24);
  *(_QWORD *)&v66 = a6;
  *(_QWORD *)&v67 = CmKeyObjectType;
  DWORD2(v69) = *(_DWORD *)(a3 + 16);
  *((_QWORD *)&v66 + 1) = a1;
  *((_QWORD *)&v70 + 1) = v13;
  v32 = *(_QWORD *)(v14 + 72);
  if ( (v32 & 1) != 0 )
    v32 = 0LL;
  *(_QWORD *)&v72 = v32;
  *(_QWORD *)&v51 = &v66;
  DWORD2(v51) = *(_DWORD *)(v14 + 96);
  v52 = v14 + 144;
  if ( (*(_DWORD *)v14 & 1) != 0 )
  {
    v63[0] = *(_WORD *)(v14 + 4);
    v63[1] = v63[0];
    v65 = *(_QWORD *)(v14 + 8);
    *(_QWORD *)&v70 = v14 + 32;
    *(_QWORD *)&v68 = v63;
    *((_QWORD *)&v68 + 1) = *(_QWORD *)(a3 + 64);
    v64 = 0;
    *(_QWORD *)&v69 = v31;
    v33 = CmpCallCallBacksEx(0x1Au, (__int64)&v66, (__int64)&v51, 1, 0x1Bu, a1, (__int64)v49);
  }
  else
  {
    v33 = CmpCallCallBacksEx(0x1Cu, (__int64)&v66, (__int64)&v51, 1, 0x1Du, a1, (__int64)v49);
  }
  v19 = v33;
  if ( v33 >= 0 )
  {
    a1 = *((_QWORD *)&v66 + 1);
    *(_DWORD *)(v14 + 96) = DWORD2(v51);
    v77 = 1;
    goto LABEL_53;
  }
  if ( v33 != -1073740541 )
    goto LABEL_85;
  v19 = HIDWORD(v51);
  if ( HIDWORD(v51) == 260 )
  {
LABEL_81:
    if ( v19 != 872 )
    {
      if ( v19 == 260 )
      {
        *(_DWORD *)(v14 + 96) = v27;
        *(_QWORD *)(a10 + 8) = PsGetCurrentSilo();
      }
      goto LABEL_85;
    }
    goto LABEL_82;
  }
  if ( HIDWORD(v51) == 872 )
  {
LABEL_82:
    v44 = a10;
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_QWORD *)(v44 + 8) = 0LL;
    goto LABEL_85;
  }
  v37 = HIDWORD(v69);
  *(_DWORD *)(a3 + 20) |= HIDWORD(v69);
  *(_DWORD *)(a3 + 16) &= ~(v37 | 0x2000000);
  v19 = 0;
LABEL_85:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v34, v35, v36);
  v15 = Privileges;
LABEL_86:
  if ( v15 )
  {
    CmpCleanupParseContext(v15, 0LL);
    CmSiFreeMemory(Privileges);
  }
LABEL_88:
  CmCleanupThreadInfo((_KAFFINITY_EX **)v76);
  return (unsigned int)v19;
}
