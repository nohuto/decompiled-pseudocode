/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x140058A34
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x140063C74 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(__int64 *a1, _QWORD *a2)
{
  __int64 Pool2; // r8
  __int64 v6; // r8
  int v7; // r9d
  unsigned __int8 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  Pool2 = ExAllocatePool2(64LL, 144LL, 1148216129LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 4LL;
    *(_QWORD *)(Pool2 + 32) = a1;
    AMLIReferenceHandleEx((__int64)a1);
    *(_BYTE *)(v6 + 40) = v8[1];
    *(_DWORD *)(v6 + 64) = 3;
    v9 = *v8;
    if ( (unsigned __int8)v9 < 6u )
      v7 = SystemPowerStateTranslation[v9];
    *(_DWORD *)(v6 + 44) = v7;
    *(_QWORD *)(v6 + 56) = v6 + 48;
    *(_QWORD *)(v6 + 48) = v6 + 48;
    *(_QWORD *)(v6 + 128) = v6 + 120;
    *(_QWORD *)(v6 + 120) = v6 + 120;
    *(_QWORD *)(v6 + 112) = v6 + 104;
    *(_QWORD *)(v6 + 104) = v6 + 104;
    v10 = *a1;
    *a2 = v6;
    *(_QWORD *)(v10 + 104) = v6;
    return 259LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x19u,
        (__int64)&WPP_a066bce47e7f3a3d1099cda73e5d7dd3_Traceguids,
        144);
    return 3221225626LL;
  }
}
