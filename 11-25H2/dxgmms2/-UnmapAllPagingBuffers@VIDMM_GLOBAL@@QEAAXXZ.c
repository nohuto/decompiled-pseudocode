/*
 * XREFs of ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400FFE50
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapAllPagingBuffers(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + i + 79);
    if ( (*(_DWORD *)(v3 + 28) & 4) != 0 )
    {
      v4 = *(_QWORD **)(v3 + 80);
      while ( v4 != (_QWORD *)(v3 + 80) )
      {
        v5 = v4[6];
        v4 = (_QWORD *)*v4;
        if ( v5 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 64LL) + 168LL))(*(_QWORD *)(*(_QWORD *)v5 + 64LL));
      }
      *(_DWORD *)(v3 + 28) &= ~4u;
    }
  }
  *((_DWORD *)this + 10024) = 0;
}
