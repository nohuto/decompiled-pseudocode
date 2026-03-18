/*
 * XREFs of ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAA_NPEBU_MDL@@_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4A28
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C36AC (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C4888 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall VIDMM_SEGMENT::TrackAndValidatePagesOnLock(
        VIDMM_SEGMENT *this,
        const struct _MDL *a2,
        __int64 a3,
        const struct VIDMM_GLOBAL_ALLOC *a4)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r11
  unsigned __int64 i; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v11; // rcx

  v5 = *((_QWORD *)this + 22) >> 12;
  v6 = (((LODWORD(a2->StartVa) + a2->ByteOffset) & 0xFFF) + (unsigned __int64)a2->ByteCount + 4095) >> 12;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= v6 )
      return 1;
    v8 = *((_QWORD *)this + 36);
    v9 = *((_QWORD *)&a2[1].Next + i);
    if ( v8 )
    {
      *(_QWORD *)(v8 + 16LL * *((unsigned int *)this + 71)) = v9;
      *(_QWORD *)(*((_QWORD *)this + 36) + 16LL * (unsigned int)(*((_DWORD *)this + 71))++ + 8) = a4;
      if ( *((_DWORD *)this + 71) >= *((_DWORD *)this + 70) )
        *((_DWORD *)this + 71) = 0;
    }
    if ( v9 > v5 )
      break;
  }
  WdLogSingleEntry2(1LL, i, v9);
  WdLogGlobalForLineNumber = 4967;
  DxgkLogInternalTriageEvent(v11, 0x40000LL);
  return 0;
}
