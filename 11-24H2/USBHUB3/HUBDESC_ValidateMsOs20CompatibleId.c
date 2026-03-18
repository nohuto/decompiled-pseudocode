/*
 * XREFs of HUBDESC_ValidateMsOs20CompatibleId @ 0x14003EAD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rdi
  char v4; // bl
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  char v10; // r10
  unsigned __int8 *v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // r11
  int v14; // ecx
  char v15; // r10
  unsigned __int8 *v16; // r8
  unsigned int v17; // r9d
  int v18; // r9d
  int v19; // [rsp+28h] [rbp-20h]

  v3 = a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  if ( (*(_BYTE *)v3 & 0x20) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(v3 + 96), a2, 5, 338, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 166LL);
    LOBYTE(a2) = 0;
  }
  if ( *a3 != 20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 339;
      v19 = (unsigned __int16)*a3;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  v10 = 0;
  v11 = (unsigned __int8 *)(a3 + 2);
  v12 = 0;
  v13 = 0x87FFFFFE03FFLL;
  while ( 1 )
  {
    v14 = *v11;
    if ( !(_BYTE)v14 )
    {
      v10 = 1;
      goto LABEL_23;
    }
    if ( v10 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 340;
        goto LABEL_33;
      }
LABEL_34:
      v8 = 168LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(v14 - 48) > 0x2Fu || !_bittest64(&v13, (unsigned __int8)(v14 - 48)) )
      break;
LABEL_23:
    ++v12;
    ++v11;
    if ( v12 >= 8 )
    {
      v15 = 0;
      v16 = (unsigned __int8 *)(a3 + 6);
      v17 = 0;
      while ( 1 )
      {
        v14 = *v16;
        if ( (_BYTE)v14 )
        {
          if ( v15 == 1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_34;
            v18 = 342;
LABEL_33:
            LOBYTE(a2) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(v3 + 96),
              a2,
              5,
              v18,
              (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
            goto LABEL_34;
          }
          if ( (unsigned __int8)(v14 - 48) > 0x2Fu || !_bittest64(&v13, (unsigned __int8)(v14 - 48)) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_9;
            v7 = 343;
            goto LABEL_21;
          }
        }
        else
        {
          v15 = 1;
        }
        ++v17;
        ++v16;
        if ( v17 >= 8 )
        {
          v4 = a2;
          if ( (_BYTE)a2 != 1 )
            goto LABEL_11;
          *(_DWORD *)v3 |= 0x20u;
          *(_QWORD *)(v3 + 32) = a3;
          return v4;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_9;
  v7 = 341;
LABEL_21:
  v19 = v14;
LABEL_8:
  WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 96), 2u, 5u, v7, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v19);
LABEL_9:
  v8 = 167LL;
LABEL_10:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v3 + 96), a2, 5, 344, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v4;
}
