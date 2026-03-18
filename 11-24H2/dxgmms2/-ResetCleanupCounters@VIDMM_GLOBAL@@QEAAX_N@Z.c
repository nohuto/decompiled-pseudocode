/*
 * XREFs of ?ResetCleanupCounters@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400F4050
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 *v2; // r8
  _QWORD *v3; // r9
  __int64 v4; // rax

  v2 = (__int64 *)((char *)this + 4560);
  v3 = (_QWORD *)((char *)this + 7104);
  if ( a2 || *v2 - *v3 > qword_1400814C0 )
  {
    v4 = *v2;
    *((_QWORD *)this + 886) = 0LL;
    *((_DWORD *)this + 1774) = 0;
    *v3 = v4;
  }
}
