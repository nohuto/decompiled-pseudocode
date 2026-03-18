/*
 * XREFs of ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x140037A9C
 * Callers:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x140037A68 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x14003839C (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  int v5; // ecx
  char *v6; // rsi
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v8; // rdx
  char **v9; // rax

  v1 = (_QWORD *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 )
      goto LABEL_10;
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_10;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  if ( (*((_DWORD *)this + 18) & 0x4000) != 0 )
  {
    RtlAvlRemoveNode(*(_QWORD *)this + 96LL + 8LL * ((*((_DWORD *)this + 18) >> 4) & 0x3F), (char *)this + 8);
    *(_OWORD *)((char *)this + 8) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = *((_DWORD *)this + 18);
  if ( (v5 & 0x2000) == 0 )
  {
    v6 = (char *)this + 48;
    if ( *((_QWORD *)this + 6) )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v5 & 0xF, *((_QWORD *)this + 8));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 192, 0LL);
      v8 = *(_QWORD *)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) == v6 )
      {
        v9 = (char **)*((_QWORD *)this + 7);
        if ( *v9 == v6 )
        {
          *v9 = (char *)v8;
          *(_QWORD *)(v8 + 8) = v9;
          *(_QWORD *)v6 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 192, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
      }
LABEL_10:
      __fastfail(3u);
    }
  }
}
