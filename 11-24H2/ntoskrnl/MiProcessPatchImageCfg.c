/*
 * XREFs of MiProcessPatchImageCfg @ 0x1407F63AC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     RtlEnumerateHotPatchPatches @ 0x14082F7B8 (RtlEnumerateHotPatchPatches.c)
 *     MiPopulateCfgBitMap @ 0x14091C830 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1409E4CC8 (MiSelectCfgBitMap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiProcessPatchImageCfg(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  int v8; // ebx
  void *Pool; // rax
  __int64 v10; // r14
  unsigned int i; // edx
  int v12; // r8d
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  void *Base[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+50h] [rbp-10h]
  unsigned int v19; // [rsp+98h] [rbp+38h] BYREF

  v19 = 0;
  v18 = 0LL;
  *(_OWORD *)Base = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( Process[2].ActiveProcessors[4].StaticBitmap[16] )
  {
    RtlEnumerateHotPatchPatches(a2, a3, MiFillPatchCallTargets, Base);
    v19 = (unsigned int)Base[0];
    if ( LODWORD(Base[0]) )
    {
      Pool = (void *)MiAllocatePool(0x100uLL, 16LL * LODWORD(Base[0]), 1665690957);
      Base[1] = Pool;
      if ( !Pool )
      {
        v8 = -1073741670;
        goto LABEL_22;
      }
      LODWORD(Base[0]) = 0;
      RtlEnumerateHotPatchPatches(a2, a3, MiFillPatchCallTargets, Base);
      qsort(Base[1], LODWORD(Base[0]), 0x10uLL, (int (__cdecl *)(const void *, const void *))MiPatchCfgCallTargetsSort);
    }
    MiLockVad((__int64)CurrentThread, a1);
    if ( (unsigned int)MiVadDeleted(a1) )
    {
      v8 = -1073741800;
    }
    else
    {
      v10 = MiSelectCfgBitMap(
              Process,
              (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
              **(_QWORD **)(a1 + 72));
      for ( i = 0; i < v19; ++i )
      {
        if ( (*((_DWORD *)Base[1] + 4 * i) & 0xF) != (unsigned __int64)*(unsigned int *)(v10 + 24) )
        {
          v8 = -1073741654;
          goto LABEL_20;
        }
        *((_QWORD *)Base[1] + 2 * i + 1) = 1LL;
      }
      if ( (MiReadVadFlags2(a1) & 0x20) != 0 )
        v12 = dword_140E2D8EC;
      v13 = (unsigned int)(v12 - 1);
      v8 = MiPopulateCfgBitMap(
             v10,
             (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
             (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF)
           - v13,
             0LL);
      if ( v8 >= 0 )
      {
        if ( !v19
          || (v14 = *(unsigned __int8 *)(a1 + 33),
              v15 = *(unsigned __int8 *)(a1 + 32),
              v19 = 0,
              v18 = &v19,
              v8 = MiPopulateCfgBitMap(
                     v10,
                     (*(unsigned int *)(a1 + 24) | (unsigned __int64)(v15 << 32)) << 12,
                     (((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v14 << 32)) << 12) | 0xFFF) - v13,
                     0LL),
              v8 >= 0) )
        {
          v8 = 0;
        }
      }
    }
LABEL_20:
    MiUnlockVad((__int64)CurrentThread, a1);
  }
  else
  {
    v8 = 0;
  }
  Pool = Base[1];
LABEL_22:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v8;
}
