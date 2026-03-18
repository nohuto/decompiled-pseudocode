/*
 * XREFs of Interrupter_FilterMessageDescriptors @ 0x140074008
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x14007C320 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_FilterMessageDescriptors(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v7; // r14
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned int i; // ebp
  __int128 *v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int128 v14; // xmm1
  __int64 v15; // [rsp+28h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-88h]
  __int128 v17; // [rsp+48h] [rbp-70h] BYREF
  __int128 v18; // [rsp+58h] [rbp-60h]

  v17 = 0LL;
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 2328))(WdfDriverGlobals);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2384))(WdfDriverGlobals, v7);
  v9 = 0;
  for ( i = result; v9 < i; ++v9 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2392))(
               WdfDriverGlobals,
               v7,
               v9);
    v11 = (__int128 *)result;
    if ( *(_BYTE *)(result + 1) == 2 && (*(_BYTE *)(result + 4) & 3) == 3 )
    {
      if ( a4 )
      {
        v12 = *(_DWORD *)(result + 12) - *(_DWORD *)(result + 8) + 1;
        if ( a4 < v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v9;
            LODWORD(v15) = a3;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              4u,
              9u,
              0x4Cu,
              (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
              v15,
              v16);
          }
          _BitScanReverse(&v13, 2 * a4 - 1);
          v17 = *v11;
          v14 = v11[1];
          DWORD2(v17) = ~(1 << v13);
          v18 = v14;
          HIDWORD(v17) = -2;
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, _QWORD))(WdfFunctions_01033
                                                                                               + 2376))(
                     WdfDriverGlobals,
                     v7,
                     &v17,
                     v9);
          a4 = 0;
        }
        else
        {
          a4 -= v12;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v16) = v9;
          LODWORD(v15) = a3;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x4Bu,
            (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
            v15,
            v16);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2400))(
          WdfDriverGlobals,
          v7,
          v9);
        result = 0xFFFFFFFFLL;
        --v9;
        --i;
      }
    }
  }
  return result;
}
