/*
 * XREFs of DpiFdoAddPdoToPdoList @ 0x14023CC84
 * Callers:
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

char __fastcall DpiFdoAddPdoToPdoList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  NTSTATUS v5; // eax
  __int64 InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v2 = a1 + 3784;
  v3 = *(_QWORD **)(a1 + 3792);
  if ( *v3 != a1 + 3784 )
    __fastfail(3u);
  *(_QWORD *)a2 = v2;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 3792) = a2;
  ++*(_DWORD *)(a1 + 3800);
  if ( *(_DWORD *)(a2 + 496) == 1 )
  {
    ++*(_DWORD *)(a1 + 3804);
    LOBYTE(v2) = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(a2 + 936) + 4LL));
    if ( !(_BYTE)v2 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( !dword_1401613D8++ )
      {
        v8 = 1;
        InputBuffer = 23LL;
        v5 = ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
        if ( v5 < 0 )
        {
          WdLogSingleEntry1(2LL, v5);
          WdLogGlobalForLineNumber = 403;
        }
      }
      LOBYTE(v2) = KeReleaseMutex(&Object, 0);
    }
  }
  return v2;
}
