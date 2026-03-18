/*
 * XREFs of UserSetScaleFactorsFromRemoteMetric @ 0x140149044
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserSetScaleFactorsFromRemoteMetric(__int64 a1)
{
  __int64 result; // rax

  if ( (_DWORD)a1 )
  {
    result = W32GetUserSessionState(a1);
    *(_DWORD *)(*(_QWORD *)(result + 19928) + 2236LL) |= 0x40u;
  }
  else
  {
    result = W32GetUserSessionState(a1);
    *(_DWORD *)(*(_QWORD *)(result + 19928) + 2236LL) &= ~0x40u;
  }
  return result;
}
