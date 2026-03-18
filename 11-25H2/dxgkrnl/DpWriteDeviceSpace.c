/*
 * XREFs of DpWriteDeviceSpace @ 0x14004F270
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpWriteDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 (__fastcall *v10)(_QWORD, __int64, void *); // r11
  ULONG v11; // eax
  __int64 (__fastcall *v13)(_QWORD, void *, _QWORD, _QWORD); // rax

  v6 = 0;
  if ( !a1 || !a3 || !a6 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 3204;
    return v6;
  }
  *a6 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_13;
  if ( *(_DWORD *)(v8 + 16) != 1953656900 )
    goto LABEL_13;
  v9 = *(_DWORD *)(v8 + 20);
  if ( (unsigned int)(v9 - 2) > 1 )
    goto LABEL_13;
  switch ( (_DWORD)a2 )
  {
    case 0:
    case 0x52696350:
      v10 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(v8 + 608);
      if ( !v10 )
      {
        v6 = -1073741823;
        WdLogSingleEntry1(2LL, -1073741823LL);
        WdLogGlobalForLineNumber = 3302;
        return v6;
      }
      v11 = v10(*(_QWORD *)(v8 + 568), a2, a3);
      break;
    case 0x80000000:
      v11 = HalSetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
      break;
    case 0x80000001:
      if ( v9 != 2 )
      {
        v6 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 3247;
        return v6;
      }
      if ( (*(_DWORD *)(v8 + 4124) & 4) == 0 )
      {
        v6 = -1071774661;
        WdLogSingleEntry1(2LL, -1071774661LL);
        WdLogGlobalForLineNumber = 3258;
        return v6;
      }
      v13 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v8 + 3080);
      if ( !v13 )
      {
        v6 = -1073741823;
        WdLogSingleEntry1(3LL, -1073741823LL);
        WdLogGlobalForLineNumber = 3268;
        return v6;
      }
      v11 = v13(*(_QWORD *)(v8 + 3048), a3, Offset, Length);
      break;
    default:
LABEL_13:
      v6 = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 3227;
      return v6;
  }
  *a6 = v11;
  WdLogSingleEntry1(4LL, v11);
  WdLogGlobalForLineNumber = 3315;
  return v6;
}
