/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140037684
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x14003765C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004C5AC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v1 = (_QWORD *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 )
      goto LABEL_15;
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_15;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  v5 = *((unsigned int *)this + 18);
  if ( (v5 & 0x4000) != 0 )
  {
    RtlAvlRemoveNode(*(_QWORD *)this + 24 * (((v5 >> 4) & 0x3F) + 4), (char *)this + 8);
    *(_OWORD *)((char *)this + 8) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline(v7, v6, v8) )
    {
      if ( (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline() )
        --*(_DWORD *)(*(_QWORD *)this + 76LL);
    }
  }
  if ( (*((_DWORD *)this + 18) & 0x2000) == 0 )
  {
    v9 = (_QWORD *)((char *)this + 48);
    if ( *((_QWORD *)this + 6) )
    {
      v10 = GetVidMmGlobalAllocFromOwner(*((_DWORD *)this + 18) & 0xF, *((_QWORD **)this + 8)) + 24;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      v10[1] = KeGetCurrentThread();
      v11 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) == v9 )
      {
        v12 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v12 == v9 )
        {
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *v9 = 0LL;
          v10[1] = 0LL;
          ExReleasePushLockExclusiveEx(v10, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
      }
LABEL_15:
      __fastfail(3u);
    }
  }
}
