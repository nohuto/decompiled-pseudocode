/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x14002B144
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x14002AE58 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x14003A6E4 (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1400330EC (Endpoint_GetMaxPrimaryStreams.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // ax
  char v12; // al
  int v13; // eax
  __int64 v14; // rax
  bool v15; // cc
  __int64 v16; // rdx
  int v17; // eax
  unsigned __int8 v18; // di
  int v19; // edx
  int v20; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  int v22; // ecx
  char v23; // di
  unsigned __int8 v24; // al
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // edx
  int v28; // ecx
  char v29; // di
  unsigned __int8 v30; // al
  int v31; // esi
  int v32; // eax
  int v33; // ecx
  char v34; // di
  __int16 v35; // cx
  int v36; // edx
  int v37; // ecx
  int v38; // r10d
  int result; // eax
  unsigned int v40; // r10d
  char v41; // r9

  v6 = 0;
  v7 = a3[1] ^ ((unsigned __int8)a3[1] ^ (unsigned __int8)(8 * *(_DWORD *)(a2 + 128))) & 0x38;
  a3[1] = v7;
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, v7)
    || *(_WORD *)(a2 + 100)
    || !*(_BYTE *)(a2 + 39)
    || ((*(_DWORD *)(a2 + 128) - 1) & 0xFFFFFFFB) != 0 )
  {
    v8 = 2047LL;
    v11 = *(_WORD *)(a2 + 100) & 0x7FF;
  }
  else
  {
    v11 = *(_WORD *)(a2 + 105);
  }
  *((_WORD *)a3 + 3) = v11;
  v12 = *(_BYTE *)(a2 + 99) & 3;
  if ( v12 == 1 )
  {
    v13 = 0;
  }
  else
  {
    v8 = 0x10000000000000LL;
    if ( (*(_QWORD *)(*(_QWORD *)a2 + 736LL) & 0x10000000000000LL) == 0
      || v12 != 3
      || *(char *)(a2 + 98) >= 0
      || (v14 = *(_QWORD *)(a2 + 16), v8 = 1529LL, *(_WORD *)(v14 + 132) != 1529)
      || (v8 = 4353LL, *(_WORD *)(v14 + 134) != 4353)
      || (v15 = *(_DWORD *)(v14 + 36) <= 1u, v13 = 0, v15) )
    {
      v13 = 6;
    }
  }
  v16 = v13 | a3[1] & 0xFFFFFFF9;
  a3[1] = v16;
  v17 = *(_DWORD *)(a1 + 20);
  v18 = *(_BYTE *)(a2 + 102);
  switch ( v17 )
  {
    case 0:
      v19 = v16 & 0x38;
      if ( v19 != 56 && v19 != 24 )
        goto LABEL_37;
      goto LABEL_19;
    case 1:
      v20 = v16 & 0x38;
      if ( v20 != 56 && v20 != 24 )
      {
        if ( ((v20 - 8) & 0xFFFFFFDF) != 0 )
        {
LABEL_37:
          *(_DWORD *)(a2 + 160) = *((unsigned __int16 *)a3 + 3);
          break;
        }
        *((_WORD *)a3 + 1) = 3;
LABEL_36:
        v6 = *((unsigned __int16 *)a3 + 3);
        *((_WORD *)a3 + 9) = v6;
        goto LABEL_37;
      }
      if ( v18 >= 2u )
      {
        if ( v18 >= 4u )
        {
          if ( v18 >= 8u )
          {
LABEL_19:
            if ( v18 >= 0x10u )
              *((_BYTE *)a3 + 2) = 8 - (v18 < 0x20u);
            else
              *((_BYTE *)a3 + 2) = 6;
            goto LABEL_35;
          }
          *((_BYTE *)a3 + 2) = 5;
          if ( *(_DWORD *)(a1 + 40) || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x20000LL) == 0 )
            goto LABEL_35;
        }
        *((_BYTE *)a3 + 2) = 4;
      }
      else
      {
        *((_BYTE *)a3 + 2) = 3;
      }
LABEL_35:
      *((_BYTE *)a3 + 3) = 0;
      goto LABEL_36;
    case 2:
      IsEnabledDeviceUsageNoInline = Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v8, v16, v9, v10);
      v22 = a3[1] & 0x38;
      if ( IsEnabledDeviceUsageNoInline )
      {
        if ( v22 == 56 || ((v22 - 8) & 0xFFFFFFCF) == 0 )
        {
          if ( v18 >= 2u )
          {
            if ( v18 >= 6u )
              v23 = 5;
            else
              v23 = v18 - 1;
          }
          else
          {
            v23 = 0;
          }
          *((_BYTE *)a3 + 2) = v23;
          v24 = (*(_WORD *)(a2 + 100) >> 11) & 3;
          *((_BYTE *)a3 + 5) = v24;
          if ( *(_WORD *)(a2 + 100) || !*(_BYTE *)(a2 + 39) || ((*(_DWORD *)(a2 + 128) - 1) & 0xFFFFFFFB) != 0 )
          {
            v6 = *((unsigned __int16 *)a3 + 3) * (v24 + 1);
          }
          else
          {
            v25 = *(_QWORD *)(a1 + 8);
            v26 = *a3;
            *((_BYTE *)a3 + 5) = 2;
            if ( (*(_DWORD *)(*(_QWORD *)(v25 + 88) + 108LL) & 0x10) != 0 )
              v27 = v26 & 0xFFFFFCFF;
            else
              v27 = v26 & 0xFFFFFCFF | 0x100;
            *a3 = v27;
            v6 = *(_DWORD *)(a2 + 107);
          }
          *((_WORD *)a3 + 9) = v6;
          *((_BYTE *)a3 + 3) = 0;
        }
        v28 = v6;
      }
      else
      {
        if ( v22 == 56 || ((v22 - 8) & 0xFFFFFFCF) == 0 )
        {
          if ( v18 >= 2u )
          {
            if ( v18 >= 6u )
              v29 = 5;
            else
              v29 = v18 - 1;
          }
          else
          {
            v29 = 0;
          }
          *((_BYTE *)a3 + 2) = v29;
          v30 = (*(_WORD *)(a2 + 100) >> 11) & 3;
          *((_BYTE *)a3 + 3) = 0;
          v31 = v30;
          v32 = *((unsigned __int16 *)a3 + 3);
          *((_BYTE *)a3 + 5) = v31;
          v6 = v32 * (v31 + 1);
          *((_WORD *)a3 + 9) = v6;
        }
        v28 = *((unsigned __int16 *)a3 + 3) * (*((unsigned __int8 *)a3 + 5) + 1);
      }
      *(_DWORD *)(a2 + 160) = v28;
      break;
    case 3:
      v33 = v16 & 0x38;
      if ( v33 == 56 || ((v33 - 8) & 0xFFFFFFCF) == 0 )
      {
        if ( v18 >= 2u )
        {
          if ( v18 >= 6u )
            v34 = 5;
          else
            v34 = v18 - 1;
        }
        else
        {
          v34 = 0;
        }
        *((_BYTE *)a3 + 2) = v34;
        v35 = *(unsigned __int8 *)(a2 + 114);
        if ( (v35 & 0x80u) == 0 )
        {
          v6 = *(unsigned __int16 *)(a2 + 115);
          *a3 ^= ((unsigned __int16)*a3 ^ (unsigned __int16)(v35 << 8)) & 0x300;
        }
        else
        {
          v6 = *(_DWORD *)(a2 + 121);
          *a3 &= 0xFFFFFCFF;
        }
        *((_WORD *)a3 + 9) = v6;
        *((_BYTE *)a3 + 3) = BYTE2(v6);
      }
      v36 = v16 & 0x38;
      if ( v36 == 40 || v36 == 8 )
        v37 = v6;
      else
        v37 = *((unsigned __int16 *)a3 + 3) * (*((unsigned __int8 *)a3 + 5) + 1);
      *(_DWORD *)(a2 + 160) = v37;
      *((_BYTE *)a3 + 5) = *(_BYTE *)(a2 + 113);
      break;
  }
  if ( *((_BYTE *)a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x10000LL) != 0 )
    *((_BYTE *)a3 + 2) = 7;
  *(_DWORD *)(a2 + 156) = *((unsigned __int8 *)a3 + 5);
  *((_WORD *)a3 + 8) = v6 >> 1;
  *a3 ^= ((unsigned __int16)*a3 ^ (unsigned __int16)((unsigned __int16)Endpoint_GetMaxPrimaryStreams(a2) << 10)) & 0x7C00;
  *((_QWORD *)a3 + 1) = Endpoint_GetDequeuePointer(a2, 0);
  result = v38 | 0x8000;
  v40 = v38 & 0xFFFF7FFF;
  if ( (v41 & 0x1F) != 0 )
    v40 = result;
  *a3 = v40;
  return result;
}
