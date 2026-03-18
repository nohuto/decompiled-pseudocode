/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x140039D54
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1400371A8 (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x14001D580 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x14002E3F4 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  unsigned int *v6; // rax
  __int64 v7; // rbx
  unsigned __int8 *v8; // rdi
  __int64 v9; // r15
  char v10; // si
  int v11; // r12d
  unsigned int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  __int64 v16; // r12
  bool v17; // zf
  unsigned __int64 v18; // r12
  unsigned __int8 *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r13d
  unsigned __int8 *v22; // rcx
  ULONG v23; // r15d
  ULONG *v24; // rdi
  __int64 v25; // rax
  __int64 v27; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v28; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v29; // [rsp+58h] [rbp-70h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  int v32; // [rsp+70h] [rbp-58h]
  int v34; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int *v35; // [rsp+E0h] [rbp+18h]
  ULONG v36; // [rsp+E8h] [rbp+20h]

  v35 = a3;
  v34 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v34;
  }
  v9 = a5;
  v10 = 1;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  if ( *a1 >= 0x14u )
  {
LABEL_9:
    if ( *v6 > v12 )
    {
      if ( *(_WORD *)v7 > 0x200u || *(_BYTE *)(v7 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v11;
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0x9Au, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
      }
      v14 = 253LL;
      goto LABEL_16;
    }
    if ( v8[3] )
    {
      if ( *(_BYTE *)(v7 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = v8[3];
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0x9Bu, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 195LL);
    }
    if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_(v9, a2, 5, 156, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
      }
      v14 = 196LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
      && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 80) + 48LL) )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v9, a2, 5, 157, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
        }
        v14 = 197LL;
        goto LABEL_16;
      }
      if ( *v8 < 0x1Cu )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_41:
          v14 = 198LL;
          goto LABEL_16;
        }
        v15 = 158;
LABEL_40:
        LODWORD(v27) = *v8;
        WPP_RECORDER_SF_d(v9, 2u, 5u, v15, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
        goto LABEL_41;
      }
      v16 = *v8;
      if ( ((*v8 - 4) & 7) != 0 )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v15 = 159;
        goto LABEL_40;
      }
      v36 = 0;
      v18 = (unsigned __int64)(v16 - 28) >> 3;
      v17 = (_DWORD)v18 == -1;
      LODWORD(v18) = v18 + 1;
      v32 = v18;
      if ( v17 )
        goto LABEL_62;
      v19 = v8 + 20;
      v20 = (unsigned int)v18;
      v28 = v8 + 20;
      v21 = 1;
      v31 = (unsigned int)v18;
      do
      {
        if ( v21 < (unsigned int)v18 )
        {
          a2 = (unsigned int)v18 - v21;
          v30 = a2;
          v22 = &v8[8 * v21 + 20];
          v29 = v22;
          do
          {
            if ( *(_DWORD *)v22 == *(_DWORD *)v28 )
            {
              *v5 = 1;
              *(_QWORD *)(*(_QWORD *)(v7 + 80) + 48LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v27) = *(_DWORD *)v28;
                WPP_RECORDER_SF_d(v9, 2u, 5u, 0xA0u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), 199LL);
              v22 = v29;
              a2 = v30;
            }
            v22 += 8;
            --a2;
            v29 = v22;
            v30 = a2;
          }
          while ( a2 );
          v8 = a1;
          LODWORD(v18) = v32;
          v19 = v28;
          v20 = v31;
        }
        v19 += 8;
        ++v21;
        --v20;
        v28 = v19;
        v31 = v20;
      }
      while ( v20 );
      v23 = v36;
      v24 = (ULONG *)(v8 + 20);
      v18 = (unsigned int)v18;
      do
      {
        if ( *v24 > v23 && RtlIsNtDdiVersionAvailable(*v24) )
        {
          v23 = *v24;
          *(_QWORD *)(*(_QWORD *)(v7 + 80) + 48LL) = v24;
        }
        v24 += 2;
        --v18;
      }
      while ( v18 );
      v17 = v23 == 0;
      LODWORD(v9) = a5;
      if ( v17 )
      {
LABEL_62:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v9, a2, 5, 161, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(v7 + 32))(*(_QWORD *)(v7 + 40), 200LL);
      }
    }
    else if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
           && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
    {
      if ( *v8 >= 0x1Au )
      {
        if ( v8[20] == 1 )
        {
          if ( *v8 != 26 )
          {
            *v5 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v27) = *v8;
              WPP_RECORDER_SF_d(v9, 2u, 5u, 0xA3u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
            }
            v14 = 247LL;
            goto LABEL_16;
          }
        }
        else if ( !v8[20] )
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v27) = v8[20];
            WPP_RECORDER_SF_d(v9, 2u, 5u, 0xA4u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
          }
          v14 = 249LL;
          goto LABEL_16;
        }
        v25 = *(_QWORD *)(v7 + 80);
        if ( !*(_QWORD *)(v25 + 56) )
        {
          *(_QWORD *)(v25 + 56) = v8;
          goto LABEL_85;
        }
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(v9, a2, 5, 165, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
        }
        v14 = 248LL;
        goto LABEL_16;
      }
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = *v8;
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0xA2u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v27);
      }
      v14 = 250LL;
LABEL_16:
      (*(void (__fastcall **)(_QWORD, __int64))(v7 + 24))(*(_QWORD *)(v7 + 40), v14);
    }
LABEL_85:
    if ( !*v5 )
      return v10;
    goto LABEL_86;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 251LL);
  if ( v12 >= 0x14 )
  {
    v6 = v35;
    *v5 = 2;
    *v6 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v9,
        2u,
        5u,
        0x98u,
        (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids,
        v11,
        *v8,
        20,
        20);
      v6 = v35;
    }
    goto LABEL_9;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v9, 2u, v13, 0x99u, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids, v11, *v8, 20);
    goto LABEL_85;
  }
LABEL_86:
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(v9, a2, 5, 166, (__int64)&WPP_a44667569f5231a010562af7f2d218c1_Traceguids);
  }
  return v10;
}
