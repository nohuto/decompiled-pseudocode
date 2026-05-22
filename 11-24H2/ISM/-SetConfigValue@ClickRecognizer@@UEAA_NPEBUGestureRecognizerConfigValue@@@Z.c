/*
 * XREFs of ?SetConfigValue@ClickRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801B4DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ClickRecognizer::SetConfigValue(ClickRecognizer *this, const struct GestureRecognizerConfigValue *a2)
{
  char v2; // r10

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      *((_WORD *)this + 13) = *((_WORD *)a2 + 2);
      break;
    case 2:
      *((_WORD *)this + 12) = *((_WORD *)a2 + 2);
      break;
    case 3:
      *((_WORD *)this + 14) = *((_WORD *)a2 + 2);
      break;
    case 4:
      *((_WORD *)this + 15) = *((_WORD *)a2 + 2);
      break;
    case 5:
      *((_WORD *)this + 16) = *((_WORD *)a2 + 2);
      break;
    case 6:
      *((_WORD *)this + 17) = *((_WORD *)a2 + 2);
      break;
    case 7:
      *((_WORD *)this + 18) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
