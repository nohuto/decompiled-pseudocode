/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801C6820
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801C6680 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1801C6770 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x180195268 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_KSOD@@@details@wil@@QEAA_NXZ @ 0x1801C7BC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_KSOD@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  unsigned int v2; // r14d
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r9
  _BYTE v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v16[3]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+70h] [rbp-90h]
  __m128i si128; // [rsp+78h] [rbp-88h] BYREF
  __int128 v21; // [rsp+88h] [rbp-78h] BYREF
  int v22; // [rsp+98h] [rbp-68h]
  _BYTE v23[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 >= 0x29u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_179;
  v11 = 0;
  v17 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v12 = 0;
  v10[0] = 0;
  v16[0] = 0;
  memset_0(v23, 0, 0x58uLL);
  v15 = -1;
  v18 = 0LL;
  v19 = 0;
  v22 = 0;
  v21 = 0LL;
  if ( v2 > 0x15 )
  {
    if ( v2 <= 0x20 )
    {
      switch ( v2 )
      {
        case 0x20u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 288LL))(
                 *((_QWORD *)this + 5),
                 &v13);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1177LL;
            goto LABEL_36;
          }
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v13,
                 8LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1296LL;
            goto LABEL_36;
          }
          goto LABEL_179;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v23);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1002LL;
            goto LABEL_36;
          }
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 v23,
                 88LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1335LL;
            goto LABEL_36;
          }
          goto LABEL_179;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1008LL;
            goto LABEL_36;
          }
          break;
        case 0x18u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1080LL;
            goto LABEL_36;
          }
          break;
        case 0x19u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1152LL;
            goto LABEL_36;
          }
          break;
        case 0x1Au:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1162LL;
            goto LABEL_36;
          }
          break;
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1157LL;
            goto LABEL_36;
          }
          break;
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 &v17);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1104LL;
            goto LABEL_36;
          }
          break;
        case 0x1Eu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1167LL;
            goto LABEL_36;
          }
          break;
        case 0x1Fu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 280LL))(
                 *((_QWORD *)this + 5),
                 &v12);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1172LL;
            goto LABEL_36;
          }
          break;
        default:
          goto LABEL_168;
      }
LABEL_194:
      if ( v2 == 23 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               23LL,
               &v14,
               8LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1305LL;
          goto LABEL_36;
        }
        goto LABEL_179;
      }
      if ( v2 != 24 && v2 != 25 && v2 != 26 )
      {
        if ( v2 == 27 )
          goto LABEL_208;
        if ( v2 != 28 )
        {
          if ( v2 == 29 )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   29LL,
                   &v17,
                   8LL);
            v7 = v4;
            if ( v4 < 0 )
            {
              if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
                goto LABEL_180;
              v8 = 1247LL;
              goto LABEL_36;
            }
            goto LABEL_179;
          }
          if ( v2 != 30 )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   31LL,
                   &v12,
                   2LL);
            v7 = v4;
            if ( v4 < 0 )
            {
              if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
                goto LABEL_180;
              v8 = 1238LL;
              goto LABEL_36;
            }
            goto LABEL_179;
          }
        }
      }
      goto LABEL_225;
    }
    switch ( v2 )
    {
      case '!':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1182LL;
          goto LABEL_36;
        }
        break;
      case '"':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 304LL))(
               *((_QWORD *)this + 5),
               &v21);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1187LL;
          goto LABEL_36;
        }
        goto LABEL_217;
      case '#':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 312LL))(
               *((_QWORD *)this + 5),
               &v13);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1192LL;
          goto LABEL_36;
        }
        goto LABEL_217;
      case '$':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 320LL))(
               *((_QWORD *)this + 5),
               &v13);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1197LL;
          goto LABEL_36;
        }
        goto LABEL_217;
      case '%':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1202LL;
          goto LABEL_36;
        }
        break;
      case '&':
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 336LL))(
               *((_QWORD *)this + 5),
               &v14);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1014LL;
          goto LABEL_36;
        }
        goto LABEL_217;
      case '\'':
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_KSOD>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_KSOD>::GetImpl'::`2'::impl) )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 344LL))(
                 *((_QWORD *)this + 5),
                 &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1022LL;
            goto LABEL_36;
          }
        }
        goto LABEL_217;
      case '(':
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 352LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1086LL;
          goto LABEL_36;
        }
        goto LABEL_217;
    }
LABEL_168:
    if ( v2 <= 0x16 )
      goto LABEL_64;
    if ( v2 <= 0x20 )
      goto LABEL_194;
LABEL_217:
    if ( v2 != 33 )
    {
      if ( v2 == 34 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               34LL,
               &v21,
               20LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1372LL;
          goto LABEL_36;
        }
LABEL_179:
        v7 = 0;
        goto LABEL_180;
      }
      if ( v2 == 35 || v2 == 36 )
        goto LABEL_235;
      if ( v2 != 37 )
      {
        if ( v2 == 38 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 38LL,
                 &v14,
                 8LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_180;
            v8 = 1314LL;
            goto LABEL_36;
          }
          goto LABEL_179;
        }
        if ( v2 == 39 )
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_KSOD>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_KSOD>::GetImpl'::`2'::impl) )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   (unsigned __int16)v2,
                   &v14,
                   8LL);
            v7 = v4;
            if ( v4 < 0 )
            {
              if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
                goto LABEL_180;
              v8 = 1325LL;
              goto LABEL_36;
            }
          }
          goto LABEL_179;
        }
        if ( v2 != 40 )
          goto LABEL_179;
      }
    }
LABEL_225:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           v10,
           1LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_180;
      v8 = 1265LL;
      goto LABEL_36;
    }
    goto LABEL_179;
  }
  if ( v2 == 21 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 200LL))(*((_QWORD *)this + 5), v16);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_180;
      v8 = 1074LL;
      goto LABEL_36;
    }
    goto LABEL_64;
  }
  if ( v2 > 9 )
  {
    switch ( v2 )
    {
      case 0xAu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1098LL;
          goto LABEL_36;
        }
        break;
      case 0xDu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1047LL;
          goto LABEL_36;
        }
        break;
      case 0xEu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1137LL;
          goto LABEL_36;
        }
        break;
      case 0xFu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1142LL;
          goto LABEL_36;
        }
        break;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v18);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1147LL;
          goto LABEL_36;
        }
        break;
      case 0x12u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1053LL;
          goto LABEL_36;
        }
        if ( *((_DWORD *)this + 25) == v11 )
          goto LABEL_179;
        break;
      case 0x13u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1062LL;
          goto LABEL_36;
        }
        break;
      case 0x14u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1068LL;
          goto LABEL_36;
        }
        break;
      default:
        goto LABEL_168;
    }
LABEL_64:
    switch ( v2 )
    {
      case 0xAu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
        goto LABEL_208;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               16LL,
               &v18,
               12LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1354LL;
          goto LABEL_36;
        }
        goto LABEL_179;
      case 0x12u:
        goto LABEL_208;
    }
    if ( v2 != 19 && v2 != 20 )
    {
      if ( v2 == 21 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               21LL,
               v16,
               4LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_180;
          v8 = 1274LL;
          goto LABEL_36;
        }
      }
      goto LABEL_179;
    }
    goto LABEL_225;
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
          goto LABEL_180;
        v8 = 1110LL;
        goto LABEL_36;
      }
LABEL_184:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128i *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &si128,
             16LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_180;
        v8 = 1345LL;
        goto LABEL_36;
      }
      goto LABEL_179;
    case 0u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_180;
        v8 = 1122LL;
        goto LABEL_36;
      }
      goto LABEL_170;
    case 1u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_180;
        v8 = 1127LL;
        goto LABEL_36;
      }
      goto LABEL_170;
    case 2u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 996LL;
          goto LABEL_36;
        }
        goto LABEL_180;
      }
      goto LABEL_170;
    case 3u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1029LL;
          goto LABEL_36;
        }
        goto LABEL_180;
      }
      goto LABEL_170;
    case 4u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1035LL;
          goto LABEL_36;
        }
        goto LABEL_180;
      }
      goto LABEL_170;
    case 5u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1041LL;
          goto LABEL_36;
        }
        goto LABEL_180;
      }
      goto LABEL_170;
    case 6u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 1132LL;
          goto LABEL_36;
        }
        goto LABEL_180;
      }
      goto LABEL_170;
  }
  if ( v2 != 7 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 96LL))(*((_QWORD *)this + 5), &si128);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v8 = 1092LL;
LABEL_36:
        McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::PropertyChangeHelper", v8, v4);
        goto LABEL_180;
      }
      goto LABEL_180;
    }
LABEL_170:
    if ( !v2 )
      goto LABEL_208;
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
                goto LABEL_180;
              v8 = 1363LL;
              goto LABEL_36;
            }
            goto LABEL_179;
          }
          if ( v2 != 5 && v2 != 6 && v2 != 7 )
            goto LABEL_184;
          goto LABEL_208;
        }
        goto LABEL_235;
      }
LABEL_208:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &v11,
             4LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_180;
        v8 = 1229LL;
        goto LABEL_36;
      }
      goto LABEL_179;
    }
LABEL_235:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v13,
           8LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_180;
      v8 = 1286LL;
      goto LABEL_36;
    }
    goto LABEL_179;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v11);
  v7 = v4;
  if ( v4 >= 0 )
    goto LABEL_170;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 1116LL;
    goto LABEL_36;
  }
LABEL_180:
  MsgRelease(v13);
  MsgRelease(v14);
  return v7;
}
