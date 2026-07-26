/*
 * XREFs of McGenControlCallbackV2 @ 0x140091C20
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000E960 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Dql @ 0x1400714F0 (WPP_RECORDER_SF_Dql_ea_1400714F0.c)
 *     WPP_RECORDER_SF_DqlD @ 0x140071BA0 (WPP_RECORDER_SF_DqlD.c)
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
 *     McTemplateK0wwuuuuqj_EtwWriteTransfer @ 0x1400A1874 (McTemplateK0wwuuuuqj_EtwWriteTransfer.c)
 *     McTemplateK0wwwuuqqq_EtwWriteTransfer @ 0x1400A1988 (McTemplateK0wwwuuqqq_EtwWriteTransfer.c)
 *     McTemplateK0wwwwuuuuqq_EtwWriteTransfer @ 0x1400A1AB8 (McTemplateK0wwwwuuuuqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
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
  __int64 v51; // rdi
  void *v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  KIRQL v55; // al
  char *v56; // rbx
  KIRQL v57; // r14
  int v58; // esi
  KIRQL v59; // bp
  unsigned __int16 v60; // cx
  int v61; // r8d
  int v62; // r9d
  unsigned __int16 v63; // cx
  const wchar_t *v64; // r10
  const wchar_t *v65; // r11
  const wchar_t *v66; // rax
  int v67; // edx
  int v68; // r8d
  __int64 v69; // rax
  char v70; // dl
  char v71; // r8
  int v72; // r9d
  char v73; // di
  __int64 v74; // rdx
  __int64 v75; // r8
  char *v76; // rax
  PVOID *v77; // rcx
  void *v78; // rcx
  struct _KEVENT *v79; // rcx
  struct _GUID *v80; // [rsp+20h] [rbp-B8h]
  __int128 v81; // [rsp+98h] [rbp-40h] BYREF

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
      if ( (byte_140125106 & 8) != 0 )
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
      if ( (byte_140125106 & 8) != 0 )
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
              if ( (byte_140125106 & 8) != 0 )
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
      if ( (byte_140125106 & 8) != 0 )
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
                if ( (byte_140125106 & 8) != 0 )
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
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v45) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v45,
                    20,
                    56,
                    (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
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
                  v51 = *((_QWORD *)v32 + 42);
                  if ( v51 && _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 64), 0xFFFFFFFF) == 1 )
                  {
                    v52 = *(void **)(v51 + 48);
                    *(_QWORD *)(v51 + 48) = 0LL;
                    if ( v52 )
                      ExFreePoolWithTag(v52, 0x7274534Bu);
                    v53 = *(_QWORD *)(v51 + 8);
                    if ( *(_QWORD *)(v53 + 8) != v51 + 8 || (v54 = *(_QWORD **)(v51 + 16), *v54 != v51 + 8) )
                      __fastfail(3u);
                    *v54 = v53;
                    *(_QWORD *)(v53 + 8) = v54;
                    ExFreePoolWithTag((PVOID)v51, 0x446C4642u);
                  }
                  ExFreePoolWithTag(v32, 0);
                  v46 = 0;
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v47) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v47,
                    20,
                    57,
                    (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
                    v46);
                }
                goto LABEL_80;
              }
              ndisRefCountReferenceCountOverflow = 1;
            }
            KeReleaseSpinLock((PKSPIN_LOCK)v32 + 9, v34);
LABEL_80:
            v32 = (char *)*((_QWORD *)v32 + 1);
          }
          while ( v32 );
        }
        KeReleaseSpinLock(&ndisFilterDriverListLock, v33);
        if ( (byte_140125106 & 8) != 0 )
        {
          v55 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
          v56 = (char *)ndisProtocolList;
          v57 = v55;
          if ( ndisProtocolList )
          {
            do
            {
              v58 = 1;
              v59 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v56 + 4);
              if ( !v56[42] )
              {
                v60 = *((_WORD *)v56 + 20);
                if ( v60 >= 0xFFEBu )
                {
                  ndisRefCountReferenceCountOverflow = 1;
                  v58 = 2;
                }
                else
                {
                  *((_WORD *)v56 + 20) = v60 + 1;
                  NdisReferenceWithTag(*((struct _NDIS_REFCOUNT_BLOCK **)v56 + 6), 0xFu);
                  v58 = 0;
                }
              }
              KeReleaseSpinLock((PKSPIN_LOCK)v56 + 4, v59);
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_DqlD(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  *((unsigned __int16 *)v56 + 20),
                  v61,
                  v62,
                  (__int64)v80);
              if ( !v58 )
              {
                KeReleaseSpinLock(&ndisProtocolListLock, v57);
                v63 = 4;
                v64 = L"NULL";
                v65 = L"NULL";
                v66 = (const wchar_t *)*((_QWORD *)v56 + 10);
                v67 = 4;
                v68 = 0;
                v81 = 0LL;
                if ( v66 )
                {
                  v67 = *((unsigned __int16 *)v56 + 36);
                  v64 = v66;
                  LOWORD(v67) = (unsigned __int16)v67 >> 1;
                }
                if ( *((_QWORD *)v56 + 102) )
                {
                  v65 = (const wchar_t *)*((_QWORD *)v56 + 102);
                  v63 = *((_WORD *)v56 + 404) >> 1;
                }
                v69 = *((_QWORD *)v56 + 103);
                if ( v69 )
                  v68 = *(_DWORD *)(v69 + 32);
                if ( (byte_140125106 & 8) != 0 )
                  McTemplateK0wwuuuuqj_EtwWriteTransfer(
                    v63,
                    v67,
                    v68,
                    (unsigned __int16)v67,
                    (__int64)v64,
                    v63,
                    (__int64)v65,
                    v56[56],
                    v56[57],
                    v56[58],
                    v56[59],
                    v68,
                    (__int64)&v81);
                v57 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
                v73 = (char)v56;
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_Dql(*((_QWORD *)WPP_GLOBAL_Control + 8), v70, v71, v72, (__int64)v80);
                if ( (unsigned __int8)ndisDereferenceRef((PKSPIN_LOCK)v56 + 4, 0xFu) )
                {
                  v76 = (char *)ndisProtocolList;
                  v77 = &ndisProtocolList;
                  if ( ndisProtocolList )
                  {
                    while ( v76 != v56 )
                    {
                      v77 = (PVOID *)(v76 + 16);
                      v76 = (char *)*((_QWORD *)v76 + 2);
                      if ( !v76 )
                        goto LABEL_107;
                    }
                    *v77 = (PVOID)*((_QWORD *)v56 + 2);
                    ObfDereferenceObject(ndisDriverObject);
                  }
LABEL_107:
                  v78 = (void *)*((_QWORD *)v56 + 102);
                  if ( v78 )
                  {
                    ExFreePoolWithTag(v78, 0);
                    *((_QWORD *)v56 + 102) = 0LL;
                  }
                  v79 = (struct _KEVENT *)*((_QWORD *)v56 + 58);
                  if ( v79 )
                    KeSetEvent(v79, 0, 0);
                  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v56 + 824, v74, v75);
                  ExFreePoolWithTag(v56, 0);
                  v73 = 0;
                }
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v74) = 4;
                  WPP_RECORDER_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v74,
                    5,
                    41,
                    (struct _GUID *)&WPP_5fbf5d068c993e9b80cf56cd13d85fb9_Traceguids,
                    v73);
                }
              }
              v56 = (char *)*((_QWORD *)v56 + 2);
            }
            while ( v56 );
          }
          KeReleaseSpinLock(&ndisProtocolListLock, v57);
        }
      }
    }
  }
}
