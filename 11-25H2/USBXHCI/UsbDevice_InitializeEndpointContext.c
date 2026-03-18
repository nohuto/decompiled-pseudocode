/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x14000F9E0
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14000F6F4 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003ADB8 (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetMaxPrimaryStreams @ 0x14000FDA8 (Endpoint_GetMaxPrimaryStreams.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 */

int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // r8d
  char v7; // al
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  int MaxPrimaryStreams; // eax
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // edx
  int v17; // r9d
  __int64 DequeuePointer; // rax
  __int16 v19; // cx
  int v20; // eax
  unsigned int v21; // r9d
  int result; // eax
  int v23; // edx
  int v24; // edx
  int v25; // edx
  char v26; // cl
  unsigned __int8 v27; // al
  int v28; // r8d
  int v29; // eax
  int v30; // r9d
  int v31; // edx
  int v32; // ecx
  char v33; // cl
  __int16 v34; // cx
  __int64 v35; // rax

  v5 = 0;
  a3[1] ^= ((unsigned __int8)a3[1] ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *((_WORD *)a3 + 3) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  if ( v7 == 1
    || (*(_QWORD *)(*(_QWORD *)a2 + 736LL) & 0x10000000000000LL) != 0
    && v7 == 3
    && *(char *)(a2 + 98) < 0
    && (v35 = *(_QWORD *)(a2 + 16), *(_WORD *)(v35 + 124) == 1529)
    && *(_WORD *)(v35 + 126) == 4353
    && *(_DWORD *)(v35 + 36) > 1u )
  {
    v8 = 0;
  }
  else
  {
    v8 = 6;
  }
  v9 = v8 | a3[1] & 0xFFFFFFF9;
  a3[1] = v9;
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_BYTE *)(a2 + 102);
  switch ( v10 )
  {
    case 0:
      v24 = v9 & 0x38;
      if ( v24 != 56 && v24 != 24 )
        goto LABEL_24;
      goto LABEL_20;
    case 1:
      v23 = v9 & 0x38;
      if ( v23 != 56 && v23 != 24 )
      {
        if ( ((v23 - 8) & 0xFFFFFFDF) != 0 )
        {
LABEL_24:
          *(_DWORD *)(a2 + 152) = *((unsigned __int16 *)a3 + 3);
          break;
        }
        *((_WORD *)a3 + 1) = 3;
LABEL_23:
        v5 = *((unsigned __int16 *)a3 + 3);
        *((_WORD *)a3 + 9) = v5;
        goto LABEL_24;
      }
      if ( v11 < 2u )
      {
        *((_BYTE *)a3 + 2) = 3;
LABEL_22:
        *((_BYTE *)a3 + 3) = 0;
        goto LABEL_23;
      }
      if ( v11 < 4u )
      {
LABEL_34:
        *((_BYTE *)a3 + 2) = 4;
        goto LABEL_22;
      }
      if ( v11 < 8u )
      {
        *((_BYTE *)a3 + 2) = 5;
        if ( *(_DWORD *)(a1 + 40) || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x20000LL) == 0 )
          goto LABEL_22;
        goto LABEL_34;
      }
LABEL_20:
      if ( v11 >= 0x10u )
        *((_BYTE *)a3 + 2) = 8 - (v11 < 0x20u);
      else
        *((_BYTE *)a3 + 2) = 6;
      goto LABEL_22;
    case 2:
      v25 = v9 & 0x38;
      if ( v25 == 56 || ((v25 - 8) & 0xFFFFFFCF) == 0 )
      {
        if ( v11 < 2u )
        {
          v26 = 0;
        }
        else if ( v11 < 6u )
        {
          v26 = v11 - 1;
        }
        else
        {
          v26 = 5;
        }
        *((_BYTE *)a3 + 2) = v26;
        v27 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *((_BYTE *)a3 + 3) = 0;
        v28 = v27;
        v29 = *((unsigned __int16 *)a3 + 3);
        *((_BYTE *)a3 + 5) = v28;
        v5 = v29 * (v28 + 1);
        *((_WORD *)a3 + 9) = v5;
      }
      *(_DWORD *)(a2 + 152) = (*((unsigned __int8 *)a3 + 5) + 1) * *((unsigned __int16 *)a3 + 3);
      break;
    case 3:
      v30 = v9 & 0x38;
      if ( v30 == 56 || ((v30 - 8) & 0xFFFFFFCF) == 0 )
      {
        if ( v11 >= 2u )
        {
          if ( v11 >= 6u )
            v33 = 5;
          else
            v33 = v11 - 1;
        }
        else
        {
          v33 = 0;
        }
        *((_BYTE *)a3 + 2) = v33;
        v34 = *(unsigned __int8 *)(a2 + 106);
        if ( (v34 & 0x80u) == 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *a3 ^= ((unsigned __int16)*a3 ^ (unsigned __int16)(v34 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *a3 &= 0xFFFFFCFF;
        }
        *((_WORD *)a3 + 9) = v5;
        *((_BYTE *)a3 + 3) = BYTE2(v5);
      }
      v31 = v9 & 0x38;
      if ( v31 == 40 || v31 == 8 )
        v32 = v5;
      else
        v32 = (*((unsigned __int8 *)a3 + 5) + 1) * *((unsigned __int16 *)a3 + 3);
      *(_DWORD *)(a2 + 152) = v32;
      *((_BYTE *)a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *((_BYTE *)a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x10000LL) != 0 )
    *((_BYTE *)a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *((unsigned __int8 *)a3 + 5);
  v12 = *a3;
  *((_WORD *)a3 + 8) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2, v12);
  v17 = v16 ^ (v16 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  *(_DWORD *)v14 = v17;
  if ( *(_BYTE *)(v15 + 37) )
    DequeuePointer = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 136) + 32LL) + 24LL);
  else
    DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v15 + 88));
  v19 = v17;
  *(_QWORD *)(v14 + 8) = DequeuePointer;
  v20 = v17;
  v21 = v17 & 0xFFFF7FFF;
  result = v20 | 0x8000;
  if ( (v19 & 0x7C00) != 0 )
    v21 = result;
  *(_DWORD *)v14 = v21;
  return result;
}
