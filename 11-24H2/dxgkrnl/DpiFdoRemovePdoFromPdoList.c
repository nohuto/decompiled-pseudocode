/*
 * XREFs of DpiFdoRemovePdoFromPdoList @ 0x140245288
 * Callers:
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 *     DpiPdoRemovePdo @ 0x14042BBC4 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

char __fastcall DpiFdoRemovePdoFromPdoList(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 **v3; // rax
  char result; // al
  NTSTATUS v5; // eax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v2 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 || (v3 = (__int64 **)a2[1], *v3 != a2) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = (__int64)v3;
  result = -1;
  --*(_DWORD *)(a1 + 3800);
  if ( *((_DWORD *)a2 + 124) == 1 )
  {
    --*(_DWORD *)(a1 + 3804);
    result = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2[117] + 4));
    if ( !result )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( !--dword_1401613D8 )
      {
        v7 = 0;
        InputBuffer = 23LL;
        v5 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
        if ( v5 < 0 )
        {
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 1783;
        }
      }
      return KeReleaseMutex(&Object, 0);
    }
  }
  return result;
}
