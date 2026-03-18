/*
 * XREFs of OutputDuplPresent @ 0x140399FF8
 * Callers:
 *     DxgkOutputDuplPresent @ 0x140399B90 (DxgkOutputDuplPresent.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x140026BF0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1402D5328 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x14039A5A0 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct _KTHREAD **a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  D3DKMT_HANDLE hContext; // edx
  __int64 v6; // rcx
  struct DXGDEVICE **v7; // rdi
  volatile signed __int64 *v8; // rsi
  ULONG BroadcastContextCount; // esi
  __int64 v10; // rsi
  _QWORD *Pool2; // rax
  ULONG v12; // r15d
  __int64 v13; // r9
  unsigned int v14; // ebx
  DXGCONTEXTBYHANDLE *v16; // rcx
  D3DKMT_HANDLE hIndirectContext; // edx
  __int64 v18; // rcx
  struct DXGCONTEXT *v19; // rdi
  D3DKMT_HANDLE v20; // ebx
  __int64 CurrentProcess; // rax
  D3DKMT_HANDLE v22; // ebx
  __int64 v23; // rax
  struct DXGADAPTER **v24; // rax
  int v25; // edi
  __int64 v26; // rsi
  D3DKMT_HANDLE v27; // eax
  struct _KTHREAD *v28; // r9
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // [rsp+28h] [rbp-D8h]
  DXGADAPTER *v33; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  _BYTE v36[32]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+88h] [rbp-78h]
  _BYTE v38[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v39[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[24]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v42[6]; // [rsp+D8h] [rbp-28h] BYREF
  char v43; // [rsp+108h] [rbp+8h]
  struct DXGCONTEXT *v44; // [rsp+140h] [rbp+40h] BYREF
  struct DXGCONTEXT *v45; // [rsp+150h] [rbp+50h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v33 = 0LL;
  if ( (*(_BYTE *)&Value & 8) != 0 )
  {
    hIndirectContext = a1->hIndirectContext;
    v45 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40, hIndirectContext, a2, &v45, 0, 1);
    v19 = v45;
    if ( !v45 )
    {
      v20 = a1->hIndirectContext;
      CurrentProcess = PsGetCurrentProcess(v18);
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v20);
      v16 = (DXGCONTEXTBYHANDLE *)v40;
      WdLogGlobalForLineNumber = 2716;
      goto LABEL_20;
    }
    v24 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v33);
    v25 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v19 + 2), a1->VidPnSourceId, v24, &v34);
    if ( v25 < 0 )
    {
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
      goto LABEL_56;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v40);
  }
  hContext = a1->hContext;
  v44 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38, hContext, a2, &v44, 0, 1);
  v7 = (struct DXGDEVICE **)v44;
  if ( !v44 )
  {
    v22 = a1->hContext;
    v23 = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(3LL, -1073741811LL, v23, v22);
    WdLogGlobalForLineNumber = 2737;
    goto LABEL_19;
  }
  if ( !v33 )
  {
    v8 = *(volatile signed __int64 **)(*((_QWORD *)v44 + 2) + 1896LL);
    v33 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      v7 = (struct DXGDEVICE **)v44;
      v34 = -1LL;
    }
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39, v7[2]);
  BroadcastContextCount = a1->BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 2757;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
LABEL_19:
    v16 = (DXGCONTEXTBYHANDLE *)v38;
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v16);
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return 3221225485LL;
  }
  v10 = BroadcastContextCount + 1;
  P = 0LL;
  v37 = 0;
  if ( (unsigned int)v10 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 < 8 )
    {
LABEL_32:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2764;
LABEL_52:
      if ( P != v36 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v37 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
      v25 = -1073741801;
      goto LABEL_56;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v10, 1265072196LL);
    P = Pool2;
  }
  else
  {
    Pool2 = v36;
    P = v36;
    if ( (_DWORD)v10 )
    {
      memset(v36, 0, 8LL * (unsigned int)v10);
      Pool2 = P;
    }
  }
  v37 = v10;
  if ( !Pool2 )
    goto LABEL_32;
  *Pool2 = v7;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, (struct DXGPROCESS *)a2);
  v12 = 0;
  while ( v12 < a1->BroadcastContextCount )
  {
    v26 = v12;
    v27 = (a1->BroadcastContext[v12] >> 6) & 0xFFFFFF;
    if ( v27 >= *((_DWORD *)a2 + 74) )
      goto LABEL_40;
    v28 = a2[35];
    if ( ((a1->BroadcastContext[v12] >> 25) & 0x60) != (*((_BYTE *)v28 + 16 * v27 + 8) & 0x60) )
      goto LABEL_40;
    if ( (*((_DWORD *)v28 + 4 * v27 + 2) & 0x2000) != 0 )
      goto LABEL_40;
    v29 = *((_DWORD *)v28 + 4 * v27 + 2) & 0x1F;
    if ( !v29 )
      goto LABEL_40;
    if ( v29 != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
      v30 = 0LL;
      goto LABEL_41;
    }
    v30 = *((_QWORD *)v28 + 2 * v27);
LABEL_41:
    *((_QWORD *)P + ++v12) = v30;
    v31 = *((_QWORD *)P + v12);
    if ( !v31 || *(struct DXGDEVICE **)(v31 + 16) != v7[2] )
    {
      WdLogSingleEntry4(2LL, v7, a1->BroadcastContext[v26], v26, -1073741811LL);
      v32 = a1->BroadcastContext[v26];
      WdLogGlobalForLineNumber = 2798;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v7,
        v32,
        v26,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
      goto LABEL_46;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v42,
    P,
    v37,
    v13,
    1);
  if ( !v43 )
  {
    v14 = OutputDuplPresentInternal(v33, (struct DXGCONTEXT *)v7, a1, (struct DXGCONTEXT **)P);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v42);
    if ( P != v36 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v37 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
    if ( v33 )
      DXGADAPTER::ReleaseReference(v33);
    return v14;
  }
  if ( !v42[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2813;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v42);
    goto LABEL_52;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 2818;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v42);
LABEL_46:
  if ( P != v36 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v37 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
  v25 = -1073741811;
LABEL_56:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v33, 0LL);
  return (unsigned int)v25;
}
