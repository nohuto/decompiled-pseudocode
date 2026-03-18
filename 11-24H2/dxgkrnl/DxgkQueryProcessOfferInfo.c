/*
 * XREFs of DxgkQueryProcessOfferInfo @ 0x1402989F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x140038420 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x140296CF8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x140296D14 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x140298BC0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkQueryProcessOfferInfo(ULONG64 a1)
{
  _DWORD *v2; // rax
  size_t v3; // r8
  const void *v5; // rdx
  int v6; // edi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  void *v9[2]; // [rsp+28h] [rbp-90h] BYREF
  __int128 v10; // [rsp+38h] [rbp-80h]
  _BYTE v11[80]; // [rsp+50h] [rbp-68h] BYREF

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  v2 = (_DWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (_DWORD *)MmUserProbeAddress;
  v3 = (unsigned int)*v2;
  if ( *v2 >= 0x20u )
  {
    if ( *v2 > 0x20u )
      v3 = 32LL;
    v5 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v9, v5, v3);
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v11, v9[1], 4096);
    v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v11, 0);
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v9[1]);
      WdLogGlobalForLineNumber = 846;
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v11);
      return (unsigned int)v6;
    }
    else
    {
      v10 = *((_OWORD *)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v11) + 27);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v11);
      v7 = (_QWORD *)(a1 + 16);
      if ( a1 + 16 >= MmUserProbeAddress )
        v7 = (_QWORD *)MmUserProbeAddress;
      *v7 = v10;
      v8 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v8 = (_QWORD *)MmUserProbeAddress;
      *v8 = *((_QWORD *)&v10 + 1);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 812;
    return 3221225485LL;
  }
}
