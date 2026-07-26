/*
 * XREFs of NdisEnumerateFilterModules @ 0x14002DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140161800 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140162130 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x140172D30 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  NDIS_STATUS v5; // ebx
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  Rtl::KString *v7; // r12
  NDIS_HANDLE v8; // r15
  ULONG v9; // esi
  ULONG v10; // r13d
  ULONG v11; // r14d
  _NDIS_BIND_PATHS *BindPaths; // rcx
  KIRQL v13; // al
  _NDIS_FILTER_BLOCK *HighestFilter; // r13
  struct _NDIS_MINIPORT_BLOCK *v16; // rdi
  _NDIS_BIND_PATHS *v17; // rax
  unsigned __int8 v18; // r15
  _NDIS_FILTER_BLOCK *v19; // rsi
  struct _NDIS_MINIPORT_BLOCK *v20; // rbp
  KIRQL v21; // dl
  KSPIN_LOCK *v22; // rcx
  struct _NDIS_MINIPORT_BLOCK *v23; // r9
  struct _NDIS_MINIPORT_BLOCK *v24; // rax
  ULONG v25; // ebp
  _NDIS_BIND_PATHS *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  KIRQL v29; // dl
  KSPIN_LOCK *v30; // rcx
  _NDIS_FILTER_BLOCK *v31; // r8
  Rtl::KString v32; // xmm0
  Rtl::KString *value; // rax
  unsigned int v34; // esi
  unsigned int v35; // eax
  int v36; // eax
  _NDIS_FILTER_BLOCK *v37; // rdx
  Rtl::KString *v38; // rax
  Rtl::KString *v39; // rdx
  unsigned int v40; // ebp
  char *v41; // r12
  __int64 Length; // rcx
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  __m128i v44; // xmm0
  __m128i *v45; // rax
  unsigned int v46; // eax
  _NDIS_FILTER_BLOCK *v47; // rdx
  Rtl::KString *v48; // rax
  const void **v49; // rdx
  unsigned __int8 v50[4]; // [rsp+40h] [rbp-A8h] BYREF
  ULONG v51; // [rsp+44h] [rbp-A4h]
  _NDIS_FILTER_BLOCK *i; // [rsp+48h] [rbp-A0h]
  unsigned int v53; // [rsp+50h] [rbp-98h]
  struct _NDIS_MINIPORT_BLOCK *v54; // [rsp+58h] [rbp-90h] BYREF
  struct _NDIS_MINIPORT_BLOCK *v55; // [rsp+60h] [rbp-88h]
  struct _NDIS_MINIPORT_BLOCK *v56[2]; // [rsp+68h] [rbp-80h]
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-70h]
  Ndis::BindEngine *p_BindEngine; // [rsp+80h] [rbp-68h]
  Rtl::KString v59; // [rsp+88h] [rbp-60h]
  char v60; // [rsp+F0h] [rbp+8h]
  char *v61; // [rsp+F8h] [rbp+10h]

  v61 = (char *)InterfaceBuffer;
  v60 = (char)NdisHandle;
  v5 = 0;
  v6 = 0LL;
  v54 = 0LL;
  v53 = 0;
  v7 = (Rtl::KString *)((char *)InterfaceBuffer + InterfaceBufferLength);
  i = 0LL;
  v8 = NdisHandle;
  v9 = InterfaceBufferLength;
  v10 = InterfaceBufferLength;
  v51 = InterfaceBufferLength;
  v50[0] = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InterfaceBuffer) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InterfaceBuffer,
      13,
      41,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)NdisHandle);
  }
  switch ( *(_BYTE *)v8 )
  {
    case 5:
      v28 = *((_QWORD *)v8 + 2);
      v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v8 + 4);
      if ( *(_BYTE *)(v28 + 100) > 6u || *(_BYTE *)(v28 + 100) == 6 && *(_BYTE *)(v28 + 101) >= 0x1Eu )
        goto LABEL_47;
      break;
    case 0x11:
      v6 = (struct _NDIS_MINIPORT_BLOCK *)v8;
      if ( *((_BYTE *)v8 + 32) > 6u || *((_BYTE *)v8 + 32) == 6 && *((_BYTE *)v8 + 33) >= 0x1Eu )
        goto LABEL_47;
      break;
    case 0x12:
      v27 = *((_QWORD *)v8 + 3);
      v6 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v8 + 2);
      if ( *(_BYTE *)(v27 + 56) > 6u || *(_BYTE *)(v27 + 56) == 6 && *(_BYTE *)(v27 + 57) >= 0x1Eu )
LABEL_47:
        v50[0] = 2;
      break;
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v11 = 80;
  if ( !v6 )
  {
    v5 = -1073741811;
    goto LABEL_43;
  }
  if ( v9 >= 0x50 )
  {
    v10 = v9 - 80;
    v51 = v9 - 80;
    *(_QWORD *)v61 = 5243264LL;
    *((_DWORD *)v61 + 3) = 16;
    *((_DWORD *)v61 + 2) = 0;
    i = (_NDIS_FILTER_BLOCK *)(v61 + 16);
  }
  BindPaths = v6->BindPaths;
  if ( BindPaths )
  {
    ndisReferenceMiniportByName(BindPaths->Paths, &v54, 0, MPREF_LWF_ENUMAPI);
    v16 = v54;
    v55 = v54;
    if ( v54 )
    {
      v17 = v54->BindPaths;
      v18 = v50[0];
      v19 = i;
      v56[0] = v54;
      v51 = v17->Number - 1;
      do
      {
        if ( !v16->BindPaths )
          v51 = 0;
        p_BindEngine = &v16->BindEngine;
        Ndis::BindEngine::BeginPolicyUpdates(&v16->BindEngine);
        SpinLock = &v16->Lock;
        v50[0] = KeAcquireSpinLockRaiseToDpc(&v16->Lock);
        v20 = v54;
        v16->MiniportThread = KeGetCurrentThread();
        for ( i = v20->HighestFilter; i; i = i->LowerFilter )
        {
          v29 = v50[0];
          v30 = SpinLock;
          v55->MiniportThread = 0LL;
          KeReleaseSpinLock(v30, v29);
          v31 = i;
          v32 = 0LL;
          v59 = 0LL;
          value = i->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          if ( value )
          {
            v32 = *value;
            v59 = *value;
          }
          v35 = v32.MaximumLength + i->FilterInstanceName.__ptr_.__value_->MaximumLength + 64;
          v11 += v35;
          v53 = v35;
          if ( v10 >= v35 )
          {
            v19->Header.Type = 0x80;
            v19->Header.Revision = v18;
            v19->Header.Size = 80;
            HIDWORD(v19->NextFilter) = (v31->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
            LODWORD(v19->NextFilter) = 2 - ((v31->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0);
            LODWORD(v19->FilterDriver) = v31->IfIndex;
            v19->FilterModuleContext = (void *)v31->IfBlock->NetLuid.Value;
            *((_DWORD *)&v19->Header + 1) = 2;
            *(Rtl::KString *)&v19->Miniport = v32;
            if ( v18 >= 2u )
            {
              v36 = 2;
              if ( !v31->Characteristics.SendNetBufferListsHandler )
              {
                *((_DWORD *)&v19->Header + 1) = 6;
                v36 = 6;
              }
              if ( !v31->Characteristics.ReturnNetBufferListsHandler )
                *((_DWORD *)&v19->Header + 1) = v36 | 8;
            }
            WORD1(v19->FilterFriendlyName) = v31->FilterInstanceName.__ptr_.__value_->MaximumLength;
            LOWORD(v19->FilterFriendlyName) = v31->FilterInstanceName.__ptr_.__value_->MaximumLength;
            v7 = (Rtl::KString *)((char *)v7 - v31->FilterInstanceName.__ptr_.__value_->MaximumLength);
            *(_QWORD *)&v19->Flags = v7;
            memmove(
              v7,
              v31->FilterInstanceName.__ptr_.__value_->Buffer,
              v31->FilterInstanceName.__ptr_.__value_->MaximumLength);
            v37 = i;
            v38 = i->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
            if ( v38 )
            {
              v7 = (Rtl::KString *)((char *)v7 - v38->MaximumLength);
              LOWORD(v19->Miniport) = WORD1(v19->Miniport);
              v19->FilterInstanceName.__ptr_.__value_ = v7;
              v39 = v37->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
              memmove(v7, v39->Buffer, v39->MaximumLength);
            }
            ++*((_DWORD *)v61 + 2);
            v19 = (_NDIS_FILTER_BLOCK *)((char *)v19 + 64);
            v10 -= v53;
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v20, v50);
        }
        v21 = v50[0];
        v22 = SpinLock;
        v55->MiniportThread = 0LL;
        KeReleaseSpinLock(v22, v21);
        Ndis::BindEngine::EndPolicyUpdates(p_BindEngine);
        Ndis::BindEngine::ApplyBindChanges(p_BindEngine, RunAsynchronous, 0);
        v23 = v54;
        if ( (v54->PnPFlags & 0x8000000) != 0 )
        {
          v40 = v54->FilterClass.__ptr_.__value_->Length + v54->MiniportName.Length + 80;
          v11 += v40;
          if ( v10 >= v40 )
          {
            v19->Header = (_NDIS_OBJECT_HEADER)5243264;
            HIDWORD(v19->NextFilter) = 1;
            LODWORD(v19->NextFilter) = 2;
            LODWORD(v19->FilterDriver) = v23->IfIndex;
            v19->FilterModuleContext = (void *)v23->NetLuid.Value;
            *((_DWORD *)&v19->Header + 1) = 1;
            *(Rtl::KString *)&v19->Miniport = *v23->FilterClass.__ptr_.__value_;
            WORD1(v19->FilterFriendlyName) = v23->MiniportName.Length;
            LOWORD(v19->FilterFriendlyName) = v23->MiniportName.Length;
            v41 = (char *)v7 - v23->MiniportName.Length;
            *(_QWORD *)&v19->Flags = v41;
            memmove(v41, v23->MiniportName.Buffer, v23->MiniportName.Length);
            v23 = v54;
            Length = v54->FilterClass.__ptr_.__value_->Length;
            v7 = (Rtl::KString *)&v41[-Length];
            if ( (_WORD)Length )
            {
              v19->FilterInstanceName.__ptr_.__value_ = v7;
              memmove(v7, v23->FilterClass.__ptr_.__value_->Buffer, v23->FilterClass.__ptr_.__value_->Length);
              v23 = v54;
            }
            ++*((_DWORD *)v61 + 2);
            v19 = (_NDIS_FILTER_BLOCK *)((char *)v19 + 64);
            v10 -= v40;
          }
        }
        v24 = v56[0];
        if ( v23 != v56[0] )
        {
          ndisDereferenceMiniport(v23, 0x25u);
          v24 = v56[0];
        }
        v25 = v51;
        if ( !v51 )
          break;
        v26 = v24->BindPaths;
        --v51;
        ndisReferenceMiniportByName(&v26->Paths[v25 - 1], &v54, 1u, MPREF_LWF_ENUMAPI);
        v16 = v54;
        v55 = v54;
      }
      while ( v54 );
      ndisDereferenceMiniport(v56[0], 0x25u);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v9 = InterfaceBufferLength;
      LOBYTE(v8) = v60;
      goto LABEL_12;
    }
    v5 = -1073676282;
LABEL_43:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    goto LABEL_15;
  }
  Ndis::BindEngine::BeginPolicyUpdates(&v6->BindEngine);
  v13 = KeAcquireSpinLockRaiseToDpc(&v6->Lock);
  HighestFilter = v6->HighestFilter;
  v50[0] = v13;
  if ( HighestFilter )
  {
    v34 = v51;
    i = (_NDIS_FILTER_BLOCK *)((char *)i + 2);
    do
    {
      v6->MiniportThread = 0LL;
      KeReleaseSpinLock(&v6->Lock, v13);
      FilterDriver = HighestFilter->FilterDriver;
      v44 = 0LL;
      *(_OWORD *)v56 = 0LL;
      v45 = (__m128i *)FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
      if ( v45 )
      {
        v44 = *v45;
        *(__m128i *)v56 = *v45;
      }
      v46 = v53
          + (unsigned __int16)_mm_cvtsi128_si32(v44)
          + HighestFilter->FilterInstanceName.__ptr_.__value_->Length
          + 80;
      v11 += v46;
      v53 = v46;
      if ( v34 >= v46 )
      {
        v47 = i;
        *(_DWORD *)((char *)&i[-1].Triage.__ptr_.__value_ + 6) = 5243264;
        *(_DWORD *)((char *)&v47->NextFilter + 2) = (HighestFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 1) + 1;
        *(_NDIS_OBJECT_HEADER *)((char *)&v47->Header + 6) = (_NDIS_OBJECT_HEADER)(2
                                                                                 - ((HighestFilter->FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0));
        *(_DWORD *)((char *)&v47->NextFilter + 6) = HighestFilter->IfIndex;
        *(_NDIS_FILTER_DRIVER_BLOCK **)((char *)&v47->FilterDriver + 6) = (_NDIS_FILTER_DRIVER_BLOCK *)HighestFilter->IfBlock->NetLuid.Value;
        *(_DWORD *)&v47->Header.Size = 2;
        *(__m128i *)((char *)&v47->FilterModuleContext + 6) = v44;
        LOWORD(v47->FilterFriendlyName) = HighestFilter->FilterInstanceName.__ptr_.__value_->Length;
        HIWORD(v47->FilterInstanceName.__ptr_.__value_) = HighestFilter->FilterInstanceName.__ptr_.__value_->Length;
        v7 = (Rtl::KString *)((char *)v7 - HighestFilter->FilterInstanceName.__ptr_.__value_->Length);
        *(_UNICODE_STRING **)((char *)&v47->FilterFriendlyName + 6) = (_UNICODE_STRING *)v7;
        memmove(
          v7,
          HighestFilter->FilterInstanceName.__ptr_.__value_->Buffer,
          HighestFilter->FilterInstanceName.__ptr_.__value_->Length);
        v48 = HighestFilter->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
        if ( v48 )
        {
          v7 = (Rtl::KString *)((char *)v7 - v48->Length);
          *(_NDIS_MINIPORT_BLOCK **)((char *)&i->Miniport + 6) = (_NDIS_MINIPORT_BLOCK *)v7;
          v49 = (const void **)HighestFilter->FilterDriver->Bind._p->_t.FilterClass.__ptr_.__value_;
          memmove(v7, v49[1], *(unsigned __int16 *)v49);
        }
        i = (_NDIS_FILTER_BLOCK *)((char *)i + 64);
        ++*((_DWORD *)v61 + 2);
        v34 -= v53;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v6, v50);
      HighestFilter = HighestFilter->LowerFilter;
      v13 = v50[0];
    }
    while ( HighestFilter );
    LOBYTE(v8) = v60;
    v51 = v34;
    v9 = InterfaceBufferLength;
  }
  v6->MiniportThread = 0LL;
  KeReleaseSpinLock(&v6->Lock, v13);
  Ndis::BindEngine::EndPolicyUpdates(&v6->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&v6->BindEngine, RunAsynchronous, 0);
  MmUnlockPagableImageSection(ImageSectionHandle);
  v10 = v51;
LABEL_12:
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v11 > v9 )
    v5 = -1073676266;
  *BytesNeeded = v11;
  *BytesWritten = v9 - v10;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x2Au,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)v8,
      v5);
  return v5;
}
