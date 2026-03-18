/*
 * XREFs of HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor @ 0x14003B2F4
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x140036ED4 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D540 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E284 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_dDDDdDDD @ 0x14003F948 (WPP_RECORDER_SF_dDDDdDDD.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDESC_InternalValidateSuperSpeedPlusDeviceCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v6; // rsi
  __int64 v9; // r15
  int v10; // r14d
  unsigned int v11; // r12d
  __int64 result; // rax
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // r13d
  __int64 v18; // r8
  unsigned int v19; // r14d
  unsigned int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // r11d
  unsigned __int16 v24; // r9
  int v25; // [rsp+20h] [rbp-98h]
  __int64 v26; // [rsp+28h] [rbp-90h]
  char v27[8]; // [rsp+30h] [rbp-88h]
  char v28; // [rsp+30h] [rbp-88h]
  unsigned int v29; // [rsp+70h] [rbp-48h]
  char v30; // [rsp+C0h] [rbp+8h]
  unsigned int v31; // [rsp+C8h] [rbp+10h]
  int v32; // [rsp+D8h] [rbp+20h] BYREF

  v6 = a4;
  v32 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v6 = &v32;
  }
  v9 = a5;
  v10 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v11 = *(_DWORD *)(a2 + 72) - v10;
  if ( *a1 >= 0x10u )
  {
LABEL_9:
    v29 = *((_DWORD *)a1 + 1) & 0x1F;
    v14 = v29;
    if ( *a1 != 4LL * v29 + 16 )
    {
      if ( *(_BYTE *)(a2 + 12) || *(_WORD *)a2 == 784 )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDD(v9, 2u, 0LL, 0xB1u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 213LL);
    }
    if ( *a3 <= v11 )
    {
      if ( *((_DWORD *)a1 + 1) >= 0x200u )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xB3u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 215LL);
      }
      if ( (a1[8] & 0xF0) != 0 )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xB4u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 216LL);
      }
      v16 = 0LL;
      if ( a1[3] )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xB5u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 218LL);
        v16 = 0LL;
      }
      if ( *((_WORD *)a1 + 5) )
      {
        if ( *(_BYTE *)(a2 + 15) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xB6u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 219LL);
        v16 = 0LL;
      }
      v17 = 0;
      v31 = 0;
      v18 = 0LL;
      v30 = 0;
      v19 = 0;
      while ( (unsigned __int64)&a1[4 * v19 + 16] <= *(_QWORD *)(a2 + 64) )
      {
        v14 = *(_DWORD *)&a1[4 * v19 + 12];
        if ( (v14 & 0x80u) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = v19;
            WPP_RECORDER_SF_d(v9, 2u, 5u, 0xB8u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v26);
          }
          v15 = 220LL;
          goto LABEL_104;
        }
        if ( (((unsigned __int8)v14 ^ (unsigned __int8)*((_WORD *)a1 + 4)) & 0xF) == 0 )
        {
          v30 = 1;
          if ( (v14 & 0x40) == 0 && (*((_WORD *)a1 + 4) & 0xF00) != ((*((_WORD *)a1 + 4) >> 4) & 0xF00) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
              *v6 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDD(
                v9,
                2u,
                HIBYTE(*((unsigned __int16 *)a1 + 4)) & 0xF,
                0xB9u,
                (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 225LL, v18);
            v18 = v31;
          }
        }
        v20 = *(_DWORD *)&a1[4 * v19 + 12] & 0xF;
        if ( _bittest(&v17, v20) )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(v9, 2u, 5u, 0xBAu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 226LL, v18);
        }
        else
        {
          v17 |= 1 << v20;
          v18 = (unsigned int)(v18 + 1);
          v31 = v18;
        }
        if ( (unsigned __int64)&a1[4 * v19 + 20] > *(_QWORD *)(a2 + 64) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = 187;
            goto LABEL_117;
          }
          goto LABEL_118;
        }
        v21 = *(_DWORD *)&a1[4 * v19 + 16];
        if ( (v21 & 0x80u) == 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v26) = v19 + 1;
            WPP_RECORDER_SF_d(v9, 2u, 5u, 0xBCu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v26);
          }
          v15 = 221LL;
          goto LABEL_104;
        }
        v22 = *(_DWORD *)&a1[4 * v19 + 12];
        if ( (((unsigned __int8)v21 ^ a1[4 * v19 + 12]) & 0xF) != 0
          || (((unsigned __int8)v21 ^ (unsigned __int8)v22) & 0x40) != 0
          || (((unsigned __int16)v21 ^ (unsigned __int16)v22) & 0xC000) != 0 )
        {
          if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
            *v6 = 2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v23 = *(_DWORD *)&a1[4 * v19 + 12];
            WPP_RECORDER_SF_dDDDdDDD(
              v9,
              (unsigned __int8)HIBYTE(*(_WORD *)&a1[4 * v19 + 16]) >> 6,
              (*(_DWORD *)&a1[4 * v19 + 16] >> 6) & 1,
              189,
              v25,
              v19,
              v23 & 0xF,
              (v23 & 0x40) != 0,
              (unsigned __int16)v23 >> 14,
              v19 + 1,
              v23 & 0xF,
              (*(_DWORD *)&a1[4 * v19 + 16] & 0x40) != 0,
              (unsigned __int8)HIBYTE(*(_WORD *)&a1[4 * v19 + 16]) >> 6);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 223LL);
        }
        v14 = *(_DWORD *)&a1[4 * v19 + 12];
        if ( (v14 & 0x40) == 0 )
        {
          v14 ^= *(_DWORD *)&a1[4 * v19 + 16];
          if ( (v14 & 0x30) != 0 || *(_WORD *)&a1[4 * v19 + 14] != *(_WORD *)&a1[4 * v19 + 18] )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
              *v6 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = a1[4 * v19 + 12] & 0xF;
              WPP_RECORDER_SF_dDDDdDDD(
                v9,
                *(unsigned __int16 *)&a1[4 * v19 + 18],
                (*(_DWORD *)&a1[4 * v19 + 16] >> 4) & 3,
                190,
                v25,
                v19,
                v28,
                *(_WORD *)&a1[4 * v19 + 14],
                (*(_DWORD *)&a1[4 * v19 + 12] >> 4) & 3,
                v19 + 1,
                v28,
                *(_WORD *)&a1[4 * v19 + 18],
                (*(_DWORD *)&a1[4 * v19 + 16] >> 4) & 3);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 224LL);
          }
        }
        v18 = v31;
        v19 += 2;
        v16 = 0LL;
        if ( v19 > v29 )
          goto LABEL_90;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = 183;
LABEL_117:
        LODWORD(v26) = v19;
        WPP_RECORDER_SF_d(v9, 2u, 5u, v24, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v26);
LABEL_118:
        v16 = 0LL;
      }
LABEL_90:
      result = ((*((_DWORD *)a1 + 1) >> 5) & 0xFu) + 1;
      if ( (_DWORD)result != v31 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v27 = ((*((_DWORD *)a1 + 1) >> 5) & 0xF) + 1;
          LODWORD(v26) = v31;
          WPP_RECORDER_SF_dD(
            v9,
            2u,
            5u,
            0xBFu,
            (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
            v26,
            *(_QWORD *)v27);
        }
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(a2 + 24))(
                   *(_QWORD *)(a2 + 40),
                   227LL,
                   v18,
                   v16);
      }
      if ( !v30 )
      {
        if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
          *v6 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v26) = *(_DWORD *)&a1[4 * v19 + 12] & 0xF;
          WPP_RECORDER_SF_d(v9, 2u, 5u, 0xC0u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v26);
        }
        v15 = 228LL;
        goto LABEL_104;
      }
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v6 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0xB2u, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids, v10);
      v15 = 217LL;
LABEL_104:
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v15);
    }
    goto LABEL_105;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 214LL);
  if ( v11 >= 0x10 )
  {
    *v6 = 2;
    *a3 = 16;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(v9, 2u, 5u, 0xAFu, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    goto LABEL_9;
  }
  *v6 = 1;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return result;
  result = WPP_RECORDER_SF_DDD(
             v9,
             2u,
             v13,
             0xB0u,
             (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
             v10,
             *a1,
             16);
LABEL_105:
  if ( *v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      return WPP_RECORDER_SF_(v9, v14, 5, 193, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    }
  }
  return result;
}
