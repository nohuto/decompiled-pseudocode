/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDAF8
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1400FDAD8 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLA.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1400341A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140034390 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1400349F4 (VidSchSubmitDeviceCommand.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchFlushDevice @ 0x1400ACF70 (VidSchFlushDevice.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v6; // bl
  struct _KTHREAD **v8; // r15
  struct _KTHREAD *v9; // r13
  VIDMM_DEVICE *v10; // rcx
  __int64 v11; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v13; // r8
  int v14; // edx
  char *v15; // rcx
  _QWORD *v16; // rbx
  int v17; // eax
  _QWORD v18[2]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v19; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v20[10]; // [rsp+58h] [rbp-11h] BYREF

  v6 = (char)a4.0;
  v8 = (struct _KTHREAD **)**a2;
  v9 = *v8;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 17));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(v8 + 17);
  v10 = (VIDMM_DEVICE *)a2[1];
  a2[24] = (__int64 *)a5;
  VIDMM_DEVICE::EnsureSchedulable(v10, 0);
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( (byte_140081241 & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer();
  v11 = **a2;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v13 = *((_QWORD *)v9 + 2);
  v14 = **(_DWORD **)(v11 + 376) & 0x20000000;
  if ( IsEnabledDeviceUsageNoInline )
  {
    v15 = (char *)this + 7688;
    if ( !v14 )
      v15 = (char *)this + 7704;
    _InterlockedIncrement((volatile signed __int32 *)v15);
    _InterlockedAdd64((volatile signed __int64 *)v15 + 1, v13);
  }
  else if ( v14 )
  {
    ++*((_DWORD *)this + 1922);
    *((_QWORD *)this + 962) += v13;
  }
  else
  {
    ++*((_DWORD *)this + 1926);
    *((_QWORD *)this + 964) += v13;
  }
  v18[0] = 1LL;
  v18[1] = a2;
  memset(v20, 0, sizeof(v20));
  v20[6] = v18;
  LODWORD(v20[0]) = (v6 & 1) == 0 || (*(_DWORD *)v8[47] & 0x4000) != 0;
  v16 = (_QWORD *)a2[1][4];
  v17 = VidSchSubmitDeviceCommand(v16, (__int64)v20);
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(3LL, v17);
    WdLogGlobalForLineNumber = 4909;
    v19 = 0LL;
    LODWORD(v19) = 5;
    VidSchFlushDevice((__int64)v16, (int *)&v19, 0xFFFFFFFD, 0LL);
    LODWORD(v20[0]) = 0;
    VidSchSubmitDeviceCommand(v16, (__int64)v20);
  }
}
