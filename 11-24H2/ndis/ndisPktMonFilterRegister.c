/*
 * XREFs of ndisPktMonFilterRegister @ 0x140164210
 * Callers:
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1400B1C84 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x140010E40 (-ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     PktMonClientAddEdge @ 0x14005AF90 (PktMonClientAddEdge.c)
 *     PktMonClientComponentRegister @ 0x14005AFD0 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x14005F810 (PktMonClientComponentUnregister.c)
 *     PktMonClientSetCompProperty @ 0x14006B130 (PktMonClientSetCompProperty.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPktMonFilterRegister(__int64 a1)
{
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // r9
  char v11; // [rsp+40h] [rbp-68h] BYREF
  char v12[7]; // [rsp+41h] [rbp-67h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h] BYREF
  int v16; // [rsp+70h] [rbp-38h]
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp-28h]

  v16 = *(_DWORD *)L"r";
  v15 = *(_QWORD *)L"Upper";
  v13[1] = &v15;
  v17 = *(_QWORD *)L"Lower";
  v18 = *(_DWORD *)L"r";
  v14[1] = &v17;
  v13[0] = 786442LL;
  v14[0] = 786442LL;
  v11 = 0;
  v12[0] = 1;
  if ( !ndisReferenceRef((PKSPIN_LOCK)(a1 + 312), 0x18u) )
    return 0LL;
  v3 = PktMonClientComponentRegister(
         a1 + 784,
         *(_QWORD *)(a1 + 16) + 344LL,
         *(_QWORD *)(a1 + 16) + 112LL,
         3LL,
         *(_DWORD *)(a1 + 336));
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 22;
    goto LABEL_38;
  }
  v3 = PktMonClientSetCompProperty(a1 + 784, 9, (__int64)v12, 1u);
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 23;
    goto LABEL_38;
  }
  v3 = PktMonClientSetCompProperty(a1 + 784, 1, a1 + 680, 4u);
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 24;
    goto LABEL_38;
  }
  v3 = PktMonClientSetCompProperty(a1 + 784, 2, *(_QWORD *)(a1 + 32) + 4056LL, 4u);
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v10 = 25;
    goto LABEL_38;
  }
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    v3 = PktMonClientSetCompProperty(a1 + 784, 3, v4 + 680, 4u);
    if ( v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 26;
        goto LABEL_38;
      }
LABEL_20:
      PktMonClientComponentUnregister((__int64 *)(a1 + 784));
      goto LABEL_12;
    }
  }
  if ( FILTER_TEST_FLAG((const struct _NDIS_FILTER_BLOCK *)a1, 0x8000) )
  {
    v3 = PktMonClientSetCompProperty(a1 + 784, 5, a1 + 336, 4u);
    if ( v3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 27;
        goto LABEL_38;
      }
      goto LABEL_20;
    }
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v7 + 208) && !*(_QWORD *)(v7 + 232) && !*(_QWORD *)(a1 + 584) && !*(_QWORD *)(a1 + 608) )
  {
    v11 = 1;
    v3 = PktMonClientSetCompProperty(a1 + 784, 8, (__int64)&v11, 1u);
    if ( v3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_20;
      v10 = 28;
LABEL_38:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v10,
        (struct _GUID *)&WPP_0cab6ce7973535d336ed7fc241c47cd0_Traceguids,
        a1,
        v3);
      goto LABEL_20;
    }
  }
  v3 = PktMonClientAddEdge(a1 + 784, (__int64)v13, v5, v6, *(_DWORD *)(a1 + 336), a1 + 888);
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 29;
      goto LABEL_38;
    }
    goto LABEL_20;
  }
  v3 = PktMonClientAddEdge(a1 + 784, (__int64)v14, v8, v9, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 1836LL), a1 + 848);
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 30;
      goto LABEL_38;
    }
    goto LABEL_20;
  }
LABEL_12:
  ndisDereferenceRef((PKSPIN_LOCK)(a1 + 312), 0x18u);
  return v3;
}
