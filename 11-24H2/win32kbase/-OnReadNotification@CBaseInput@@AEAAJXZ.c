/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x140187370
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x140043C98 (-IsInputSuppressRequested@CBaseInput@@IEBA_NXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z @ 0x1400B07AC (-OnReadNotification@Win32k@InputTraceLogging@@SAXPEAXK@Z.c)
 *     ??0MaybeEnterLeaveCrit@@QEAA@_N@Z @ 0x1400E94B0 (--0MaybeEnterLeaveCrit@@QEAA@_N@Z.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x140103D70 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x140145BE0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(void **this)
{
  char v2; // si
  char v3; // al
  int v4; // r8d
  int v5; // r9d
  CBaseInput *v6; // rcx
  char *v7; // rcx
  unsigned int v8; // edi
  char v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+48h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v11, "OnReadNotification", 0LL);
  if ( *((int *)this + 8) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    v3 = (*((__int64 (__fastcall **)(void **))*this + 6))(this);
    MaybeEnterLeaveCrit::MaybeEnterLeaveCrit((MaybeEnterLeaveCrit *)&v10, v3);
    InputTraceLogging::Win32k::OnReadNotification(this[6], *((_DWORD *)this + 10), v4, v5);
    (*((void (__fastcall **)(void **, void *, _QWORD, _QWORD, void *))*this + 7))(
      this,
      this[8],
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      this[6]);
    if ( CBaseInput::IsInputSuppressRequested(v6) )
      CBaseInput::OnInputSuppressed(this);
    else
      (*((void (__fastcall **)(void **, void *, _QWORD, _QWORD, void *))*this + 8))(
        this,
        this[8],
        *((unsigned int *)this + 6),
        *((unsigned int *)this + 10),
        this[6]);
    v7 = (char *)this[9];
    if ( this[8] != v7 )
    {
      if ( v7 != (char *)(this + 10) )
        GreDeleteFastMutex(v7);
      this[9] = this[8];
      *((_DWORD *)this + 14) = *((_DWORD *)this + 10);
    }
    if ( v10 )
      UserSessionSwitchLeaveCritWithNonPaged();
  }
  v8 = CBaseInput::Read((CBaseInput *)this);
  if ( v2 )
    (*((void (__fastcall **)(void **))*this + 9))(this);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v11);
  return v8;
}
