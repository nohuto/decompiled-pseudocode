/*
 * XREFs of ?ReportMuxGpuChild@DISPLAY_MUX_PAIRING@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x1400871C8
 * Callers:
 *     ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x140087068 (-ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GP.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ @ 0x140082EB4 (-CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ.c)
 *     ?DoesGpuChildMatchMuxTargets@DISPLAY_MUX_DEVICE@@QEAA?AW4MUX_GPU_CHILD@@PEBU_UNICODE_STRING@@@Z @ 0x140083C34 (-DoesGpuChildMatchMuxTargets@DISPLAY_MUX_DEVICE@@QEAA-AW4MUX_GPU_CHILD@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x140084D24 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x140087720 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::ReportMuxGpuChild(__int64 a1, _OWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  int DoesGpuChildMatchMuxTargets; // eax
  __int64 v11; // r9
  void **v12; // rbx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  __int64 v15; // rax
  void *v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  int v21; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF

  if ( !DISPLAY_MUX_PAIRING::IsOperational((DISPLAY_MUX_PAIRING *)a1) )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225534LL;
    WdLogGlobalForLineNumber = 1921;
    return result;
  }
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(v6 + 224));
  v8 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v8 < 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 13LL;
    WdLogGlobalForLineNumber = 1933;
LABEL_24:
    DISPLAY_MUX_PAIRING::SetPairingStatus(a1, v9);
    goto LABEL_25;
  }
  DoesGpuChildMatchMuxTargets = DISPLAY_MUX_DEVICE::DoesGpuChildMatchMuxTargets(
                                  *(const UNICODE_STRING **)(a1 + 8),
                                  &UnicodeString);
  if ( DoesGpuChildMatchMuxTargets == 1 )
  {
    v12 = (void **)(a1 + 16);
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_12;
    WdLogSingleEntry0(1LL);
    v13 = 1943LL;
    v14 = L"!m_pGpuChild1";
    goto LABEL_11;
  }
  if ( DoesGpuChildMatchMuxTargets != 2 )
  {
    v8 = -1073741823;
    v9 = 7LL;
    goto LABEL_24;
  }
  v12 = (void **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    WdLogSingleEntry0(1LL);
    v13 = 1951LL;
    v14 = L"!m_pGpuChild2";
LABEL_11:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_12:
  v15 = operator new(0x16CuLL, 0x4B677844u, 256LL, v11);
  if ( v15 )
    *(_BYTE *)(v15 + 360) = 0;
  v16 = *v12;
  *v12 = (void *)v15;
  if ( v16 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v16);
  v17 = *v12;
  if ( !*v12 )
  {
    v8 = -1073741801;
    v9 = 10LL;
    goto LABEL_24;
  }
  v18 = 2LL;
  *v17 = a3;
  v19 = v17 + 1;
  do
  {
    *v19 = *a2;
    v19[1] = a2[1];
    v19[2] = a2[2];
    v19[3] = a2[3];
    v19[4] = a2[4];
    v19[5] = a2[5];
    v19[6] = a2[6];
    v19 += 8;
    v20 = a2[7];
    a2 += 8;
    *(v19 - 1) = v20;
    --v18;
  }
  while ( v18 );
  *v19 = *a2;
  v19[1] = a2[1];
  v19[2] = a2[2];
  v19[3] = a2[3];
  v19[4] = a2[4];
  v19[5] = a2[5];
  *((_DWORD *)v19 + 24) = *((_DWORD *)a2 + 24);
  v21 = DISPLAY_MUX_PAIRING::CheckForNewMuxPairing((DISPLAY_MUX_PAIRING *)a1);
  v8 = v21;
  if ( v21 >= 0 )
  {
    RtlFreeUnicodeString(&UnicodeString);
    return 0LL;
  }
  WdLogSingleEntry1(2LL, v21);
  WdLogGlobalForLineNumber = 1985;
LABEL_25:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
