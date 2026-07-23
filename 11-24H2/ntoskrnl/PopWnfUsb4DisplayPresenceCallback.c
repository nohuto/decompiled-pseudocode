/*
 * XREFs of PopWnfUsb4DisplayPresenceCallback @ 0x1407585D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDiagTraceExternalDisplayState @ 0x1407546A0 (PopDiagTraceExternalDisplayState.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopWnfUsb4DisplayPresenceCallback(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  int v4; // esi
  char v5; // di
  int v6; // r12d
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  __int64 v23; // [rsp+20h] [rbp-E0h]
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  int *v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+9Ch] [rbp-64h]
  unsigned int *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  int *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  char *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  int *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  int *v52; // [rsp+E0h] [rbp-20h]
  int v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+ECh] [rbp-14h]
  int *v55; // [rsp+F0h] [rbp-10h]
  int v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+FCh] [rbp-4h]
  __int64 *v58; // [rsp+100h] [rbp+0h]
  int v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+10Ch] [rbp+Ch]

  v25 = 0;
  v4 = 0;
  v5 = 0;
  v27 = a4;
  v6 = 0;
  v7 = 0;
  if ( !a2 || *a2 != WNF_USB_USB4_DISPLAY_PRESENCE )
  {
    v4 = 1;
    goto LABEL_16;
  }
  v26 = 4;
  v8 = ExQueryWnfStateData(a1, &v27, &v25, &v26);
  v7 = v26;
  v11 = v8;
  if ( v8 < 0 )
  {
    v4 = 2;
    goto LABEL_17;
  }
  if ( v26 < 4 )
  {
    v4 = 3;
LABEL_16:
    v11 = 0;
    goto LABEL_17;
  }
  if ( (_BYTE)v25 != 1 )
  {
    v6 = (unsigned __int8)v25;
    v4 = 4;
    goto LABEL_16;
  }
  PopAcquirePolicyLock(v10, v9);
  v5 = BYTE1(v25) != 0;
  if ( PopUsb4DisplayPresent == (BYTE1(v25) != 0) )
  {
    PopReleasePolicyLock(v13, v12, v14, v15, v23);
  }
  else
  {
    v16 = PopConsoleExternalDisplayConnected;
    PopUsb4DisplayPresent = BYTE1(v25) != 0;
    PopQueueWorkItem((__int64)&PopUsb4DisplayPresenceUpdatedWorkItem, DelayedWorkQueue);
    PopReleasePolicyLock(v18, v17, v19, v20, v23);
    v21 = 2;
    if ( v5 && v16 )
      v21 = 3;
    PopDiagTraceExternalDisplayState(v5, v21);
  }
LABEL_17:
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v54 = 0;
    v57 = 0;
    v60 = 0;
    v34 = &v26;
    v37 = &v25;
    v40 = &v28;
    v43 = &v29;
    v46 = &v24;
    v49 = &v30;
    v52 = &v31;
    v55 = &v27;
    v58 = &v32;
    v26 = v11;
    v35 = 4;
    v25 = v4;
    v38 = 4;
    v28 = v7;
    v41 = 4;
    v29 = 4;
    v44 = 4;
    v24 = v5;
    v47 = 1;
    v30 = v6;
    v50 = 4;
    v31 = 1;
    v53 = 4;
    v56 = 4;
    v32 = 0x1000000LL;
    v59 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E07680,
      (unsigned __int8 *)&byte_14004BD6F,
      0LL,
      0LL,
      0xBu,
      &v33);
  }
  return v11;
}
