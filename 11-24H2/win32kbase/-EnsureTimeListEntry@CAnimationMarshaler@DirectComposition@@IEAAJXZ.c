/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x14010B428
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x14010B190 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14010B1C0 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 10);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 24) & 2) == 0 )
      goto LABEL_7;
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = Win32AllocPoolWithQuotaZInitImpl((__int64)this, 0x38uLL, 0x6C614344u);
  if ( !v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    return (unsigned int)-1073741801;
  }
  *(_DWORD *)(v4 + 48) = 1;
  *(_QWORD *)v4 = this;
  *((_QWORD *)this + 10) = v4;
  if ( v1 )
    *(_QWORD *)(v1 + 16) = v4;
LABEL_7:
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  return v2;
}
