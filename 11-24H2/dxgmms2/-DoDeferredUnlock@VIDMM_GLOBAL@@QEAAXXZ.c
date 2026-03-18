/*
 * XREFs of ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x140100EC8
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z @ 0x1400DA2EC (-VidMmiUnlockAllocation@@YAXPEAU_MDL@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DoDeferredUnlock(VIDMM_GLOBAL *this)
{
  char *v1; // rdi
  struct _MDL **v2; // rbx
  struct _MDL *v3; // rax
  struct _MDL *v4; // rcx

  v1 = (char *)this + 39936;
  while ( 1 )
  {
    v2 = *(struct _MDL ***)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = *v2, *(struct _MDL ***)&(*v2)->Size != v2) )
      __fastfail(3u);
    *(_QWORD *)v1 = v3;
    *(_QWORD *)&v3->Size = v1;
    if ( v2 == (struct _MDL **)v1 )
      break;
    VidMmiUnlockAllocation(v2[2]);
    v4 = v2[3];
    v2[2] = 0LL;
    ObfDereferenceObject(v4);
    operator delete(v2);
  }
}
