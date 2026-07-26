/*
 * XREFs of ndisPktMonOpenRegister @ 0x140160F70
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B1F7C (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     PktMonClientAddEdge @ 0x14005AF90 (PktMonClientAddEdge.c)
 *     PktMonClientComponentRegister @ 0x14005AFD0 (PktMonClientComponentRegister.c)
 *     PktMonClientComponentUnregister @ 0x14005F810 (PktMonClientComponentUnregister.c)
 *     PktMonClientSetCompProperty @ 0x14006B130 (PktMonClientSetCompProperty.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPktMonOpenRegister(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int i; // ebp
  char v11[8]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+60h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (__int64 *)(a1 + 920);
  v14 = *(_DWORD *)L"r";
  v12[1] = &v13;
  v4 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)L"Lower";
  v12[0] = 786442LL;
  v11[0] = 1;
  LODWORD(result) = PktMonClientComponentRegister(a1 + 920, v1 + 808, v1 + 72, 4LL, *(_DWORD *)(v4 + 464));
  v6 = result;
  if ( (_DWORD)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 10;
LABEL_4:
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v7,
        (struct _GUID *)&WPP_0cab6ce7973535d336ed7fc241c47cd0_Traceguids,
        a1,
        result);
    }
  }
  else
  {
    LODWORD(result) = PktMonClientSetCompProperty((__int64)v2, 9, (__int64)v11, 1u);
    v6 = result;
    if ( (_DWORD)result )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v7 = 11;
      goto LABEL_4;
    }
    LODWORD(result) = PktMonClientSetCompProperty((__int64)v2, 2, *(_QWORD *)(a1 + 16) + 4056LL, 4u);
    v6 = result;
    if ( (_DWORD)result )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v7 = 12;
      goto LABEL_4;
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 248); ++i )
    {
      LODWORD(result) = PktMonClientSetCompProperty((__int64)v2, 7, a1 + 2 * (i + 126LL), 2u);
      v6 = result;
      if ( (_DWORD)result )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_5;
        v7 = 13;
        goto LABEL_4;
      }
    }
    result = PktMonClientAddEdge((__int64)v2, (__int64)v12, v8, v9, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL), a1 + 984);
    v6 = result;
    if ( !(_DWORD)result )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 14;
      goto LABEL_4;
    }
  }
LABEL_5:
  PktMonClientComponentUnregister(v2);
  return v6;
}
