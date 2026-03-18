/*
 * XREFs of ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E34BC
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E182C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E246C (-PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::FaultCommitment(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax

  v2 = (_QWORD *)((char *)a2 + 56);
  v3 = (_QWORD *)(*((_QWORD *)a2 + 1) + 136LL);
  if ( (*(_DWORD *)(**(_QWORD **)a2 + 24LL) & 0x10000000) != 0 )
  {
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
LABEL_3:
      __fastfail(3u);
    *v2 = v5;
    *((_QWORD *)a2 + 8) = v3;
    *(_QWORD *)(v5 + 8) = v2;
    *v3 = v2;
  }
  else
  {
    v4 = *(_QWORD **)(*((_QWORD *)a2 + 1) + 144LL);
    if ( (_QWORD *)*v4 != v3 )
      goto LABEL_3;
    *v2 = v3;
    *((_QWORD *)a2 + 8) = v4;
    *v4 = v2;
    v3[1] = v2;
  }
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 1;
}
