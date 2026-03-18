/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C
 * Callers:
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400B6EAC (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1400B700C (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037A34 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1400380D4 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140038E38 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003ED5C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledDeviceUsageNoInline @ 0x14004DC68 (Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z @ 0x1400B575C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400F1AA8 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPP.c)
 *     CompareVaRangeAddressWithin @ 0x1400F1DF4 (CompareVaRangeAddressWithin.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140101FE8 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x140106040 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  unsigned __int64 *v10; // r13
  int v11; // eax
  _QWORD *i; // rdi
  _QWORD *v13; // rbx
  int v14; // eax
  unsigned __int64 *v15; // rsi
  _QWORD **v16; // rax
  struct VIDMM_MAPPED_VA_RANGE *v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r13
  int v24; // edi
  __int64 v25; // r10
  struct VIDMM_MAPPED_VA_RANGE *v26; // rax
  unsigned int v27; // edx
  VIDMM_MAPPED_VA_RANGE *v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // r10
  struct VIDMM_MAPPED_VA_RANGE *v31; // rax
  struct VIDMM_MAPPED_VA_RANGE *v32; // r13
  __int64 VidMmAllocFromOwner; // rax
  __int64 v34; // r8
  __int64 v36; // [rsp+50h] [rbp-78h]
  char v37; // [rsp+D0h] [rbp+8h]
  struct _RTL_AVL_TREE *v38; // [rsp+D8h] [rbp+10h]
  __int16 v39; // [rsp+E0h] [rbp+18h]
  VIDMM_MAPPED_VA_RANGE *v40; // [rsp+E8h] [rbp+20h]
  VIDMM_MAPPED_VA_RANGE *v41; // [rsp+E8h] [rbp+20h]

  v39 = a3;
  v5 = a3;
  v37 = 0;
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( this[8] == KeGetCurrentThread() )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( this[8] != KeGetCurrentThread() )
  {
LABEL_5:
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v37 = 1;
  }
LABEL_6:
  v8 = 0LL;
  v9 = (_QWORD *)*((_QWORD *)a2 + v5 + 12);
  v10 = (unsigned __int64 *)((char *)a4 + 104);
  v38 = (struct VIDMM_VAD *)((char *)a2 + 8 * v5 + 96);
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_21;
    v11 = CompareVaRangeAddressWithin((char *)a4 + 104, v9);
    if ( !v11 )
      break;
    if ( v11 >= 0 )
    {
      v9 = (_QWORD *)v9[1];
    }
    else
    {
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
  }
  v8 = v9;
  i = 0LL;
  v13 = (_QWORD *)*v9;
  if ( !v13 )
  {
LABEL_21:
    i = v8;
    if ( !v8 )
    {
      v15 = (unsigned __int64 *)((char *)a4 + 112);
LABEL_60:
      v24 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, a4);
      if ( v24 >= 0 )
        goto LABEL_61;
      goto LABEL_63;
    }
    goto LABEL_22;
  }
  do
  {
    v14 = CompareVaRangeAddressWithin((char *)a4 + 104, v13);
    if ( v14 >= 0 )
    {
      if ( v14 > 0 )
      {
        v13 = (_QWORD *)v13[1];
        continue;
      }
      i = v13;
    }
    v13 = (_QWORD *)*v13;
  }
  while ( v13 );
  if ( !i )
    goto LABEL_21;
LABEL_22:
  v15 = (unsigned __int64 *)((char *)a4 + 112);
  while ( 2 )
  {
    v16 = (_QWORD **)i[1];
    v17 = (struct VIDMM_MAPPED_VA_RANGE *)(i - 1);
    v18 = i;
    if ( v16 )
    {
      v19 = *v16;
      for ( i = (_QWORD *)i[1]; v19; v19 = (_QWORD *)*v19 )
        i = v19;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v18 )
          break;
        v18 = i;
      }
    }
    v20 = *v15;
    v21 = *((_QWORD *)v17 + 13);
    if ( *v15 <= v21 )
      goto LABEL_60;
    v22 = *v10;
    v23 = *((_QWORD *)v17 + 14);
    if ( v22 <= v21 )
    {
      if ( v20 < v23 )
      {
        *((_QWORD *)v17 + 13) = v20;
        v24 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, a4);
        if ( v24 < 0 )
        {
          *((_QWORD *)v17 + 13) = v21;
          goto LABEL_63;
        }
        VidMmiLogEndVaRangeMapping((struct CVirtualAddressAllocator *)this, v17, *((_QWORD *)v17 + 10), v21, *v15);
        if ( GetVidMmAllocFromOwner(*((_DWORD *)v17 + 18) & 0xF, *((_QWORD *)v17 + 8)) )
          *((_QWORD *)v17 + 10) = VidMmiCalculateNewOwnerOffset(v17, *v15 - v21);
        goto LABEL_61;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        v17,
        *((_QWORD *)v17 + 10),
        *((_QWORD *)v17 + 13),
        *((_QWORD *)v17 + 14));
      CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, (unsigned int *)v17, 0, 1);
      v10 = (unsigned __int64 *)((char *)a4 + 104);
      goto LABEL_36;
    }
    if ( v20 >= v23 )
    {
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        v17,
        *((_QWORD *)v17 + 10),
        v22,
        *((_QWORD *)v17 + 14));
      v10 = (unsigned __int64 *)((char *)a4 + 104);
      *((_QWORD *)v17 + 14) = *((_QWORD *)a4 + 13);
LABEL_36:
      if ( !i )
        goto LABEL_60;
      continue;
    }
    break;
  }
  *((_QWORD *)v17 + 13) = v23;
  v25 = operator new(144LL, 0x39346956u, 256LL);
  if ( !v25 )
    goto LABEL_68;
  v26 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                          v25,
                                          (__int64)a2,
                                          v21,
                                          *((_QWORD *)a4 + 13),
                                          v39,
                                          *((_QWORD *)v17 + 8),
                                          *((_QWORD *)v17 + 10),
                                          *((_DWORD *)v17 + 18) & 0xF,
                                          *((_QWORD *)v17 + 12),
                                          *((_QWORD *)v17 + 11),
                                          *((_QWORD *)v17 + 16),
                                          *((_QWORD *)v17 + 15));
  v40 = v26;
  if ( !v26 )
    goto LABEL_68;
  v24 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, v26);
  if ( v24 < 0 )
  {
    v28 = v40;
    *((_QWORD *)v17 + 13) = *((_QWORD *)v40 + 13);
LABEL_46:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v28, v27);
    goto LABEL_63;
  }
  v24 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, a4);
  if ( v24 < 0 )
  {
    *((_QWORD *)v17 + 13) = *((_QWORD *)a4 + 13);
    goto LABEL_63;
  }
  v41 = (VIDMM_MAPPED_VA_RANGE *)VidMmiCalculateNewOwnerOffset(v17, *((_QWORD *)a4 + 13) - v21);
  v29 = VidMmiCalculateNewOwnerOffset(v17, *v15 - v21);
  v30 = operator new(144LL, 0x39346956u, 256LL);
  if ( !v30
    || (v31 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                v30,
                                                (__int64)a2,
                                                *v15,
                                                v23,
                                                v39,
                                                *((_QWORD *)v17 + 8),
                                                v29,
                                                *((_DWORD *)v17 + 18) & 0xF,
                                                *((_QWORD *)v17 + 12),
                                                *((_QWORD *)v17 + 11),
                                                *((_QWORD *)v17 + 16),
                                                *((_QWORD *)v17 + 15)),
        (v32 = v31) == 0LL) )
  {
LABEL_68:
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledDeviceUsageNoInline() )
      *((_QWORD *)v17 + 13) = *v15;
    v24 = -1073741801;
    goto LABEL_63;
  }
  v24 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v38, v31);
  if ( v24 < 0 )
  {
    *((_QWORD *)v17 + 13) = *((_QWORD *)v32 + 13);
    v28 = v32;
    goto LABEL_46;
  }
  VidMmiLogEndVaRangeMapping(
    (struct CVirtualAddressAllocator *)this,
    v17,
    (unsigned __int64)v41,
    *((_QWORD *)a4 + 13),
    *v15);
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VaRangeAddressRestore__private_IsEnabledDeviceUsageNoInline() )
    *((_QWORD *)v17 + 13) = v21;
  CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, (unsigned int *)v17, 0, 0);
LABEL_61:
  if ( (byte_140081242 & 0x40) != 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD *)a4 + 8));
    LODWORD(v36) = v34;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      *((_QWORD *)a4 + 10),
      &UpdateGpuVirtualAddressRangeMapping,
      v34,
      this,
      VidMmAllocFromOwner,
      *((_QWORD *)a4 + 10),
      *((_QWORD *)a4 + 13),
      *v15,
      *((_QWORD *)a4 + 12),
      *((_QWORD *)a4 + 11),
      v36,
      *((_QWORD *)a4 + 15),
      *((_QWORD *)a4 + 16));
  }
LABEL_63:
  if ( v37 )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v24;
}
