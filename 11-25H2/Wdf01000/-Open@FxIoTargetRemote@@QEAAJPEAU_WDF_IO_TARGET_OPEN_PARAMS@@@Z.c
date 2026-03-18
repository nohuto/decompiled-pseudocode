/*
 * XREFs of ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140011E70
 * Callers:
 *     imp_WdfIoTargetOpen @ 0x140011BA0 (imp_WdfIoTargetOpen.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x14009BC80 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004694 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x14001146C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1400127B8 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpenParams@@@Z @ 0x140012994 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpe.c)
 *     ?Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ @ 0x140012BC4 (-Clear@FxIoTargetRemoteOpenParams@@QEAAXXZ.c)
 *     ?RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ @ 0x140012DDC (-RegisterForPnpNotification@FxIoTargetRemote@@QEAAJXZ.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x140012E30 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoTargetRemote::Open(FxIoTargetRemote *this, _WDF_IO_TARGET_OPEN_PARAMS *OpenParams)
{
  unsigned __int8 v4; // r8
  _WDF_IO_TARGET_OPEN_TYPE Type; // r12d
  signed int _a1; // ebx
  _UNICODE_STRING v7; // xmm6
  void *v8; // r15
  FxIoTargetRemoteOpenParams *p_m_OpenParams; // r13
  unsigned __int16 Length; // dx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int16 v12; // bx
  unsigned int Tag; // r8d
  void *v14; // rcx
  void *v15; // rax
  unsigned __int64 v16; // rbx
  _FX_DRIVER_GLOBALS *v17; // r10
  unsigned __int8 v18; // r8
  void *m_TargetNotifyHandle; // rcx
  __int32 v20; // r12d
  __int32 v21; // r12d
  char v22; // r12
  __int64 *AllocationSize; // rax
  _LARGE_INTEGER *v24; // rax
  _LARGE_INTEGER *p_AllocationSize; // rcx
  unsigned __int8 v26; // r13
  unsigned __int8 v27; // si
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // r8
  __int64 v30; // rdx
  __int64 v32; // rax
  unsigned __int16 v33; // r9
  const void *v34; // rcx
  FxIoTargetRemote_vtbl *v35; // rax
  FxIoTarget *v36; // rcx
  int v37; // eax
  _FX_DRIVER_GLOBALS *v38; // rcx
  const void *v39; // r8
  unsigned __int16 v40; // r9
  _FX_DRIVER_GLOBALS *v41; // rcx
  const void *v42; // rdx
  FxVerifierLock *v43; // rcx
  FxVerifierLock *v44; // rcx
  FxVerifierLock *v45; // rcx
  FxVerifierLock *v46; // rcx
  _FILE_OBJECT *TargetFileObject; // rcx
  unsigned int v48; // eax
  _FX_DRIVER_GLOBALS **v49; // rbx
  unsigned __int64 v50; // r9
  void *v51; // rax
  unsigned __int16 m_ObjectSize; // dx
  const void *v53; // rdi
  int v54; // eax
  _FX_DRIVER_GLOBALS *v55; // rcx
  const void *v56; // rdx
  const void *v57; // rcx
  const void *v58; // rcx
  bool v59; // zf
  int _a2; // [rsp+38h] [rbp-A9h]
  char v61; // [rsp+48h] [rbp-99h]
  unsigned int EaBufferLength; // [rsp+4Ch] [rbp-95h]
  void *v63[2]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE pended[40]; // [rsp+60h] [rbp-81h] OVERLAPPED BYREF
  FxPoolTypeOrPoolFlags v65; // [rsp+88h] [rbp-59h] BYREF
  _FX_DRIVER_GLOBALS *v66; // [rsp+98h] [rbp-49h]
  _BYTE params[80]; // [rsp+A0h] [rbp-41h] OVERLAPPED BYREF
  void *retaddr; // [rsp+140h] [rbp+5Fh]
  char v69; // [rsp+150h] [rbp+6Fh]
  unsigned __int16 v70; // [rsp+150h] [rbp+6Fh]
  unsigned __int8 irql; // [rsp+158h] [rbp+77h] BYREF
  unsigned __int8 close; // [rsp+160h] [rbp+7Fh] BYREF

  memset(&params[8], 0, 0x48uLL);
  Type = OpenParams->Type;
  _a1 = 0;
  irql = 0;
  v61 = 0;
  v7 = 0LL;
  close = 0;
  memset(&pended[8], 0, 32);
  if ( Type != WdfIoTargetOpenReopen )
  {
    v69 = 0;
    EaBufferLength = 0;
    v8 = 0LL;
    p_m_OpenParams = (FxIoTargetRemoteOpenParams *)&params[8];
    v4 = 0;
    if ( Type == WdfIoTargetOpenByName )
    {
      Length = OpenParams->TargetDeviceName.Length;
      *(_QWORD *)params = &this->m_Globals;
      m_Globals = this->m_Globals;
      v66 = m_Globals;
      v12 = Length + 2;
      v70 = Length;
      if ( (unsigned __int16)(Length + 2) < Length )
      {
        _a1 = -1073741675;
        v63[1] = *(void **)&pended[32];
        v33 = 10;
      }
      else
      {
        EaBufferLength = 0;
        if ( Length == 0xFFFE )
        {
          v15 = *(void **)&pended[32];
          v63[1] = *(void **)&pended[32];
          goto LABEL_11;
        }
        if ( *(_QWORD *)&pended[32] )
        {
          FxPoolFree(*(void **)&pended[32]);
          m_Globals = v66;
          *(_QWORD *)&pended[24] = 0LL;
        }
        Tag = m_Globals->Tag;
        v14 = retaddr;
        v63[1] = 0LL;
        *(_QWORD *)pended = 256LL;
        if ( !m_Globals->FxPoolTrackingOn )
          v14 = 0LL;
        v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (FxPoolTypeOrPoolFlags *)&v63[1], v12, Tag, v14);
        v63[1] = v15;
        *(_QWORD *)&pended[32] = v15;
        if ( v15 )
        {
          Length = v70;
          *(_WORD *)&pended[26] = v12;
LABEL_11:
          v16 = Length;
          memmove(v15, OpenParams->TargetDeviceName.Buffer, Length);
          *(_WORD *)&pended[24] = v70;
          v69 = 0;
          *((_WORD *)v63[1] + (v16 >> 1)) = 0;
          _a1 = 0;
          if ( OpenParams->EaBuffer && (v48 = OpenParams->EaBufferLength, v69 = 0, EaBufferLength = 0, v48) )
          {
            v49 = *(_FX_DRIVER_GLOBALS ***)params;
            v50 = v48;
            v51 = 0LL;
            *(_QWORD *)&v65.UsePoolType = 0LL;
            v65.u.PoolFlags = 256LL;
            if ( *(_BYTE *)(**(_QWORD **)params + 272LL) )
              v51 = retaddr;
            v8 = FxPoolAllocator(
                   **(_FX_DRIVER_GLOBALS ***)params,
                   (FX_POOL *)(**(_QWORD **)params + 112LL),
                   &v65,
                   v50,
                   *(_DWORD *)(**(_QWORD **)params + 68LL),
                   v51);
            if ( !v8 )
            {
              m_ObjectSize = this->m_ObjectSize;
              v53 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !m_ObjectSize )
                v53 = 0LL;
              WPP_IFR_SF_q(*v49, 2u, 0xEu, 0x10u, WPP_FxIoTargetRemote_cpp_Traceguids, v53);
              _a1 = -1073741670;
              goto LABEL_48;
            }
            EaBufferLength = OpenParams->EaBufferLength;
            memmove(v8, OpenParams->EaBuffer, EaBufferLength);
            _a1 = 0;
            v7 = *(_UNICODE_STRING *)&pended[24];
            v69 = 0;
          }
          else
          {
            v7 = *(_UNICODE_STRING *)&pended[24];
          }
LABEL_13:
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v43 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
          {
            FxVerifierLock::Lock(v43, &irql, v4);
          }
          else
          {
            irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          }
          if ( this->m_State == WdfIoTargetDeleted )
          {
            v41 = this->m_Globals;
            v40 = 17;
            _a2 = 5;
          }
          else
          {
            v17 = this->m_Globals;
            if ( this->m_OpenState == 1 )
            {
              if ( v17->FxVerboseOn )
              {
                v58 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !this->m_ObjectSize )
                  v58 = 0LL;
                WPP_IFR_SF_q(v17, 5u, 0xEu, 0x13u, WPP_FxIoTargetRemote_cpp_Traceguids, v58);
              }
              KeClearEvent(&this->m_OpenedEvent.m_Event.m_Event);
              this->m_OpenState = 2;
              goto LABEL_19;
            }
            v40 = 18;
            _a2 = this->m_OpenState;
            v41 = this->m_Globals;
          }
          v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v42 = 0LL;
          WPP_IFR_SF_qd(v41, 2u, 0xEu, v40, WPP_FxIoTargetRemote_cpp_Traceguids, v42, _a2);
          _a1 = -1073741436;
LABEL_19:
          if ( SLOBYTE(this->m_ObjectFlags) < 0
            && (v45 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
          {
            FxVerifierLock::Unlock(v45, irql, v18);
          }
          else
          {
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
          }
          if ( _a1 < 0 )
          {
LABEL_48:
            if ( v63[1] )
              FxPoolFree(v63[1]);
            if ( v8 )
              FxPoolFree(v8);
            return (unsigned int)_a1;
          }
          m_TargetNotifyHandle = this->m_TargetNotifyHandle;
          if ( m_TargetNotifyHandle )
            IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
          this->m_TargetNotifyHandle = 0LL;
          if ( !v69 )
            FxIoTargetRemoteOpenParams::Clear(&this->m_OpenParams);
          v20 = Type - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( !v21 )
            {
              v22 = v69;
              if ( !v69 )
              {
                p_m_OpenParams->EaBufferLength = EaBufferLength;
                p_m_OpenParams->OpenType = WdfIoTargetOpenByName;
                p_m_OpenParams->EaBuffer = v8;
                p_m_OpenParams->TargetDeviceName = v7;
                p_m_OpenParams->DesiredAccess = OpenParams->DesiredAccess;
                p_m_OpenParams->FileAttributes = OpenParams->FileAttributes;
                p_m_OpenParams->ShareAccess = OpenParams->ShareAccess;
                p_m_OpenParams->CreateDisposition = OpenParams->CreateDisposition;
                p_m_OpenParams->CreateOptions = OpenParams->CreateOptions;
                AllocationSize = OpenParams->AllocationSize;
                if ( AllocationSize )
                {
                  p_m_OpenParams->AllocationSize.QuadPart = *AllocationSize;
                  p_m_OpenParams->AllocationSizePointer = &p_m_OpenParams->AllocationSize;
                }
                else
                {
                  p_m_OpenParams->AllocationSizePointer = 0LL;
                }
              }
              _a1 = FxIoTargetRemote::OpenTargetHandle(this, OpenParams, p_m_OpenParams);
              if ( _a1 < 0 )
              {
                v61 = 1;
                close = 1;
              }
              else if ( !v69 )
              {
                this->m_OpenParams.EaBufferLength = EaBufferLength;
                this->m_OpenParams.OpenType = WdfIoTargetOpenByName;
                this->m_OpenParams.EaBuffer = v8;
                this->m_OpenParams.TargetDeviceName = v7;
                this->m_OpenParams.DesiredAccess = OpenParams->DesiredAccess;
                this->m_OpenParams.FileAttributes = OpenParams->FileAttributes;
                this->m_OpenParams.ShareAccess = OpenParams->ShareAccess;
                this->m_OpenParams.CreateDisposition = OpenParams->CreateDisposition;
                this->m_OpenParams.CreateOptions = OpenParams->CreateOptions;
                v24 = (_LARGE_INTEGER *)OpenParams->AllocationSize;
                if ( v24 )
                {
                  p_AllocationSize = &this->m_OpenParams.AllocationSize;
                  this->m_OpenParams.AllocationSize = *v24;
                }
                else
                {
                  p_AllocationSize = 0LL;
                }
                this->m_OpenParams.AllocationSizePointer = p_AllocationSize;
                v8 = 0LL;
                v63[1] = (void *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
              }
LABEL_36:
              *(_QWORD *)&pended[16] = &pended[8];
              *(_QWORD *)&pended[8] = &pended[8];
              if ( _a1 < 0 )
              {
                v26 = v61;
              }
              else
              {
                _a1 = FxIoTargetRemote::GetTargetDeviceRelations(this, &close);
                if ( _a1 < 0 || !this->m_TargetFileObject )
                  goto LABEL_39;
                if ( !v22 )
                {
                  this->m_EvtQueryRemove.m_Method = OpenParams->EvtIoTargetQueryRemove;
                  this->m_EvtRemoveCanceled.m_Method = OpenParams->EvtIoTargetRemoveCanceled;
                  this->m_EvtRemoveComplete.m_Method = OpenParams->EvtIoTargetRemoveComplete;
                }
                v54 = FxIoTargetRemote::RegisterForPnpNotification(this);
                _a1 = v54;
                if ( v54 < 0 )
                {
                  v55 = this->m_Globals;
                  if ( v55->FxVerboseOn )
                  {
                    v56 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !this->m_ObjectSize )
                      v56 = 0LL;
                    WPP_IFR_SF_qd(v55, 5u, 0xEu, 0x14u, WPP_FxIoTargetRemote_cpp_Traceguids, v56, v54);
                  }
                  v26 = close;
                  _a1 = 0;
                  this->m_EvtQueryRemove.m_Method = 0LL;
                  this->m_EvtRemoveCanceled.m_Method = 0LL;
                  this->m_EvtRemoveComplete.m_Method = 0LL;
                }
                else
                {
LABEL_39:
                  v26 = close;
                }
              }
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v44 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
              {
                FxVerifierLock::Lock(v44, &irql, 0);
                v27 = irql;
              }
              else
              {
                v27 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
              }
              if ( _a1 >= 0 )
              {
                this->m_TargetStackSize = this->m_TargetDevice->StackSize;
                this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
                v35 = this->__vftable;
                this->m_OpenState = 3;
                v37 = v35->GotoStartState(v36, (_LIST_ENTRY *)&pended[8], 0);
                _a1 = v37;
                if ( v37 < 0 )
                {
                  v38 = this->m_Globals;
                  if ( v38->FxVerboseOn )
                  {
                    v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !this->m_ObjectSize )
                      v39 = 0LL;
                    WPP_IFR_SF_qd(v38, 5u, 0xEu, 0x15u, WPP_FxIoTargetRemote_cpp_Traceguids, v39, v37);
                  }
                  v26 = 1;
                }
              }
              else
              {
                this->m_OpenState = 1;
              }
              KeSetEvent(&this->m_OpenedEvent.m_Event.m_Event, 0, 0);
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v46 = *(FxVerifierLock **)&this[-1].m_OpenParams.CreateDisposition) != 0LL )
              {
                FxVerifierLock::Unlock(v46, v27, v28);
              }
              else
              {
                KeReleaseSpinLock(&this->m_NPLock.m_Lock, v27);
              }
              if ( _a1 >= 0 )
              {
                while ( 1 )
                {
                  v30 = *(_QWORD *)&pended[8];
                  if ( *(_BYTE **)&pended[8] == &pended[8] )
                    break;
                  if ( *(_BYTE **)(*(_QWORD *)&pended[8] + 8LL) != &pended[8]
                    || (v32 = **(_QWORD **)&pended[8],
                        *(_QWORD *)(**(_QWORD **)&pended[8] + 8LL) != *(_QWORD *)&pended[8]) )
                  {
                    __fastfail(3u);
                  }
                  *(_QWORD *)&pended[8] = **(_QWORD **)&pended[8];
                  *(_QWORD *)(v32 + 8) = &pended[8];
                  FxIoTarget::SubmitPendedRequest(this, (FxRequestBase *)(v30 - 120));
                }
                goto LABEL_48;
              }
LABEL_60:
              if ( v26 )
                FxIoTargetRemote::Close(this, 2, v29);
              goto LABEL_48;
            }
            v59 = v21 == 2;
            v22 = v69;
            if ( !v59 )
              goto LABEL_36;
          }
          else
          {
            this->m_TargetDevice = OpenParams->TargetDeviceObject;
            TargetFileObject = OpenParams->TargetFileObject;
            this->m_TargetFileObject = TargetFileObject;
            this->m_TargetHandle = 0LL;
            if ( TargetFileObject )
              ObfReferenceObject(TargetFileObject);
            v22 = v69;
          }
          _a1 = 0;
          goto LABEL_36;
        }
        m_Globals = v66;
        _a1 = -1073741670;
        v33 = 11;
      }
      WPP_IFR_SF_D(m_Globals, 2u, 2u, v33, WPP_stringutil_cpp_Traceguids, _a1);
      v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v34 = 0LL;
      WPP_IFR_SF_q(**(_FX_DRIVER_GLOBALS ***)params, 2u, 0xEu, 0xFu, WPP_FxIoTargetRemote_cpp_Traceguids, v34);
      v26 = 0;
      goto LABEL_60;
    }
LABEL_105:
    v63[1] = (void *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    goto LABEL_13;
  }
  if ( this->m_OpenParams.OpenType == WdfIoTargetOpenByName )
  {
    Type = this->m_OpenParams.OpenType;
    p_m_OpenParams = &this->m_OpenParams;
    v69 = 1;
    v8 = 0LL;
    EaBufferLength = 0;
    goto LABEL_105;
  }
  v57 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    v57 = 0LL;
  _a1 = -1073741808;
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xEu, WPP_FxIoTargetRemote_cpp_Traceguids, v57, -1073741808);
  return (unsigned int)_a1;
}
