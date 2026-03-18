/*
 * XREFs of HUBDESC_ValidateMsOs20ConfigurationSubset @ 0x14003ECD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1400360EC (HUBDESC_GetNextMsOs20Descriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x14003F310 (HUBDESC_ValidateMsOs20DescriptorSetHeader.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     memset @ 0x140046900 (memset.c)
 */

char __fastcall HUBDESC_ValidateMsOs20ConfigurationSubset(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r15
  unsigned __int16 *v12; // rsi
  __int64 v13; // rax
  char v14; // r12
  unsigned __int8 (__fastcall *v15)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // r13
  int v16; // edx
  int v17; // r9d
  __int64 v19; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v20; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v21[112]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v21, 0, 0x68uLL);
  v8 = *a3;
  if ( (_WORD)v8 != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x142u,
        (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
        v8);
    v9 = 156LL;
    goto LABEL_36;
  }
  v10 = a3[3];
  if ( (unsigned int)v10 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x143u,
        (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
        v10);
    v9 = 157LL;
    goto LABEL_36;
  }
  v11 = (unsigned __int64)a3 + v10;
  if ( (unsigned __int64)a3 + v10 <= a4 )
  {
    v12 = (unsigned __int16 *)((char *)a3 + v8);
    v20 = (unsigned __int16 *)((char *)a3 + v8);
    if ( (unsigned __int64)a3 + v8 > v11
      || (unsigned __int64)(v12 + 2) > v11
      || (v13 = *v12, (unsigned int)v13 < 4)
      || (unsigned __int64)v12 + v13 > v11 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_35:
        v9 = 160LL;
        goto LABEL_36;
      }
      v17 = 325;
    }
    else
    {
      v14 = 1;
      while ( 1 )
      {
        if ( v12[1] >= 9u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = v12[1];
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              0x147u,
              (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
              v19);
          }
        }
        else
        {
          v15 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v12[1]);
          if ( !*((_BYTE *)&MsOs20DispatchTable + 16 * v12[1] + 8) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v19) = v12[1];
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x146u,
                (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
                v19);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a1 + 32))(*(_QWORD *)(a1 + 40), 159LL);
          }
          if ( !v15(a1, v21, v12, v11) )
            goto LABEL_37;
        }
        if ( !HUBDESC_GetNextMsOs20Descriptor(v11, &v20) )
          break;
        v12 = v20;
        if ( !v20 )
        {
          *(_DWORD *)a2 |= 8u;
          return v14;
        }
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_35;
      v17 = 328;
    }
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), v8, 5, v17, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
    goto LABEL_35;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x144u,
      (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
      v10);
  v9 = 158LL;
LABEL_36:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
LABEL_37:
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), v16, 5, 329, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v14;
}
