/*
 * XREFs of McGenControlCallbackV2 @ 0x140077F50
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x140010F90 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140011280 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400129C0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dql @ 0x140056690 (WPP_RECORDER_SF_Dql_ea_140056690.c)
 *     WPP_RECORDER_SF_DqlD @ 0x140056F30 (WPP_RECORDER_SF_DqlD.c)
 *     ndisEtwWriteMiniportRundown @ 0x140096F84 (ndisEtwWriteMiniportRundown.c)
 *     McTemplateK0wwuuuuqj_EtwWriteTransfer @ 0x140097400 (McTemplateK0wwuuuuqj_EtwWriteTransfer.c)
 *     McTemplateK0wwwuuqqq_EtwWriteTransfer @ 0x140097514 (McTemplateK0wwwuuqqq_EtwWriteTransfer.c)
 *     McTemplateK0wwwwuuuuqq_EtwWriteTransfer @ 0x140097644 (McTemplateK0wwwwuuuuqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned int v8; // r8d
  unsigned __int8 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rdx
  _DWORD *v12; // rdx
  int v13; // eax
  KIRQL v14; // al
  struct _NDIS_MINIPORT_BLOCK *v15; // rbx
  KIRQL i; // di
  KIRQL v17; // al
  struct _NDIS_M_DRIVER_BLOCK *v18; // rbx
  KIRQL j; // bp
  KIRQL v20; // si
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  const wchar_t *Buffer; // rdi
  int Length; // r8d
  const wchar_t *v25; // rsi
  unsigned __int16 v26; // dx
  const wchar_t *v27; // rbp
  unsigned __int16 v28; // cx
  unsigned int Flags; // r11d
  char MajorNdisVersion; // r10
  KIRQL v31; // al
  char *v32; // rbx
  KIRQL v33; // bp
  KIRQL v34; // si
  unsigned __int16 v35; // ax
  struct _NDIS_REFCOUNT_BLOCK *v36; // rcx
  unsigned __int16 v37; // cx
  const wchar_t *v38; // r10
  const wchar_t *v39; // r11
  const wchar_t *v40; // rdi
  const wchar_t *v41; // rsi
  unsigned __int16 v42; // r9
  unsigned __int16 v43; // r8
  unsigned __int16 v44; // dx
  int v45; // edx
  char v46; // di
  int v47; // edx
  char *v48; // rax
  PVOID *v49; // rcx
  void *v50; // rcx
  void (__fastcall ***v51)(void *, _QWORD); // rdi
  __int64 v52; // rdi
  void *v53; // rcx
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  KIRQL v56; // al
  char *v57; // rbx
  KIRQL v58; // r14
  int v59; // esi
  KIRQL v60; // bp
  unsigned __int16 v61; // cx
  int v62; // r8d
  int v63; // r9d
  unsigned __int16 v64; // cx
  const wchar_t *v65; // r10
  const wchar_t *v66; // r11
  const wchar_t *v67; // rax
  int v68; // edx
  int v69; // r8d
  __int64 v70; // rax
  char v71; // dl
  char v72; // r8
  int v73; // r9d
  char v74; // di
  __int64 v75; // rdx
  __int64 v76; // r8
  char *v77; // rax
  PVOID *v78; // rcx
  void *v79; // rcx
  struct _KEVENT *v80; // rcx
  void (__fastcall ***v81)(void *, _QWORD); // rdi
  struct _GUID *v82; // [rsp+20h] [rbp-B8h]
  __int128 v83; // [rsp+98h] [rbp-40h] BYREF

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        v8 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v8 < *((unsigned __int16 *)CallbackContext + 21); ++v8 )
        {
          v9 = *((_BYTE *)CallbackContext + 40);
          v10 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v8);
          if ( (*(_BYTE *)(v8 + *((_QWORD *)CallbackContext + 8)) <= v9 || !v9)
            && (!v10
             || (v10 & *((_QWORD *)CallbackContext + 2)) != 0
             && (v10 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3)) )
          {
            v12 = (_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v8 >> 5));
            *v12 |= 1 << (v8 & 0x1F);
          }
          else
          {
            v11 = (_DWORD *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v8 >> 5));
            *v11 &= ~(1 << (v8 & 0x1F));
          }
        }
      }
    }
    else
    {
      v13 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v13 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v13 - 1) / 32 + 1));
    }
    if ( ndisEtwRundownEnabled && CallbackContext == NDIS_PROVIDER_ID_Context && ControlCode == 1 )
    {
      if ( (byte_14011B106 & 8) != 0 )
      {
        v14 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        v15 = ndisMiniportList;
        for ( i = v14; v15; v15 = v15->NextGlobalMiniport )
        {
          if ( (unsigned __int8)ndisReferenceMiniport(v15, 0x54u) )
          {
            KeReleaseSpinLock(&ndisMiniportListLock, i);
            ndisEtwWriteMiniportRundown(v15);
            i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
            ndisDereferenceMiniport(v15, 0x54u);
          }
        }
        KeReleaseSpinLock(&ndisMiniportListLock, i);
      }
      if ( (byte_14011B106 & 8) != 0 )
      {
        v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v18 = ndisMiniDriverList;
        for ( j = v17; v18; v18 = v18->NextDriver )
        {
          v20 = KeAcquireSpinLockRaiseToDpc(&v18->Ref.SpinLock);
          if ( !v18->Ref.Closing )
          {
            ReferenceCount = v18->Ref.ReferenceCount;
            if ( ReferenceCount < 0xFFEBu )
            {
              RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v18->Ref.RefCountTracker;
              v18->Ref.ReferenceCount = ReferenceCount + 1;
              NdisReferenceWithTag(RefCountTracker, 0xCu);
              KeReleaseSpinLock(&v18->Ref.SpinLock, v20);
              KeReleaseSpinLock(&ndisMiniDriverListLock, j);
              Buffer = L"NULL";
              Length = 4;
              v25 = L"NULL";
              v26 = 4;
              v27 = L"NULL";
              v28 = 4;
              LOBYTE(Flags) = 0;
              if ( v18->ServiceName.Buffer )
              {
                Length = v18->ServiceName.Length;
                Buffer = v18->ServiceName.Buffer;
                LOWORD(Length) = (unsigned __int16)Length >> 1;
              }
              if ( v18->ImageName.Buffer )
              {
                v25 = v18->ImageName.Buffer;
                v26 = v18->ImageName.Length >> 1;
              }
              if ( v18->ServiceRegPath.Buffer )
              {
                v27 = v18->ServiceRegPath.Buffer;
                v28 = v18->ServiceRegPath.Length >> 1;
              }
              MajorNdisVersion = v18->MajorNdisVersion;
              if ( (unsigned __int8)MajorNdisVersion >= 6u )
                Flags = v18->MiniportDriverCharacteristics.Flags;
              if ( (byte_14011B106 & 8) != 0 )
                McTemplateK0wwwuuqqq_EtwWriteTransfer(
                  v28,
                  v26,
                  Length,
                  (unsigned __int16)Length,
                  (__int64)Buffer,
                  v26,
                  (__int64)v25,
                  v28,
                  (__int64)v27,
                  MajorNdisVersion,
                  v18->MinorNdisVersion,
                  v18->DriverVersion,
                  v18->Flags,
                  Flags);
              j = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              ndisDereferenceDriver(v18, 1, 0xCu);
              continue;
            }
            ndisRefCountReferenceCountOverflow = 1;
          }
          KeReleaseSpinLock(&v18->Ref.SpinLock, v20);
        }
        KeReleaseSpinLock(&ndisMiniDriverListLock, j);
      }
      if ( (byte_14011B106 & 8) != 0 )
      {
        v31 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
        v32 = (char *)ndisFilterDriverList;
        v33 = v31;
        if ( ndisFilterDriverList )
        {
          do
          {
            v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v32 + 9);
            if ( !v32[82] )
            {
              v35 = *((_WORD *)v32 + 40);
              if ( v35 < 0xFFEBu )
              {
                v36 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)v32 + 11);
                *((_WORD *)v32 + 40) = v35 + 1;
                NdisReferenceWithTag(v36, 5u);
                KeReleaseSpinLock((PKSPIN_LOCK)v32 + 9, v34);
                KeReleaseSpinLock(&ndisFilterDriverListLock, v33);
                v37 = 4;
                v38 = L"NULL";
                v39 = L"NULL";
                v40 = L"NULL";
                v41 = L"NULL";
                v42 = 4;
                v43 = 4;
                v44 = 4;
                if ( *((_QWORD *)v32 + 19) )
                {
                  v38 = (const wchar_t *)*((_QWORD *)v32 + 19);
                  v42 = *((_WORD *)v32 + 72) >> 1;
                }
                if ( *((_QWORD *)v32 + 17) )
                {
                  v39 = (const wchar_t *)*((_QWORD *)v32 + 17);
                  v43 = *((_WORD *)v32 + 64) >> 1;
                }
                if ( *((_QWORD *)v32 + 15) )
                {
                  v40 = (const wchar_t *)*((_QWORD *)v32 + 15);
                  v44 = *((_WORD *)v32 + 56) >> 1;
                }
                if ( *((_QWORD *)v32 + 44) )
                {
                  v41 = (const wchar_t *)*((_QWORD *)v32 + 44);
                  v37 = *((_WORD *)v32 + 172) >> 1;
                }
                if ( (byte_14011B106 & 8) != 0 )
                  McTemplateK0wwwwuuuuqq_EtwWriteTransfer(
                    v37,
                    v44,
                    v43,
                    v42,
                    (__int64)v38,
                    v43,
                    (__int64)v39,
                    v44,
                    (__int64)v40,
                    v37,
                    (__int64)v41,
                    v32[100],
                    v32[101],
                    v32[102],
                    v32[103],
                    *((_DWORD *)v32 + 12),
                    *((_DWORD *)v32 + 26));
                v33 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                v46 = (char)v32;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v45) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v45,
                    20,
                    57,
                    (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
                    (char)v32);
                }
                if ( (unsigned __int8)ndisDereferenceRef((PKSPIN_LOCK)v32 + 9, 5u) )
                {
                  v48 = (char *)ndisFilterDriverList;
                  v49 = &ndisFilterDriverList;
                  if ( ndisFilterDriverList )
                  {
                    while ( v48 != v32 )
                    {
                      v49 = (PVOID *)(v48 + 8);
                      v48 = (char *)*((_QWORD *)v48 + 1);
                      if ( !v48 )
                        goto LABEL_66;
                    }
                    *v49 = (PVOID)*((_QWORD *)v32 + 1);
                    ObfDereferenceObject(ndisDriverObject);
                  }
LABEL_66:
                  v50 = (void *)*((_QWORD *)v32 + 44);
                  if ( v50 )
                  {
                    ExFreePoolWithTag(v50, 0);
                    *((_QWORD *)v32 + 44) = 0LL;
                  }
                  v51 = (void (__fastcall ***)(void *, _QWORD))*((_QWORD *)v32 + 45);
                  *((_QWORD *)v32 + 45) = 0LL;
                  if ( v51 )
                  {
                    (**v51)(v51, 0LL);
                    ExFreePoolWithTag(v51, 0);
                  }
                  v52 = *((_QWORD *)v32 + 42);
                  if ( v52 && _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 64), 0xFFFFFFFF) == 1 )
                  {
                    v53 = *(void **)(v52 + 48);
                    *(_QWORD *)(v52 + 48) = 0LL;
                    if ( v53 )
                      ExFreePoolWithTag(v53, 0x7274534Bu);
                    v54 = *(_QWORD *)(v52 + 8);
                    if ( *(_QWORD *)(v54 + 8) != v52 + 8 || (v55 = *(_QWORD **)(v52 + 16), *v55 != v52 + 8) )
                      __fastfail(3u);
                    *v55 = v54;
                    *(_QWORD *)(v54 + 8) = v55;
                    ExFreePoolWithTag((PVOID)v52, 0x446C4642u);
                  }
                  ExFreePoolWithTag(v32, 0);
                  v46 = 0;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v47) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v47,
                    20,
                    58,
                    (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
                    v46);
                }
                goto LABEL_82;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)v32 + 9, v34);
LABEL_82:
            v32 = (char *)*((_QWORD *)v32 + 1);
          }
          while ( v32 );
        }
        KeReleaseSpinLock(&ndisFilterDriverListLock, v33);
        if ( (byte_14011B106 & 8) != 0 )
        {
          v56 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
          v57 = (char *)ndisProtocolList;
          v58 = v56;
          if ( ndisProtocolList )
          {
            do
            {
              v59 = 1;
              v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v57 + 4);
              if ( !v57[42] )
              {
                v61 = *((_WORD *)v57 + 20);
                if ( v61 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v59 = 2;
                }
                else
                {
                  *((_WORD *)v57 + 20) = v61 + 1;
                  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v57 + 6), 0xFu);
                  v59 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v57 + 4, v60);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DqlD(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  *((unsigned __int16 *)v57 + 20),
                  v62,
                  v63,
                  (__int64)v82);
              if ( !v59 )
              {
                KeReleaseSpinLock(&ndisProtocolListLock, v58);
                v64 = 4;
                v65 = L"NULL";
                v66 = L"NULL";
                v67 = (const wchar_t *)*((_QWORD *)v57 + 10);
                v68 = 4;
                v69 = 0;
                v83 = 0LL;
                if ( v67 )
                {
                  v68 = *((unsigned __int16 *)v57 + 36);
                  v65 = v67;
                  LOWORD(v68) = (unsigned __int16)v68 >> 1;
                }
                if ( *((_QWORD *)v57 + 102) )
                {
                  v66 = (const wchar_t *)*((_QWORD *)v57 + 102);
                  v64 = *((_WORD *)v57 + 404) >> 1;
                }
                v70 = *((_QWORD *)v57 + 103);
                if ( v70 )
                  v69 = *(_DWORD *)(v70 + 32);
                if ( (byte_14011B106 & 8) != 0 )
                  McTemplateK0wwuuuuqj_EtwWriteTransfer(
                    v64,
                    v68,
                    v69,
                    (unsigned __int16)v68,
                    (__int64)v65,
                    v64,
                    (__int64)v66,
                    v57[56],
                    v57[57],
                    v57[58],
                    v57[59],
                    v69,
                    (__int64)&v83);
                v58 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
                v74 = (char)v57;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), v71, v72, v73, (__int64)v82);
                if ( (unsigned __int8)ndisDereferenceRef((PKSPIN_LOCK)v57 + 4, 0xFu) )
                {
                  v77 = (char *)ndisProtocolList;
                  v78 = &ndisProtocolList;
                  if ( ndisProtocolList )
                  {
                    while ( v77 != v57 )
                    {
                      v78 = (PVOID *)(v77 + 16);
                      v77 = (char *)*((_QWORD *)v77 + 2);
                      if ( !v77 )
                        goto LABEL_109;
                    }
                    *v78 = (PVOID)*((_QWORD *)v57 + 2);
                    ObfDereferenceObject(ndisDriverObject);
                  }
LABEL_109:
                  v79 = (void *)*((_QWORD *)v57 + 102);
                  if ( v79 )
                  {
                    ExFreePoolWithTag(v79, 0);
                    *((_QWORD *)v57 + 102) = 0LL;
                  }
                  v80 = (struct _KEVENT *)*((_QWORD *)v57 + 58);
                  if ( v80 )
                    KeSetEvent(v80, 0, 0);
                  v81 = (void (__fastcall ***)(void *, _QWORD))*((_QWORD *)v57 + 111);
                  *((_QWORD *)v57 + 111) = 0LL;
                  if ( v81 )
                  {
                    (**v81)(v81, 0LL);
                    ExFreePoolWithTag(v81, 0);
                  }
                  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v57 + 824, v75, v76);
                  ExFreePoolWithTag(v57, 0);
                  v74 = 0;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v75) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v75,
                    5,
                    43,
                    (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
                    v74);
                }
              }
              v57 = (char *)*((_QWORD *)v57 + 2);
            }
            while ( v57 );
          }
          KeReleaseSpinLock(&ndisProtocolListLock, v58);
        }
      }
    }
  }
}
