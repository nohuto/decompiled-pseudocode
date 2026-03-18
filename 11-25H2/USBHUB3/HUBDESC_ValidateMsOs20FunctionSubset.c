/*
 * XREFs of HUBDESC_ValidateMsOs20FunctionSubset @ 0x14003ED10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x140035E1C (HUBDESC_GetNextMsOs20Descriptor.c)
 *     HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x14003EBF0 (HUBDESC_ValidateMsOs20DescriptorSetHeader.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memset @ 0x1400460C0 (memset.c)
 */

char __fastcall HUBDESC_ValidateMsOs20FunctionSubset(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  char v7; // si
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned __int16 *v13; // r14
  __int64 v14; // rax
  char v15; // r13
  unsigned int v16; // ecx
  __int64 (__fastcall **v17)(); // r8
  int v18; // r9d
  __int64 v20; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v21; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 (__fastcall *v22)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // [rsp+38h] [rbp-C0h]
  _BYTE v23[112]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = 0;
  memset(v23, 0, 0x68uLL);
  v9 = *a3;
  if ( (_DWORD)v9 != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x140u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v9);
    v10 = 161LL;
    goto LABEL_37;
  }
  v11 = a3[3];
  if ( (unsigned int)v11 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x141u,
        (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
        v11);
    v10 = 162LL;
    goto LABEL_37;
  }
  v12 = (unsigned __int64)a3 + v11;
  if ( (unsigned __int64)a3 + v11 <= a4 )
  {
    v13 = (unsigned __int16 *)((char *)a3 + v9);
    v21 = (unsigned __int16 *)((char *)a3 + v9);
    if ( (unsigned __int64)a3 + v9 > v12
      || (unsigned __int64)(v13 + 2) > v12
      || (v14 = *v13, (unsigned int)v14 < 4)
      || (unsigned __int64)v13 + v14 > v12 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_36:
        v10 = 165LL;
        goto LABEL_37;
      }
      v18 = 323;
    }
    else
    {
      v15 = 1;
      while ( 1 )
      {
        v16 = v13[1];
        v17 = &MsOs20DispatchTable;
        if ( v16 >= 9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v13[1];
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              0x145u,
              (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
              v20);
          }
        }
        else
        {
          v22 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v13[1]);
          if ( !*((_BYTE *)&MsOs20DispatchTable + 16 * v16 + 9) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v20) = v16;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x144u,
                (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
                v20);
            }
            (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall **)()))(a1 + 24))(
              *(_QWORD *)(a1 + 40),
              164LL,
              v17);
            v15 = 0;
          }
          if ( !v22(a1, v23, v13, v12) )
            goto LABEL_38;
        }
        if ( !HUBDESC_GetNextMsOs20Descriptor(v12, &v21) )
          break;
        v13 = v21;
        if ( !v21 )
        {
          v7 = v15;
          if ( v15 != 1 )
            goto LABEL_38;
          *(_DWORD *)a2 |= 0x10u;
          return v7;
        }
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v18 = 326;
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), v9, 5, v18, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 96),
      2u,
      5u,
      0x142u,
      (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids,
      v11);
  v10 = 163LL;
LABEL_37:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v10);
LABEL_38:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), v9, 5, 327, (__int64)&WPP_004a5b56b99f3284d00a1fabe3347bcb_Traceguids);
  }
  return v7;
}
