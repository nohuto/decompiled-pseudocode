/*
 * XREFs of ndisDispatchRequest @ 0x140029830
 * Callers:
 *     ndisDriverDispatch @ 0x14002A3D0 (ndisDriverDispatch.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z @ 0x1400289A0 (-ndisCheckAccess@@YAEPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAX@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1400653B0 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400656A0 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1400658C0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     McTemplateK0xqqq_EtwWriteTransfer @ 0x140065D00 (McTemplateK0xqqq_EtwWriteTransfer.c)
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x140074B00 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x14008F980 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ndisDriverSystemDispatch @ 0x1400AAFD8 (ndisDriverSystemDispatch.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1400D2368 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, struct _IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned int v4; // edi
  _OWORD *Pool2; // rax
  _BYTE *v7; // rbx
  void *v8; // r8
  char *FsContext; // rbp
  struct _NDIS_MINIPORT_BLOCK *v10; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v12; // al
  KIRQL v13; // r14
  void *v14; // rcx
  struct _NDIS_MINIPORT_BLOCK *v15; // r14
  struct SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rbx
  KIRQL v17; // r12
  int v18; // eax
  bool v19; // r13
  char **v20; // rdx
  void **v21; // rcx
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rcx
  unsigned __int8 v25; // r8
  __int64 v26; // rdx
  unsigned __int8 v27; // cl
  char v28; // cl
  unsigned __int8 v29; // cl
  char v30; // r9
  __int64 v31; // rax
  unsigned __int8 v32; // dl
  __int16 v33; // r8
  __int64 v34; // rax
  void (__fastcall *v35)(_QWORD, _QWORD); // r8
  char v36; // al
  unsigned int v37; // eax
  struct _IO_STACK_LOCATION *v39; // [rsp+78h] [rbp+10h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v39 = CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = 259;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  switch ( CurrentStackLocation->MajorFunction )
  {
    case 0u:
      Pool2 = (_OWORD *)ExAllocatePool2(64LL, 64LL, 1668236366);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ndisSecurityDescriptor;
        *Pool2 = 0LL;
        Pool2[1] = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        *(_BYTE *)Pool2 = ndisCheckAccess(a2, CurrentStackLocation, v8);
        v7[1] = ndisCheckAccess(a2, CurrentStackLocation, &unk_140104910);
        v7[2] = ndisCheckAccess(a2, CurrentStackLocation, &unk_140126900);
        CurrentStackLocation->FileObject->FsContext = v7;
        _InterlockedIncrement(&dword_140126FE0);
      }
      else
      {
        v4 = -1073741670;
      }
      goto LABEL_71;
    case 2u:
    case 0xFu:
      goto LABEL_71;
    case 0xEu:
      v37 = ndisHandlePnPRequest(a2);
      goto LABEL_68;
    case 0x12u:
      FsContext = (char *)CurrentStackLocation->FileObject->FsContext;
      v10 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)FsContext + 4);
      if ( *((_DWORD *)FsContext + 6)
        && v10
        && ndisReferenceMiniportByHandle(*((struct _NDIS_MINIPORT_BLOCK **)FsContext + 4), 0, MPREF_AOAC_CLEANUP) )
      {
        AoAc = v10->AoAc;
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
        v13 = v12;
        if ( *((_QWORD *)FsContext + 4) )
        {
          v20 = (char **)*((_QWORD *)FsContext + 1);
          if ( v20[1] != FsContext + 8 || (v21 = (void **)*((_QWORD *)FsContext + 2), *v21 != FsContext + 8) )
            __fastfail(3u);
          *v21 = v20;
          v20[1] = (char *)v21;
          --*((_DWORD *)AoAc + 6);
          v22 = *((unsigned int *)FsContext + 7);
          if ( (int)v22 > 0 )
          {
            ndisAoAcActiveRefSubtract(AoAc, *((unsigned int *)FsContext + 6), v22);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qDL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v23,
                0xEu,
                0x28u,
                (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
                (char)v10,
                *((_DWORD *)FsContext + 6),
                *((_DWORD *)AoAc + 13));
            if ( (byte_140125103 & 4) != 0 )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))McTemplateK0xqqq_EtwWriteTransfer)(
                v24,
                &NicActiveReleased,
                &v10->InterfaceGuid,
                (_NET_LUID_LH)v10->NetLuid.Value,
                *((_DWORD *)FsContext + 6),
                0,
                *((_DWORD *)AoAc + 13));
          }
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v13);
          ndisNicQuietCheckRef(v10);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v12);
        }
        ndisDereferenceMiniport(v10, 3u);
      }
      v14 = (void *)*((_QWORD *)FsContext + 6);
      if ( v14 )
      {
        ndisIfDereferenceCompartmentForUser(v14);
        *((_QWORD *)FsContext + 6) = 0LL;
      }
      v15 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)FsContext + 4);
      if ( !v15
        || !ndisReferenceMiniportByHandle(*((struct _NDIS_MINIPORT_BLOCK **)FsContext + 4), 0, MPREF_AOAC_CLEANUP) )
      {
        goto LABEL_65;
      }
      if ( (v15->Flags & 0x180) != 0x80 )
        goto LABEL_64;
      m_impl = v15->IdleSm.__ptr_.__value_->m_engine.m_impl;
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
      *((_BYTE *)m_impl + 1009) = v17;
      v18 = *((_DWORD *)m_impl + 248);
      if ( v18 == 5 )
      {
        if ( *((_WORD *)m_impl + 440) == 4 )
        {
          if ( *((_QWORD *)m_impl + 116) )
            (*((void (__fastcall **)(_QWORD, _QWORD))m_impl + 116))(
              *((_QWORD *)m_impl + 112),
              *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 16LL));
          *((_WORD *)m_impl + 440) = 0;
          goto LABEL_57;
        }
        v19 = 0;
      }
      else
      {
        v19 = v18 == 1;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 18LL) == 1 )
      {
        v31 = *((unsigned __int8 *)m_impl + 979);
        v28 = (v31 + 1) & 0xF;
        if ( v28 == *((_BYTE *)m_impl + 978) )
        {
LABEL_60:
          SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
            m_impl,
            RequiresDedicatedThread,
            4u,
            0);
          v36 = 0;
          goto LABEL_55;
        }
LABEL_51:
        *((_WORD *)m_impl + v31 + 416) = 4;
        goto LABEL_52;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 18LL) == 2 )
      {
        v29 = *((_BYTE *)m_impl + 978);
        v30 = 0;
        LOBYTE(v31) = *((_BYTE *)m_impl + 979);
        v32 = v29;
        if ( v29 != (_BYTE)v31 )
        {
          do
          {
            v33 = *((_WORD *)m_impl + v29 + 416);
            if ( v33 == 4 )
            {
              v30 = 1;
            }
            else
            {
              v34 = v32;
              v32 = (v32 + 1) & 0xF;
              *((_WORD *)m_impl + v34 + 416) = v33;
            }
            LOBYTE(v31) = *((_BYTE *)m_impl + 979);
            v29 = (v29 + 1) & 0xF;
          }
          while ( v29 != (_BYTE)v31 );
          if ( v30 )
          {
            *((_WORD *)m_impl + (((unsigned __int8)v31 - 1) & 0xF) + 416) = 4;
            goto LABEL_48;
          }
        }
        v28 = (v31 + 1) & 0xF;
        if ( v28 == *((_BYTE *)m_impl + 978) )
          goto LABEL_60;
        v31 = (unsigned __int8)v31;
        goto LABEL_51;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 18LL) != 3 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)m_impl + 125, v17);
        goto LABEL_63;
      }
      v25 = *((_BYTE *)m_impl + 978);
      v26 = *((unsigned __int8 *)m_impl + 979);
      v27 = v25;
      if ( v25 != (_BYTE)v26 )
      {
        while ( *((_WORD *)m_impl + v27 + 416) != 4 )
        {
          v27 = (v27 + 1) & 0xF;
          if ( v27 == (_BYTE)v26 )
            goto LABEL_39;
        }
LABEL_48:
        KeReleaseSpinLock((PKSPIN_LOCK)m_impl + 125, *((_BYTE *)m_impl + 1009));
        goto LABEL_63;
      }
LABEL_39:
      v28 = (v26 + 1) & 0xF;
      if ( v28 == v25 )
        goto LABEL_60;
      *((_WORD *)m_impl + v26 + 416) = 4;
LABEL_52:
      v35 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
      *((_BYTE *)m_impl + 979) = v28;
      if ( v35 )
        v35(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 16LL));
      v36 = 1;
LABEL_55:
      if ( !v36 )
        goto LABEL_63;
      if ( !v19 )
        goto LABEL_48;
LABEL_57:
      *((_BYTE *)m_impl + 983) = v17;
      *((_BYTE *)m_impl + 982) = 0;
      if ( v17 >= 2u )
        *((_DWORD *)m_impl + 246) = KeGetPcr()->Prcb.Number;
      else
        *((_QWORD *)m_impl + 123) = KeGetCurrentThread();
      SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(m_impl);
LABEL_63:
      CurrentStackLocation = v39;
LABEL_64:
      ndisDereferenceMiniport(v15, 3u);
LABEL_65:
      CurrentStackLocation->FileObject->FsContext = 0LL;
      ExFreePoolWithTag(FsContext, 0);
      _InterlockedDecrement(&dword_140126FE0);
LABEL_71:
      a2->IoStatus.Status = v4;
      IofCompleteRequest(a2, 2);
LABEL_72:
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
      return v4;
    case 0x17u:
      v37 = ndisDriverSystemDispatch(a1, a2);
LABEL_68:
      v4 = v37;
      if ( v37 != 259 )
        goto LABEL_71;
      goto LABEL_72;
    default:
      v4 = -1073741822;
      goto LABEL_71;
  }
}
