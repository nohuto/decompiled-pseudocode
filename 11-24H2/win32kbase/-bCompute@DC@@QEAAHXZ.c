/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x140174490
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1400287F0 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x140029510 (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140040A9C (--$FreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C0F70 (RGNCOREOBJ--iCombine_RGNOBJ__RGNOBJ--iCombine_--_2_--_lambda_1___.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z @ 0x1401C1200 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@AEBVRustAutoHotpatchLockSH@@K@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C13D0 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C14F0 (-bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z.c)
 *     ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C2EF0 (-vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVR.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C33D0 (-vUpdateScaledRegions@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  char *v2; // r14
  char *v3; // rsi
  unsigned int v4; // r15d
  _OWORD *v5; // r12
  struct REGION *v6; // rdi
  int v7; // ecx
  struct REGION *v8; // rax
  __int64 v9; // rax
  HANDLE CurrentThreadId; // rax
  char *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct REGION *v15; // rdx
  struct REGION *v16; // r8
  struct REGION *v17; // r14
  _QWORD *v18; // r12
  int sizeScanAlloc; // eax
  struct REGION_CORE *v20; // rdx
  REGION_CORE *v21; // rcx
  char *pScan; // rbx
  char *v23; // r14
  __int64 v24; // rcx
  __int64 UserSessionState; // rax
  struct REGION_CORE *v26; // rdx
  char *v27; // rax
  REGION_CORE *v28; // rcx
  BOOL v29; // eax
  _BOOL8 v30; // rcx
  __int64 v31; // rax
  int v32; // edi
  struct REGION *v33; // rbx
  const struct REGION_CORE *v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  ULONG_PTR v38; // rax
  const struct REGION_CORE *v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  const struct REGION_CORE *v43; // rdx
  __int64 v44; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  _DWORD *v49; // rbx
  REGION_CORE *v50; // rbx
  __int64 v51; // rcx
  ULONG_PTR v52; // rax
  const struct REGION_CORE *v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  char *v56; // rax
  PVOID v57; // r8
  _DWORD *v58; // rcx
  REGION_CORE *v59; // rcx
  __int64 *v60; // rax
  char *v61; // rcx
  __int64 v62; // rax
  char *v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rdx
  _QWORD *v67; // r14
  __int64 v68; // r12
  int v69; // eax
  struct REGION_CORE *v70; // rdx
  REGION_CORE *v71; // rcx
  char *v72; // rbx
  char *v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rax
  struct REGION_CORE *v76; // rdx
  char *v77; // rax
  __int64 v78; // rax
  struct REGION *v79; // rbx
  __int64 v80; // rcx
  __int64 SessionState; // rax
  struct REGION *v82; // [rsp+30h] [rbp-49h] BYREF
  void *v83; // [rsp+38h] [rbp-41h] BYREF
  char *v84; // [rsp+40h] [rbp-39h] BYREF
  struct REGION *v85; // [rsp+48h] [rbp-31h] BYREF
  struct REGION *v86; // [rsp+50h] [rbp-29h] BYREF
  PVOID SystemArgument1; // [rsp+58h] [rbp-21h] BYREF
  struct REGION *Region; // [rsp+60h] [rbp-19h] BYREF
  __int64 v89; // [rsp+68h] [rbp-11h] BYREF
  struct REGION *v90; // [rsp+70h] [rbp-9h] BYREF
  __int64 v91; // [rsp+78h] [rbp-1h] BYREF
  struct REGION *v92; // [rsp+80h] [rbp+7h] BYREF
  struct REGION *v93; // [rsp+88h] [rbp+Fh]
  __int128 v94; // [rsp+90h] [rbp+17h]

  KeEnterCriticalRegion();
  v2 = (char *)this + 1112;
  ExAcquirePushLockSharedEx((char *)this + 1112, 0LL);
  v3 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  v4 = 0;
  v84 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 2LL);
  v5 = (_OWORD *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 142) )
  {
LABEL_147:
    ExReleasePushLockSharedEx(v3, 2LL);
    KeLeaveCriticalRegion();
    if ( PsGetCurrentThreadId() == *((HANDLE *)v2 + 1) )
    {
      *((_QWORD *)v2 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v2, 0LL);
    }
    KeLeaveCriticalRegion();
    return v4;
  }
  v6 = (struct REGION *)*((_QWORD *)this + 143);
  v4 = 1;
  SystemArgument1 = (PVOID)*((_QWORD *)this + 142);
  v7 = 0;
  v85 = v6;
  v8 = v6;
  if ( !v6 )
  {
    Region = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v84, 0x70u);
    v6 = Region;
    if ( !Region )
      goto LABEL_13;
    RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region);
    v7 = 1;
    v85 = v6;
    v8 = v6;
  }
  if ( v8 )
  {
    if ( !v7 && (*((_DWORD *)this + 9) & 0x10) == 0 )
    {
      v9 = *((_QWORD *)this + 62);
      if ( v9 && (*(_DWORD *)(v9 + 116) & 0x800) != 0 && !*((_QWORD *)this + 145) )
        *((_DWORD *)this + 130) |= 0x10u;
      goto LABEL_21;
    }
    if ( (unsigned int)RGNOBJ::bCopy(
                         (RGNOBJ *)&v85,
                         (const struct RustAutoHotpatchLockSH *)&v84,
                         (struct RGNOBJ *)&SystemArgument1) )
    {
      v13 = *((_QWORD *)this + 62);
      if ( v13 && (*(_DWORD *)(v13 + 116) & 0x800) != 0 )
        *((_DWORD *)this + 130) |= 0x10u;
      v6 = v85;
      *((_QWORD *)this + 143) = v85;
LABEL_21:
      v14 = *((_QWORD *)this + 20);
      v15 = (struct REGION *)*((_QWORD *)this + 21);
      v16 = (struct REGION *)*((_QWORD *)this + 141);
      if ( !((unsigned __int64)v16 | (unsigned __int64)v15 | v14) )
      {
        v17 = (struct REGION *)*((_QWORD *)this + 144);
        v85 = v17;
        if ( v17 )
        {
          Region = *(struct REGION **)(W32GetSessionState(v14) + 88);
          if ( v17 != *((struct REGION **)Region + 520) )
          {
            v18 = (_QWORD *)((char *)v17 + 24);
            SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
            if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
            {
              (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 152LL))((_QWORD *)v17 + 3);
            }
            else if ( *v18 )
            {
              sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((struct REGION *)((char *)v17 + 24));
              v21 = (struct REGION *)((char *)v17 + 24);
              if ( sizeScanAlloc == 112 )
              {
                pScan = (char *)REGION_CORE::get_pScan(v21, v20);
                v23 = (char *)*((_QWORD *)Region + 517);
                UserSessionState = W32GetUserSessionState(v24);
                NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
                  (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72288),
                  v23,
                  pScan);
                v17 = v85;
              }
              else if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v21) > 0x70 )
              {
                v27 = (char *)REGION_CORE::get_pScan((struct REGION *)((char *)v17 + 24), v26);
                GreDeleteFastMutex(v27);
              }
              *v18 = 0LL;
            }
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v17);
            v5 = (_OWORD *)((char *)this + 1000);
          }
          *((_QWORD *)this + 144) = 0LL;
        }
        v28 = (struct REGION *)((char *)v6 + 24);
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
          if ( !v6 )
            v28 = 0LL;
          (*(void (__fastcall **)(REGION_CORE *, _OWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 80LL))(v28, v5);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
        else
        {
          if ( (unsigned int)REGION_CORE::get_sizeScan(v28) > 0x38 )
            *v5 = xmmword_140259EE0;
          else
            *v5 = *(_OWORD *)((char *)v6 + 52);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
LABEL_142:
        v2 = (char *)this + 1112;
        goto LABEL_143;
      }
      v93 = (struct REGION *)*((_QWORD *)this + 20);
      v29 = v14 != 0;
      v30 = v14 != 0;
      v94 = 0LL;
      v31 = (unsigned int)(v29 + 1);
      *(&v93 + v30) = v15;
      if ( !v15 )
        v31 = v30;
      v32 = v31 + 1;
      *(&v93 + v31) = v16;
      if ( !v16 )
        v32 = v31;
      v83 = (void *)*((_QWORD *)this + 144);
      if ( !v83 )
      {
        v90 = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v84, 0x70u);
        v33 = v90;
        if ( v90 )
        {
          RGNMEMOBJ::vInit((RGNMEMOBJ *)&v90);
          v83 = v33;
        }
      }
      if ( !v83 )
      {
        v4 = 0;
LABEL_131:
        v67 = v83;
        *((_QWORD *)this + 144) = 0LL;
        if ( v67 )
        {
          v89 = *(_QWORD *)(W32GetSessionState(v30) + 88);
          if ( v67 != *(_QWORD **)(v89 + 4160) )
          {
            if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
            {
              (*(void (__fastcall **)(_QWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 152LL))(v67 + 3);
            }
            else
            {
              v68 = v67[3];
              v85 = (struct REGION *)(v67 + 3);
              if ( v68 )
              {
                v69 = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(v67 + 3));
                v71 = (REGION_CORE *)(v67 + 3);
                if ( v69 == 112 )
                {
                  v72 = (char *)REGION_CORE::get_pScan(v71, v70);
                  v73 = *(char **)(v89 + 4136);
                  v75 = W32GetUserSessionState(v74);
                  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
                    (NSInstrumentation::CLeakTrackingAllocator *)(v75 + 72288),
                    v73,
                    v72);
                }
                else if ( (unsigned int)REGION_CORE::get_sizeScanAlloc(v71) > 0x70 )
                {
                  v77 = (char *)REGION_CORE::get_pScan((REGION_CORE *)(v67 + 3), v76);
                  GreDeleteFastMutex(v77);
                }
                *(_QWORD *)v85 = 0LL;
              }
            }
            FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v67);
          }
        }
        goto LABEL_142;
      }
      if ( v32 == 1 )
      {
        v82 = v93;
        if ( !(unsigned int)RGNOBJ::bCopy(
                              (RGNOBJ *)&v83,
                              (const struct RustAutoHotpatchLockSH *)&v84,
                              (struct RGNOBJ *)&v82) )
        {
          v4 = 0;
          goto LABEL_131;
        }
        goto LABEL_80;
      }
      if ( v32 == 2 )
      {
        v86 = v93;
        v82 = (struct REGION *)v94;
        v35 = *(_QWORD *)(W32GetSessionState(v30) + 88);
        if ( v83 == *(void **)(v35 + 4160) )
          v36 = RGNOBJ::iComplexity((RGNOBJ *)&v83, v34);
        else
          v36 = RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v35, &v83, &v86, &v82, 1, &v83);
        if ( !v36 )
        {
          v4 = 0;
          goto LABEL_131;
        }
        goto LABEL_80;
      }
      v82 = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v84, 0x70u);
      if ( v82 )
        RGNMEMOBJ::vInit((RGNMEMOBJ *)&v82);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v82);
      v92 = v93;
      v89 = *((_QWORD *)&v94 + 1);
      v91 = v94;
      v38 = (ULONG_PTR)v82;
      if ( v82 )
      {
        v40 = *(_QWORD *)(W32GetSessionState(v37) + 88);
        if ( v82 == *(struct REGION **)(v40 + 4160) )
          v41 = RGNOBJ::iComplexity((RGNOBJ *)&v82, v39);
        else
          v41 = RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v40, &v82, &v92, &v91, 1, &v82);
        if ( v41 )
        {
          v44 = *(_QWORD *)(W32GetSessionState(v42) + 88);
          if ( v83 == *(void **)(v44 + 4160)
             ? RGNOBJ::iComplexity((RGNOBJ *)&v83, v43)
             : (unsigned int)RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(
                               v44,
                               &v83,
                               &v82,
                               &v89,
                               1,
                               &v83) )
          {
            v38 = (ULONG_PTR)v82;
            goto LABEL_74;
          }
        }
        v38 = (ULONG_PTR)v82;
      }
      v4 = 0;
LABEL_74:
      if ( v38 )
      {
        v46 = (_QWORD *)(v38 + 80);
        if ( v46 )
        {
          v47 = *v46;
          if ( *(_QWORD **)(*v46 + 8LL) != v46 )
            goto LABEL_129;
          v48 = (_QWORD *)v46[1];
          if ( (_QWORD *)*v48 != v46 )
            goto LABEL_129;
          *v48 = v47;
          *(_QWORD *)(v47 + 8) = v48;
          v46[1] = v46;
          *v46 = v46;
        }
      }
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v82);
      if ( !v4 )
        goto LABEL_131;
LABEL_80:
      v49 = v83;
      v49[18] = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v30) + 88) + 4144LL));
      if ( !(unsigned int)RGNOBJ::bOffset(
                            (RGNOBJ *)&v83,
                            (const struct RustAutoHotpatchLockSH *)&v84,
                            (const struct _POINTL *)this + 129) )
      {
        v3 = v84;
        v4 = 0;
        goto LABEL_131;
      }
      v50 = (struct REGION *)((char *)v85 + 24);
      if ( !v85 )
        v50 = 0LL;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        if ( !(*(unsigned int (__fastcall **)(REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 64LL))(v50) )
          goto LABEL_85;
      }
      else if ( (unsigned int)REGION_CORE::get_sizeScan(v50) != 56 )
      {
        goto LABEL_85;
      }
      v56 = (char *)v83;
      v57 = WPP_MAIN_CB.Dpc.SystemArgument1;
      v58 = (char *)v83 + 24;
      if ( !v83 )
        v58 = 0LL;
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        if ( (*(unsigned int (__fastcall **)(REGION_CORE *, _DWORD *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1 + 56LL))(
               v50,
               v58) )
        {
          v56 = (char *)v83;
          v57 = WPP_MAIN_CB.Dpc.SystemArgument1;
          goto LABEL_100;
        }
      }
      else if ( *((_DWORD *)v50 + 7) <= v58[7]
             && *((_DWORD *)v50 + 9) >= v58[9]
             && *((_DWORD *)v50 + 8) <= v58[8]
             && *((_DWORD *)v50 + 10) >= v58[10] )
      {
LABEL_100:
        *((_QWORD *)this + 144) = v56;
        v59 = (REGION_CORE *)(v56 + 24);
        if ( v57 )
        {
          if ( !v56 )
            v59 = 0LL;
          (*(void (__fastcall **)(REGION_CORE *, char *))(*(_QWORD *)v57 + 80LL))(v59, (char *)this + 1000);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
        else
        {
          if ( (unsigned int)REGION_CORE::get_sizeScan(v59) > 0x38 )
            *v5 = xmmword_140259EE0;
          else
            *v5 = *(_OWORD *)((char *)v83 + 52);
          *((_DWORD *)this + 9) &= ~0x10u;
        }
LABEL_127:
        v3 = v84;
        if ( v4 )
        {
LABEL_143:
          v78 = *((_QWORD *)this + 62);
          if ( v78 && (*(_DWORD *)(v78 + 116) & 0x800) != 0 )
            *((_DWORD *)this + 130) |= 8u;
          DC::vUpdateScaledRegions(this, (const struct RustAutoHotpatchLockSH *)&v84);
          v79 = (struct REGION *)*((_QWORD *)this + 143);
          SessionState = W32GetSessionState(v80);
          DC::vUpdate_VisRectFastOpt(
            this,
            *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88),
            (const struct RustAutoHotpatchLockSH *)&v84,
            v79);
          goto LABEL_147;
        }
        goto LABEL_131;
      }
LABEL_85:
      v82 = RGNMEMOBJ::AllocateRegion((const struct RustAutoHotpatchLockSH *)&v84, 0x70u);
      if ( v82 )
        RGNMEMOBJ::vInit((RGNMEMOBJ *)&v82);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v82);
      v52 = (ULONG_PTR)v82;
      if ( v82 )
      {
        v54 = *(_QWORD *)(W32GetSessionState(v51) + 88);
        if ( v82 == *(struct REGION **)(v54 + 4160) )
          v55 = RGNOBJ::iComplexity((RGNOBJ *)&v82, v53);
        else
          v55 = RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(v54, &v82, &v85, &v83, 1, &v82);
        if ( v55
          && (unsigned int)RGNOBJ::bCopy(
                             (RGNOBJ *)&v83,
                             (const struct RustAutoHotpatchLockSH *)&v84,
                             (struct RGNOBJ *)&v82) )
        {
          v60 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
          v61 = (char *)v83;
          *((_QWORD *)this + 144) = v83;
          if ( v60 )
          {
            v62 = *v60;
            v63 = v61 + 24;
            if ( !v61 )
              v63 = 0LL;
            (*(void (__fastcall **)(char *, char *))(v62 + 80))(v63, (char *)this + 1000);
            *((_DWORD *)this + 9) &= ~0x10u;
            v52 = (ULONG_PTR)v82;
          }
          else
          {
            if ( (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v61 + 24)) > 0x38 )
            {
              v52 = (ULONG_PTR)v82;
              *v5 = xmmword_140259EE0;
            }
            else
            {
              v52 = (ULONG_PTR)v82;
              *v5 = *(_OWORD *)((char *)v83 + 52);
            }
            *((_DWORD *)this + 9) &= ~0x10u;
          }
          goto LABEL_121;
        }
        v52 = (ULONG_PTR)v82;
      }
      v4 = 0;
LABEL_121:
      if ( !v52 )
        goto LABEL_126;
      v64 = (_QWORD *)(v52 + 80);
      if ( !v64 )
        goto LABEL_126;
      v65 = *v64;
      if ( *(_QWORD **)(*v64 + 8LL) == v64 )
      {
        v66 = (_QWORD *)v64[1];
        if ( (_QWORD *)*v66 == v64 )
        {
          *v66 = v65;
          *(_QWORD *)(v65 + 8) = v66;
          v64[1] = v64;
          *v64 = v64;
LABEL_126:
          RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v82);
          goto LABEL_127;
        }
      }
LABEL_129:
      __fastfail(3u);
    }
  }
LABEL_13:
  ExReleasePushLockSharedEx(v3, 2LL);
  KeLeaveCriticalRegion();
  CurrentThreadId = PsGetCurrentThreadId();
  v11 = (char *)this + 1112;
  if ( CurrentThreadId == *((HANDLE *)this + 140) )
  {
    *((_QWORD *)this + 140) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v11, 0LL);
  }
  KeLeaveCriticalRegion();
  return 0LL;
}
