/*
 * XREFs of OutputDuplPresent @ 0x140302BF4
 * Callers:
 *     DxgkOutputDuplPresent @ 0x1403031A0 (DxgkOutputDuplPresent.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1400138E0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1400262A0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004AB20 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x140302144 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x140303628 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall OutputDuplPresent(struct _D3DKMT_OUTPUTDUPLPRESENT *a1, struct DXGPROCESS *a2)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  D3DKMT_HANDLE hContext; // edx
  __int64 v6; // rcx
  struct DXGDEVICE **v7; // rdi
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r9
  ULONG BroadcastContextCount; // esi
  __int64 v11; // rsi
  _QWORD *Pool2; // rax
  ULONG v13; // r15d
  __int64 v14; // r9
  unsigned int v15; // ebx
  DXGCONTEXTBYHANDLE *v17; // rcx
  D3DKMT_HANDLE hIndirectContext; // edx
  __int64 v19; // rcx
  struct DXGCONTEXT *v20; // rdi
  D3DKMT_HANDLE v21; // ebx
  __int64 CurrentProcess; // rax
  D3DKMT_HANDLE v23; // ebx
  __int64 v24; // rax
  struct DXGADAPTER **v25; // rax
  int v26; // edi
  __int64 v27; // rsi
  D3DKMT_HANDLE v28; // eax
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // [rsp+28h] [rbp-D8h]
  DXGADAPTER *v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  _BYTE v37[32]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v38; // [rsp+88h] [rbp-78h]
  _BYTE v39[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[24]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v43[6]; // [rsp+D8h] [rbp-28h] BYREF
  char v44; // [rsp+108h] [rbp+8h]
  struct DXGCONTEXT *v45; // [rsp+140h] [rbp+40h] BYREF
  struct DXGCONTEXT *v46; // [rsp+150h] [rbp+50h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a1->Flags.Value;
  v34 = 0LL;
  if ( (*(_BYTE *)&Value & 8) != 0 )
  {
    hIndirectContext = a1->hIndirectContext;
    v46 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41, hIndirectContext, a2, &v46, 0, 1);
    v20 = v46;
    if ( !v46 )
    {
      v21 = a1->hIndirectContext;
      CurrentProcess = PsGetCurrentProcess(v19);
      WdLogSingleEntry3(3LL, -1073741811LL, CurrentProcess, v21);
      v17 = (DXGCONTEXTBYHANDLE *)v41;
      WdLogGlobalForLineNumber = 2710;
      goto LABEL_20;
    }
    v25 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v34);
    v26 = OutputDuplPreIndirectPresent(*((struct DXGDEVICE **)v20 + 2), a1->VidPnSourceId, v25, &v35);
    if ( v26 < 0 )
    {
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41);
      goto LABEL_56;
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41);
  }
  hContext = a1->hContext;
  v45 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39, hContext, a2, &v45, 0, 1);
  v7 = (struct DXGDEVICE **)v45;
  if ( !v45 )
  {
    v23 = a1->hContext;
    v24 = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(3LL, -1073741811LL, v24, v23);
    WdLogGlobalForLineNumber = 2731;
    goto LABEL_19;
  }
  if ( !v34 )
  {
    v8 = *(volatile signed __int64 **)(*((_QWORD *)v45 + 2) + 1880LL);
    v34 = (DXGADAPTER *)v8;
    if ( v8 )
    {
      _InterlockedIncrement64(v8 + 3);
      v7 = (struct DXGDEVICE **)v45;
      v35 = -1LL;
    }
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40, v7[2]);
  BroadcastContextCount = a1->BroadcastContextCount;
  if ( BroadcastContextCount > 0x40 )
  {
    WdLogSingleEntry2(3LL, v7, -1073741811LL);
    WdLogGlobalForLineNumber = 2751;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
LABEL_19:
    v17 = (DXGCONTEXTBYHANDLE *)v39;
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE(v17);
    if ( v34 )
      DXGADAPTER::ReleaseReference(v34);
    return 3221225485LL;
  }
  v11 = BroadcastContextCount + 1;
  P = 0LL;
  v38 = 0;
  if ( (unsigned int)v11 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v11 < 8 )
    {
LABEL_32:
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2758;
LABEL_52:
      if ( P != v37 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v38 = 0;
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
      v26 = -1073741801;
      goto LABEL_56;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v11, 1265072196LL, v9);
    P = Pool2;
  }
  else
  {
    Pool2 = v37;
    P = v37;
    if ( (_DWORD)v11 )
    {
      memset(v37, 0, 8LL * (unsigned int)v11);
      Pool2 = P;
    }
  }
  v38 = v11;
  if ( !Pool2 )
    goto LABEL_32;
  *Pool2 = v7;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v42, a2);
  v13 = 0;
  while ( v13 < a1->BroadcastContextCount )
  {
    v27 = v13;
    v28 = (a1->BroadcastContext[v13] >> 6) & 0xFFFFFF;
    if ( v28 >= *((_DWORD *)a2 + 74) )
      goto LABEL_40;
    v29 = *((_QWORD *)a2 + 35);
    if ( ((a1->BroadcastContext[v13] >> 25) & 0x60) != (*(_BYTE *)(v29 + 16LL * v28 + 8) & 0x60) )
      goto LABEL_40;
    if ( (*(_DWORD *)(v29 + 16LL * v28 + 8) & 0x2000) != 0 )
      goto LABEL_40;
    v30 = *(_DWORD *)(v29 + 16LL * v28 + 8) & 0x1F;
    if ( !v30 )
      goto LABEL_40;
    if ( v30 != 7 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
      v31 = 0LL;
      goto LABEL_41;
    }
    v31 = *(_QWORD *)(v29 + 16LL * v28);
LABEL_41:
    *((_QWORD *)P + ++v13) = v31;
    v32 = *((_QWORD *)P + v13);
    if ( !v32 || *(struct DXGDEVICE **)(v32 + 16) != v7[2] )
    {
      WdLogSingleEntry4(2LL, v7, a1->BroadcastContext[v27], v27, -1073741811LL);
      v33 = a1->BroadcastContext[v27];
      WdLogGlobalForLineNumber = 2792;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v7,
        v33,
        v27,
        -1073741811LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
      goto LABEL_46;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v42);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v43,
    P,
    v38,
    v14,
    1);
  if ( !v44 )
  {
    v15 = OutputDuplPresentInternal(v34, (struct DXGCONTEXT *)v7, a1, (struct DXGCONTEXT **)P);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v43);
    if ( P != v37 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v38 = 0;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
    if ( v34 )
      DXGADAPTER::ReleaseReference(v34);
    return v15;
  }
  if ( !v43[0] )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2807;
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v43);
    goto LABEL_52;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 2812;
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v43);
LABEL_46:
  if ( P != v37 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v38 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
  v26 = -1073741811;
LABEL_56:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v34, 0LL);
  return (unsigned int)v26;
}
