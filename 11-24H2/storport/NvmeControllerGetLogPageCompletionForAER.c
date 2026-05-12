/*
 * XREFs of NvmeControllerGetLogPageCompletionForAER @ 0x1400EE2B0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     NvmeControllerStartReenumeration @ 0x1400BF540 (NvmeControllerStartReenumeration.c)
 *     NvmeControllerReConfigAsyncEvent @ 0x1400C9230 (NvmeControllerReConfigAsyncEvent.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400DE078 (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeControllerGetAERExtendedCommand @ 0x1400EDE38 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerProcessHealthInfoLogForAen @ 0x1400F3098 (NvmeControllerProcessHealthInfoLogForAen.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400F4F3C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

void __fastcall NvmeControllerGetLogPageCompletionForAER(__int64 Context, __int64 *a2, unsigned int *a3)
{
  char v5; // r12
  char v6; // r13
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // esi
  __int64 v16; // rdx
  int v17; // r14d
  bool v18; // zf
  int v19; // ecx
  unsigned int v20; // edx
  bool v21; // zf
  const wchar_t *v22; // r9
  wchar_t *v23; // rax
  _BYTE *v24; // rax
  _DWORD *v25; // rdx
  unsigned __int8 *v26; // rax
  unsigned int v27; // ecx
  const char *v28; // rdi
  __int64 v29; // r8
  __int16 v30; // cx
  __int64 v31; // r9
  __int64 AERExtendedCommand; // rax
  unsigned int v33; // [rsp+28h] [rbp-110h]
  wchar_t *v34; // [rsp+30h] [rbp-108h]
  int v35; // [rsp+38h] [rbp-100h]
  wchar_t *v36; // [rsp+40h] [rbp-F8h]
  __int64 v37; // [rsp+48h] [rbp-F0h]
  wchar_t *v38; // [rsp+50h] [rbp-E8h]
  char v39; // [rsp+58h] [rbp-E0h]
  int v40; // [rsp+C8h] [rbp-70h]
  int v41; // [rsp+D8h] [rbp-60h]
  int v42; // [rsp+E8h] [rbp-50h]

  if ( !a2 )
    return;
  v5 = 0;
  v6 = 0;
  if ( !a3 )
    return;
  *(_WORD *)(*a2 + 4260) = *((_WORD *)a3 + 7);
  v7 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((v7 >> 9) & 7) == 0 )
  {
    v20 = v7 >> 1;
    if ( (unsigned __int8)v20 > 0x80u )
    {
      if ( (unsigned __int8)v20 == 129 )
        goto LABEL_27;
      v14 = (unsigned __int8)v20 - 130;
      if ( (unsigned __int8)v20 == 130 )
      {
        v15 = -1073741661;
        goto LABEL_28;
      }
      goto LABEL_90;
    }
    if ( (unsigned __int8)v20 == 128 )
      goto LABEL_27;
    if ( (unsigned __int8)v20 > 0xEu )
    {
      if ( (unsigned __int8)v20 <= 0x16u )
      {
        if ( (unsigned __int8)v20 == 22
          || (unsigned __int8)v20 == 15
          || (unsigned __int8)v20 == 16
          || (unsigned __int8)v20 == 17
          || (unsigned __int8)v20 == 18
          || (unsigned __int8)v20 == 19 )
        {
          goto LABEL_27;
        }
        v9 = (unsigned __int8)v20 - 20;
        if ( (unsigned __int8)v20 != 20 )
        {
LABEL_101:
          if ( v9 == 1 )
            goto LABEL_102;
LABEL_110:
          v15 = -1073741435;
          goto LABEL_28;
        }
LABEL_62:
        v15 = -1073741436;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v20 == 24 )
        goto LABEL_27;
      if ( (unsigned __int8)v20 == 25 || (unsigned __int8)v20 == 26 )
      {
        v15 = -1073741643;
        goto LABEL_28;
      }
      if ( (unsigned __int8)v20 != 27 )
      {
        if ( (unsigned __int8)v20 == 28 )
          goto LABEL_110;
        v21 = (unsigned __int8)v20 == 30;
        goto LABEL_109;
      }
    }
    else
    {
      if ( (unsigned __int8)v20 == 14 )
        goto LABEL_27;
      if ( (unsigned __int8)v20 > 7u )
      {
        if ( (unsigned __int8)v20 != 8 && (unsigned __int8)v20 != 9 && (unsigned __int8)v20 != 10 )
        {
          if ( (unsigned __int8)v20 == 11 )
            goto LABEL_27;
          v14 = (unsigned __int8)v20 - 12;
          if ( (unsigned __int8)v20 == 12 )
          {
            v15 = -1073740758;
            goto LABEL_28;
          }
          goto LABEL_90;
        }
      }
      else if ( (unsigned __int8)v20 != 7 )
      {
        if ( !(_BYTE)v20 )
        {
          v15 = 0;
          goto LABEL_28;
        }
        if ( (unsigned __int8)v20 == 1 || (unsigned __int8)v20 == 2 )
          goto LABEL_27;
        if ( (unsigned __int8)v20 == 3 || (unsigned __int8)v20 == 4 )
          goto LABEL_110;
        v19 = (unsigned __int8)v20 - 5;
        v18 = (unsigned __int8)v20 == 5;
LABEL_60:
        if ( !v18 && v19 != 1 )
          goto LABEL_110;
        goto LABEL_62;
      }
    }
    v15 = -1073741248;
    goto LABEL_28;
  }
  if ( ((v7 >> 9) & 7) != 1 )
  {
    if ( ((v7 >> 9) & 7) != 2 )
      goto LABEL_110;
    v8 = v7 >> 1;
    switch ( (unsigned __int8)v8 )
    {
      case 0x80u:
        goto LABEL_110;
      case 0x81u:
        goto LABEL_110;
      case 0x82u:
        goto LABEL_110;
      case 0x83u:
        goto LABEL_110;
      case 0x84u:
        goto LABEL_110;
    }
    v9 = (unsigned __int8)v8 - 133;
    if ( (unsigned __int8)v8 == 133 )
      goto LABEL_110;
    goto LABEL_101;
  }
  v10 = v7 >> 1;
  if ( (unsigned __int8)v10 > 0x80u )
  {
    if ( (unsigned __int8)v10 == 129 )
      goto LABEL_27;
    v14 = (unsigned __int8)v10 - 130;
    if ( (unsigned __int8)v10 == 130 )
      goto LABEL_102;
LABEL_90:
    v21 = v14 == 1;
LABEL_109:
    if ( !v21 )
      goto LABEL_110;
    goto LABEL_27;
  }
  if ( (unsigned __int8)v10 == 128 )
    goto LABEL_27;
  if ( (unsigned __int8)v10 > 0x11u )
  {
    if ( (unsigned __int8)v10 <= 0x1Au )
    {
      switch ( (unsigned __int8)v10 )
      {
        case 0x1Au:
        case 0x12u:
        case 0x13u:
          goto LABEL_62;
        case 0x14u:
          v15 = -1073741800;
          goto LABEL_28;
        case 0x15u:
          goto LABEL_110;
        case 0x16u:
          goto LABEL_62;
      }
      v19 = (unsigned __int8)v10 - 24;
      v18 = (unsigned __int8)v10 == 24;
      goto LABEL_60;
    }
    if ( (unsigned __int8)v10 == 27 )
    {
      v15 = -1073741637;
      goto LABEL_28;
    }
    if ( (unsigned __int8)v10 == 28 )
      goto LABEL_27;
    if ( (unsigned __int8)v10 != 30 )
    {
      v12 = (unsigned __int8)v10 - 31;
      v11 = (unsigned __int8)v10 == 31;
      goto LABEL_24;
    }
LABEL_102:
    v15 = -1073741790;
    goto LABEL_28;
  }
  if ( (unsigned __int8)v10 == 17 )
    goto LABEL_51;
  if ( (unsigned __int8)v10 <= 9u )
  {
    if ( (unsigned __int8)v10 == 9
      || !(_BYTE)v10
      || (unsigned __int8)v10 == 1
      || (unsigned __int8)v10 == 2
      || (unsigned __int8)v10 == 3 )
    {
      goto LABEL_27;
    }
    v12 = (unsigned __int8)v10 - 5;
    v11 = (unsigned __int8)v10 == 5;
LABEL_24:
    if ( v11 )
      goto LABEL_27;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_27;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_27;
    goto LABEL_90;
  }
  if ( (unsigned __int8)v10 != 10 )
  {
    if ( (unsigned __int8)v10 != 11 )
    {
      if ( (unsigned __int8)v10 == 12
        || (unsigned __int8)v10 == 13
        || (unsigned __int8)v10 == 14
        || (unsigned __int8)v10 == 15 )
      {
        goto LABEL_27;
      }
      if ( (unsigned __int8)v10 != 16 )
        goto LABEL_110;
    }
LABEL_51:
    v15 = -2147483210;
    goto LABEL_28;
  }
LABEL_27:
  v15 = -1073741808;
LABEL_28:
  if ( (*(_QWORD *)(Context + 968) & 1) == 0
    || (*(_QWORD *)(Context + 968) & 2) != 0
    || (*(_QWORD *)(Context + 968) & 4) != 0
    || (*(_QWORD *)(Context + 968) & 8) != 0
    || (*(_QWORD *)(Context + 968) & 0x10) != 0
    || *(_QWORD *)(Context + 1288) && **(_DWORD **)(Context + 1288) )
  {
    goto LABEL_134;
  }
  v16 = *a2;
  v6 = 1;
  v17 = *(unsigned __int8 *)(*a2 + 4136);
  if ( v15 < 0 )
  {
    if ( (byte_14017146A & 1) != 0 )
    {
      v28 = (const char *)&word_140150F48;
      v29 = *a3;
      if ( *(_QWORD *)(Context + 752) )
        v28 = *(const char **)(Context + 752);
      McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
        0LL,
        v16,
        v29,
        *(_DWORD *)(*(_QWORD *)(Context + 128) + 56LL),
        *(_QWORD *)(Context + 128) + 1032LL,
        *(const wchar_t **)(*(_QWORD *)(Context + 128) + 1016LL),
        *(const char **)(Context + 792),
        *(_WORD *)(Context + 4),
        0,
        *(_BYTE *)(Context + 744),
        v28,
        (const char *)(Context + 800),
        (const char *)(Context + 841),
        "Get log page for AER",
        "DW0",
        v29,
        "LogPageId",
        v17,
        byte_140151064,
        0,
        byte_140151064,
        0,
        byte_140151064,
        0,
        byte_140151064,
        v40,
        byte_140151064,
        v41,
        byte_140151064,
        v42,
        v15,
        0,
        (*(_WORD *)(v16 + 4260) >> 9) & 7,
        *(_WORD *)(v16 + 4260) >> 1);
    }
    if ( (_BYTE)v17 != 4 )
      goto LABEL_134;
    v30 = *(_WORD *)(*a2 + 4260);
    if ( (v30 & 0xE00) != 0x200 || (v30 & 0x1FE) != 0x12 )
      goto LABEL_134;
    v25 = 0LL;
    goto LABEL_133;
  }
  switch ( v17 )
  {
    case 2:
      v5 = NvmeControllerProcessHealthInfoLogForAen(Context, *(_QWORD *)(v16 + 4160));
      goto LABEL_134;
    case 3:
      v26 = *(unsigned __int8 **)(v16 + 4160);
      if ( !v26 )
        goto LABEL_134;
      v27 = *v26;
      v22 = L"Firmware Activation Starting Async Event";
      v39 = 0;
      v38 = (wchar_t *)&word_140150F48;
      LOBYTE(v37) = 0;
      v36 = (wchar_t *)&word_140150F48;
      v35 = (v27 >> 4) & 7;
      v34 = L"Pending Activate Slot";
      v23 = L"Active Slot";
      LOBYTE(v33) = v27 & 7;
      goto LABEL_118;
    case 4:
      v25 = *(_DWORD **)(v16 + 4160);
LABEL_133:
      NvmeControllerStartReenumeration((char *)Context, v25);
      goto LABEL_134;
    case 8:
      v24 = *(_BYTE **)(v16 + 4160);
      if ( !v24 )
        goto LABEL_134;
      v22 = L"Telemetry Controller Initiated Async Event";
      v39 = 0;
      v38 = (wchar_t *)&word_140150F48;
      LOBYTE(v37) = 0;
      v36 = (wchar_t *)&word_140150F48;
      LOBYTE(v35) = 0;
      v34 = (wchar_t *)&word_140150F48;
      LOBYTE(v33) = *v24;
      v23 = L"LogPageIdentifier";
      goto LABEL_118;
  }
  if ( v17 != 128 )
  {
    if ( v17 == 129 )
    {
      a3 = *(unsigned int **)(v16 + 4160);
      if ( a3 )
        StorEtwNvmeControllerEvent(
          Context,
          1,
          4,
          (__int64)L"Sanitize Async Event",
          L"Sanitize Status",
          *((_WORD *)a3 + 1) & 7,
          L"Sanitize Progress",
          *(_WORD *)a3,
          L"Sanitize Command CDW10",
          a3[1],
          L"Global Data Erased",
          (*((_WORD *)a3 + 1) & 0x80LL) != 0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
    }
    goto LABEL_134;
  }
  a3 = *(unsigned int **)(v16 + 4160);
  if ( a3 && *((_BYTE *)a3 + 8) )
  {
    v22 = L"Reservation Notification Async Event";
    v39 = *((_BYTE *)a3 + 9);
    v38 = L"Available Log Page Count";
    v37 = *(_QWORD *)a3;
    v36 = L"Log Page Count";
    LOBYTE(v35) = *((_BYTE *)a3 + 8);
    v34 = L"LogPageType";
    v23 = L"NamespaceID";
    v33 = a3[3];
LABEL_118:
    StorEtwNvmeControllerEvent(
      Context,
      1,
      4,
      (__int64)v22,
      v23,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  }
LABEL_134:
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  v31 = *(_QWORD *)(*a2 + 4160);
  if ( v31 )
    NvmeFreeDmaBuffer(Context, *(_DWORD *)(*a2 + 4248), (_DWORD)a3, v31, *(_QWORD *)(*a2 + 4168));
  NvmeControllerReclaimExtendedCommand(Context, a2);
  if ( v5 )
  {
    NvmeControllerReConfigAsyncEvent(Context);
  }
  else if ( v6 )
  {
    AERExtendedCommand = NvmeControllerGetAERExtendedCommand(Context);
    if ( (int)NvmeControllerSendAsyncEventCommand(Context, AERExtendedCommand) < 0 )
      *(_QWORD *)(Context + 136) |= 0x40000000uLL;
  }
}
