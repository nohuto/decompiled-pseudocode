/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801CDE60
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801CDCC0 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1801CDDB0 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x18019CA38 (McTemplateU0sqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  unsigned int v2; // r14d
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r9
  unsigned int v9; // ebx
  _BYTE v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  __m128i si128; // [rsp+78h] [rbp-88h] BYREF
  __int128 v22; // [rsp+88h] [rbp-78h] BYREF
  int v23; // [rsp+98h] [rbp-68h]
  _BYTE v24[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  v14 = 0LL;
  v17[0] = 0LL;
  if ( a2 >= 0x28u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_172;
  v12 = 0;
  v18 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v13 = 0;
  v11[0] = 0;
  v16 = 0;
  memset_0(v24, 0, 0x58uLL);
  v15 = -1;
  v19 = 0LL;
  v20 = 0;
  v23 = 0;
  v22 = 0LL;
  if ( v2 > 0x15 )
  {
    if ( v2 <= 0x1F )
    {
      switch ( v2 )
      {
        case 0x1Fu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 280LL))(
                 *((_QWORD *)this + 5),
                 &v13);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1147LL;
            goto LABEL_36;
          }
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v13,
                 2LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1213LL;
            goto LABEL_36;
          }
          goto LABEL_172;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v24);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 986LL;
            goto LABEL_36;
          }
          break;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 v17);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 992LL;
            goto LABEL_36;
          }
          break;
        case 0x18u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1055LL;
            goto LABEL_36;
          }
          break;
        case 0x19u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1127LL;
            goto LABEL_36;
          }
          break;
        case 0x1Au:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1137LL;
            goto LABEL_36;
          }
          break;
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v12);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1132LL;
            goto LABEL_36;
          }
          break;
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 &v18);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1079LL;
            goto LABEL_36;
          }
          break;
        case 0x1Eu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1142LL;
            goto LABEL_36;
          }
          break;
        default:
          goto LABEL_161;
      }
LABEL_187:
      if ( v2 == 22 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               22LL,
               v24,
               88LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1298LL;
          goto LABEL_36;
        }
        goto LABEL_172;
      }
      if ( v2 == 23 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               23LL,
               v17,
               8LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1280LL;
          goto LABEL_36;
        }
        goto LABEL_172;
      }
      if ( v2 != 24 && v2 != 25 && v2 != 26 )
      {
        if ( v2 == 27 )
          goto LABEL_198;
        if ( v2 != 28 )
        {
          v9 = v2 - 29;
          if ( v2 == 29 )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   29LL,
                   &v18,
                   8LL);
            v7 = v4;
            if ( v4 < 0 )
            {
              if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
                goto LABEL_173;
              v8 = 1222LL;
              goto LABEL_36;
            }
            goto LABEL_172;
          }
          goto LABEL_217;
        }
      }
LABEL_71:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             v11,
             1LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_173;
        v8 = 1240LL;
        goto LABEL_36;
      }
      goto LABEL_172;
    }
    switch ( v2 )
    {
      case ' ':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 288LL))(
               *((_QWORD *)this + 5),
               &v14);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1152LL;
          goto LABEL_36;
        }
        break;
      case '!':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(*((_QWORD *)this + 5), v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1157LL;
          goto LABEL_36;
        }
        goto LABEL_210;
      case '"':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 304LL))(
               *((_QWORD *)this + 5),
               &v22);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1162LL;
          goto LABEL_36;
        }
        goto LABEL_210;
      case '#':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 312LL))(
               *((_QWORD *)this + 5),
               &v14);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1167LL;
          goto LABEL_36;
        }
        goto LABEL_210;
      case '$':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 320LL))(
               *((_QWORD *)this + 5),
               &v14);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1172LL;
          goto LABEL_36;
        }
        goto LABEL_210;
      case '%':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5), v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1177LL;
          goto LABEL_36;
        }
        break;
      case '&':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 336LL))(*((_QWORD *)this + 5), v17);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 998LL;
          goto LABEL_36;
        }
        goto LABEL_210;
      case '\'':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 344LL))(*((_QWORD *)this + 5), v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1061LL;
          goto LABEL_36;
        }
        goto LABEL_210;
    }
LABEL_161:
    if ( v2 <= 0x15 )
    {
LABEL_64:
      switch ( v2 )
      {
        case 0xAu:
        case 0xDu:
        case 0xEu:
        case 0xFu:
          goto LABEL_198;
        case 0x10u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 16LL,
                 &v19,
                 12LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1317LL;
            goto LABEL_36;
          }
          goto LABEL_172;
        case 0x12u:
          goto LABEL_198;
      }
      v9 = v2 - 19;
      if ( v2 == 19 )
        goto LABEL_71;
LABEL_217:
      if ( v9 != 1 )
        goto LABEL_172;
      goto LABEL_71;
    }
    if ( v2 <= 0x1F )
      goto LABEL_187;
LABEL_210:
    switch ( v2 )
    {
      case ' ':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               32LL,
               &v14,
               8LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1271LL;
          goto LABEL_36;
        }
        break;
      case '!':
        goto LABEL_71;
      case '"':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               34LL,
               &v22,
               20LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1335LL;
          goto LABEL_36;
        }
        break;
      case '#':
      case '$':
        goto LABEL_222;
      case '%':
        goto LABEL_71;
      default:
        v9 = v2 - 38;
        if ( v2 == 38 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 38LL,
                 v17,
                 8LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_173;
            v8 = 1289LL;
            goto LABEL_36;
          }
          break;
        }
        goto LABEL_217;
    }
LABEL_172:
    v7 = 0;
    goto LABEL_173;
  }
  if ( v2 == 21 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 200LL))(*((_QWORD *)this + 5), &v16);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_173;
      v8 = 1049LL;
      goto LABEL_36;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v16,
           4LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_173;
      v8 = 1249LL;
      goto LABEL_36;
    }
    goto LABEL_172;
  }
  if ( v2 > 9 )
  {
    switch ( v2 )
    {
      case 0xAu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1073LL;
          goto LABEL_36;
        }
        goto LABEL_64;
      case 0xDu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1022LL;
          goto LABEL_36;
        }
        goto LABEL_64;
      case 0xEu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1112LL;
          goto LABEL_36;
        }
        goto LABEL_64;
      case 0xFu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1117LL;
          goto LABEL_36;
        }
        goto LABEL_64;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v19);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1122LL;
          goto LABEL_36;
        }
        goto LABEL_64;
      case 0x12u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1028LL;
          goto LABEL_36;
        }
        if ( *((_DWORD *)this + 25) == v12 )
          goto LABEL_172;
        goto LABEL_64;
      case 0x13u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5), v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1037LL;
          goto LABEL_36;
        }
        goto LABEL_64;
      case 0x14u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(*((_QWORD *)this + 5), v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_173;
          v8 = 1043LL;
          goto LABEL_36;
        }
        goto LABEL_64;
    }
    goto LABEL_161;
  }
  switch ( v2 )
  {
    case 9u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 104LL))(
             *((_QWORD *)this + 5),
             &si128);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_173;
        v8 = 1085LL;
        goto LABEL_36;
      }
LABEL_177:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128i *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &si128,
             16LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_173;
        v8 = 1308LL;
        goto LABEL_36;
      }
      goto LABEL_172;
    case 0u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_173;
        v8 = 1097LL;
        goto LABEL_36;
      }
      goto LABEL_163;
    case 1u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v14);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_173;
        v8 = 1102LL;
        goto LABEL_36;
      }
      goto LABEL_163;
    case 2u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 980LL;
          goto LABEL_36;
        }
        goto LABEL_173;
      }
      goto LABEL_163;
    case 3u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v14);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1004LL;
          goto LABEL_36;
        }
        goto LABEL_173;
      }
      goto LABEL_163;
    case 4u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1010LL;
          goto LABEL_36;
        }
        goto LABEL_173;
      }
      goto LABEL_163;
    case 5u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1016LL;
          goto LABEL_36;
        }
        goto LABEL_173;
      }
      goto LABEL_163;
    case 6u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1107LL;
          goto LABEL_36;
        }
        goto LABEL_173;
      }
      goto LABEL_163;
  }
  if ( v2 != 7 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), &si128);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v8 = 1067LL;
LABEL_36:
        McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::PropertyChangeHelper", v8, v4);
        goto LABEL_173;
      }
      goto LABEL_173;
    }
LABEL_163:
    if ( !v2 )
      goto LABEL_198;
    if ( v2 != 1 )
    {
      if ( v2 != 2 )
      {
        if ( v2 != 3 )
        {
          if ( v2 == 4 )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   4LL,
                   &v15,
                   4LL);
            v7 = v4;
            if ( v4 < 0 )
            {
              if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
                goto LABEL_173;
              v8 = 1326LL;
              goto LABEL_36;
            }
            goto LABEL_172;
          }
          if ( v2 != 5 && v2 != 6 && v2 != 7 )
            goto LABEL_177;
          goto LABEL_198;
        }
        goto LABEL_222;
      }
LABEL_198:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &v12,
             4LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_173;
        v8 = 1204LL;
        goto LABEL_36;
      }
      goto LABEL_172;
    }
LABEL_222:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v14,
           8LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_173;
      v8 = 1261LL;
      goto LABEL_36;
    }
    goto LABEL_172;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v12);
  v7 = v4;
  if ( v4 >= 0 )
    goto LABEL_163;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 1091LL;
    goto LABEL_36;
  }
LABEL_173:
  MsgRelease(v14);
  MsgRelease(v17[0]);
  return v7;
}
