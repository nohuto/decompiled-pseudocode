/*
 * XREFs of ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1403053B8
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140304A00 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14002B980 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x140061AC0 (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     McTemplateK0qxqddditiii_EtwWriteTransfer @ 0x1400921C8 (McTemplateK0qxqddditiii_EtwWriteTransfer.c)
 *     McTemplateK0ttddii_EtwWriteTransfer @ 0x1400922E0 (McTemplateK0ttddii_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x140307BCC (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

void __fastcall BLTQUEUE::UpdatePresentStats(BLTQUEUE *this, struct BLTENTRY *a2, struct BLTQUEUE::__BLTWAITINFO *a3)
{
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rdi
  struct DXGSWAPCHAIN **v9; // rcx
  struct DXGSWAPCHAIN *v10; // rcx
  int v11; // eax
  char v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r8
  LONGLONG v16; // r15
  __int64 v17; // rax
  unsigned __int8 v18; // r12
  int v19; // [rsp+78h] [rbp-61h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp-59h] BYREF
  LONGLONG v21; // [rsp+88h] [rbp-51h]
  __int64 QuadPart; // [rsp+90h] [rbp-49h] BYREF
  struct BLTQUEUE::__BLTWAITINFO *v23; // [rsp+98h] [rbp-41h]
  _D3DKMT_GETSETSWAPCHAINMETADATA v24; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE v25[8]; // [rsp+C8h] [rbp-11h] BYREF
  DXGPUSHLOCK *v26; // [rsp+D0h] [rbp-9h]
  int v27; // [rsp+D8h] [rbp-1h]
  __int128 v28; // [rsp+E0h] [rbp+7h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v23 = a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)this + 53, 0);
  DXGPUSHLOCK::AcquireExclusive(v26);
  v27 = 2;
  QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
  v5 = QuadPart;
  BLTQUEUE::QuantizeVSync(this, 1, (__int64 *)&PerformanceFrequency, &QuadPart);
  v6 = *((_DWORD *)this + 118);
  v7 = *((unsigned int *)a2 + 15);
  v8 = *((_QWORD *)this + 60);
  v19 = v6;
  DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v25);
  KeWaitForSingleObject((char *)this + 2768, Executive, 0, 0, 0LL);
  v9 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 345);
  if ( !v9 )
    goto LABEL_4;
  if ( (*((_DWORD *)a2 + 16) & 8) != 0 )
    goto LABEL_4;
  v24.hNtSwapChain = 0LL;
  v24.bGlobalMetaData = 1;
  v24.bProducer = 1;
  *(_QWORD *)&v24.DataCopied = 0LL;
  v28 = 0LL;
  v10 = *v9;
  v24.pBuffer = &v28;
  v24.bSetMetaData = 0;
  v24.BufferSize = 16;
  if ( (int)SwapChainGetSetMetaDataInternal(v10, &v24, 0, 0) < 0
    || v24.DataCopied != 16
    || (v15 = DWORD1(v28), !DWORD1(v28)) )
  {
LABEL_4:
    v11 = 1;
LABEL_5:
    v12 = 0;
    goto LABEL_6;
  }
  *((_BYTE *)this + 352) = 1;
  v21 = v5 - *((_QWORD *)a2 + 67);
  v16 = PerformanceFrequency.QuadPart / 10;
  v18 = 0;
  if ( (unsigned int)v15 >= (unsigned int)v7 )
  {
    v17 = *((unsigned int *)a2 + 17);
    if ( !(_DWORD)v17 || v17 <= *((_QWORD *)this + 59) )
      v18 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    McTemplateK0ttddii_EtwWriteTransfer(
      v18,
      (unsigned __int128)(PerformanceFrequency.QuadPart * (__int128)0x6666666666666667LL) >> 64,
      v15,
      v21 > v16,
      v18,
      v15,
      v7,
      *((_QWORD *)this + 59),
      *((_DWORD *)a2 + 17));
    v15 = DWORD1(v28);
  }
  if ( v21 > v16 )
  {
    WdLogSingleEntry2(3LL, v7, v15);
    WdLogGlobalForLineNumber = 3480;
  }
  else if ( !v18 )
  {
    LODWORD(v7) = *((_DWORD *)this + 80);
    v6 = *((_DWORD *)this + 81);
    *(_DWORD *)v23 |= 2u;
    v11 = 0;
    goto LABEL_5;
  }
  v6 = v19;
  v12 = 1;
  v11 = 1;
LABEL_6:
  v13 = *((unsigned int *)this + 118);
  v14 = *((_QWORD *)this + 60);
  *((_QWORD *)this + 42) = v14;
  *((_DWORD *)this + 80) = v7;
  *((_DWORD *)this + 81) = v6;
  *((_DWORD *)this + 82) = v13;
  *((_DWORD *)this + 726) = v13;
  if ( v11 )
  {
    *((_QWORD *)this + 45) = *((_QWORD *)a2 + 67);
    *((_QWORD *)this + 46) = v8;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qxqddditiii_EtwWriteTransfer(
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 45),
      v13,
      1,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      v7,
      v6,
      v13,
      v14,
      v12,
      *((_QWORD *)this + 45),
      *((_QWORD *)this + 46),
      *((_QWORD *)this + 46) - *((_QWORD *)this + 45));
  KeReleaseMutex((PRKMUTEX)((char *)this + 2768), 0);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
}
