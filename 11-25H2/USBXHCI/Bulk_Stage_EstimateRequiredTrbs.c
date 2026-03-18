/*
 * XREFs of Bulk_Stage_EstimateRequiredTrbs @ 0x14001BF50
 * Callers:
 *     Bulk_PrepareStage @ 0x14001B580 (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x14001588C (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1400159CC (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDqDDDDD @ 0x1400371B0 (WPP_RECORDER_SF_DDDqDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredTrbs(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // r8d
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // r8
  int v12; // edx
  int v13; // r9d
  _QWORD *v14; // rax
  __int64 *v15; // r13
  unsigned int i; // r12d
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // r15d
  int v20; // esi
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // r14d
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-88h]
  int v31; // [rsp+B0h] [rbp+8h]
  unsigned int v32; // [rsp+B8h] [rbp+10h]
  int v33; // [rsp+C0h] [rbp+18h]

  v1 = *a1;
  v3 = *(_QWORD *)(*a1 + 56);
  if ( *(_DWORD *)(*a1 + 76) > 2u )
  {
    v7 = *((unsigned int *)a1 + 10);
    v8 = *(_DWORD *)(*(_QWORD *)(v3 + 56) + 152LL);
    v9 = (unsigned int)v7;
    if ( v8 <= (unsigned int)v7 )
      v9 = v8;
    v10 = v9;
    *((_DWORD *)a1 + 20) = ((unsigned __int64)(v9 + 8190) >> 12) + 1;
    v11 = *(_QWORD *)(v1 + 48);
    v12 = *(unsigned __int16 *)(v11 + 2);
    if ( v12 != 56 )
    {
      v13 = v12 - 8;
      switch ( *(_WORD *)(v11 + 2) )
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
          goto LABEL_29;
        case 0x39:
        case 0x3A:
          *((_DWORD *)a1 + 21) = ((unsigned __int64)(v7 + 4095) >> 12) + 1;
          goto LABEL_31;
        default:
          goto LABEL_9;
      }
    }
    v13 = v12 - 8;
    if ( v12 != 56 )
    {
LABEL_29:
      switch ( v13 )
      {
        case '1':
        case '2':
          goto LABEL_30;
        default:
          break;
      }
    }
LABEL_9:
    v14 = *(_QWORD **)(v11 + 48);
    if ( v14 && *v14 )
    {
      v15 = (__int64 *)a1[6];
      v31 = 0;
      for ( i = 0; (_DWORD)v7; v15 = (__int64 *)*v15 )
      {
        v17 = *((_DWORD *)v15 + 10);
        v18 = v7;
        LODWORD(v7) = v7 - v17;
        if ( v18 < v17 )
          LODWORD(v7) = 0;
        v33 = v7;
        if ( v18 < v17 )
          v17 = v18;
        v32 = v17;
        v19 = v17;
        if ( v17 )
        {
          v20 = v31;
          do
          {
            v21 = v15[4] + *((unsigned int *)v15 + 11) + (unsigned __int64)(v17 - v19);
            v22 = (*((_WORD *)v15 + 16) + (unsigned __int16)*((_DWORD *)v15 + 11) + (_WORD)v17 - (_WORD)v19) & 0xFFF;
            if ( i + v19 < v10 )
            {
              i = v19;
              v29 = ((unsigned __int64)v19 + v22 + 4095) >> 12;
              v19 = 0;
              v23 = v29;
              v20 = v29;
            }
            else
            {
              v23 = v20 + ((v22 + (unsigned __int64)(v10 - i) + 4095) >> 12);
              v20 = 0;
              v19 += i - v10;
              i = 0;
            }
            v24 = v23 + *((_DWORD *)a1 + 21);
            *((_DWORD *)a1 + 21) = v24;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_DDDqDDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v3 + 48) + 135LL),
                v21,
                v24,
                v30,
                *(_BYTE *)(*(_QWORD *)(v3 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v3 + 56) + 144LL),
                *(_DWORD *)(v3 + 64),
                v21,
                v23,
                v19,
                v20,
                i,
                v24);
            }
            v25 = *(unsigned int *)(v3 + 196);
            if ( v23 >= (unsigned int)v25 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDDDD(
                *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                3u,
                v25,
                0x1Eu,
                (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids);
            if ( v23 > *((_DWORD *)a1 + 20) )
            {
              *((_DWORD *)a1 + 20) = v23;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_DDDD(
                    *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                    5u,
                    0xEu,
                    0x1Fu,
                    (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids);
              }
            }
            v17 = v32;
          }
          while ( v19 );
          v31 = v20;
          LODWORD(v7) = v33;
        }
      }
    }
    else
    {
LABEL_30:
      *((_DWORD *)a1 + 21) = (v7 + 4095 + (unsigned __int64)((*(_DWORD *)(a1[6] + 32) + *(_DWORD *)(a1[6] + 44)) & 0xFFF)) >> 12;
    }
LABEL_31:
    v4 = ++*((_DWORD *)a1 + 21) + 1;
  }
  else
  {
    v4 = 2;
    *((_DWORD *)a1 + 20) = 2;
  }
  *((_DWORD *)a1 + 21) = v4;
  result = *(_QWORD *)(v3 + 40);
  v6 = *((_DWORD *)a1 + 10);
  if ( _bittest64((const signed __int64 *)(result + 736), 0x22u) )
  {
    v26 = *(_QWORD *)(v3 + 48);
    if ( *(_DWORD *)(v26 + 40) )
    {
      v27 = *(_QWORD *)(v3 + 56);
      result = *(unsigned __int8 *)(v27 + 98);
      if ( (result & 0x80u) != 0LL )
      {
        result = *(unsigned int *)(v26 + 20);
        if ( !(_DWORD)result || (_DWORD)result == 1 )
        {
          v28 = *(_WORD *)(v27 + 100) & 0x7FF;
          result = v6 / v28;
          if ( v6 % v28 )
          {
            ++*((_DWORD *)a1 + 20);
            ++*((_DWORD *)a1 + 21);
          }
        }
      }
    }
  }
  return result;
}
