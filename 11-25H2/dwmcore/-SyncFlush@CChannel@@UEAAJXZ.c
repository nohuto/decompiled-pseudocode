/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x18026ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x180181AD0 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x1801DFE40 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v5, this);
  v2 = CChannel::SyncFlushInternal(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x249,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
    return v3;
  }
}
