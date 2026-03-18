/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031560
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x140033134 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase4(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  int v3; // edi
  int v4; // esi
  char v6; // r8
  const char *v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 *v12; // rbx
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h] BYREF
  __int128 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+70h] [rbp-28h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = byte_1400753E8;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v6 = 0;
  v7 = byte_1400753E8;
  if ( v1 )
  {
    v11 = v1[1];
    v6 = (char)v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = (__int64)v7;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      87,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      v6,
      (__int64)v2,
      v17);
  }
  *(_DWORD *)(a1 + 212) = 7;
  v20 = 0LL;
  v18 = 0LL;
  WORD1(v18) = 1;
  v19 = 0LL;
  v8 = (__int64 *)AMLIGetParent(v1[95]);
  v9 = AMLIGetNamedChild(v8, 1598640991);
  AMLIDereferenceHandleEx((__int64)v8);
  if ( !v9 )
    goto LABEL_5;
  v12 = AMLIGetNamedChild(v9, 1414746975);
  AMLIDereferenceHandleEx((__int64)v9);
  if ( !v12 )
    goto LABEL_5;
  v13 = v3 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 && (v15 = v14 - 1) != 0 && (v16 = v15 - 1) != 0 )
      *(_QWORD *)&v19 = v16 == 1 ? 4LL : 0LL;
    else
      *(_QWORD *)&v19 = 3LL;
  }
  else
  {
    *(_QWORD *)&v19 = 1LL;
  }
  v4 = AMLIAsyncEvalObject(v12, 0LL, 1, (__int64)&v18, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((__int64)v12);
  result = 259LL;
  if ( v4 != 259 )
  {
LABEL_5:
    ACPIDeviceCompleteGenericPhase(0LL, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
