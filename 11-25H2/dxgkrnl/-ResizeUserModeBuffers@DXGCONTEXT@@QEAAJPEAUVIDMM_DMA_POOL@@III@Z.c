/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z @ 0x140346BA8
 * Callers:
 *     DxgkRender @ 0x1403444D0 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031440 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140035DA0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  SIZE_T v13; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rcx
  SIZE_T v17; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v18; // rax
  int v19; // eax
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // r9
  int v22; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v23; // rax
  _QWORD *v24; // r12
  void *v25; // rcx
  void *v26; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v27; // rax
  SIZE_T *v28; // r15
  void *v29; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v30; // rax
  SIZE_T *v31; // r15
  void *v32; // rcx
  PVOID v33; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v34; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v35; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v36; // rax
  DXGCONTEXT *v38; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-A0h]
  SIZE_T v40; // [rsp+50h] [rbp-98h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-90h] BYREF
  PVOID v42; // [rsp+60h] [rbp-88h] BYREF
  HANDLE SecureHandle; // [rsp+68h] [rbp-80h]
  PVOID Address; // [rsp+70h] [rbp-78h] BYREF
  PVOID P; // [rsp+78h] [rbp-70h]
  __int64 v46; // [rsp+80h] [rbp-68h] BYREF
  HANDLE v47; // [rsp+88h] [rbp-60h]
  HANDLE v48; // [rsp+90h] [rbp-58h]
  PVOID Pool2; // [rsp+98h] [rbp-50h]
  _QWORD v50[9]; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+108h] [rbp+20h]

  v52 = a4;
  v5 = a3;
  v38 = this;
  v46 = 0LL;
  Pool2 = 0LL;
  Size = 0LL;
  Address = 0LL;
  SecureHandle = 0LL;
  v48 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v47 = 0LL;
  v8 = 0;
  v50[0] = a3;
  if ( a3 )
  {
    if ( a3 < 0x7FFFFFFF )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD *, int, int))VirtualMemoryInterface)(
             -1LL,
             &v46,
             0LL,
             v50,
             12288,
             4);
      v5 = v50[0];
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
                              (struct DXGGLOBAL *)((char *)Global + 1620),
                              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v39 = v5;
        Pool2 = (PVOID)ExAllocatePool2(256LL, v5, 1265072196LL, v11);
        if ( !Pool2 )
        {
          v8 = -1073741801;
          WdLogSingleEntry3(3LL, this, v39, -1073741801LL);
          WdLogGlobalForLineNumber = 2026;
        }
      }
    }
    a4 = v52;
  }
  if ( v8 >= 0 && a4 )
  {
    v12 = 8LL * a4;
    v13 = 0xFFFFFFFFLL;
    if ( v12 <= 0xFFFFFFFF )
      v13 = (unsigned int)v12;
    v8 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v39) = v8;
    Size = v13;
    if ( v12 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, a4);
      WdLogGlobalForLineNumber = 2079;
    }
    else
    {
      v14 = DxgkGetVirtualMemoryInterface();
      v15 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v14)(
              -1LL,
              &Address,
              0LL,
              &Size,
              12288,
              4);
      v8 = v15;
      LODWORD(v39) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry3(3LL, this, Size, v15);
        WdLogGlobalForLineNumber = 2072;
      }
    }
    if ( v8 >= 0 )
    {
      SecureHandle = MmSecureVirtualMemory(Address, Size, 4u);
      v48 = SecureHandle;
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
    v16 = 24LL * a5;
    v17 = 0xFFFFFFFFLL;
    if ( v16 <= 0xFFFFFFFF )
      v17 = (unsigned int)v16;
    v8 = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v39) = v8;
    v40 = v17;
    if ( v16 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, a5);
      WdLogGlobalForLineNumber = 2165;
    }
    else
    {
      v18 = DxgkGetVirtualMemoryInterface();
      v19 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v18)(
              -1LL,
              &v42,
              0LL,
              &v40,
              12288,
              4);
      v8 = v19;
      LODWORD(v39) = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry3(3LL, this, v40, v19);
        WdLogGlobalForLineNumber = 2158;
      }
      else
      {
        v20 = DXGGLOBAL::GetGlobal();
        if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                                (struct DXGGLOBAL *)((char *)v20 + 1620),
                                *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
        {
          P = (PVOID)ExAllocatePool2(256LL, v40, 1265072196LL, v21);
          if ( !P )
          {
            v8 = -1073741801;
            LODWORD(v39) = -1073741801;
            WdLogSingleEntry3(3LL, this, v5, -1073741801LL);
            WdLogGlobalForLineNumber = 2149;
          }
        }
      }
    }
    if ( v8 < 0 )
      goto LABEL_63;
    v7 = MmSecureVirtualMemory(v42, v40, 4u);
    v47 = v7;
    if ( !v7 )
    {
      v8 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2191;
    }
  }
  if ( v8 < 0 )
    goto LABEL_63;
  v22 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                               + 8LL)
                                                                                   + 448LL))(
          a2,
          v5,
          v52,
          a5);
  v8 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v22);
    WdLogGlobalForLineNumber = 2211;
  }
  if ( v8 < 0 )
    goto LABEL_63;
  if ( v5 )
  {
    if ( *((_QWORD *)this + 7) )
    {
      v23 = DxgkGetVirtualMemoryInterface();
      v24 = (_QWORD *)((char *)this + 48);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v23 + 2))(
        -1LL,
        (char *)this + 56,
        (char *)this + 48,
        0x8000LL);
    }
    else
    {
      v24 = (_QWORD *)((char *)v38 + 48);
    }
    v25 = (void *)*((_QWORD *)this + 8);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    *((_QWORD *)this + 7) = v46;
    *((_QWORD *)this + 8) = Pool2;
    *v24 = v5;
  }
  if ( v52 )
  {
    v26 = (void *)*((_QWORD *)this + 12);
    if ( v26 )
      MmUnsecureVirtualMemory(v26);
    if ( *((_QWORD *)this + 11) )
    {
      v27 = DxgkGetVirtualMemoryInterface();
      v28 = (SIZE_T *)((char *)this + 80);
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v27 + 2))(
        -1LL,
        (char *)this + 88,
        (char *)this + 80,
        0x8000LL);
    }
    else
    {
      v28 = (SIZE_T *)((char *)v38 + 80);
    }
    *((_QWORD *)this + 12) = SecureHandle;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v52;
    *v28 = Size;
  }
  if ( !a5 )
  {
LABEL_63:
    v33 = P;
    goto LABEL_64;
  }
  v29 = (void *)*((_QWORD *)this + 17);
  if ( v29 )
    MmUnsecureVirtualMemory(v29);
  if ( *((_QWORD *)this + 15) )
  {
    v30 = DxgkGetVirtualMemoryInterface();
    v31 = (SIZE_T *)((char *)this + 112);
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v30 + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
  }
  else
  {
    v31 = (SIZE_T *)((char *)v38 + 112);
  }
  v32 = (void *)*((_QWORD *)this + 16);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  *((_QWORD *)this + 17) = v7;
  *((_QWORD *)this + 15) = v42;
  v33 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *v31 = v40;
LABEL_64:
  if ( v8 < 0 )
  {
    if ( v7 )
      MmUnsecureVirtualMemory(v7);
    if ( v42 )
    {
      v38 = 0LL;
      v34 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, DXGCONTEXT **, __int64))v34 + 2))(-1LL, &v42, &v38, 0x8000LL);
    }
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
    if ( Address )
    {
      v38 = 0LL;
      v35 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, DXGCONTEXT **, __int64))v35 + 2))(-1LL, &Address, &v38, 0x8000LL);
    }
    if ( v46 )
    {
      v38 = 0LL;
      v36 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, DXGCONTEXT **, __int64))v36 + 2))(-1LL, &v46, &v38, 0x8000LL);
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v8;
}
