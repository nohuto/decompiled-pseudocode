/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x180059C60
 * Callers:
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18005AB1C (--1CBitmapLock@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, *((unsigned int *)this + 36));
    v3 = *((_QWORD *)this + 19);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 19) = 0LL;
    }
    v4 = *((_QWORD *)this + 12);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( *((_BYTE *)this + 89) )
    {
      (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 16));
      *((_QWORD *)this + 16) = 0LL;
      *((_DWORD *)this + 34) = 0;
    }
  }
  *((_BYTE *)this + 88) = 0;
}
