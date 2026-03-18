/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z @ 0x140334D08
 * Callers:
 *     DxgkRender @ 0x140332650 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031360 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035BD0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  HANDLE v7; // r13
  signed int v8; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v11; // rcx
  SIZE_T v12; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v17; // rax
  int v18; // eax
  struct DXGGLOBAL *v19; // rax
  int v20; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v21; // rax
  _QWORD *v22; // r12
  void *v23; // rcx
  void *v24; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v25; // rax
  SIZE_T *v26; // r15
  void *v27; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v28; // rax
  SIZE_T *v29; // r15
  void *v30; // rcx
  PVOID v31; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v32; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v33; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v34; // rax
  DXGCONTEXT *v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h]
  SIZE_T v38; // [rsp+50h] [rbp-98h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-90h] BYREF
  PVOID v40; // [rsp+60h] [rbp-88h] BYREF
  HANDLE SecureHandle; // [rsp+68h] [rbp-80h]
  PVOID Address; // [rsp+70h] [rbp-78h] BYREF
  PVOID P; // [rsp+78h] [rbp-70h]
  __int64 v44; // [rsp+80h] [rbp-68h] BYREF
  HANDLE v45; // [rsp+88h] [rbp-60h]
  HANDLE v46; // [rsp+90h] [rbp-58h]
  PVOID Pool2; // [rsp+98h] [rbp-50h]
  _QWORD v48[9]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int v50; // [rsp+108h] [rbp+20h]

  v50 = a4;
  v5 = a3;
  v36 = this;
  v44 = 0LL;
  Pool2 = 0LL;
  Size = 0LL;
  Address = 0LL;
  SecureHandle = 0LL;
  v46 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v45 = 0LL;
  v8 = 0;
  v48[0] = a3;
  if ( a3 )
  {
    if ( a3 < 0x7FFFFFFF )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD *, int, int))VirtualMemoryInterface)(
             -1LL,
             &v44,
             0LL,
             v48,
             12288,
             4);
      v5 = v48[0];
    }
    else
    {
      v8 = -1073741801;
      WdLogSingleEntry3(3LL, this, a3, -1073741801LL);
      WdLogGlobalForLineNumber = 1993;
    }
    if ( v8 < 0 )
    {
      WdLogSingleEntry3(3LL, this, v5, v8);
      WdLogGlobalForLineNumber = 2035;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                              (struct DXGGLOBAL *)((char *)Global + 1652),
                              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v37 = v5;
        Pool2 = (PVOID)ExAllocatePool2(256LL, v5, 1265072196LL);
        if ( !Pool2 )
        {
          v8 = -1073741801;
          WdLogSingleEntry3(3LL, this, v37, -1073741801LL);
          WdLogGlobalForLineNumber = 2026;
        }
      }
    }
    a4 = v50;
  }
  if ( v8 >= 0 && a4 )
  {
    v11 = 8LL * a4;
    v12 = 0xFFFFFFFFLL;
    if ( v11 <= 0xFFFFFFFF )
      v12 = (unsigned int)v11;
    v8 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v37) = v8;
    Size = v12;
    if ( v11 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, a4);
      WdLogGlobalForLineNumber = 2079;
    }
    else
    {
      v13 = DxgkGetVirtualMemoryInterface();
      v14 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v13)(
              -1LL,
              &Address,
              0LL,
              &Size,
              12288,
              4);
      v8 = v14;
      LODWORD(v37) = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry3(3LL, this, Size, v14);
        WdLogGlobalForLineNumber = 2072;
      }
    }
    if ( v8 >= 0 )
    {
      SecureHandle = MmSecureVirtualMemory(Address, Size, 4u);
      v46 = SecureHandle;
      if ( !SecureHandle )
      {
        v8 = -1073741801;
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2105;
      }
    }
  }
  if ( v8 < 0 )
    goto LABEL_63;
  if ( a5 )
  {
    v15 = 24LL * a5;
    v16 = 0xFFFFFFFFLL;
    if ( v15 <= 0xFFFFFFFF )
      v16 = (unsigned int)v15;
    v8 = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v37) = v8;
    v38 = v16;
    if ( v15 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, a5);
      WdLogGlobalForLineNumber = 2165;
    }
    else
    {
      v17 = DxgkGetVirtualMemoryInterface();
      v18 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v17)(
              -1LL,
              &v40,
              0LL,
              &v38,
              12288,
              4);
      v8 = v18;
      LODWORD(v37) = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry3(3LL, this, v38, v18);
        WdLogGlobalForLineNumber = 2158;
      }
      else
      {
        v19 = DXGGLOBAL::GetGlobal();
        if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                                (struct DXGGLOBAL *)((char *)v19 + 1652),
                                *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
        {
          P = (PVOID)ExAllocatePool2(256LL, v38, 1265072196LL);
          if ( !P )
          {
            v8 = -1073741801;
            LODWORD(v37) = -1073741801;
            WdLogSingleEntry3(3LL, this, v5, -1073741801LL);
            WdLogGlobalForLineNumber = 2149;
          }
        }
      }
    }
    if ( v8 < 0 )
      goto LABEL_63;
    v7 = MmSecureVirtualMemory(v40, v38, 4u);
    v45 = v7;
    if ( !v7 )
    {
      v8 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2191;
    }
  }
  if ( v8 < 0 )
    goto LABEL_63;
  v20 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                               + 8LL)
                                                                                   + 448LL))(
          a2,
          v5,
          v50,
          a5);
  v8 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v20);
    WdLogGlobalForLineNumber = 2211;
  }
  if ( v8 < 0 )
    goto LABEL_63;
  if ( v5 )
  {
    if ( *((_QWORD *)this + 7) )
    {
      v21 = DxgkGetVirtualMemoryInterface();
      v22 = (_QWORD *)((char *)this + 48);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v21 + 2))(
        -1LL,
        (char *)this + 56,
        (char *)this + 48,
        0x8000LL);
    }
    else
    {
      v22 = (_QWORD *)((char *)v36 + 48);
    }
    v23 = (void *)*((_QWORD *)this + 8);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    *((_QWORD *)this + 7) = v44;
    *((_QWORD *)this + 8) = Pool2;
    *v22 = v5;
  }
  if ( v50 )
  {
    v24 = (void *)*((_QWORD *)this + 12);
    if ( v24 )
      MmUnsecureVirtualMemory(v24);
    if ( *((_QWORD *)this + 11) )
    {
      v25 = DxgkGetVirtualMemoryInterface();
      v26 = (SIZE_T *)((char *)this + 80);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v25 + 2))(
        -1LL,
        (char *)this + 88,
        (char *)this + 80,
        0x8000LL);
    }
    else
    {
      v26 = (SIZE_T *)((char *)v36 + 80);
    }
    *((_QWORD *)this + 12) = SecureHandle;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v50;
    *v26 = Size;
  }
  if ( !a5 )
  {
LABEL_63:
    v31 = P;
    goto LABEL_64;
  }
  v27 = (void *)*((_QWORD *)this + 17);
  if ( v27 )
    MmUnsecureVirtualMemory(v27);
  if ( *((_QWORD *)this + 15) )
  {
    v28 = DxgkGetVirtualMemoryInterface();
    v29 = (SIZE_T *)((char *)this + 112);
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v28 + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
  }
  else
  {
    v29 = (SIZE_T *)((char *)v36 + 112);
  }
  v30 = (void *)*((_QWORD *)this + 16);
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  *((_QWORD *)this + 17) = v7;
  *((_QWORD *)this + 15) = v40;
  v31 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *v29 = v38;
LABEL_64:
  if ( v8 < 0 )
  {
    if ( v7 )
      MmUnsecureVirtualMemory(v7);
    if ( v40 )
    {
      v36 = 0LL;
      v32 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, DXGCONTEXT **, __int64))v32 + 2))(-1LL, &v40, &v36, 0x8000LL);
    }
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
    if ( Address )
    {
      v36 = 0LL;
      v33 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, DXGCONTEXT **, __int64))v33 + 2))(-1LL, &Address, &v36, 0x8000LL);
    }
    if ( v44 )
    {
      v36 = 0LL;
      v34 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, DXGCONTEXT **, __int64))v34 + 2))(-1LL, &v44, &v36, 0x8000LL);
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v8;
}
