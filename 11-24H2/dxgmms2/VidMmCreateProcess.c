/*
 * XREFs of VidMmCreateProcess @ 0x14003D630
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14001D1EC (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1400FA060 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x1400FFA5C (--0VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VidMmCreateProcess(struct DXGPROCESS *a1)
{
  VIDMM_PROCESS *Pool2; // rax
  VIDMM_PROCESS *v3; // rax
  VIDMM_PROCESS *v4; // rdi
  VIDMM_PROCESS *v5; // rbx

  Pool2 = (VIDMM_PROCESS *)ExAllocatePool2(256LL, 312LL, 959474006LL);
  if ( !Pool2 )
    return 0LL;
  v3 = VIDMM_PROCESS::VIDMM_PROCESS(Pool2);
  v4 = v3;
  v5 = v3;
  if ( v3 && (int)VIDMM_PROCESS::Init(v3, a1) < 0 )
  {
    VIDMM_PROCESS::`scalar deleting destructor'(v4);
    return 0LL;
  }
  return v5;
}
