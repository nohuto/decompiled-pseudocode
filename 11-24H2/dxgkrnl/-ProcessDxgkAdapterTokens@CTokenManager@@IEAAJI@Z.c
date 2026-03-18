/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001C630
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14001C380 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x14001C1C4 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D238 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14001D270 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14001D29C (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14001DAE0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x14001E70C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x14001EAC8 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x14001EBB8 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1400355F0 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1400376E8 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1400562BC (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E9A4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     DxgkGetPresentHistoryInternal @ 0x140293760 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall CTokenManager::ProcessDxgkAdapterTokens(CTokenManager *this, unsigned int a2)
{
  char v2; // r12
  unsigned int v3; // r13d
  unsigned int v4; // r15d
  int v6; // ebx
  __int64 v7; // rsi
  char *v8; // r13
  int PresentHistoryInternal; // eax
  _BYTE *v10; // rsi
  LONG v11; // r12d
  unsigned int v12; // r15d
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  void *v16; // rcx
  _QWORD *v18; // rcx
  CTokenManager *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  void *v22; // rax
  NTSTATUS v23; // eax
  char *v24; // r13
  int v25; // eax
  __int64 v26; // r12
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 Pool2; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r13
  __int64 *i; // rax
  bool v35; // r8
  int v36; // r13d
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  __int64 v41; // r13
  _QWORD *v42; // rdx
  _QWORD *j; // rax
  char v44; // r12
  HANDLE CurrentThreadId; // rax
  __int64 v46; // rcx
  char v47; // r12
  HANDLE v48; // rax
  __int64 v49; // rcx
  void *v50; // rcx
  __int64 v51; // r15
  void *v52; // r12
  NTSTATUS v53; // eax
  _QWORD *v54; // r15
  int v55; // eax
  void *v56; // rcx
  CTokenManager **v57; // rdx
  CTokenManager *v58; // rcx
  __int64 v59; // r15
  __int64 Win32kImportTable; // rax
  _QWORD *inserted; // r15
  LONG v62; // ecx
  __int64 *v63; // r15
  __int64 **v64; // r13
  __int64 *v65; // rax
  CompositionSurfaceObject *v66; // r15
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // eax
  struct FlipManagerTokenObject *v71; // rdx
  void *v72; // rcx
  __int64 v73; // rax
  bool v74; // [rsp+30h] [rbp-D0h] BYREF
  char v75; // [rsp+31h] [rbp-CFh]
  char v76; // [rsp+32h] [rbp-CEh]
  int v77; // [rsp+34h] [rbp-CCh]
  char v78; // [rsp+38h] [rbp-C8h]
  unsigned __int8 NewElement[3]; // [rsp+39h] [rbp-C7h] BYREF
  LONG v80; // [rsp+3Ch] [rbp-C4h] BYREF
  int v81; // [rsp+40h] [rbp-C0h]
  LONG PreviousState; // [rsp+44h] [rbp-BCh] BYREF
  PVOID v83; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v84; // [rsp+50h] [rbp-B0h]
  int v85; // [rsp+54h] [rbp-ACh]
  unsigned int v86; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  char *v89; // [rsp+70h] [rbp-90h]
  _DWORD v90[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v91; // [rsp+80h] [rbp-80h]
  _BYTE *v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h]
  CompositionSurfaceObject *v96; // [rsp+B0h] [rbp-50h]
  HANDLE Handle; // [rsp+B8h] [rbp-48h]
  _QWORD Buffer[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Src[2048]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  v84 = a2;
  v3 = 640;
  v75 = 1;
  v81 = 640;
  v4 = a2;
  do
  {
    v6 = 0;
    CTokenManager::AcquireTokenManagerLock(this);
    if ( !*((_QWORD *)this + 24) )
    {
      v18 = (_QWORD *)((char *)this + 168);
      v19 = (CTokenManager *)*((_QWORD *)this + 21);
      if ( v19 != (CTokenManager *)((char *)this + 168) )
      {
        if ( *((_QWORD **)v19 + 1) != v18 || (v20 = *(_QWORD *)v19, *(CTokenManager **)(*(_QWORD *)v19 + 8LL) != v19) )
LABEL_119:
          __fastfail(3u);
        *v18 = v20;
        *(_QWORD *)(v20 + 8) = v18;
        --*((_DWORD *)this + 46);
        *((_QWORD *)this + 24) = v19;
        goto LABEL_4;
      }
      v6 = CLegacyTokenBuffer::Create((struct CLegacyTokenBuffer **)this + 24);
    }
    if ( v6 < 0 )
      goto LABEL_23;
LABEL_4:
    v7 = *((_QWORD *)this + 24);
    v6 = 0;
    if ( v3 > *(_DWORD *)(v7 + 2104) )
      v6 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 24));
    v8 = *(char **)(v7 + 2096);
    v89 = v8;
    if ( v6 >= 0 )
    {
      v91 = 0LL;
      v93 = 0LL;
      v90[1] = *(_DWORD *)(v7 + 2104);
      v92 = Src;
      v90[0] = v4;
      PresentHistoryInternal = DxgkGetPresentHistoryInternal(v90, 0LL);
      v6 = PresentHistoryInternal;
      if ( PresentHistoryInternal )
      {
        if ( PresentHistoryInternal != 261 )
        {
          if ( PresentHistoryInternal == -1073741789 )
          {
            v3 = 640;
            if ( (unsigned int)v91 > 0x280 )
              v3 = v91;
            v6 = 0;
            v81 = v3;
            CTokenManager::ReleaseTokenManagerLock(this);
            continue;
          }
          v2 = 0;
          v75 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        v75 = 0;
      }
      v10 = Src;
      v11 = 0;
      PreviousState = 0;
      v12 = 0;
      v86 = 0;
      v13 = 0;
      v77 = 0;
      v85 = 0;
      if ( (_DWORD)v93 )
      {
        while ( 1 )
        {
          v14 = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 != 7 )
            break;
          v52 = (void *)*((_QWORD *)v10 + 2);
          if ( v52 )
          {
            v83 = 0LL;
            v53 = ObReferenceObjectByHandle(v52, 2u, g_pDxgkCompositionObjectType, 1, &v83, 0LL);
            v54 = v83;
            if ( v53 >= 0 )
            {
              v55 = (***((__int64 (__fastcall ****)(_QWORD))v83 + 2))(*((_QWORD *)v83 + 2));
              v56 = v54;
              if ( v55 == 2 )
              {
                if ( (int)CompositionTokenObject::MarkCompleted((CompositionTokenObject *)v54) >= 0 )
                {
                  v57 = (CTokenManager **)*((_QWORD *)this + 35);
                  v58 = (CTokenManager *)(v54 + 6);
                  if ( *v57 != (CTokenManager *)((char *)this + 272) )
                    goto LABEL_119;
                  *(_QWORD *)v58 = (char *)this + 272;
                  v54[7] = v57;
                  *v57 = v58;
                  *((_QWORD *)this + 35) = v58;
                  v59 = v54[15];
                  if ( v59 )
                  {
                    Win32kImportTable = DxgkGetWin32kImportTable();
                    (*(void (__fastcall **)(__int64))(Win32kImportTable + 64))(v59);
                  }
                  goto LABEL_96;
                }
                v56 = v54;
              }
              ObfDereferenceObject(v56);
            }
LABEL_96:
            NtClose(v52);
            v13 = v77;
          }
LABEL_18:
          v12 = v86;
          v10 += *((unsigned int *)v10 + 1);
          v11 = PreviousState;
          v8 = v89;
          if ( ++v85 >= (unsigned int)v93 )
            goto LABEL_19;
        }
        if ( v14 == 8 )
        {
          v67 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v67 + 456))();
          v68 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(_QWORD))(v68 + 32))(*((_QWORD *)v10 + 2));
          v69 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v69 + 496))();
          v13 = v77;
          goto LABEL_18;
        }
        if ( v14 != 2 )
        {
          if ( v14 != 9 )
          {
            memmove(v8, v10, *((unsigned int *)v10 + 1));
            v21 = *((unsigned int *)v10 + 1);
            PreviousState = v11 + 1;
            v86 = v21 + v12;
            v89 = &v8[v21];
LABEL_31:
            v13 = v77;
            goto LABEL_18;
          }
          v70 = *((_DWORD *)v10 + 8);
          v74 = 1;
          if ( (v70 & 4) == 0 )
            goto LABEL_17;
          v71 = (struct FlipManagerTokenObject *)*((_QWORD *)v10 + 2);
          if ( !v71 )
            goto LABEL_17;
          CTokenManager::CompleteFlipManagerToken(this, v71, &v74);
          goto LABEL_79;
        }
        if ( (*((_DWORD *)v10 + 15) & 0x2000) != 0 && (*((_DWORD *)v10 + 15) & 0xC000) == 0x4000 )
        {
          CTokenManager::CompleteIndependentFlipToken(
            this,
            *((_QWORD *)v10 + 1),
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v10 + 16),
            v84);
LABEL_16:
          v13 = v77;
LABEL_17:
          v77 = ++v13;
          goto LABEL_18;
        }
        v87 = *((_QWORD *)v10 + 1);
        v22 = (void *)*((_QWORD *)v10 + 8);
        Object = 0LL;
        v74 = 0;
        Handle = v22;
        v23 = ObReferenceObjectByHandle(v22, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
        v24 = (char *)Object;
        v96 = (CompositionSurfaceObject *)Object;
        if ( v23 < 0 )
          goto LABEL_31;
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) != 1 )
        {
          ObfDereferenceObject(v24);
          v13 = v77;
          goto LABEL_18;
        }
        v25 = *((_DWORD *)v10 + 15);
        v76 = 1;
        v80 = v25 & 0x2000;
        v83 = v24;
        v26 = 0LL;
        if ( (v25 & 0x42000) == 0x2000 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v24 + 48, 0LL);
          v83 = v24;
          if ( *((_DWORD *)v24 + 44) )
          {
            v27 = v24 + 160;
            v28 = (_QWORD *)*((_QWORD *)v24 + 20);
            v83 = v24;
            while ( v28 != v27 )
            {
              if ( *(v28 - 1) == v87 )
              {
                v76 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64))(*(v28 - 3) + 200LL))(
                        v28 - 3,
                        v27,
                        v87);
                goto LABEL_40;
              }
              v28 = (_QWORD *)*v28;
            }
          }
          v76 = 0;
LABEL_40:
          CPushLock::ReleaseLock((CPushLock *)(v24 + 48));
        }
        Pool2 = ExAllocatePool2(256LL, 616LL, 1869892948LL);
        v30 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 24) = 6;
          *(_QWORD *)(Pool2 + 32) = 0LL;
          *(_DWORD *)(Pool2 + 40) = 0;
          *(_QWORD *)Pool2 = &CToken::`vftable';
          v31 = v87;
          *(_WORD *)(v30 + 64) = 0;
          *(_QWORD *)(v30 + 96) = 0LL;
          *(_DWORD *)(v30 + 68) = 0;
          *(_QWORD *)(v30 + 56) = v31;
          *(_QWORD *)(v30 + 48) = v24;
          ObReferenceObjectByPointer(v24, 3u, g_pDxgkCompositionObjectType, 0);
          v32 = *(_QWORD *)(v30 + 48);
          *(_QWORD *)v30 = &CFlipToken::`vftable';
          *(_QWORD *)(v30 + 104) = 0LL;
          *(_QWORD *)(v30 + 112) = 0LL;
          *(_DWORD *)(v30 + 577) = 0;
          *(_QWORD *)(v30 + 592) = 0LL;
          *(_QWORD *)(v30 + 600) = 0LL;
          v95 = *(_QWORD *)(v30 + 56);
          *(_DWORD *)(v30 + 581) = 256;
          v94 = v32;
          KeEnterCriticalRegion();
          v33 = v32 + 48;
          ExAcquirePushLockSharedEx(v33, 0LL);
          v78 = 0;
          if ( *(_DWORD *)(v94 + 176) )
          {
            for ( i = *(__int64 **)(v94 + 160); i != (__int64 *)(v94 + 160); i = (__int64 *)*i )
            {
              if ( *(i - 1) == v95 )
              {
                v78 = *((_BYTE *)i + 17);
                break;
              }
            }
          }
          if ( PsGetCurrentThreadId() == *(HANDLE *)(v33 + 8) )
          {
            *(_QWORD *)(v33 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v33, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v33, 0LL);
          }
          KeLeaveCriticalRegion();
          v35 = v76;
          *(_BYTE *)(v30 + 576) = v78 == 0;
          *(_QWORD *)(v30 + 164) = 0LL;
          *(_QWORD *)(v30 + 172) = 0LL;
          *(_QWORD *)(v30 + 180) = 0LL;
          *(_QWORD *)(v30 + 188) = 0LL;
          *(_QWORD *)(v30 + 204) = 1065353216LL;
          *(_DWORD *)(v30 + 212) = 0;
          *(_QWORD *)(v30 + 216) = 1065353216LL;
          *(_DWORD *)(v30 + 224) = 0;
          *(_QWORD *)(v30 + 136) = 0LL;
          *(_QWORD *)(v30 + 144) = 0LL;
          v36 = CFlipToken::InitializeCompleted(
                  (CFlipToken *)v30,
                  (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v10 + 16),
                  v35);
          if ( v36 < 0 )
          {
            (**(void (__fastcall ***)(__int64, __int64))v30)(v30, 1LL);
            v37 = 0LL;
          }
          else
          {
            v37 = v30;
          }
          if ( v36 >= 0 )
          {
            v26 = v37;
LABEL_53:
            if ( v36 < 0 )
              v26 = 0LL;
            if ( !v80 )
              ObCloseHandle(Handle, 1);
            ObfDereferenceObject(v83);
            if ( v36 < 0 )
              goto LABEL_31;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 144LL))(v26)
              || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 152LL))(v26) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 184LL))(v26) )
              {
                CTokenQueue::AddToken((CTokenManager *)((char *)this + 360), (struct CToken *)v26);
              }
              else
              {
                Buffer[0] = *(_QWORD *)(v26 + 48);
                v80 = 0;
                Buffer[1] = 0LL;
                NewElement[0] = 0;
                inserted = RtlInsertElementGenericTable(
                             (PRTL_GENERIC_TABLE)((char *)this + 200),
                             Buffer,
                             0x10u,
                             NewElement);
                if ( inserted )
                {
                  if ( NewElement[0] )
                  {
                    v83 = 0LL;
                    v80 = CTokenQueue::Create((struct CTokenQueue **)&v83);
                    if ( v80 < 0 )
                    {
                      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), inserted);
                      inserted = 0LL;
                    }
                    else
                    {
                      inserted[1] = v83;
                    }
                  }
                  v62 = v80;
                  if ( v80 < 0 )
                  {
LABEL_110:
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
                    (**(void (__fastcall ***)(__int64, __int64))v26)(v26, 1LL);
                    goto LABEL_31;
                  }
                  v63 = (__int64 *)inserted[1];
                  v64 = (__int64 **)(v26 + 8);
                  *((_DWORD *)v63 + 6) = 0;
                  v65 = (__int64 *)*v63;
                  if ( *(__int64 **)(*v63 + 8) != v63 )
                    goto LABEL_119;
                  *v64 = v65;
                  *(_QWORD *)(v26 + 16) = v63;
                  v65[1] = (__int64)v64;
                  *v63 = (__int64)v64;
                  if ( *(_DWORD *)(v26 + 24) == 2 )
                  {
                    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 104LL))(v26) )
                      v63[2] = v26;
                    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 96LL))(v26)
                      && (*v64 == v63 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*(*v64 - 1) + 88))(*v64 - 1)) )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 80LL))(v26);
                    }
                    v62 = v80;
                  }
                }
                else
                {
                  v62 = -1073741801;
                }
                if ( v62 < 0 )
                  goto LABEL_110;
              }
            }
            else
            {
              v38 = (_QWORD *)((char *)this + 344);
              v74 = 1;
              v39 = *((_QWORD *)this + 43);
              v40 = (_QWORD *)(v26 + 8);
              if ( *(CTokenManager **)(v39 + 8) != (CTokenManager *)((char *)this + 344) )
                goto LABEL_119;
              *v40 = v39;
              *(_QWORD *)(v26 + 16) = v38;
              *(_QWORD *)(v39 + 8) = v40;
              *v38 = v40;
            }
            v41 = *(_QWORD *)(v26 + 48);
            if ( v41 )
            {
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v41 + 48, 0LL);
              if ( *(_DWORD *)(v41 + 176) )
              {
                v42 = (_QWORD *)(v41 + 160);
                for ( j = *(_QWORD **)(v41 + 160); j != v42; j = (_QWORD *)*j )
                {
                  if ( *(j - 1) == v87 )
                  {
                    v44 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64))(*(j - 3) + 40LL))(
                            j - 3,
                            v42,
                            v87);
                    goto LABEL_68;
                  }
                }
              }
              v44 = 0;
LABEL_68:
              CurrentThreadId = PsGetCurrentThreadId();
              v46 = v41 + 48;
              if ( CurrentThreadId == *(HANDLE *)(v41 + 56) )
              {
                *(_QWORD *)(v41 + 56) = 0LL;
                ExReleasePushLockExclusiveEx(v46, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v46, 0LL);
              }
              KeLeaveCriticalRegion();
              if ( v44 )
              {
                v72 = (void *)*((_QWORD *)this + 9);
                v80 = 0;
                ZwSetEvent(v72, &v80);
              }
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v41 + 48, 0LL);
              v47 = *(_BYTE *)(v41 + 209);
              v48 = PsGetCurrentThreadId();
              v49 = v41 + 48;
              if ( v48 == *(HANDLE *)(v41 + 56) )
              {
                *(_QWORD *)(v41 + 56) = 0LL;
                ExReleasePushLockExclusiveEx(v49, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v49, 0LL);
              }
              KeLeaveCriticalRegion();
              if ( v47 )
              {
                v50 = (void *)*((_QWORD *)this + 10);
                v80 = 0;
                if ( v50 )
                  ZwSetEvent(v50, &v80);
              }
            }
            v51 = *((_QWORD *)v10 + 11);
            if ( v51 )
            {
              v73 = DxgkGetWin32kImportTable();
              (*(void (__fastcall **)(__int64))(v73 + 64))(v51);
            }
LABEL_79:
            if ( !v74 )
              goto LABEL_31;
            goto LABEL_16;
          }
        }
        else
        {
          v36 = -1073741801;
        }
        v66 = v96;
        CompositionSurfaceObject::SignalGpuFence(v96, v87, *((_QWORD *)v10 + 2), 1);
        if ( *((_QWORD *)v10 + 6) )
          CompositionSurfaceObject::SignalPresentLimitSemaphore(v66, v87);
        goto LABEL_53;
      }
LABEL_19:
      v15 = *((_QWORD *)this + 24);
      *(_DWORD *)(*(_QWORD *)(v15 + 2088) + 16LL) += v11;
      *(_DWORD *)(*(_QWORD *)(v15 + 2088) + 2068LL) += v12;
      *(_DWORD *)(v15 + 2104) -= v12;
      *(_QWORD *)(v15 + 2096) += v12;
      if ( (_DWORD)v93 != v13 )
      {
        v16 = (void *)*((_QWORD *)this + 8);
        PreviousState = 0;
        ZwSetEvent(v16, &PreviousState);
      }
      v2 = v75;
      v4 = v84;
    }
LABEL_22:
    v3 = v81;
LABEL_23:
    CTokenManager::ReleaseTokenManagerLock(this);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  while ( v2 );
  return (unsigned int)v6;
}
