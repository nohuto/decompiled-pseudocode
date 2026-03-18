/*
 * XREFs of ?DrtToggleMuxPosition@DISPLAY_MUX_PAIRING@@QEAAJXZ @ 0x140083F84
 * Callers:
 *     DpiDrtToggleMux @ 0x140088480 (DpiDrtToggleMux.c)
 * Callees:
 *     ?UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z @ 0x1400881DC (-UpdateMuxProperties@DISPLAY_MUX_PAIRING@@AEAAJW4MUX_GPU_CHILD@@_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::DrtToggleMuxPosition(DISPLAY_MUX_PAIRING *this)
{
  __int64 v1; // rdi
  __int64 result; // rax
  unsigned int v4; // esi
  __int64 v5; // r8

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    v4 = (*(_DWORD *)(v1 + 72) == 1) + 1;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v1 + 152))(*(_QWORD *)(v1 + 112), v4);
    if ( (int)result >= 0 )
      *(_DWORD *)(v1 + 72) = v4;
    if ( *(_DWORD *)this == 2 )
    {
      LOBYTE(v5) = 1;
      return DISPLAY_MUX_PAIRING::UpdateMuxProperties(this, *(unsigned int *)(*((_QWORD *)this + 1) + 72LL), v5);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 2231;
  }
  return result;
}
