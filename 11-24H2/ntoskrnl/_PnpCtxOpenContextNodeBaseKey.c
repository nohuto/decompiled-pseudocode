/*
 * XREFs of _PnpCtxOpenContextNodeBaseKey @ 0x140817D34
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x14094C14C (PiDevCfgEnumDeviceKeys.c)
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextNodeBaseKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7)
{
  int v7; // edi
  __int64 v8; // rdx
  int CachedNodeBaseKey; // ebx
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v7 = PiPnpRtlCtx;
  v12 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
  if ( v8 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
  {
    return (unsigned int)-1073741772;
  }
  else
  {
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(*(_QWORD *)&PiPnpRtlCtx, v8 - 16, a4, &v12);
    if ( CachedNodeBaseKey >= 0 )
    {
      v10 = PnpCtxRegOpenKey(v7, v12, (unsigned int)&word_140AEDAC0, 0, 983103, a7);
      if ( v10 == -1073741444 )
      {
        return (unsigned int)-1073741595;
      }
      else if ( v10 < 0 )
      {
        return (unsigned int)v10;
      }
    }
  }
  return (unsigned int)CachedNodeBaseKey;
}
