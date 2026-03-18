/*
 * XREFs of ?Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ @ 0x1400B9ED0
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400B983C (-Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003DD1C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall VIDMM_PHYSICAL_DEVICE::Initialize(VIDMM_PHYSICAL_DEVICE *this)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  char *v4; // rax
  char *v5; // rbx
  __int64 v7; // rcx

  v2 = *(_DWORD *)(*(_QWORD *)this + 64LL);
  v3 = 56LL * v2;
  if ( !is_mul_ok(v2, 0x38uLL) )
    v3 = -1LL;
  v4 = (char *)operator new[](v3, 0x30326956u, 256LL);
  v5 = v4;
  if ( v4 )
    `vector constructor iterator'(
      v4,
      56LL,
      v2,
      (void (__fastcall *)(char *))_VIDMM_DEVICE_COMMITMENT_INFO::_VIDMM_DEVICE_COMMITMENT_INFO);
  else
    v5 = 0LL;
  *((_QWORD *)this + 2) = v5;
  if ( v5 )
    return 0LL;
  _InterlockedIncrement(&dword_1400816CC);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 2792;
  DxgkLogInternalTriageEvent(v7, 262145LL);
  return 3221225495LL;
}
