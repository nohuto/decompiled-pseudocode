/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x140015440
 * Callers:
 *     Bulk_PrepareStage @ 0x140014A70 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140012D68 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x140035700 (WPP_RECORDER_SF_DDDqDDDDD.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // r10
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v8; // r8
  int v9; // r9d
  int v10; // edx
  _QWORD *v11; // rax
  __int64 *v12; // r12
  int v13; // r15d
  unsigned int i; // r14d
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  __int64 v21; // rbx
  int v22; // r9d
  __int64 v23; // r8
  int v24; // eax
  __int64 result; // rax
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int16 v29; // ax
  unsigned int v30; // edx
  int v31; // [rsp+20h] [rbp-88h]
  unsigned int v32; // [rsp+B0h] [rbp+8h]
  int v33; // [rsp+B8h] [rbp+10h]

  v2 = *a1;
  v3 = *(_QWORD *)(v2 + 56);
  if ( *(_DWORD *)(v2 + 76) <= 2u )
  {
    v24 = 2;
    *((_DWORD *)a1 + 20) = 2;
  }
  else
  {
    v4 = *((unsigned int *)a1 + 10);
    v5 = *(_DWORD *)(*(_QWORD *)(v3 + 56) + 160LL);
    v6 = (unsigned int)v4;
    if ( v5 <= (unsigned int)v4 )
      v6 = v5;
    v7 = v6;
    *((_DWORD *)a1 + 20) = ((unsigned __int64)(v6 + 8190) >> 12) + 1;
    v8 = *(_QWORD *)(v2 + 48);
    v9 = *(unsigned __int16 *)(v8 + 2);
    if ( v9 != 56 )
    {
      v10 = v9 - 8;
      switch ( *(_WORD *)(v8 + 2) )
      {
        case 8:
        case 9:
        case 0xA:
        case 0x32:
        case 0x37:
          break;
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x38:
          goto LABEL_8;
        case 0x39:
        case 0x3A:
          *((_DWORD *)a1 + 21) = ((unsigned __int64)(v4 + 4095) >> 12) + 1;
          goto LABEL_35;
        default:
          goto LABEL_9;
      }
    }
    v10 = v9 - 8;
    if ( v9 != 56 )
    {
LABEL_8:
      switch ( v10 )
      {
        case '1':
        case '2':
          goto LABEL_34;
        default:
          break;
      }
    }
LABEL_9:
    v11 = *(_QWORD **)(v8 + 48);
    if ( v11 && *v11 )
    {
      v12 = (__int64 *)a1[6];
      v13 = 0;
      for ( i = 0; (_DWORD)v4; v12 = (__int64 *)*v12 )
      {
        v15 = *((_DWORD *)v12 + 10);
        v16 = v4;
        LODWORD(v4) = v4 - v15;
        if ( v16 < v15 )
          LODWORD(v4) = 0;
        v33 = v4;
        if ( v16 < v15 )
          v15 = v16;
        v32 = v15;
        v17 = v15;
        if ( v15 )
        {
          do
          {
            v18 = v12[4] + *((unsigned int *)v12 + 11) + (unsigned __int64)(v15 - v17);
            v19 = (*((_WORD *)v12 + 16) + (unsigned __int16)*((_DWORD *)v12 + 11) + (_WORD)v15 - (_WORD)v17) & 0xFFF;
            if ( i + v17 < v7 )
            {
              i = v17;
              v21 = v17 + 4095LL;
              v17 = 0;
              v20 = (unsigned __int64)(v19 + v21) >> 12;
              v13 = v20;
            }
            else
            {
              LODWORD(v20) = v13 + ((v19 + (unsigned __int64)(v7 - i) + 4095) >> 12);
              v13 = 0;
              v17 += i - v7;
              i = 0;
            }
            v22 = v20 + *((_DWORD *)a1 + 21);
            *((_DWORD *)a1 + 21) = v22;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_DDDqDDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 143LL),
                v18,
                v22,
                v31,
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + 143LL),
                *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL),
                *(_DWORD *)(v3 + 64),
                v18,
                v20,
                v17,
                v13,
                i,
                v22);
            }
            v23 = *(unsigned int *)(v3 + 196);
            if ( (unsigned int)v20 >= (unsigned int)v23
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_DDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                3u,
                v23,
                0x1Fu,
                (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
            }
            if ( (unsigned int)v20 > *((_DWORD *)a1 + 20) )
            {
              *((_DWORD *)a1 + 20) = v20;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_DDDD(
                    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                    5u,
                    0xEu,
                    0x20u,
                    (__int64)&WPP_b35432f3067b3bf93fefc5589952cfde_Traceguids);
              }
            }
            v15 = v32;
          }
          while ( v17 );
          LODWORD(v4) = v33;
        }
      }
    }
    else
    {
LABEL_34:
      *((_DWORD *)a1 + 21) = (v4 + 4095 + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
    }
LABEL_35:
    v24 = ++*((_DWORD *)a1 + 21) + 1;
  }
  *((_DWORD *)a1 + 21) = v24;
  result = *(_QWORD *)(v3 + 40);
  v26 = *((_DWORD *)a1 + 10);
  if ( _bittest64((const signed __int64 *)(result + 736), 0x22u) )
  {
    v27 = *(_QWORD *)(v3 + 48);
    if ( *(_DWORD *)(v27 + 40) )
    {
      v28 = *(_QWORD *)(v3 + 56);
      result = *(unsigned __int8 *)(v28 + 98);
      if ( (result & 0x80u) != 0LL && *(_DWORD *)(v27 + 20) <= 1u )
      {
        if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
          || *(_WORD *)(v28 + 100)
          || !*(_BYTE *)(v28 + 39)
          || ((*(_DWORD *)(v28 + 128) - 1) & 0xFFFFFFFB) != 0 )
        {
          v29 = *(_WORD *)(v28 + 100) & 0x7FF;
        }
        else
        {
          v29 = *(_WORD *)(v28 + 105);
        }
        v30 = v26 % v29;
        result = v26 / v29;
        if ( v30 )
        {
          Feature_EUSB2__private_IsEnabledDeviceUsageNoInline();
          result = Feature_EUSB2__private_IsEnabledDeviceUsageNoInline();
          ++*((_DWORD *)a1 + 20);
          ++*((_DWORD *)a1 + 21);
        }
      }
    }
  }
  return result;
}
