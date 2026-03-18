/*
 * XREFs of ?SetFloatProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x14022F250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1401085A0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetFloatProperty(
        DirectComposition::CLinearTransferEffectMarshaler *this,
        __int64 a2,
        float a3,
        bool *a4)
{
  bool v5; // al

  switch ( (_DWORD)a2 )
  {
    case 4:
      if ( *((float *)this + 28) != a3 )
      {
        *((float *)this + 28) = a3;
        goto LABEL_27;
      }
      break;
    case 5:
      if ( *((float *)this + 29) != a3 )
      {
        *((float *)this + 29) = a3;
        goto LABEL_27;
      }
      break;
    case 7:
      if ( *((float *)this + 30) != a3 )
      {
        *((float *)this + 30) = a3;
        goto LABEL_27;
      }
      break;
    case 8:
      if ( *((float *)this + 31) != a3 )
      {
        *((float *)this + 31) = a3;
        goto LABEL_27;
      }
      break;
    case 0xA:
      if ( *((float *)this + 32) != a3 )
      {
        *((float *)this + 32) = a3;
        goto LABEL_27;
      }
      break;
    case 0xB:
      if ( *((float *)this + 33) != a3 )
      {
        *((float *)this + 33) = a3;
        goto LABEL_27;
      }
      break;
    case 0xD:
      if ( *((float *)this + 34) != a3 )
      {
        *((float *)this + 34) = a3;
        goto LABEL_27;
      }
      break;
    case 0xE:
      if ( *((float *)this + 35) == a3 )
        break;
      *((float *)this + 35) = a3;
LABEL_27:
      v5 = 1;
      goto LABEL_28;
    default:
      return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  v5 = 0;
LABEL_28:
  *a4 = v5;
  return 0LL;
}
