/*
 * XREFs of RemoveVaRangeCb @ 0x1400B6904
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037A34 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140038E38 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x14003ED5C (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 */

__int64 __fastcall RemoveVaRangeCb(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rbx
  __int64 v4; // rbp
  __int64 *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v13; // r8

  v2 = (_QWORD *)(a1 - 8);
  v3 = (_DWORD *)(a1 - 8 + 72);
  if ( (byte_140081242 & 0x40) != 0 )
  {
    GetVidMmAllocFromOwner(*v3 & 0xF, v2[8]);
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(v2[10], &EndGpuVirtualAddressRangeMapping, v13);
  }
  *v3 &= ~0x4000u;
  v4 = *v2;
  v5 = (__int64 *)v2[8];
  if ( (*v3 & 0xF) != 1 )
  {
    if ( (*v3 & 0xF) == 4 )
    {
      v5 = (__int64 *)v5[7];
    }
    else
    {
      if ( (*v3 & 0xF) != 5 )
        goto LABEL_13;
      v5 = (__int64 *)v5[3];
    }
  }
  if ( v5 )
  {
    v6 = v2 + 4;
    a2 = v2[4];
    if ( a2 )
    {
      if ( *(_QWORD **)(a2 + 8) != v6 )
        goto LABEL_17;
      v7 = (_QWORD *)v2[5];
      if ( (_QWORD *)*v7 != v6 )
        goto LABEL_17;
      *v7 = a2;
      *(_QWORD *)(a2 + 8) = v7;
      *v6 = 0LL;
    }
    v8 = v2 + 6;
    if ( v2[6] )
    {
      v9 = *(_QWORD *)*v5;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9 + 192, 0LL);
      v10 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) == v8 )
      {
        v11 = (_QWORD *)v2[7];
        if ( (_QWORD *)*v11 == v8 )
        {
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          *v8 = 0LL;
          ExReleasePushLockExclusiveEx(v9 + 192, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_13;
        }
      }
LABEL_17:
      __fastfail(3u);
    }
  }
LABEL_13:
  --*(_DWORD *)(v4 + 76);
  *v2 = 0LL;
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)v2, a2);
}
