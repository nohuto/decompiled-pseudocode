/*
 * XREFs of ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022F950
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x14022DBE0 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetBufferProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  char *v9; // rsi
  void *v10; // rax
  void *v11; // rbp

  v6 = 0;
  switch ( a3 )
  {
    case 4:
      v8 = 112LL;
      break;
    case 5:
      v8 = 128LL;
      break;
    case 6:
      v8 = 144LL;
      break;
    case 7:
      v8 = 160LL;
      break;
    default:
      return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
  }
  v9 = (char *)this + v8;
  if ( (DirectComposition::CTableTransferEffectMarshaler *)((char *)this + v8) )
  {
    if ( (Size & 3) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v10 = (void *)Win32AllocPoolWithQuotaImpl((__int64)this, Size, 0x62664344u);
      v11 = v10;
      if ( v10 )
      {
        memmove(v10, a4, Size);
        if ( *(_QWORD *)v9 )
          GreDeleteFastMutex(*(char **)v9);
        *(_QWORD *)v9 = v11;
        *((_QWORD *)v9 + 1) = (unsigned int)(Size >> 2);
        *a6 = 1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
