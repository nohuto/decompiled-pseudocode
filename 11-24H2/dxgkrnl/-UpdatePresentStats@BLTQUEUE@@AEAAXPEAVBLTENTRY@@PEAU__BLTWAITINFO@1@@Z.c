/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403BFCE0
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140430240 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006237C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x140094678 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 *     McTemplateK0ttddii_EtwWriteTransfer @ 0x140094790 (McTemplateK0ttddii_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1402E441C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  DXGPUSHLOCK *v5; // rdi
  __int64 v6; // rbx
  int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rsi
  struct DXGSWAPCHAIN **v10; // rcx
  struct DXGSWAPCHAIN *v11; // rcx
  __int64 v12; // r8
  LONGLONG v13; // rbx
  LONGLONG v14; // r15
  __int64 v15; // rax
  unsigned __int8 v16; // cl
  int v17; // eax
  char v18; // r9
  __int64 v19; // r8
  __int64 v20; // r10
  unsigned __int8 v21; // [rsp+70h] [rbp-59h]
  int v22; // [rsp+7Ch] [rbp-4Dh]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp-49h] BYREF
  __int64 QuadPart; // [rsp+88h] [rbp-41h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v25; // [rsp+90h] [rbp-39h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA v26; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v27[8]; // [rsp+C0h] [rbp-9h] BYREF
  DXGPUSHLOCK *v28; // [rsp+C8h] [rbp-1h]
  int v29; // [rsp+D0h] [rbp+7h]
  __int128 v30; // [rsp+D8h] [rbp+Fh] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v25 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)this + 53, 0);
  v5 = v28;
  DXGPUSHLOCK::AcquireExclusive(v28);
  QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
  v6 = QuadPart;
  BLTQUEUE::QuantizeVSync(this, 1, (__int64 *)&PerformanceFrequency, &QuadPart);
  v7 = *((_DWORD *)this + 118);
  v8 = *((unsigned int *)a2 + 15);
  v9 = *((_QWORD *)this + 60);
  v29 = 0;
  v22 = v7;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((char *)this + 2840, Executive, 0, 0, 0LL);
  v10 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 354);
  if ( !v10 )
    goto LABEL_19;
  if ( (*((_DWORD *)a2 + 16) & 8) != 0 )
    goto LABEL_19;
  v26.hNtSwapChain = 0LL;
  v26.bGlobalMetaData = 1;
  v26.bProducer = 1;
  *(_QWORD *)&v26.DataCopied = 0LL;
  v30 = 0LL;
  v11 = *v10;
  v26.pBuffer = &v30;
  v26.bSetMetaData = 0;
  v26.BufferSize = 16;
  if ( (int)SwapChainGetSetMetaDataInternal(v11, &v26, 0, 0) < 0
    || v26.DataCopied != 16
    || (v12 = DWORD1(v30), !DWORD1(v30)) )
  {
LABEL_19:
    v17 = 1;
    goto LABEL_20;
  }
  *((_BYTE *)this + 352) = 1;
  v13 = v6 - *((_QWORD *)a2 + 67);
  v14 = PerformanceFrequency.QuadPart / 10;
  v16 = 0;
  if ( (unsigned int)v12 >= (unsigned int)v8 )
  {
    v15 = *((unsigned int *)a2 + 17);
    if ( !(_DWORD)v15 || v15 <= *((_QWORD *)this + 59) )
      v16 = 1;
  }
  v21 = v16;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0ttddii_EtwWriteTransfer(
      v16,
      (unsigned __int128)(PerformanceFrequency.QuadPart * (__int128)0x6666666666666667LL) >> 64,
      v12,
      v13 > v14,
      v16,
      v12,
      v8,
      *((_QWORD *)this + 59),
      *((_DWORD *)a2 + 17));
    v12 = DWORD1(v30);
  }
  if ( v13 > v14 )
  {
    WdLogSingleEntry2(3LL, v8, v12);
    WdLogGlobalForLineNumber = 4038;
    goto LABEL_18;
  }
  if ( v21 )
  {
LABEL_18:
    v7 = v22;
    v18 = 1;
    v17 = 1;
    goto LABEL_21;
  }
  LODWORD(v8) = *((_DWORD *)this + 80);
  v7 = *((_DWORD *)this + 81);
  *(_DWORD *)v25 |= 2u;
  v17 = 0;
LABEL_20:
  v18 = 0;
LABEL_21:
  v19 = *((unsigned int *)this + 118);
  v20 = *((_QWORD *)this + 60);
  *((_QWORD *)this + 42) = v20;
  *((_DWORD *)this + 80) = v8;
  *((_DWORD *)this + 81) = v7;
  *((_DWORD *)this + 82) = v19;
  *((_DWORD *)this + 744) = v19;
  if ( v17 )
  {
    *((_QWORD *)this + 45) = *((_QWORD *)a2 + 67);
    *((_QWORD *)this + 46) = v9;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v19,
      1,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      v8,
      v7,
      v19,
      v20,
      v18,
      *((_QWORD *)this + 45),
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 46) - *((_QWORD *)this + 45));
  KeReleaseMutex((PRKMUTEX)((char *)this + 2840), 0);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
}
