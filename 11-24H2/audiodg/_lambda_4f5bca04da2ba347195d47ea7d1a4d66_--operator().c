/*
 * XREFs of _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D97C
 * Callers:
 *     ?CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObject@@@Z @ 0x14000D7A0 (-CreateAPO@CDeviceGraphObjectCache@@UEAAJAEBU_GUID@@W4APO_TYPE@@PEBG2PEAPEAUIAudioProcessingObje.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2CAPONode@@SAPEAX_K@Z @ 0x14000B4E8 (--2CAPONode@@SAPEAX_K@Z.c)
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B930 (--_GCAPONode@@QEAAPEAXI@Z.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ @ 0x14000BA24 (-GetFreeNode@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEAAXXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CPrivateAPO@@QEAA@XZ @ 0x14000DE08 (--0CPrivateAPO@@QEAA@XZ.c)
 *     ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@@Z @ 0x14000E3D0 (-Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAU.c)
 *     ??0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUIAudioProcessingObjectConfiguration@@PEAUIAPOProcessingHost@@@Z @ 0x14000E63C (--0CAPONode@@QEAA@AEBU_GUID@@PEBGPEAUIAudioProcessingObject@@PEAUIAudioProcessingObjectRT@@PEAUI.c)
 *     ?RegisterAPOWithProcessingHost@CAPONode@@QEAAJXZ @ 0x14000F184 (-RegisterAPOWithProcessingHost@CAPONode@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator()(__int64 a1)
{
  __int64 v1; // r13
  void *v2; // rdx
  int v3; // r8d
  CPrivateAPO *v4; // rax
  CPrivateAPO *v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CAPONode *v9; // rax
  struct IAudioProcessingObjectConfiguration *v10; // rdi
  struct IAudioProcessingObjectRT *v11; // rbx
  struct IAudioProcessingObject *v12; // r12
  CAPONode *v13; // r15
  int v14; // eax
  int v15; // r12d
  struct _RTL_CRITICAL_SECTION *v16; // r12
  _QWORD *v17; // r12
  CAPONode **v18; // rcx
  CAPONode *v19; // rax
  __int64 v20; // rax
  struct IAudioProcessingObject *v21; // r15
  ATL::CAtlException *v23; // rbx
  struct IAudioProcessingObjectConfiguration *v24; // [rsp+40h] [rbp-88h] BYREF
  CPrivateAPO *v25; // [rsp+48h] [rbp-80h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-78h]
  CPrivateAPO *v27; // [rsp+58h] [rbp-70h] BYREF
  CAPONode *v28; // [rsp+60h] [rbp-68h]
  CAPONode *v29; // [rsp+68h] [rbp-60h]
  CAPONode *v30; // [rsp+70h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+78h] [rbp-50h]
  ATL::CAtlException *v32; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  char *v35; // [rsp+D8h] [rbp+10h]
  int v36; // [rsp+D8h] [rbp+10h]
  struct IAudioProcessingObject *v37; // [rsp+E0h] [rbp+18h] BYREF
  struct IAudioProcessingObjectRT *v38; // [rsp+E8h] [rbp+20h] BYREF

  v1 = a1;
  v27 = 0LL;
  v2 = (void *)AERTGetDLLRTHeap();
  v4 = (CPrivateAPO *)AERTAllocate(0x30uLL, v2, v3);
  if ( v4 )
    v5 = CPrivateAPO::CPrivateAPO(v4);
  else
    v5 = 0LL;
  v25 = v5;
  v27 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v24 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v6 = CPrivateAPO::Initialize(
         v5,
         *(_QWORD *)v1,
         **(_QWORD **)(v1 + 8),
         **(unsigned int **)(v1 + 16),
         **(_QWORD **)(v1 + 24),
         &v37,
         &v38,
         &v24);
  v8 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v6);
LABEL_45:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v24);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v38);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v37);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v27);
    return v8;
  }
  v30 = 0LL;
  v9 = (CAPONode *)CAPONode::operator new(v7);
  v29 = v9;
  v10 = v24;
  v11 = v38;
  v12 = v37;
  v35 = (char *)v37;
  if ( v9 )
  {
    v13 = CAPONode::CAPONode(
            v9,
            *(const struct _GUID **)v1,
            **(const unsigned __int16 ***)(v1 + 8),
            v37,
            v38,
            v24,
            *(struct IAPOProcessingHost **)(*(_QWORD *)(v1 + 32) + 96LL));
    v28 = v13;
  }
  else
  {
    v13 = 0LL;
    v28 = 0LL;
  }
  v30 = v13;
  if ( !v13 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x8007000ELL);
    if ( v10 )
      ((void (__fastcall *)(struct IAudioProcessingObjectConfiguration *))v10->lpVtbl->Release)(v10);
    if ( v11 )
      ((void (__fastcall *)(struct IAudioProcessingObjectRT *))v11->lpVtbl->Release)(v11);
    if ( v12 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v12->lpVtbl->Release)(v12);
    (*(void (__fastcall **)(CPrivateAPO *))(*(_QWORD *)v5 + 16LL))(v5);
    return 2147942414LL;
  }
  v14 = CAPONode::RegisterAPOWithProcessingHost(v13);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v14);
    CAPONode::`scalar deleting destructor'(v13);
    v8 = v15;
    goto LABEL_45;
  }
  **(_BYTE **)(v1 + 40) = *((_QWORD *)v13 + 3) != 0LL;
  **(_BYTE **)(v1 + 48) = *((_QWORD *)v13 + 4) != 0LL;
  v16 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(v1 + 32) + 56LL);
  lpCriticalSection = v16;
  EnterCriticalSection(v16);
  try
  {
    v31 = v16;
    v17 = *(_QWORD **)(v1 + 32);
    v29 = (CAPONode *)v17[13];
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetFreeNode((__int64)(v17 + 13));
  }
  catch ( ATL::CAtlException *v32 )
  {
    v23 = v32;
    if ( *(_DWORD *)v32 == -1073741571 )
      _o__resetstkoflw();
    v36 = *(_DWORD *)v23;
    v8 = *(_DWORD *)v23;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v36);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      CAPONode::`scalar deleting destructor'(v28);
      if ( v24 )
        ((void (__fastcall *)(struct IAudioProcessingObjectConfiguration *))v24->lpVtbl->Release)(v24);
      if ( v38 )
        ((void (__fastcall *)(struct IAudioProcessingObjectRT *))v38->lpVtbl->Release)(v38);
      if ( v37 )
        ((void (__fastcall *)(struct IAudioProcessingObject *))v37->lpVtbl->Release)(v37);
      (*(void (__fastcall **)(CPrivateAPO *, _QWORD))(*(_QWORD *)v25 + 16LL))(v25, *(_QWORD *)v25);
      return v8;
    }
    v1 = a1;
    v21 = v37;
    v11 = v38;
    v10 = v24;
    v5 = v25;
LABEL_31:
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v37 = 0LL;
    ***(_QWORD ***)(v1 + 56) = v21;
    if ( v10 )
      ((void (__fastcall *)(struct IAudioProcessingObjectConfiguration *))v10->lpVtbl->Release)(v10);
    if ( v11 )
      ((void (__fastcall *)(struct IAudioProcessingObjectRT *))v11->lpVtbl->Release)(v11);
    (*(void (__fastcall **)(CPrivateAPO *))(*(_QWORD *)v5 + 16LL))(v5);
    return 0LL;
  }
  v18 = (CAPONode **)v17[17];
  v19 = *v18;
  v18[2] = v13;
  v17[17] = v19;
  v18[1] = 0LL;
  *v18 = v29;
  ++v17[15];
  v20 = v17[13];
  if ( v20 )
    *(_QWORD *)(v20 + 8) = v18;
  else
    v17[14] = v18;
  v17[13] = v18;
  v21 = (struct IAudioProcessingObject *)v35;
  goto LABEL_31;
}
