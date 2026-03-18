/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x14004B494
 * Callers:
 *     CoreUICallReceive @ 0x14004B3C8 (CoreUICallReceive.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x14004B7F4 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x14023F270 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        bool a5,
        unsigned int a6,
        char *a7,
        unsigned int a8)
{
  __int64 v9; // rsi
  char *v10; // rcx
  _DWORD *v11; // rdi
  __int64 v12; // r8
  char *v13; // rdx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 i; // rcx
  char *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rdx
  int v23; // r9d
  char *v24; // rcx
  char v25; // al
  _BYTE *v26; // rcx
  __int64 v27; // rbp
  unsigned int j; // eax
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int *v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  const unsigned __int8 *v37; // [rsp+48h] [rbp+20h] BYREF

  v37 = a4;
  if ( !a2 )
    return 2147942487LL;
  v9 = a8;
  if ( !a8 )
    return 0LL;
  v10 = a7;
  if ( !a7 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  v11 = (_DWORD *)((char *)this + 120);
  v12 = 0LL;
  *((_QWORD *)this + 17) = a2;
  *((_DWORD *)this + 30) = 0;
  if ( (((_DWORD)v9 + 3) & 0xFFFFFFFC) != (_DWORD)v9 )
    goto LABEL_40;
  v13 = &v10[v9];
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)this + 11) = v10;
  *((_QWORD *)this + 12) = v10;
  if ( &v10[v9] < v10 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_40;
  }
  *((_QWORD *)this + 13) = v13;
  if ( (unsigned int)v9 < 8 )
    goto LABEL_40;
  if ( (unsigned int)((_DWORD)v13 - *((_DWORD *)this + 24)) < 8
    || (v14 = *((_QWORD *)this + 12), *((_QWORD *)this + 12) = v14 + 8, !v14) )
  {
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x86uLL);
  }
  v15 = *((_DWORD *)this + 32);
  if ( *(_DWORD *)v14 >> v15 )
  {
    *v11 = 8;
    goto LABEL_37;
  }
  if ( (*(_DWORD *)v14 & (unsigned int)((1 << v15) - 1)) << *((_DWORD *)this + 33) > (unsigned int)v9 )
  {
LABEL_40:
    *v11 = 2;
    goto LABEL_37;
  }
  v16 = 0;
  for ( i = 0LL; ; i += 16LL )
  {
    if ( v16 >= 1 )
      goto LABEL_36;
    if ( *(_WORD *)((char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                  + i) == *(_WORD *)(v14 + 4) )
      break;
    ++v16;
  }
  v18 = (char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
      + 16 * v16;
  if ( !v18 )
  {
LABEL_36:
    *v11 = 3;
    goto LABEL_37;
  }
  v19 = *(unsigned __int16 *)(v14 + 6);
  if ( (unsigned __int16)v19 >= *((_WORD *)v18 + 1) )
  {
    *v11 = 5;
  }
  else
  {
    *((_QWORD *)this + 18) = v18;
    v20 = 16LL * v19;
    v21 = *((_QWORD *)v18 + 1) + v20 == 0;
    v22 = *((_QWORD *)v18 + 1) + v20;
    *((_QWORD *)this + 19) = v22;
    if ( v21 )
    {
      *v11 = 201;
    }
    else
    {
      v23 = *(unsigned __int8 *)(v22 + 10);
      *((_DWORD *)this + 20) = v23;
      if ( !(_BYTE)v23 )
      {
LABEL_41:
        if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v9 )
          v12 = 0LL;
        else
LABEL_42:
          *v11 = 7;
        goto LABEL_37;
      }
      *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar;
      v24 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar[*(unsigned __int16 *)(v22 + 8)];
      *(_QWORD *)this = v24;
      if ( v24 >= byte_14025A9C4
        || v24 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar )
      {
        *v11 = 202;
      }
      else
      {
        v25 = *v24;
        v26 = v24 + 1;
        *(_QWORD *)this = v26;
        if ( v25 == (_BYTE)v23 )
        {
          v27 = 0LL;
          *((_QWORD *)this + 1) = v26;
          *((_DWORD *)this + 31) = 0;
          for ( j = 0; j < *((_DWORD *)this + 20); j = *((_DWORD *)this + 31) )
          {
            v29 = *((_DWORD *)this + 26);
            v30 = v29 - *((_DWORD *)this + 24);
            a6 = 0;
            LODWORD(v37) = 0;
            a5 = 0;
            if ( v30 < 4 )
              goto LABEL_50;
            v31 = (unsigned int *)*((_QWORD *)this + 12);
            *((_QWORD *)this + 12) = v31 + 1;
            if ( !v31 )
              goto LABEL_50;
            v32 = *v31;
            *((_DWORD *)this + 21) = *v31;
            if ( v32 > 0xFFFFFFFC )
              goto LABEL_42;
            if ( v32 )
            {
              v33 = (v32 + 3) & 0xFFFFFFFC;
              if ( v29 - *((_DWORD *)this + 24) < (unsigned int)v33 )
              {
                v34 = 0LL;
              }
              else
              {
                v34 = *((_QWORD *)this + 12);
                *((_QWORD *)this + 12) = v34 + v33;
              }
              *((_QWORD *)this + 52) = v34;
              if ( !v34 )
                goto LABEL_40;
            }
            else
            {
              *((_QWORD *)this + 52) = 0LL;
            }
            v35 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                    this,
                    &a6,
                    &a5,
                    (unsigned int *)&v37);
            v12 = (unsigned int)v35;
            if ( v35 < 0 )
              goto LABEL_37;
            if ( a6 != *((_DWORD *)this + 21) && a6 )
              goto LABEL_42;
            *((_QWORD *)this + v27 + 20) = *((_QWORD *)this + 52);
            v27 = (unsigned int)(v27 + 1);
            if ( a5 )
            {
              *((_QWORD *)this + v27 + 20) = (unsigned int)v37;
              v27 = (unsigned int)(v27 + 1);
            }
            ++*((_DWORD *)this + 31);
          }
          goto LABEL_41;
        }
LABEL_50:
        *v11 = 6;
      }
    }
  }
LABEL_37:
  if ( *v11 )
  {
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 17) + 32LL))(
                     *((_QWORD *)this + 17),
                     (char *)this + 120,
                     v12);
    if ( (int)v12 >= 0 )
      LODWORD(v12) = -2018375668;
  }
  return (unsigned int)v12;
}
