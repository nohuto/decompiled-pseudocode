/*
 * XREFs of ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14000CEB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?MarkCompleted@CompositionTokenObject@@QEAAJXZ @ 0x14000CCF8 (-MarkCompleted@CompositionTokenObject@@QEAAJXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14000E600 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 *     ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x14000F28C (-Create@CTokenQueue@@SAJPEAPEAV1@@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x14000F640 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x14000F72C (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x140035694 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x140037A68 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x140056A0C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
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
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // r12
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  __int64 Pool2; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // r13
  __int64 *i; // rax
  bool v36; // r8
  int v37; // r13d
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // r13
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  char v45; // r12
  HANDLE CurrentThreadId; // rax
  __int64 v47; // rcx
  char v48; // r12
  HANDLE v49; // rax
  __int64 v50; // rcx
  void *v51; // rcx
  __int64 v52; // r15
  void *v53; // r12
  NTSTATUS v54; // eax
  _QWORD *v55; // r15
  int v56; // eax
  void *v57; // rcx
  CTokenManager **v58; // rdx
  CTokenManager *v59; // rcx
  __int64 v60; // r15
  __int64 Win32kImportTable; // rax
  _QWORD *inserted; // r15
  LONG v63; // ecx
  __int64 *v64; // r15
  __int64 **v65; // r13
  __int64 *v66; // rax
  CompositionSurfaceObject *v67; // r15
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  struct FlipManagerTokenObject *v72; // rdx
  void *v73; // rcx
  __int64 v74; // rax
  bool v75; // [rsp+30h] [rbp-D0h] BYREF
  char v76; // [rsp+31h] [rbp-CFh]
  char v77; // [rsp+32h] [rbp-CEh]
  int v78; // [rsp+34h] [rbp-CCh]
  char v79; // [rsp+38h] [rbp-C8h]
  unsigned __int8 NewElement[3]; // [rsp+39h] [rbp-C7h] BYREF
  LONG v81; // [rsp+3Ch] [rbp-C4h] BYREF
  int v82; // [rsp+40h] [rbp-C0h]
  LONG PreviousState; // [rsp+44h] [rbp-BCh] BYREF
  PVOID v84; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  unsigned int v87; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v88; // [rsp+60h] [rbp-A0h]
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  char *v90; // [rsp+70h] [rbp-90h]
  _DWORD v91[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v92; // [rsp+80h] [rbp-80h]
  _BYTE *v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  __int64 v96; // [rsp+A0h] [rbp-60h]
  CompositionSurfaceObject *v97; // [rsp+B0h] [rbp-50h]
  HANDLE Handle; // [rsp+B8h] [rbp-48h]
  _QWORD Buffer[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Src[2048]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = 1;
  v85 = a2;
  v3 = 640;
  v76 = 1;
  v82 = 640;
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
    v90 = v8;
    if ( v6 >= 0 )
    {
      v92 = 0LL;
      v94 = 0LL;
      v91[1] = *(_DWORD *)(v7 + 2104);
      v93 = Src;
      v91[0] = v4;
      PresentHistoryInternal = DxgkGetPresentHistoryInternal(v91, 0LL);
      v6 = PresentHistoryInternal;
      if ( PresentHistoryInternal )
      {
        if ( PresentHistoryInternal != 261 )
        {
          if ( PresentHistoryInternal == -1073741789 )
          {
            v3 = 640;
            if ( (unsigned int)v92 > 0x280 )
              v3 = v92;
            v6 = 0;
            v82 = v3;
            CTokenManager::ReleaseTokenManagerLock(this);
            continue;
          }
          v2 = 0;
          v76 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        v76 = 0;
      }
      v10 = Src;
      v11 = 0;
      PreviousState = 0;
      v12 = 0;
      v87 = 0;
      v13 = 0;
      v78 = 0;
      v86 = 0;
      if ( (_DWORD)v94 )
      {
        while ( 1 )
        {
          v14 = *(_DWORD *)v10;
          if ( *(_DWORD *)v10 != 7 )
            break;
          v53 = (void *)*((_QWORD *)v10 + 2);
          if ( v53 )
          {
            v84 = 0LL;
            v54 = ObReferenceObjectByHandle(v53, 2u, g_pDxgkCompositionObjectType, 1, &v84, 0LL);
            v55 = v84;
            if ( v54 >= 0 )
            {
              v56 = (***((__int64 (__fastcall ****)(_QWORD))v84 + 2))(*((_QWORD *)v84 + 2));
              v57 = v55;
              if ( v56 == 2 )
              {
                if ( (int)CompositionTokenObject::MarkCompleted((CompositionTokenObject *)v55) >= 0 )
                {
                  v58 = (CTokenManager **)*((_QWORD *)this + 35);
                  v59 = (CTokenManager *)(v55 + 6);
                  if ( *v58 != (CTokenManager *)((char *)this + 272) )
                    goto LABEL_119;
                  *(_QWORD *)v59 = (char *)this + 272;
                  v55[7] = v58;
                  *v58 = v59;
                  *((_QWORD *)this + 35) = v59;
                  v60 = v55[15];
                  if ( v60 )
                  {
                    Win32kImportTable = DxgkGetWin32kImportTable();
                    (*(void (__fastcall **)(__int64))(Win32kImportTable + 64))(v60);
                  }
                  goto LABEL_96;
                }
                v57 = v55;
              }
              ObfDereferenceObject(v57);
            }
LABEL_96:
            NtClose(v53);
            v13 = v78;
          }
LABEL_18:
          v12 = v87;
          v10 += *((unsigned int *)v10 + 1);
          v11 = PreviousState;
          v8 = v90;
          if ( ++v86 >= (unsigned int)v94 )
            goto LABEL_19;
        }
        if ( v14 == 8 )
        {
          v68 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v68 + 456))();
          v69 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(_QWORD))(v69 + 32))(*((_QWORD *)v10 + 2));
          v70 = DxgkGetWin32kImportTable();
          (*(void (**)(void))(v70 + 496))();
          v13 = v78;
          goto LABEL_18;
        }
        if ( v14 != 2 )
        {
          if ( v14 != 9 )
          {
            memmove(v8, v10, *((unsigned int *)v10 + 1));
            v21 = *((unsigned int *)v10 + 1);
            PreviousState = v11 + 1;
            v87 = v21 + v12;
            v90 = &v8[v21];
LABEL_31:
            v13 = v78;
            goto LABEL_18;
          }
          v71 = *((_DWORD *)v10 + 8);
          v75 = 1;
          if ( (v71 & 4) == 0 )
            goto LABEL_17;
          v72 = (struct FlipManagerTokenObject *)*((_QWORD *)v10 + 2);
          if ( !v72 )
            goto LABEL_17;
          CTokenManager::CompleteFlipManagerToken(this, v72, &v75);
          goto LABEL_79;
        }
        if ( (*((_DWORD *)v10 + 15) & 0x2000) != 0 && (*((_DWORD *)v10 + 15) & 0xC000) == 0x4000 )
        {
          CTokenManager::CompleteIndependentFlipToken(
            this,
            *((_QWORD *)v10 + 1),
            (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v10 + 16),
            v85);
LABEL_16:
          v13 = v78;
LABEL_17:
          v78 = ++v13;
          goto LABEL_18;
        }
        v88 = *((_QWORD *)v10 + 1);
        v22 = (void *)*((_QWORD *)v10 + 8);
        Object = 0LL;
        v75 = 0;
        Handle = v22;
        v23 = ObReferenceObjectByHandle(v22, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
        v24 = (char *)Object;
        v97 = (CompositionSurfaceObject *)Object;
        if ( v23 < 0 )
          goto LABEL_31;
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) != 1 )
        {
          ObfDereferenceObject(v24);
          v13 = v78;
          goto LABEL_18;
        }
        v26 = *((_DWORD *)v10 + 15);
        v77 = 1;
        v81 = v26 & 0x2000;
        v84 = v24;
        v27 = 0LL;
        if ( (v26 & 0x42000) == 0x2000 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v24 + 48, 0LL);
          v84 = v24;
          if ( *((_DWORD *)v24 + 34) )
          {
            v28 = (_QWORD *)*((_QWORD *)v24 + 15);
            v29 = v24 + 120;
            v84 = v24;
            while ( v28 != v29 )
            {
              if ( *(v28 - 1) == v88 )
              {
                v77 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64))(*(v28 - 3) + 200LL))(
                        v28 - 3,
                        v29,
                        v88);
                goto LABEL_40;
              }
              v28 = (_QWORD *)*v28;
            }
          }
          v77 = 0;
LABEL_40:
          CPushLock::ReleaseLock((CPushLock *)(v24 + 48));
        }
        Pool2 = ExAllocatePool2(256LL, 616LL, 1869892948LL, v25);
        v31 = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 24) = 6;
          *(_QWORD *)(Pool2 + 32) = 0LL;
          *(_DWORD *)(Pool2 + 40) = 0;
          *(_QWORD *)Pool2 = &CToken::`vftable';
          v32 = v88;
          *(_WORD *)(v31 + 64) = 0;
          *(_QWORD *)(v31 + 96) = 0LL;
          *(_DWORD *)(v31 + 68) = 0;
          *(_QWORD *)(v31 + 56) = v32;
          *(_QWORD *)(v31 + 48) = v24;
          ObReferenceObjectByPointer(v24, 3u, g_pDxgkCompositionObjectType, 0);
          v33 = *(_QWORD *)(v31 + 48);
          *(_QWORD *)v31 = &CFlipToken::`vftable';
          *(_QWORD *)(v31 + 104) = 0LL;
          *(_QWORD *)(v31 + 112) = 0LL;
          *(_DWORD *)(v31 + 577) = 0;
          *(_QWORD *)(v31 + 592) = 0LL;
          *(_QWORD *)(v31 + 600) = 0LL;
          v96 = *(_QWORD *)(v31 + 56);
          *(_DWORD *)(v31 + 581) = 256;
          v95 = v33;
          KeEnterCriticalRegion();
          v34 = v33 + 48;
          ExAcquirePushLockSharedEx(v34, 0LL);
          v79 = 0;
          if ( *(_DWORD *)(v95 + 136) )
          {
            for ( i = *(__int64 **)(v95 + 120); i != (__int64 *)(v95 + 120); i = (__int64 *)*i )
            {
              if ( *(i - 1) == v96 )
              {
                v79 = *((_BYTE *)i + 17);
                break;
              }
            }
          }
          if ( PsGetCurrentThreadId() == *(HANDLE *)(v34 + 8) )
          {
            *(_QWORD *)(v34 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v34, 0LL);
          }
          else
          {
            ExReleasePushLockSharedEx(v34, 0LL);
          }
          KeLeaveCriticalRegion();
          v36 = v77;
          *(_BYTE *)(v31 + 576) = v79 == 0;
          *(_QWORD *)(v31 + 164) = 0LL;
          *(_QWORD *)(v31 + 172) = 0LL;
          *(_QWORD *)(v31 + 180) = 0LL;
          *(_QWORD *)(v31 + 188) = 0LL;
          *(_QWORD *)(v31 + 204) = 1065353216LL;
          *(_DWORD *)(v31 + 212) = 0;
          *(_QWORD *)(v31 + 216) = 1065353216LL;
          *(_DWORD *)(v31 + 224) = 0;
          *(_QWORD *)(v31 + 136) = 0LL;
          *(_QWORD *)(v31 + 144) = 0LL;
          v37 = CFlipToken::InitializeCompleted(
                  (CFlipToken *)v31,
                  (const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)(v10 + 16),
                  v36);
          if ( v37 < 0 )
          {
            (**(void (__fastcall ***)(__int64, __int64))v31)(v31, 1LL);
            v38 = 0LL;
          }
          else
          {
            v38 = v31;
          }
          if ( v37 >= 0 )
          {
            v27 = v38;
LABEL_53:
            if ( v37 < 0 )
              v27 = 0LL;
            if ( !v81 )
              ObCloseHandle(Handle, 1);
            ObfDereferenceObject(v84);
            if ( v37 < 0 )
              goto LABEL_31;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 144LL))(v27)
              || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 152LL))(v27) )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 184LL))(v27) )
              {
                CTokenQueue::AddToken((CTokenManager *)((char *)this + 360), (struct CToken *)v27);
              }
              else
              {
                Buffer[0] = *(_QWORD *)(v27 + 48);
                v81 = 0;
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
                    v84 = 0LL;
                    v81 = CTokenQueue::Create((struct CTokenQueue **)&v84);
                    if ( v81 < 0 )
                    {
                      RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), inserted);
                      inserted = 0LL;
                    }
                    else
                    {
                      inserted[1] = v84;
                    }
                  }
                  v63 = v81;
                  if ( v81 < 0 )
                  {
LABEL_110:
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 56LL))(v27);
                    (**(void (__fastcall ***)(__int64, __int64))v27)(v27, 1LL);
                    goto LABEL_31;
                  }
                  v64 = (__int64 *)inserted[1];
                  v65 = (__int64 **)(v27 + 8);
                  *((_DWORD *)v64 + 6) = 0;
                  v66 = (__int64 *)*v64;
                  if ( *(__int64 **)(*v64 + 8) != v64 )
                    goto LABEL_119;
                  *v65 = v66;
                  *(_QWORD *)(v27 + 16) = v64;
                  v66[1] = (__int64)v65;
                  *v64 = (__int64)v65;
                  if ( *(_DWORD *)(v27 + 24) == 2 )
                  {
                    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 104LL))(v27) )
                      v64[2] = v27;
                    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 96LL))(v27)
                      && (*v65 == v64 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*(*v65 - 1) + 88))(*v65 - 1)) )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 80LL))(v27);
                    }
                    v63 = v81;
                  }
                }
                else
                {
                  v63 = -1073741801;
                }
                if ( v63 < 0 )
                  goto LABEL_110;
              }
            }
            else
            {
              v39 = (_QWORD *)((char *)this + 344);
              v75 = 1;
              v40 = *((_QWORD *)this + 43);
              v41 = (_QWORD *)(v27 + 8);
              if ( *(CTokenManager **)(v40 + 8) != (CTokenManager *)((char *)this + 344) )
                goto LABEL_119;
              *v41 = v40;
              *(_QWORD *)(v27 + 16) = v39;
              *(_QWORD *)(v40 + 8) = v41;
              *v39 = v41;
            }
            v42 = *(_QWORD *)(v27 + 48);
            if ( v42 )
            {
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v42 + 48, 0LL);
              if ( *(_DWORD *)(v42 + 136) )
              {
                v43 = *(_QWORD **)(v42 + 120);
                v44 = (_QWORD *)(v42 + 120);
                while ( v43 != v44 )
                {
                  if ( *(v43 - 1) == v88 )
                  {
                    v45 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, unsigned __int64))(*(v43 - 3) + 40LL))(
                            v43 - 3,
                            v44,
                            v88);
                    goto LABEL_68;
                  }
                  v43 = (_QWORD *)*v43;
                }
              }
              v45 = 0;
LABEL_68:
              CurrentThreadId = PsGetCurrentThreadId();
              v47 = v42 + 48;
              if ( CurrentThreadId == *(HANDLE *)(v42 + 56) )
              {
                *(_QWORD *)(v42 + 56) = 0LL;
                ExReleasePushLockExclusiveEx(v47, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v47, 0LL);
              }
              KeLeaveCriticalRegion();
              if ( v45 )
              {
                v73 = (void *)*((_QWORD *)this + 9);
                v81 = 0;
                ZwSetEvent(v73, &v81);
              }
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v42 + 48, 0LL);
              v48 = *(_BYTE *)(v42 + 169);
              v49 = PsGetCurrentThreadId();
              v50 = v42 + 48;
              if ( v49 == *(HANDLE *)(v42 + 56) )
              {
                *(_QWORD *)(v42 + 56) = 0LL;
                ExReleasePushLockExclusiveEx(v50, 0LL);
              }
              else
              {
                ExReleasePushLockSharedEx(v50, 0LL);
              }
              KeLeaveCriticalRegion();
              if ( v48 )
              {
                v51 = (void *)*((_QWORD *)this + 10);
                v81 = 0;
                if ( v51 )
                  ZwSetEvent(v51, &v81);
              }
            }
            v52 = *((_QWORD *)v10 + 11);
            if ( v52 )
            {
              v74 = DxgkGetWin32kImportTable();
              (*(void (__fastcall **)(__int64))(v74 + 64))(v52);
            }
LABEL_79:
            if ( !v75 )
              goto LABEL_31;
            goto LABEL_16;
          }
        }
        else
        {
          v37 = -1073741801;
        }
        v67 = v97;
        CompositionSurfaceObject::SignalGpuFence(v97, v88, *((_QWORD *)v10 + 2), 1);
        if ( *((_QWORD *)v10 + 6) )
          CompositionSurfaceObject::SignalPresentLimitSemaphore(v67, v88);
        goto LABEL_53;
      }
LABEL_19:
      v15 = *((_QWORD *)this + 24);
      *(_DWORD *)(*(_QWORD *)(v15 + 2088) + 16LL) += v11;
      *(_DWORD *)(*(_QWORD *)(v15 + 2088) + 2068LL) += v12;
      *(_DWORD *)(v15 + 2104) -= v12;
      *(_QWORD *)(v15 + 2096) += v12;
      if ( (_DWORD)v94 != v13 )
      {
        v16 = (void *)*((_QWORD *)this + 8);
        PreviousState = 0;
        ZwSetEvent(v16, &PreviousState);
      }
      v2 = v76;
      v4 = v85;
    }
LABEL_22:
    v3 = v82;
LABEL_23:
    CTokenManager::ReleaseTokenManagerLock(this);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  while ( v2 );
  return (unsigned int)v6;
}
