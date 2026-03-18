/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403FD47C
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x140346FDC (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400313D0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038CCC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003B7CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x14004BCA8 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x14004F730 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z @ 0x1400513CC (-NodeSupportsContextScheduling@ADAPTER_RENDER@@QEBA_NII@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1402BB7A8 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1402CFA78 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x140355CBC (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x14037B214 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x140393D54 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403A5598 (-DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A569C (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
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
  unsigned int NumDifferentPhysicalAdapters; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // kr00_8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 i; // r12
  unsigned int v33; // eax
  unsigned int v34; // r11d
  unsigned int v35; // ebx
  bool v36; // al
  unsigned int v37; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v38; // ebx
  unsigned int v39; // r11d
  unsigned __int8 v40; // al
  int Context; // eax
  struct DXGHWQUEUE **v42; // r9
  int v43; // eax
  bool IsCoreResourceSharedOwner; // al
  struct DXGDEVICE *v45; // rdx
  DXGADAPTER **v46; // rcx
  volatile signed __int64 **v47; // rax
  volatile signed __int64 *v48; // rax
  struct DXGHWQUEUE **v49; // rax
  struct DXGHWQUEUE *v50; // rcx
  DXGCONTEXT **v51; // [rsp+60h] [rbp-A0h]
  DXGDEVICE *v52; // [rsp+68h] [rbp-98h]
  struct _DXGKARG_QUERYADAPTERINFO v55; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v56[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_CREATEHWQUEUE v57; // [rsp+C8h] [rbp-38h] BYREF
  int v58; // [rsp+F8h] [rbp-8h] BYREF
  unsigned int v59; // [rsp+FCh] [rbp-4h]
  unsigned int v60; // [rsp+100h] [rbp+0h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+8h] BYREF
  char v62; // [rsp+138h] [rbp+38h]
  _BYTE v63[88]; // [rsp+140h] [rbp+40h] BYREF
  DXGADAPTER *v64; // [rsp+198h] [rbp+98h]

  v6 = *((_QWORD *)this + 2);
  v62 = 0;
  v8 = (struct DXGADAPTER *)(v6 & -(__int64)(*(_QWORD *)(v6 + 3120) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, (struct DXGADAPTER *const)a2, v8);
  v9 = *(struct _KPROCESS **)(*(_QWORD *)this + 18656LL);
  if ( (struct _KPROCESS *)PsGetCurrentProcess(v10) != v9 )
  {
    KeStackAttachProcess(v9, &ApcState);
    v62 = 1;
  }
  Current = DXGPROCESS::GetCurrent(v11);
  if ( Current )
  {
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    LODWORD(v19) = v18;
    if ( v18 < 0 )
    {
      if ( a2 == (DXGADAPTER ***)v8 || *((_DWORD *)a2 + 50) == 1 && !*((_BYTE *)a2 + 3017) )
      {
        WdLogSingleEntry4(3LL, a2, v8, Current, v18);
        WdLogGlobalForLineNumber = 2447;
      }
      else
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 2438;
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
      WdLogGlobalForLineNumber = 2472;
      v25 = PsGetCurrentProcess(v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)a2,
        v25,
        v19,
        0LL,
        0LL);
LABEL_67:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
      CPROCESSATTACHHELPER::Detach(&ApcState);
      return (unsigned int)v19;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v63);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56, *v20);
    v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    v19 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry3(4LL, a2, Current, v26);
      WdLogGlobalForLineNumber = 2598;
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
      v29 = NumDifferentPhysicalAdapters;
      v28 = 8LL * NumDifferentPhysicalAdapters;
      if ( !is_mul_ok(v29, 8uLL) )
        v28 = -1LL;
      v30 = operator new[](v28, 0x4B677844u, 256LL);
      *((_QWORD *)this + 8) = v30;
      if ( v30 )
      {
LABEL_70:
        if ( PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((__int64 *)this + 9, *((_DWORD *)this + 13)) )
        {
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v33 = *((_DWORD *)this + 13);
            if ( (unsigned int)i >= v33 )
              break;
            v58 = 0;
            v34 = *((_DWORD *)a2 + 786);
            v59 = v34;
            if ( v33 == 1 )
              v35 = *((_DWORD *)a2 + 787);
            else
              v35 = i;
            v60 = 1 << v35;
            if ( (*((_DWORD *)a2 + 111) & 0x10) != 0 )
            {
              memset(&v55, 0, 24);
              v55.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v55.OutputDataSize = 0LL;
              v55.pOutputData = &v58;
              v55.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v55, v31) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2545;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"NT_SUCCESS(Status)",
                  2545LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v34 = v59;
            }
            v36 = ADAPTER_RENDER::NodeSupportsContextScheduling((ADAPTER_RENDER *)a2[391], v35, v34);
            v38.0 = 0;
            v19 = (__int64)this + 64;
            v51 = (DXGCONTEXT **)((char *)this + 64);
            if ( v36 )
              v38.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) != 1 )
            {
              v19 = *(_QWORD *)v19 + 8 * i;
              v51 = (DXGCONTEXT **)v19;
            }
            v52 = *v20;
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v20 + 2), 0, v37)
              || (v40 = 1, *((_BYTE *)a2 + 3040)) )
            {
              v40 = 0;
            }
            Context = DXGDEVICE::CreateContext(
                        v52,
                        (struct DXGCONTEXT **)v19,
                        v39,
                        v60,
                        v38,
                        0LL,
                        0,
                        D3DKMT_CLIENTHINT_CDD,
                        v40);
            LODWORD(v19) = Context;
            if ( Context < 0 )
            {
              WdLogSingleEntry3(4LL, a2, Current, Context);
              WdLogGlobalForLineNumber = 2571;
              goto LABEL_50;
            }
            if ( v38.0 == 16 )
            {
              v42 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v57, 0, sizeof(v57));
              if ( (unsigned int)i < *((_DWORD *)this + 24) )
                v42 += i;
              v43 = DXGCONTEXT::CreateHwQueue(*v51, &v57, 0LL, v42);
              LODWORD(v19) = v43;
              if ( v43 < 0 )
              {
                WdLogSingleEntry4(4LL, *v51, a2, Current, v43);
                WdLogGlobalForLineNumber = 2586;
                goto LABEL_50;
              }
            }
          }
          goto LABEL_50;
        }
        WdLogSingleEntry2(4LL, a2, Current);
        WdLogGlobalForLineNumber = 2520;
      }
      else
      {
        WdLogSingleEntry3(4LL, a2, Current, v19);
        WdLogGlobalForLineNumber = 2508;
      }
      LODWORD(v19) = -1073741801;
    }
LABEL_50:
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v56);
    if ( (int)v19 < 0 && *v20 )
    {
      IsCoreResourceSharedOwner = DXGADAPTER::IsCoreResourceSharedOwner(v64);
      v45 = *v20;
      v46 = a2[391];
      if ( IsCoreResourceSharedOwner )
      {
        ADAPTER_RENDER::DestroyDevice(v46, v45, 0LL);
        if ( *((_DWORD *)this + 13) > 1u )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 8));
          *((_QWORD *)this + 8) = 0LL;
        }
        PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((__int64)this + 72);
      }
      else
      {
        ADAPTER_RENDER::DestroyDeviceNoCoreAccess((ADAPTER_RENDER *)v46, v45);
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
        v47 = (volatile signed __int64 **)((char *)this + 64);
        if ( *((_DWORD *)this + 13) != 1 )
          v47 = (volatile signed __int64 **)*v47;
        v48 = *v47;
        *a4 = (struct DXGCONTEXT *)v48;
        _InterlockedIncrement64(v48 + 4);
      }
      if ( a5 )
      {
        v49 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
        v50 = *v49;
        *a5 = *v49;
        if ( v50 )
          _InterlockedIncrement64((volatile signed __int64 *)v50 + 13);
      }
    }
    goto LABEL_67;
  }
  v14 = PsGetCurrentProcess(v12);
  WdLogSingleEntry2(2LL, v14, -1073741823LL);
  WdLogGlobalForLineNumber = 2420;
  v16 = PsGetCurrentProcess(v15);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get DXGPROCESS for current CSRSS process 0x%I64x, returning 0x%I64x.",
    v16,
    -1073741823LL,
    0LL,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63);
  if ( v62 )
    KeUnstackDetachProcess(&ApcState);
  return 3221225473LL;
}
