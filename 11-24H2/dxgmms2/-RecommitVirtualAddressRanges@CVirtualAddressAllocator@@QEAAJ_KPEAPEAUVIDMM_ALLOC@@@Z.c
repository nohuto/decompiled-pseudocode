/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D23B0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D2258 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v3; // r8
  CVirtualAddressAllocator *v4; // rdi
  _QWORD *v5; // rdx
  __int64 v6; // rsi
  unsigned int v7; // r13d
  unsigned __int64 k; // rbx
  _QWORD *i; // rax
  _QWORD *v10; // r15
  int v11; // edx
  int v12; // r12d
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _QWORD **v18; // rdi
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  _QWORD *v24; // rdx
  unsigned __int64 LogicalAddress; // rax
  int v26; // eax
  _QWORD **v27; // rcx
  unsigned __int64 v28; // rax
  _QWORD *j; // rcx
  __int64 v30; // rcx
  _QWORD *v32; // [rsp+60h] [rbp-68h]
  _OWORD v33[2]; // [rsp+68h] [rbp-60h] BYREF
  char v37; // [rsp+E8h] [rbp+20h]

  v3 = a2;
  v4 = (CVirtualAddressAllocator *)this;
  v37 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v4 + 56, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v4 + 20) != -1 && (byte_140081241 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      ExAcquirePushLockExclusiveEx((char *)v4 + 56, 0LL);
    }
    v3 = a2;
    *((_QWORD *)v4 + 8) = KeGetCurrentThread();
    v37 = 1;
  }
  v5 = (_QWORD *)*((_QWORD *)v4 + 3);
  v6 = 0LL;
  v32 = v5;
  if ( v5 != (_QWORD *)((char *)v4 + 24) )
  {
    while ( 1 )
    {
      v7 = v6;
      if ( *(_DWORD *)(*((_QWORD *)v4 + 11) + 6944LL) )
        break;
LABEL_56:
      v5 = (_QWORD *)*v5;
      v32 = v5;
      if ( v5 == (_QWORD *)((char *)v4 + 24) )
        goto LABEL_59;
    }
    while ( 1 )
    {
      if ( _bittest64(&v3, v7) )
      {
        k = v6;
        for ( i = (_QWORD *)v5[3 * v7 + 7]; i; i = (_QWORD *)*i )
          k = (unsigned __int64)i;
        if ( k )
          break;
      }
LABEL_55:
      if ( ++v7 >= *(_DWORD *)(*((_QWORD *)v4 + 11) + 6944LL) )
        goto LABEL_56;
    }
    while ( 1 )
    {
      v10 = (_QWORD *)(k - 8);
      v11 = *(_DWORD *)(k + 64) & 0xF;
      v12 = v6;
      v13 = v6;
      LODWORD(v14) = v6;
      v33[0] = 0LL;
      if ( v11 != 5 )
      {
        switch ( v11 )
        {
          case 1:
          case 3:
          case 4:
            break;
          case 2:
            v17 = v10[8];
            v6 = *(_QWORD *)(v17 + 56);
            v16 = *(_QWORD **)(v17 + 64);
            goto LABEL_41;
          case 6:
            v12 = -2;
            goto LABEL_43;
          case 7:
            v15 = v10[8];
            v6 = *(_QWORD *)(v15 + 72);
            v16 = *(_QWORD **)(v15 + 80);
            goto LABEL_41;
          case 8:
          case 9:
            goto LABEL_43;
          default:
            goto LABEL_45;
        }
      }
      v18 = (_QWORD **)v10[8];
      if ( v11 != 3 )
        break;
LABEL_29:
      if ( !*((_DWORD *)v18 + 18) )
      {
        v4 = (CVirtualAddressAllocator *)this;
        goto LABEL_45;
      }
      v21 = (__int64)*v18;
      v22 = (*v18)[8];
      v23 = *(_DWORD *)(v22 + 104);
      if ( (v23 & 0x1001) != 0 )
      {
        v6 = (__int64)v18[7];
        if ( !v6 )
        {
          if ( (*((_DWORD *)v18 + 7) & 0x14000) != 0 )
          {
            v6 = (__int64)v18[51];
          }
          else
          {
            v24 = v18[31];
            if ( v24 )
              v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64, unsigned __int64))(*v18[30] + 88LL))(
                     v18[30],
                     v24,
                     v3,
                     0x140000000uLL);
            else
              v6 = v18[6][9];
          }
        }
        v16 = v18[46];
        v4 = (CVirtualAddressAllocator *)this;
LABEL_41:
        if ( v6 )
        {
          LogicalAddress = SysMmGetLogicalAddress(v16);
          VidMmiInitializeAdlForPfnArray(
            (struct _DXGK_ADL *)v33,
            (const unsigned __int64 *)(v6 + 48),
            *(_DWORD *)(v6 + 40) >> 12,
            LogicalAddress);
          v6 = 0LL;
          goto LABEL_44;
        }
      }
      else
      {
        v13 = *(_QWORD *)(v21 + 72);
        v14 = *(_QWORD *)(v21 + 16);
        if ( (v23 & 0x1000) != 0 )
          v12 = (unsigned __int16)v6;
        else
          v12 = (unsigned __int16)(*(_WORD *)(v22 + 40) + 1);
      }
LABEL_43:
      v4 = (CVirtualAddressAllocator *)this;
      *((_QWORD *)&v33[0] + 1) = v13 >> 12;
      DWORD1(v33[0]) = 1;
      LODWORD(v33[0]) = (unsigned int)v14 >> 12;
LABEL_44:
      v26 = CVirtualAddressAllocator::CommitVirtualAddressRange(
              (__int64)v4,
              k - 8,
              v7,
              v12,
              v10[10],
              (struct _DXGK_ADL *)v33,
              v6,
              a3,
              (_BYTE *)v6,
              v6,
              v6);
      if ( v26 < 0 )
      {
        WdLogSingleEntry4(1LL, v26, v10[13]);
        WdLogGlobalForLineNumber = 3254;
        DxgkLogInternalTriageEvent(v30, 0x40000LL);
        goto LABEL_59;
      }
LABEL_45:
      v27 = *(_QWORD ***)(k + 8);
      v28 = k;
      if ( v27 )
      {
        k = *(_QWORD *)(k + 8);
        for ( j = *v27; j; j = (_QWORD *)*j )
          k = (unsigned __int64)j;
      }
      else
      {
        for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)k == v28 )
            break;
          v28 = k;
        }
      }
      if ( !k )
      {
        v5 = v32;
        v3 = a2;
        goto LABEL_55;
      }
    }
    v19 = v11 - 1;
    if ( v19 )
    {
      v20 = v19 - 3;
      if ( v20 )
      {
        if ( v20 != 1 )
        {
LABEL_28:
          v18 = (_QWORD **)v6;
          goto LABEL_29;
        }
        v18 = (_QWORD **)v18[3];
      }
      else
      {
        v18 = (_QWORD **)v18[7];
      }
    }
    if ( v18 )
    {
      v18 = (_QWORD **)**v18;
      goto LABEL_29;
    }
    goto LABEL_28;
  }
LABEL_59:
  if ( v37 )
  {
    *((_QWORD *)v4 + 8) = v6;
    ExReleasePushLockExclusiveEx((char *)v4 + 56, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
