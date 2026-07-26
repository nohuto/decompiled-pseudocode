/*
 * XREFs of ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1400675C0
 * Callers:
 *     ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140067380 (-ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIsSatisfiedByOidGenStatistics(unsigned int a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = 0;
  if ( a1 == 131332 )
    return 16;
  if ( a1 <= 0x20201 )
  {
    if ( a1 == 131585 )
      return 128LL;
    if ( a1 == 131331 )
      return 88LL;
    return v1;
  }
  switch ( a1 )
  {
    case 0x20202u:
      result = 64LL;
      break;
    case 0x20203u:
      result = 136LL;
      break;
    case 0x20204u:
      result = 72LL;
      break;
    case 0x20205u:
      result = 144LL;
      break;
    case 0x20206u:
      result = 80LL;
      break;
    case 0x20207u:
      result = 104LL;
      break;
    case 0x20208u:
      result = 32LL;
      break;
    case 0x20209u:
      result = 112LL;
      break;
    case 0x2020Au:
      result = 40LL;
      break;
    case 0x2020Bu:
      result = 120LL;
      break;
    case 0x2020Cu:
      result = 48LL;
      break;
    case 0x20219u:
      return 24;
    case 0x2021Au:
      return 56;
    case 0x2021Bu:
      result = 8LL;
      break;
    case 0x2021Cu:
      return 96;
    default:
      return v1;
  }
  return result;
}
