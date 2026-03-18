/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14040373C
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1402DCA5C (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400314B0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x14004C1F4 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004FCB0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x140051978 (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1403211F0 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403364E8 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140360E8C (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x14038E9CC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x14039BB80 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403B1998 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403B1F58 (-DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403B205C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  __int64 v6; // rcx
  struct DXGADAPTER *v8; // rbx
  struct _KPROCESS *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // eax
  __int64 v19; // rsi
  struct DXGDEVICE **v20; // r13
  int Device; // eax
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // kr00_8
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 i; // r12
  unsigned int v35; // eax
  unsigned int v36; // r11d
  unsigned int v37; // ebx
  bool v38; // al
  unsigned int v39; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v40; // ebx
  unsigned int v41; // r11d
  char v42; // al
  int Context; // eax
  struct DXGHWQUEUE **v44; // r9
  int v45; // eax
  bool IsCoreResourceSharedOwner; // al
  struct DXGDEVICE *v47; // rdx
  DXGADAPTER **v48; // rcx
  volatile signed __int64 **v49; // rax
  volatile signed __int64 *v50; // rax
  struct DXGHWQUEUE **v51; // rax
  struct DXGHWQUEUE *v52; // rcx
  DXGCONTEXT **v53; // [rsp+60h] [rbp-A0h]
  DXGDEVICE *v54; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_QUERYADAPTERINFO v57; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v58[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v59; // [rsp+C8h] [rbp-38h] BYREF
  int v60; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v61; // [rsp+FCh] [rbp-4h]
  unsigned int v62; // [rsp+100h] [rbp+0h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF
  char v64; // [rsp+138h] [rbp+38h]
  _BYTE v65[88]; // [rsp+140h] [rbp+40h] BYREF
  DXGADAPTER *v66; // [rsp+198h] [rbp+98h]

  v6 = *((_QWORD *)this + 2);
  v64 = 0;
  v8 = (struct DXGADAPTER *)(v6 & -(__int64)(*(_QWORD *)(v6 + 3120) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, (struct DXGADAPTER *const)a2, v8);
  v9 = *(struct _KPROCESS **)(*(_QWORD *)this + 18656LL);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v10) != v9 )
  {
    KeStackAttachProcess(v9, &ApcState);
    v64 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( Current )
  {
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
    LODWORD(v19) = v18;
    if ( v18 < 0 )
    {
      if ( a2 == (DXGADAPTER ***)v8 || *((_DWORD *)a2 + 50) == 1 && !*((_BYTE *)a2 + 3017) )
      {
        WdLogSingleEntry4(3LL, a2, v8, Current, v18);
        WdLogGlobalForLineNumber = 2427;
      }
      else
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 2418;
        LODWORD(v19) = -1073741267;
      }
      goto LABEL_67;
    }
    v20 = (struct DXGDEVICE **)((char *)this + 56);
    Device = ADAPTER_RENDER::CreateDevice(a2[391], (DXGDEVICE **)this + 7, 0, 2, v8, 0, 0, 1, 0LL, 0LL, 0);
    v19 = Device;
    if ( Device < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v22);
      WdLogSingleEntry3(2LL, a2, CurrentProcess, v19);
      WdLogGlobalForLineNumber = 2452;
      v25 = PsGetCurrentProcess(v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v25,
        v19,
        0LL,
        0LL);
LABEL_67:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return (unsigned int)v19;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v65);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58, *v20);
    v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
    v19 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry3(4LL, a2, Current, v26);
      WdLogGlobalForLineNumber = 2578;
    }
    else
    {
      *((_DWORD *)this + 13) = 1;
      if ( !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2) )
        goto LABEL_70;
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)a2);
      *((_DWORD *)this + 13) = NumDifferentPhysicalAdapters;
      if ( NumDifferentPhysicalAdapters <= 1 )
        goto LABEL_70;
      v31 = NumDifferentPhysicalAdapters;
      v30 = 8LL * NumDifferentPhysicalAdapters;
      if ( !is_mul_ok(v31, 8uLL) )
        v30 = -1LL;
      v32 = operator new[](v30, 0x4B677844u, 256LL, v28);
      *((_QWORD *)this + 8) = v32;
      if ( v32 )
      {
LABEL_70:
        if ( PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements(
               (__int64 *)this + 9,
               *((_DWORD *)this + 13),
               v27,
               v28) )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v35 = *((_DWORD *)this + 13);
            if ( (unsigned int)i >= v35 )
              break;
            v60 = 0;
            v36 = *((_DWORD *)a2 + 786);
            v61 = v36;
            if ( v35 == 1 )
              v37 = *((_DWORD *)a2 + 787);
            else
              v37 = i;
            v62 = 1 << v37;
            if ( (*((_DWORD *)a2 + 111) & 0x10) != 0 )
            {
              memset(&v57, 0, 24);
              v57.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v57.OutputDataSize = 0LL;
              v57.pOutputData = &v60;
              v57.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v57, v33) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2525;
                DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 2525LL, 0LL, 0LL, 0LL, 0LL);
              }
              v36 = v61;
            }
            v38 = ADAPTER_RENDER::NodeSupportsContextScheduling((ADAPTER_RENDER *)a2[391], v37, v36);
            v40.0 = 0;
            v19 = (__int64)this + 64;
            v53 = (DXGCONTEXT **)((char *)this + 64);
            if ( v38 )
              v40.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) != 1 )
            {
              v19 = *(_QWORD *)v19 + 8 * i;
              v53 = (DXGCONTEXT **)v19;
            }
            v54 = *v20;
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v20 + 2), 0, v39)
              || (v42 = 1, *((_BYTE *)a2 + 3040)) )
            {
              v42 = 0;
            }
            Context = DXGDEVICE::CreateContext(
                        v54,
                        (struct DXGCONTEXT **)v19,
                        v41,
                        v62,
                        v40,
                        0LL,
                        0,
                        D3DKMT_CLIENTHINT_CDD,
                        v42);
            LODWORD(v19) = Context;
            if ( Context < 0 )
            {
              WdLogSingleEntry3(4LL, a2, Current, Context);
              WdLogGlobalForLineNumber = 2551;
              goto LABEL_50;
            }
            if ( v40.0 == 16 )
            {
              v44 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v59, 0, sizeof(v59));
              if ( (unsigned int)i < *((_DWORD *)this + 24) )
                v44 += i;
              v45 = DXGCONTEXT::CreateHwQueue(*v53, &v59, 0LL, v44);
              LODWORD(v19) = v45;
              if ( v45 < 0 )
              {
                WdLogSingleEntry4(4LL, *v53, a2, Current, v45);
                WdLogGlobalForLineNumber = 2566;
                goto LABEL_50;
              }
            }
          }
          goto LABEL_50;
        }
        WdLogSingleEntry2(4LL, a2, Current);
        WdLogGlobalForLineNumber = 2500;
      }
      else
      {
        WdLogSingleEntry3(4LL, a2, Current, v19);
        WdLogGlobalForLineNumber = 2488;
      }
      LODWORD(v19) = -1073741801;
    }
LABEL_50:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v58);
    if ( (int)v19 < 0 && *v20 )
    {
      IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(v66);
      v47 = *v20;
      v48 = a2[391];
      if ( IsCoreResourceSharedOwner )
      {
        ADAPTER_RENDER::DestroyDevice(v48, v47, 0LL);
        if ( *((_DWORD *)this + 13) > 1u )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 8));
          *((_QWORD *)this + 8) = 0LL;
        }
        PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)this + 72);
      }
      else
      {
        ADAPTER_RENDER::DestroyDeviceNoCoreAccess((ADAPTER_RENDER *)v48, v47);
      }
      *v20 = 0LL;
    }
    else
    {
      if ( a3 )
      {
        *a3 = *v20;
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 7) + 64LL));
      }
      if ( a4 )
      {
        v49 = (volatile signed __int64 **)((char *)this + 64);
        if ( *((_DWORD *)this + 13) != 1 )
          v49 = (volatile signed __int64 **)*v49;
        v50 = *v49;
        *a4 = (struct DXGCONTEXT *)v50;
        _InterlockedIncrement64(v50 + 4);
      }
      if ( a5 )
      {
        v51 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
        v52 = *v51;
        *a5 = *v51;
        if ( v52 )
          _InterlockedIncrement64((volatile signed __int64 *)v52 + 13);
      }
    }
    goto LABEL_67;
  }
  v14 = PsGetCurrentProcess(v12);
  WdLogSingleEntry2(2LL, v14, -1073741823LL);
  WdLogGlobalForLineNumber = 2400;
  v16 = PsGetCurrentProcess(v15);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"Failed to get DXGPROCESS for current CSRSS process 0x%I64x, returning 0x%I64x.",
    v16,
    -1073741823LL,
    0LL,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
  if ( v64 )
    KeUnstackDetachProcess(&ApcState);
  return 3221225473LL;
}
