/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400BE360
 * Callers:
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x14009AD34 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1400BE130 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1400FBE4C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1401117CC (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140035860 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003CA7C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400997A0 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x14009B574 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400ECCA8 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPP.c)
 *     CompareVaRangeAddressWithin @ 0x1400FF750 (CompareVaRangeAddressWithin.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x140100E28 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x140103E80 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  __int64 v5; // rbx
  _QWORD *v8; // r14
  struct _RTL_AVL_TREE *v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 *v11; // r13
  int v12; // eax
  _QWORD *i; // rdi
  _QWORD *v14; // rbx
  int v15; // eax
  unsigned __int64 *v16; // r14
  _QWORD **v17; // rax
  struct VIDMM_MAPPED_VA_RANGE *v18; // rbx
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r13
  int v25; // edi
  PVOID v26; // r10
  struct VIDMM_MAPPED_VA_RANGE *v27; // rax
  struct VIDMM_VAD *v28; // rdx
  unsigned int v29; // edx
  VIDMM_MAPPED_VA_RANGE *v30; // rcx
  __int64 v31; // rdi
  PVOID v32; // r10
  struct VIDMM_MAPPED_VA_RANGE *v33; // rax
  struct VIDMM_VAD *v34; // rdx
  struct VIDMM_MAPPED_VA_RANGE *v35; // r13
  __int64 VidMmAllocFromOwner; // rax
  __int64 v37; // r8
  __int64 v39; // [rsp+50h] [rbp-68h]
  char v40; // [rsp+70h] [rbp-48h]
  struct _RTL_AVL_TREE *v41; // [rsp+78h] [rbp-40h]
  VIDMM_MAPPED_VA_RANGE *v42; // [rsp+80h] [rbp-38h]
  unsigned __int64 v43; // [rsp+88h] [rbp-30h]
  __int16 v44; // [rsp+D0h] [rbp+18h]

  v44 = a3;
  v5 = a3;
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    return CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(this, a2, v5, a4);
  v40 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v40 = 1;
  }
  v8 = 0LL;
  v9 = (struct VIDMM_VAD *)((char *)a2 + 24 * v5 + 96);
  v10 = *(_QWORD **)v9;
  v11 = (unsigned __int64 *)((char *)a4 + 104);
  v41 = v9;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_19;
    v12 = CompareVaRangeAddressWithin((char *)a4 + 104, v10);
    if ( !v12 )
      break;
    if ( v12 >= 0 )
    {
      v10 = (_QWORD *)v10[1];
    }
    else
    {
      v8 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  v8 = v10;
  i = 0LL;
  v14 = (_QWORD *)*v10;
  if ( !v14 )
  {
LABEL_19:
    i = v8;
    if ( !v8 )
    {
      v16 = (unsigned __int64 *)((char *)a4 + 112);
LABEL_54:
      v25 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v41, a4);
      if ( v25 >= 0 )
        goto LABEL_55;
      goto LABEL_57;
    }
    goto LABEL_20;
  }
  do
  {
    v15 = CompareVaRangeAddressWithin((char *)a4 + 104, v14);
    if ( v15 >= 0 )
    {
      if ( v15 > 0 )
      {
        v14 = (_QWORD *)v14[1];
        continue;
      }
      i = v14;
    }
    v14 = (_QWORD *)*v14;
  }
  while ( v14 );
  if ( !i )
    goto LABEL_19;
LABEL_20:
  v16 = (unsigned __int64 *)((char *)a4 + 112);
  while ( 2 )
  {
    v17 = (_QWORD **)i[1];
    v18 = (struct VIDMM_MAPPED_VA_RANGE *)(i - 1);
    v19 = i;
    if ( v17 )
    {
      v20 = *v17;
      for ( i = (_QWORD *)i[1]; v20; v20 = (_QWORD *)*v20 )
        i = v20;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v19 )
          break;
        v19 = i;
      }
    }
    v21 = *v16;
    v22 = *((_QWORD *)v18 + 13);
    if ( *v16 <= v22 )
      goto LABEL_54;
    v23 = *v11;
    v24 = *((_QWORD *)v18 + 14);
    if ( v23 <= v22 )
    {
      if ( v21 < v24 )
      {
        *((_QWORD *)v18 + 13) = v21;
        v25 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v41, a4);
        if ( v25 < 0 )
        {
          *((_QWORD *)v18 + 13) = v22;
          goto LABEL_57;
        }
        VidMmiLogEndVaRangeMapping((struct CVirtualAddressAllocator *)this, v18, *((_QWORD *)v18 + 10), v22, *v16);
        if ( GetVidMmAllocFromOwner(*((_DWORD *)v18 + 18) & 0xF, *((_QWORD *)v18 + 8)) )
          *((_QWORD *)v18 + 10) = VidMmiCalculateNewOwnerOffset(v18, *v16 - v22);
        goto LABEL_55;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        v18,
        *((_QWORD *)v18 + 10),
        *((_QWORD *)v18 + 13),
        *((_QWORD *)v18 + 14));
      CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v18, 0, 1, 0);
      v11 = (unsigned __int64 *)((char *)a4 + 104);
      goto LABEL_34;
    }
    if ( v21 >= v24 )
    {
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        v18,
        *((_QWORD *)v18 + 10),
        v23,
        *((_QWORD *)v18 + 14));
      v11 = (unsigned __int64 *)((char *)a4 + 104);
      *((_QWORD *)v18 + 14) = *((_QWORD *)a4 + 13);
LABEL_34:
      if ( !i )
        goto LABEL_54;
      continue;
    }
    break;
  }
  *((_QWORD *)v18 + 13) = v24;
  v26 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( !v26 )
    goto LABEL_52;
  v27 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                          (__int64)v26,
                                          (__int64)a2,
                                          v22,
                                          *((_QWORD *)a4 + 13),
                                          v44,
                                          *((_QWORD *)v18 + 8),
                                          *((_QWORD *)v18 + 10),
                                          *((_DWORD *)v18 + 18) & 0xF,
                                          *((_QWORD *)v18 + 12),
                                          *((_QWORD *)v18 + 11),
                                          *((_QWORD *)v18 + 16),
                                          *((_QWORD *)v18 + 15),
                                          0);
  v42 = v27;
  if ( !v27 )
    goto LABEL_52;
  v25 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, v28, v41, v27);
  if ( v25 < 0 )
  {
    v30 = v42;
    *((_QWORD *)v18 + 13) = *((_QWORD *)v42 + 13);
LABEL_44:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v30, v29);
    goto LABEL_57;
  }
  v25 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v41, a4);
  if ( v25 < 0 )
  {
    *((_QWORD *)v18 + 13) = *((_QWORD *)a4 + 13);
    goto LABEL_57;
  }
  v43 = VidMmiCalculateNewOwnerOffset(v18, *((_QWORD *)a4 + 13) - v22);
  v31 = VidMmiCalculateNewOwnerOffset(v18, *v16 - v22);
  v32 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( !v32
    || (v33 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                                (__int64)v32,
                                                (__int64)a2,
                                                *v16,
                                                v24,
                                                v44,
                                                *((_QWORD *)v18 + 8),
                                                v31,
                                                *((_DWORD *)v18 + 18) & 0xF,
                                                *((_QWORD *)v18 + 12),
                                                *((_QWORD *)v18 + 11),
                                                *((_QWORD *)v18 + 16),
                                                *((_QWORD *)v18 + 15),
                                                0),
        (v35 = v33) == 0LL) )
  {
LABEL_52:
    v25 = -1073741801;
    *((_QWORD *)v18 + 13) = *v16;
    goto LABEL_57;
  }
  v25 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, v34, v41, v33);
  if ( v25 < 0 )
  {
    *((_QWORD *)v18 + 13) = *((_QWORD *)v35 + 13);
    v30 = v35;
    goto LABEL_44;
  }
  VidMmiLogEndVaRangeMapping((struct CVirtualAddressAllocator *)this, v18, v43, *((_QWORD *)a4 + 13), *v16);
  *((_QWORD *)v18 + 13) = v22;
  CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v18, 0, 0, 0);
LABEL_55:
  if ( (byte_140081242 & 0x40) != 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD *)a4 + 8));
    LODWORD(v39) = v37;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      *((_QWORD *)a4 + 10),
      &UpdateGpuVirtualAddressRangeMapping,
      v37,
      this,
      VidMmAllocFromOwner,
      *((_QWORD *)a4 + 10),
      *((_QWORD *)a4 + 13),
      *v16,
      *((_QWORD *)a4 + 12),
      *((_QWORD *)a4 + 11),
      v39,
      *((_QWORD *)a4 + 15),
      *((_QWORD *)a4 + 16));
  }
LABEL_57:
  if ( v40 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v25;
}
