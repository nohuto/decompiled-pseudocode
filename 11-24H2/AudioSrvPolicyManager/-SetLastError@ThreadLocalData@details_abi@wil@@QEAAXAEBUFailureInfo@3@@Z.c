/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180019524
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18001FA30 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180024674 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800256F0 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2,
        unsigned __int64 a3)
{
  int v3; // edi
  _WORD *v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // r8
  _DWORD *i; // rcx
  unsigned __int16 v10; // dx

  v3 = *((_DWORD *)this + 4);
  if ( !*((_QWORD *)this + 3) )
  {
    if ( v3 )
    {
      v6 = wil::details::ProcessHeapAlloc(8u, 0x190uLL, a3);
      *((_QWORD *)this + 3) = v6;
      if ( v6 )
      {
        *((_DWORD *)this + 8) = 5;
        v7 = v6 + 200;
        while ( v6 != v7 )
        {
          *v6 = 80;
          v6 += 40;
        }
      }
    }
  }
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    if ( v3 )
    {
      for ( i = (_DWORD *)(v8 + 8); i - 2 != (_DWORD *)(v8 + 80LL * *((unsigned __int16 *)this + 16)); i += 20 )
      {
        if ( *(i - 1) > *((_DWORD *)this + 4) && *i == *((_DWORD *)a2 + 2) )
          return;
      }
    }
    v10 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
    *((_WORD *)this + 17) = v10;
    wil::details_abi::ThreadLocalFailureInfo::Set(
      (wil::details_abi::ThreadLocalFailureInfo *)(v8 + 80LL * v10),
      a2,
      _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
  }
}
