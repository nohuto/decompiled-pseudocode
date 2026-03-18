/*
 * XREFs of Interrupter_CmResList_GetInterrupterCountAndType @ 0x14007B7F4
 * Callers:
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Interrupter_CmResList_GetInterrupterCountAndType(__int64 a1, __int64 a2, _DWORD *a3, int *a4)
{
  int v4; // ebx
  int v5; // edi
  unsigned int i; // r14d
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]

  v4 = 0;
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2432))(WdfDriverGlobals, a2);
    if ( i >= (unsigned int)result )
      break;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2440))(
            WdfDriverGlobals,
            a2,
            i);
    v11 = v10;
    if ( *(_BYTE *)v10 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = *(unsigned __int16 *)(v10 + 2);
        LODWORD(v12) = i;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          9u,
          0x40u,
          (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
          v12,
          v13);
      }
      if ( *(_BYTE *)v11 == 2 && (*(_BYTE *)(v11 + 2) & 3) == 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = *(_DWORD *)(v11 + 8);
          LODWORD(v12) = *(unsigned __int16 *)(v11 + 6);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            9u,
            0x41u,
            (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
            v12,
            v13);
        }
        v5 = (v4 != 0) + 1;
        v4 += *(unsigned __int16 *)(v11 + 6);
      }
      else
      {
        ++v4;
      }
    }
  }
  *a3 = v4;
  *a4 = v5;
  return result;
}
