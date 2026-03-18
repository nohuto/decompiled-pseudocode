/*
 * XREFs of Isoch_ProcessSegment @ 0x140013384
 * Callers:
 *     Isoch_CalculateBytesTransferred @ 0x1400132BC (Isoch_CalculateBytesTransferred.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDL @ 0x14004C8D4 (WPP_RECORDER_SF_DDDDL.c)
 *     WPP_RECORDER_SF_DDL @ 0x14004CA08 (WPP_RECORDER_SF_DDL.c)
 */

char __fastcall Isoch_ProcessSegment(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        int *a7)
{
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v11; // rbx
  char v13; // bp
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  __int64 v17; // rbx
  unsigned __int64 i; // rdi
  int v19; // r8d
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned __int64 j; // rbx
  int v23; // ebx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 v32; // [rsp+40h] [rbp-48h]
  __int64 v33; // [rsp+98h] [rbp+10h]
  __int64 v34; // [rsp+A8h] [rbp+20h]

  v7 = *a2;
  v9 = *(_QWORD *)(a4 + 16);
  v11 = *(_QWORD *)(a4 + 24);
  v33 = v7;
  v13 = 0;
  v14 = *(_DWORD *)(a4 + 44) & 0xFFFFFFF0;
  v15 = 16LL * a5;
  v16 = v14 + v9 - 16;
  v34 = v9;
  v17 = v15 + v11;
  for ( i = v15 + v9; i <= v16; i += 16LL )
  {
    if ( v17 == *(_QWORD *)a3 )
      v13 = 1;
    v19 = (unsigned __int16)*(_DWORD *)(i + 12) >> 10;
    switch ( v19 )
    {
      case 1:
      case 5:
        if ( v13 )
        {
          v20 = *(unsigned __int8 *)(a3 + 11);
          if ( v20 <= 0x17 )
          {
            if ( v20 != 23 )
            {
              if ( v20 == 2 || v20 == 3 || v20 == 4 || v20 == 6 )
                goto LABEL_23;
              if ( v20 != 20 )
                goto LABEL_45;
              goto LABEL_25;
            }
            if ( !*(_BYTE *)(a1[5] + 719LL) )
              goto LABEL_25;
            if ( (*(_DWORD *)(i + 8) & 0x1FFFFu) < (*(_DWORD *)(a3 + 8) & 0xFFFFFFu)
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_DDDD(
                *(_QWORD *)(a1[7] + 80LL),
                2u,
                0xEu,
                0x1Eu,
                (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                *(unsigned __int8 *)(a1[6] + 143LL),
                *(_DWORD *)(a1[7] + 152LL),
                *(_DWORD *)(i + 8) & 0x1FFFF,
                *(_DWORD *)(a3 + 8) & 0xFFFFFF);
            }
          }
          else
          {
            if ( v20 != 26 )
            {
              if ( v20 != 27 )
              {
                if ( v20 == 28 )
                {
                  *a7 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
                }
                else
                {
                  if ( v20 == 31 || v20 == 36 )
                    goto LABEL_23;
LABEL_45:
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v26 = *(unsigned __int8 *)(a1[6] + 143LL);
                    LOBYTE(v26) = 2;
                    WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v26, v20, 31);
                  }
                }
              }
LABEL_25:
              for ( j = i; j < v16; j += 16LL )
              {
                if ( (unsigned __int8)HIBYTE(*(_WORD *)(j + 12)) >> 2 != 1
                  && (unsigned __int8)HIBYTE(*(_WORD *)(j + 12)) >> 2 != 5 )
                {
                  if ( (unsigned __int8)HIBYTE(*(_WORD *)(j + 12)) >> 2 == 6 )
                    break;
                  if ( (unsigned __int8)HIBYTE(*(_WORD *)(j + 12)) >> 2 == 7 )
                  {
                    v23 = *(unsigned __int16 *)(j + 2);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                      && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v28 = a1[7];
                      LODWORD(v32) = v23 + 1;
                      LODWORD(v31) = *((_DWORD *)a2 + 12);
                      LODWORD(v30) = *(_DWORD *)(v28 + 152);
                      LODWORD(v29) = *(unsigned __int8 *)(a1[6] + 143LL);
                      WPP_RECORDER_SF_DDDD(
                        *(_QWORD *)(v28 + 80),
                        5u,
                        0xEu,
                        0x21u,
                        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
                        v29,
                        v30,
                        v31,
                        v32);
                    }
                    *(_DWORD *)(v33 + 100) = v23 + 1;
                    *((_DWORD *)a2 + 12) = v23 + 1;
                    break;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v27 = *(unsigned __int8 *)(a1[6] + 143LL);
                    LOBYTE(v27) = 2;
                    WPP_RECORDER_SF_DDL(
                      *(_QWORD *)(a1[7] + 80LL),
                      v27,
                      (unsigned __int8)HIBYTE(*(_WORD *)(j + 12)) >> 2,
                      34);
                  }
                }
              }
LABEL_36:
              if ( v13 )
                *a6 = (__int64)(i - v34) >> 4;
              return v13;
            }
LABEL_23:
            v21 = *(_DWORD *)(a3 + 8) & 0xFFFFFF;
            if ( (*(_DWORD *)(i + 8) & 0x1FFFFu) < v21
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_DDDDL(*(_QWORD *)(a1[7] + 80LL), *(unsigned __int8 *)(a1[6] + 143LL), v20, v21);
            }
          }
          *a7 += (*(_DWORD *)(i + 8) & 0x1FFFF) - (*(_DWORD *)(a3 + 8) & 0xFFFFFF);
          goto LABEL_25;
        }
        *a7 += *(_DWORD *)(i + 8) & 0x1FFFF;
        break;
      case 6:
        goto LABEL_36;
      case 7:
        if ( v13 )
          goto LABEL_25;
        *a7 = 0;
        break;
      default:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = *(unsigned __int8 *)(a1[6] + 143LL);
          LOBYTE(v25) = 2;
          WPP_RECORDER_SF_DDL(*(_QWORD *)(a1[7] + 80LL), v25, v19, 32);
        }
        if ( v13 )
          goto LABEL_25;
        break;
    }
    v17 += 16LL;
  }
  return v13;
}
