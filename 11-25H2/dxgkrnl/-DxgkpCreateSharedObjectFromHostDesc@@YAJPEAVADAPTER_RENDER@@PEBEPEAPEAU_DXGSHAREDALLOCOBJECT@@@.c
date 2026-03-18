/*
 * XREFs of ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x140215C3C
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021C440 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140047804 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400478A4 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14006BA1C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x140075B3C (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x14032CEE8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x140399E7C (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403C7E0C (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DxgkpCreateSharedObjectFromHostDesc(
        struct ADAPTER_RENDER *a1,
        const unsigned __int8 *a2,
        struct _LIST_ENTRY **a3)
{
  DXGKEYEDMUTEX *v4; // r15
  const unsigned __int8 *v5; // r13
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGSHAREDRESOURCE *SharedResource; // r14
  unsigned int v11; // eax
  const unsigned __int8 *v12; // r15
  const unsigned __int8 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // kr00_8
  __int64 v16; // rax
  unsigned int v17; // eax
  void *v18; // rax
  __int64 v19; // rax
  const wchar_t *v20; // r9
  unsigned int v21; // eax
  void *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  const unsigned __int8 *v25; // r13
  DXGADAPTERALLOCATION_VGPU *v26; // rax
  DXGADAPTERALLOCATION_VGPU *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  DXGADAPTERALLOCATION_VGPU *v30; // r15
  unsigned int v31; // eax
  void *v32; // rax
  struct DXGSHAREDRESOURCE *v33; // r15
  struct DXGSHAREDRESOURCE **v34; // rcx
  int v35; // edi
  __int64 v36; // rdx
  int v37; // eax
  struct DXGSYNCOBJECT *v38; // rsi
  DXGGLOBAL *Global; // rax
  int v40; // eax
  DXGGLOBAL *v41; // rax
  struct _LIST_ENTRY *v43; // [rsp+50h] [rbp-B0h] BYREF
  DXGKEYEDMUTEX *v44; // [rsp+58h] [rbp-A8h]
  struct DXGKEYEDMUTEX *v45; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGSYNCOBJECT *v46; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int8 *v47; // [rsp+70h] [rbp-90h]
  _QWORD v48[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v49; // [rsp+98h] [rbp-68h]
  _DWORD v50[36]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v52; // [rsp+158h] [rbp+58h]
  struct DXGSYNCOBJECT *v54; // [rsp+168h] [rbp+68h]

  v47 = a2;
  v54 = 0LL;
  v4 = 0LL;
  v46 = 0LL;
  v5 = a2;
  v44 = 0LL;
  v6 = 0;
  v45 = 0LL;
  v43 = 0LL;
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(a1, 0LL, 0);
  if ( !SharedResource )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 14404;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to create shared resource for host shared resource",
      14404LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -1073741801;
LABEL_41:
    v38 = v54;
    goto LABEL_42;
  }
  v11 = *((_DWORD *)v5 + 18);
  v12 = a2 + 80;
  v13 = a2 + 92;
  if ( v11 > 1 )
  {
    v15 = v11;
    v14 = 8LL * v11;
    if ( !is_mul_ok(v15, 8uLL) )
      v14 = -1LL;
    v16 = operator new[](v14, 0x4B677844u, 256LL, v9);
    if ( !v16 )
    {
      WdLogSingleEntry0(3LL);
      v4 = v44;
      v6 = -1073741801;
      WdLogGlobalForLineNumber = 14420;
      goto LABEL_41;
    }
    *((_QWORD *)SharedResource + 21) = v16;
  }
  *((_DWORD *)SharedResource + 3) = *(_DWORD *)v12;
  v17 = *((_DWORD *)v12 + 1);
  if ( v17 )
  {
    v18 = operator new(v17, v7, v8, v13);
    *((_QWORD *)SharedResource + 15) = v18;
    if ( !v18 )
    {
      WdLogSingleEntry0(6LL);
      v19 = 14436LL;
      v20 = L"Failed to allocate shared resource private driver data";
LABEL_12:
      WdLogGlobalForLineNumber = v19;
      DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v20, v19, 0LL, 0LL, 0LL, 0LL);
      v4 = v44;
      v6 = -1073741801;
      goto LABEL_41;
    }
    *((_DWORD *)SharedResource + 32) = *((_DWORD *)v12 + 1);
    v13 += *((unsigned int *)v12 + 1);
  }
  v21 = *((_DWORD *)v12 + 2);
  if ( v21 )
  {
    v22 = operator new(v21, v7, v8, v13);
    *((_QWORD *)SharedResource + 13) = v22;
    if ( !v22 )
    {
      WdLogSingleEntry0(6LL);
      v19 = 14451LL;
      v20 = L"Failed to allocate shared resource runtime data";
      goto LABEL_12;
    }
    *((_DWORD *)SharedResource + 28) = *((_DWORD *)v12 + 2);
    v13 += *((unsigned int *)v12 + 2);
  }
  v23 = 0;
  while ( 1 )
  {
    v24 = *((_DWORD *)v5 + 18);
    v52 = v23;
    if ( v23 >= v24 )
      break;
    v25 = v13;
    v13 += 56;
    v26 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL, v9);
    if ( !v26 || (v27 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v26), (v30 = v27) == 0LL) )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 14468;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate DXGADAPTERALLOCATION_VGPU object for shared host resource",
        14468LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_51;
    }
    *((_DWORD *)v27 + 1) = *(_DWORD *)v25 | 0x20000;
    *((_OWORD *)v27 + 4) = *(_OWORD *)(v25 + 8);
    *((_OWORD *)v27 + 5) = *(_OWORD *)(v25 + 24);
    *((_OWORD *)v27 + 6) = *(_OWORD *)(v25 + 40);
    v31 = *((_DWORD *)v25 + 1);
    if ( v31 )
    {
      v32 = operator new(v31, v28, v29, v13);
      *((_QWORD *)v30 + 4) = v32;
      if ( !v32 )
      {
        WdLogSingleEntry0(6LL);
        v19 = 14481LL;
        v20 = L"Failed to allocate private driver data for DXGADAPTERALLOCATION_VGPU";
        goto LABEL_12;
      }
      *((_DWORD *)v30 + 10) = *((_DWORD *)v25 + 1);
      v13 += *((unsigned int *)v25 + 1);
    }
    v33 = (DXGADAPTERALLOCATION_VGPU *)((char *)v30 + 48);
    v34 = (struct DXGSHAREDRESOURCE **)*((_QWORD *)SharedResource + 18);
    if ( *v34 != (struct DXGSHAREDRESOURCE *)((char *)SharedResource + 136) )
      __fastfail(3u);
    v5 = v47;
    *((_QWORD *)v33 + 1) = v34;
    *(_QWORD *)v33 = (char *)SharedResource + 136;
    *v34 = v33;
    v23 = v52 + 1;
    *((_QWORD *)SharedResource + 18) = v33;
  }
  *((_DWORD *)SharedResource + 33) = v24;
  v35 = *((_DWORD *)v5 + 14);
  if ( !v35 )
  {
LABEL_34:
    if ( *((_DWORD *)v5 + 15) )
    {
      Global = DXGGLOBAL::GetGlobal();
      v40 = DXGGLOBAL::CreateKeyedMutex(
              Global,
              *(_QWORD *)v13,
              (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)1,
              *((_DWORD *)v5 + 15),
              &v45);
      v6 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry1(3LL, v40);
        v4 = v45;
        WdLogGlobalForLineNumber = 14546;
        goto LABEL_41;
      }
      v4 = v45;
    }
    else
    {
      v4 = v44;
    }
    LOBYTE(v9) = 1;
    v48[0] = 48LL;
    v48[3] = 64LL;
    v48[1] = 0LL;
    v48[2] = 0LL;
    v49 = 0LL;
    v6 = ObCreateObject(1LL, g_pDxgkSharedAllocationObjectType, v48, v9, 0LL, 48, 0, 0, &v43);
    if ( v6 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)SharedResource + 16);
      v43[1].Flink = (struct _LIST_ENTRY *)SharedResource;
      v43[1].Blink = (struct _LIST_ENTRY *)v45;
      v43[2].Flink = (struct _LIST_ENTRY *)v46;
      LODWORD(v43[2].Blink) = *((_DWORD *)v5 + 13);
      ADAPTER_RENDER::AddNtSharedAllocObject(a1, v43);
      goto LABEL_51;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 14576;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to create shared alloc object",
      14576LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_41;
  }
  memset(v50, 0, 0x60uLL);
  v50[3] |= 3u;
  LOBYTE(v36) = 1;
  v50[2] = 3;
  v37 = CreateSynchronizationObjectInternal(0LL, v36, a1, v50, 14, v35, &v46, 0LL, 0LL);
  v6 = v37;
  if ( v37 >= 0 )
  {
    v54 = v46;
    goto LABEL_34;
  }
  WdLogSingleEntry1(3LL, v37);
  v38 = v46;
  v4 = v44;
  WdLogGlobalForLineNumber = 14517;
LABEL_42:
  if ( v43 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14596;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSharedAllocObject == nullptr", 14596LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( SharedResource )
    DXGSHAREDRESOURCE::ReleaseReference(SharedResource, 0LL, 0);
  if ( v4 )
    DXGKEYEDMUTEX::ReleaseReference(v4);
  if ( v38 )
  {
    v41 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(v41, v38, 0);
  }
LABEL_51:
  *a3 = v43;
  return (unsigned int)v6;
}
