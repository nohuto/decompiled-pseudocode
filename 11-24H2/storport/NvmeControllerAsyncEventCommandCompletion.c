/*
 * XREFs of NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer @ 0x1400DE078 (McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeControllerAsyncReset @ 0x1400EB588 (NvmeControllerAsyncReset.c)
 *     NvmeControllerGetAERExtendedCommand @ 0x1400EDE38 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerReclaimAERExtendedCommand @ 0x1400F3A0C (NvmeControllerReclaimAERExtendedCommand.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400F4F3C (NvmeControllerSendAsyncEventCommand.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x140138030 (NvmeAdapterProcessStorageEventNotification.c)
 */

__int64 *__fastcall NvmeControllerAsyncEventCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 *v7; // r15
  char v8; // bp
  unsigned int v9; // edi
  bool v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // ecx
  unsigned int v14; // edx
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // r11d
  __int64 v20; // rax
  bool v21; // zf
  int v22; // ecx
  unsigned int v23; // edx
  bool v24; // zf
  char v25; // cl
  __int64 v26; // rcx
  unsigned __int16 v27; // bp
  const char *v28; // r10
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 AERExtendedCommand; // rax
  int v32; // [rsp+C8h] [rbp-A0h]
  int v33; // [rsp+D8h] [rbp-90h]
  int v34; // [rsp+E8h] [rbp-80h]
  __int128 v35; // [rsp+110h] [rbp-58h]
  __int128 v36; // [rsp+120h] [rbp-48h] BYREF
  __int128 v37; // [rsp+130h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h] BYREF

  result = (__int64 *)&retaddr;
  v35 = 0uLL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v36 = 0LL;
  if ( !a2 )
    return result;
  if ( !a3 )
    return result;
  if ( *(_QWORD *)(a1 + 1288) )
  {
    result = *(__int64 **)(a1 + 1288);
    if ( *(_DWORD *)result )
      return result;
  }
  *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
  v11 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
  if ( ((v11 >> 9) & 7) == 0 )
  {
    v23 = v11 >> 1;
    if ( (unsigned __int8)v23 > 0x80u )
    {
      if ( (unsigned __int8)v23 == 129 )
        goto LABEL_29;
      v18 = (unsigned __int8)v23 - 130;
      if ( (unsigned __int8)v23 == 130 )
      {
        v19 = -1073741661;
        goto LABEL_30;
      }
      goto LABEL_92;
    }
    if ( (unsigned __int8)v23 == 128 )
      goto LABEL_29;
    if ( (unsigned __int8)v23 > 0xEu )
    {
      if ( (unsigned __int8)v23 <= 0x16u )
      {
        if ( (unsigned __int8)v23 == 22
          || (unsigned __int8)v23 == 15
          || (unsigned __int8)v23 == 16
          || (unsigned __int8)v23 == 17
          || (unsigned __int8)v23 == 18
          || (unsigned __int8)v23 == 19 )
        {
          goto LABEL_29;
        }
        v13 = (unsigned __int8)v23 - 20;
        if ( (unsigned __int8)v23 != 20 )
        {
LABEL_103:
          if ( v13 == 1 )
            goto LABEL_104;
LABEL_112:
          v19 = -1073741435;
          goto LABEL_30;
        }
LABEL_64:
        v19 = -1073741436;
        goto LABEL_30;
      }
      if ( (unsigned __int8)v23 == 24 )
        goto LABEL_29;
      if ( (unsigned __int8)v23 == 25 || (unsigned __int8)v23 == 26 )
      {
        v19 = -1073741643;
        goto LABEL_30;
      }
      if ( (unsigned __int8)v23 != 27 )
      {
        if ( (unsigned __int8)v23 == 28 )
          goto LABEL_112;
        v24 = (unsigned __int8)v23 == 30;
        goto LABEL_111;
      }
    }
    else
    {
      if ( (unsigned __int8)v23 == 14 )
        goto LABEL_29;
      if ( (unsigned __int8)v23 > 7u )
      {
        if ( (unsigned __int8)v23 != 8 && (unsigned __int8)v23 != 9 && (unsigned __int8)v23 != 10 )
        {
          if ( (unsigned __int8)v23 == 11 )
            goto LABEL_29;
          v18 = (unsigned __int8)v23 - 12;
          if ( (unsigned __int8)v23 == 12 )
          {
            v19 = -1073740758;
            goto LABEL_30;
          }
          goto LABEL_92;
        }
      }
      else if ( (unsigned __int8)v23 != 7 )
      {
        if ( !(_BYTE)v23 )
        {
          v19 = 0;
          goto LABEL_30;
        }
        if ( (unsigned __int8)v23 == 1 || (unsigned __int8)v23 == 2 )
          goto LABEL_29;
        if ( (unsigned __int8)v23 == 3 || (unsigned __int8)v23 == 4 )
          goto LABEL_112;
        v22 = (unsigned __int8)v23 - 5;
        v21 = (unsigned __int8)v23 == 5;
LABEL_62:
        if ( !v21 && v22 != 1 )
          goto LABEL_112;
        goto LABEL_64;
      }
    }
    v19 = -1073741248;
    goto LABEL_30;
  }
  if ( ((v11 >> 9) & 7) != 1 )
  {
    if ( ((v11 >> 9) & 7) != 2 )
      goto LABEL_112;
    v12 = v11 >> 1;
    switch ( (unsigned __int8)v12 )
    {
      case 0x80u:
        goto LABEL_112;
      case 0x81u:
        goto LABEL_112;
      case 0x82u:
        goto LABEL_112;
      case 0x83u:
        goto LABEL_112;
      case 0x84u:
        goto LABEL_112;
    }
    v13 = (unsigned __int8)v12 - 133;
    if ( (unsigned __int8)v12 == 133 )
      goto LABEL_112;
    goto LABEL_103;
  }
  v14 = v11 >> 1;
  if ( (unsigned __int8)v14 > 0x80u )
  {
    if ( (unsigned __int8)v14 == 129 )
      goto LABEL_29;
    v18 = (unsigned __int8)v14 - 130;
    if ( (unsigned __int8)v14 == 130 )
      goto LABEL_104;
LABEL_92:
    v24 = v18 == 1;
LABEL_111:
    if ( !v24 )
      goto LABEL_112;
    goto LABEL_29;
  }
  if ( (unsigned __int8)v14 == 128 )
    goto LABEL_29;
  if ( (unsigned __int8)v14 > 0x11u )
  {
    if ( (unsigned __int8)v14 <= 0x1Au )
    {
      switch ( (unsigned __int8)v14 )
      {
        case 0x1Au:
        case 0x12u:
        case 0x13u:
          goto LABEL_64;
        case 0x14u:
          v19 = -1073741800;
          goto LABEL_30;
        case 0x15u:
          goto LABEL_112;
        case 0x16u:
          goto LABEL_64;
      }
      v22 = (unsigned __int8)v14 - 24;
      v21 = (unsigned __int8)v14 == 24;
      goto LABEL_62;
    }
    if ( (unsigned __int8)v14 == 27 )
    {
      v19 = -1073741637;
      goto LABEL_30;
    }
    if ( (unsigned __int8)v14 == 28 )
      goto LABEL_29;
    if ( (unsigned __int8)v14 != 30 )
    {
      v16 = (unsigned __int8)v14 - 31;
      v15 = (unsigned __int8)v14 == 31;
      goto LABEL_26;
    }
LABEL_104:
    v19 = -1073741790;
    goto LABEL_30;
  }
  if ( (unsigned __int8)v14 == 17 )
    goto LABEL_53;
  if ( (unsigned __int8)v14 <= 9u )
  {
    if ( (unsigned __int8)v14 == 9
      || !(_BYTE)v14
      || (unsigned __int8)v14 == 1
      || (unsigned __int8)v14 == 2
      || (unsigned __int8)v14 == 3 )
    {
      goto LABEL_29;
    }
    v16 = (unsigned __int8)v14 - 5;
    v15 = (unsigned __int8)v14 == 5;
LABEL_26:
    if ( v15 )
      goto LABEL_29;
    v17 = v16 - 1;
    if ( !v17 )
      goto LABEL_29;
    v18 = v17 - 1;
    if ( !v18 )
      goto LABEL_29;
    goto LABEL_92;
  }
  if ( (unsigned __int8)v14 != 10 )
  {
    if ( (unsigned __int8)v14 != 11 )
    {
      if ( (unsigned __int8)v14 == 12
        || (unsigned __int8)v14 == 13
        || (unsigned __int8)v14 == 14
        || (unsigned __int8)v14 == 15 )
      {
        goto LABEL_29;
      }
      if ( (unsigned __int8)v14 != 16 )
        goto LABEL_112;
    }
LABEL_53:
    v19 = -2147483210;
    goto LABEL_30;
  }
LABEL_29:
  v19 = -1073741808;
LABEL_30:
  if ( (*(_QWORD *)(a1 + 968) & 1) != 0
    && (*(_QWORD *)(a1 + 968) & 2) == 0
    && (*(_QWORD *)(a1 + 968) & 4) == 0
    && (*(_QWORD *)(a1 + 968) & 8) == 0
    && (*(_QWORD *)(a1 + 968) & 0x10) == 0 )
  {
    v20 = *(_QWORD *)(a1 + 1416);
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 4));
    v10 = 1;
    if ( v19 < 0 )
    {
      v27 = *(_WORD *)(*(_QWORD *)a2 + 4260LL);
      if ( ((v27 >> 9) & 7) == 1 )
        v10 = (v27 & 0x1FE) != 10;
      if ( (byte_14017146A & 1) != 0 )
      {
        v28 = (const char *)&word_140150F48;
        if ( *(_QWORD *)(a1 + 752) )
          v28 = *(const char **)(a1 + 752);
        McTemplateK0qjzshhusssssxsxsxsxsxsxsxsxduuu_EtwWriteTransfer(
          a1 + 841,
          a1 + 800,
          *(_QWORD *)(a1 + 128) + 1032LL,
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 56LL),
          *(_QWORD *)(a1 + 128) + 1032LL,
          *(const wchar_t **)(*(_QWORD *)(a1 + 128) + 1016LL),
          *(const char **)(a1 + 792),
          *(_WORD *)(a1 + 4),
          0,
          *(_BYTE *)(a1 + 744),
          v28,
          (const char *)(a1 + 800),
          (const char *)(a1 + 841),
          "Async Event Request Command",
          "DW0",
          *(_DWORD *)a3,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          0,
          byte_140151064,
          v32,
          byte_140151064,
          v33,
          byte_140151064,
          v34,
          v19,
          0,
          (v27 >> 9) & 7,
          v27 >> 1);
        v8 = 0;
      }
      else
      {
        v8 = 0;
      }
      goto LABEL_153;
    }
    v8 = *(_BYTE *)(a3 + 2);
    StorEtwNvmeControllerEvent(
      a1,
      1,
      4,
      (__int64)L"Async Event Request completed successfully",
      L"AsyncEventType",
      *(_BYTE *)a3 & 7,
      L"AsyncEventInfo",
      *(_BYTE *)(a3 + 1),
      L"LogPage",
      v8,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
    switch ( *(_DWORD *)a3 & 7 )
    {
      case 0:
        v25 = *(_BYTE *)(a3 + 1);
        v9 = 64;
        if ( v25 )
        {
          switch ( *(_BYTE *)(a3 + 1) )
          {
            case 1:
              StorEtwNvmeControllerEvent(
                a1,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Invalid Doorbell Write",
                L"Asynchronous Event Info",
                v25,
                L"LogPage",
                v8,
                &word_140150F48,
                0,
                &word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0);
              NvmeControllerAsyncReset(a1);
              *((_QWORD *)&v35 + 1) = 2LL;
              break;
            case 2:
              StorEtwNvmeControllerEvent(
                a1,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Diagnostic Failure",
                L"Asynchronous Event Info",
                v25,
                L"LogPage",
                v8,
                &word_140150F48,
                0,
                &word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0);
              *(_QWORD *)&v35 = 32LL;
              break;
            case 3:
              StorEtwNvmeControllerEvent(
                a1,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Persistent Internal Device Error",
                L"Asynchronous Event Info",
                v25,
                L"LogPage",
                v8,
                &word_140150F48,
                0,
                &word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0);
              if ( (*(_DWORD *)(*(_QWORD *)(a1 + 920) + 28LL) & 2) != 0 )
                NvmeControllerAsyncReset(a1);
              *(_QWORD *)&v35 = 64LL;
              break;
            case 4:
              StorEtwNvmeControllerEvent(
                a1,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Transient Internal Device Error",
                L"Asynchronous Event Info",
                v25,
                L"LogPage",
                v8,
                &word_140150F48,
                0,
                &word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0);
              *(_QWORD *)&v35 = 128LL;
              break;
            case 5:
              StorEtwNvmeControllerEvent(
                a1,
                1,
                2,
                (__int64)L"Asynchronous Event Notification : Firmware Image Load Error",
                L"Asynchronous Event Info",
                v25,
                L"LogPage",
                v8,
                &word_140150F48,
                0,
                &word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0,
                (void *)&word_140150F48,
                0);
              *(_QWORD *)&v35 = 256LL;
              break;
            default:
              *(_QWORD *)&v35 = 4096LL;
              break;
          }
        }
        else
        {
          StorEtwNvmeControllerEvent(
            a1,
            1,
            2,
            (__int64)L"Asynchronous Event Notification : Write to Invalid Doorbell Register",
            L"Asynchronous Event Info",
            0,
            L"LogPage",
            v8,
            &word_140150F48,
            0,
            &word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0);
          *((_QWORD *)&v35 + 1) = 1LL;
        }
        v26 = *(_QWORD *)(a1 + 128);
        v37 = v35;
        NvmeAdapterProcessStorageEventNotification(v26, &v37, 0LL, 0LL);
        break;
      case 1:
        goto LABEL_45;
      case 2:
        if ( !*(_BYTE *)(a3 + 1) )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 1u);
          if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 2u) )
          {
            _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1072), 1u);
            v9 = 4096;
          }
          break;
        }
        if ( *(_BYTE *)(a3 + 1) == 1 || *(_BYTE *)(a3 + 1) == 2 )
          goto LABEL_45;
        if ( *(unsigned __int8 *)(a3 + 1) != 239 )
          break;
        goto LABEL_127;
      case 6:
        if ( !*(_BYTE *)(a3 + 1) )
        {
          v9 = 64;
          break;
        }
        if ( (unsigned int)*(unsigned __int8 *)(a3 + 1) - 1 <= 1 )
          goto LABEL_45;
        break;
      default:
        if ( (*(_DWORD *)a3 & 7) == 7 && *(_BYTE *)(a3 + 1) != 1 )
        {
          if ( *(unsigned __int8 *)(a3 + 1) != 254 )
          {
LABEL_45:
            v9 = 512;
            break;
          }
          if ( (*(_DWORD *)(a1 + 136) & 0x800000) == 0 )
            break;
LABEL_127:
          v9 = 4096;
        }
        break;
    }
  }
LABEL_153:
  _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
  result = (__int64 *)NvmeControllerReclaimAERExtendedCommand(a1, a2);
  if ( !v9 )
    goto LABEL_159;
  if ( !*(_QWORD *)(a1 + 1288) )
    goto LABEL_159;
  result = *(__int64 **)(a1 + 1288);
  if ( *(_DWORD *)result )
    goto LABEL_159;
  result = (__int64 *)NvmeControllerGetExtendedCommand(a1);
  v7 = result;
  if ( !result )
    goto LABEL_159;
  result = (__int64 *)NvmeAllocateDmaBuffer(a1, v9, v29, (void **)&v36, (_QWORD *)&v36 + 1, 0);
  if ( (int)result < 0 )
    goto LABEL_159;
  LOBYTE(v29) = v8;
  v30 = *v7;
  *((_WORD *)v7 + 26) = *(_WORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
  *(_DWORD *)(*v7 + 4256) = *(_DWORD *)(v30 + 4256) | 1;
  *(_DWORD *)(*v7 + 4256) |= 0x20u;
  *(_DWORD *)(*v7 + 4256) |= 2u;
  *(_DWORD *)(*v7 + 4256) &= ~0x40u;
  *(_WORD *)(*v7 + 4252) = 0;
  *(_QWORD *)(*v7 + 4184) = 0LL;
  *(_QWORD *)(*v7 + 4192) = NvmeControllerGetLogPageCompletionForAER;
  *(_QWORD *)(*v7 + 4200) = v7;
  *(_OWORD *)(*v7 + 4160) = v36;
  *(_DWORD *)(*v7 + 4248) = v9;
  BuildGetLogPageCommand(a1, *v7 + 4096, v29, v9, *((__int64 *)&v36 + 1), -1, 0LL, 0, *v7, v7[1]);
  result = (__int64 *)NvmeControllerProcessCommand(a1, v7);
  if ( (int)result < 0 )
  {
LABEL_159:
    if ( (_QWORD)v36 )
      result = (__int64 *)NvmeFreeDmaBuffer(a1, v9, v29, v36, *((__int64 *)&v36 + 1));
    if ( v7 )
      result = (__int64 *)NvmeControllerReclaimExtendedCommand(a1, v7);
    if ( v10 )
    {
      if ( *(_QWORD *)(a1 + 1288) )
      {
        result = *(__int64 **)(a1 + 1288);
        if ( !*(_DWORD *)result )
        {
          AERExtendedCommand = NvmeControllerGetAERExtendedCommand(a1);
          result = (__int64 *)NvmeControllerSendAsyncEventCommand(a1, AERExtendedCommand);
          if ( (int)result < 0 )
            *(_QWORD *)(a1 + 136) |= 0x40000000uLL;
        }
      }
    }
  }
  return result;
}
