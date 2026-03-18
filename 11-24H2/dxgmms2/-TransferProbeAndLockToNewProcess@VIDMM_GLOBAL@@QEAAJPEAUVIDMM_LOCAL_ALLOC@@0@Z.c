/*
 * XREFs of ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400D9E0C
 * Callers:
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400D9BB4 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEA.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400DA3A4 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLO.c)
 * Callees:
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1400C3D24 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2W4_.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1400DA13C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400DA2EC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCAL_ALLOC *a2,
        PVOID **a3)
{
  PVOID *v3; // rbx
  PVOID v7; // rdi
  int v8; // esi
  struct _MDL *v10; // r15
  enum _LOCK_OPERATION v11; // [rsp+28h] [rbp-30h]

  v3 = *a3;
  v7 = **a3;
  v8 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         this,
         (struct VIDMM_LOCAL_ALLOC *)a3,
         (struct VIDMM_GLOBAL_ALLOC *)v3,
         0LL,
         *((_QWORD *)*v3 + 2),
         v11,
         *((struct VIDMM_SEGMENT **)*v3 + 8),
         0);
  if ( v8 >= 0 )
  {
    if ( v3[7] )
    {
      v10 = VidMmiProbeAndLockAllocation(
              (struct VIDMM_GLOBAL_ALLOC *)v3,
              0LL,
              *((_QWORD *)v7 + 2),
              IoModifyAccess,
              *((struct VIDMM_SEGMENT **)v7 + 8),
              (struct VIDMM_LOCAL_ALLOC *)a3);
      if ( !v10 )
      {
        v8 = -1073741801;
        VIDMM_GLOBAL::UnlockAllocation(this, (struct VIDMM_LOCAL_ALLOC *)a3, 0LL, *((_QWORD *)v7 + 2), 0, 1);
        return (unsigned int)v8;
      }
      VidMmiUnlockAllocation(v3[7]);
      v3[7] = v10;
    }
    VIDMM_GLOBAL::UnlockAllocation(this, a2, 0LL, *((_QWORD *)v7 + 2), 0, 0);
  }
  return (unsigned int)v8;
}
