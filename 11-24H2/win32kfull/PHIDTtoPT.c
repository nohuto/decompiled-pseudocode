/*
 * XREFs of PHIDTtoPT @ 0x14018F4FC
 * Callers:
 *     PostPointerEventMessage @ 0x14012D8F0 (PostPointerEventMessage.c)
 *     _GetPointerDeviceType @ 0x14018F428 (_GetPointerDeviceType.c)
 *     _GetPointerDeviceInfoProperties @ 0x14018F464 (_GetPointerDeviceInfoProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PHIDTtoPT(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 1;
  if ( *(_DWORD *)(a1 + 24) == 1 || *(_DWORD *)(a1 + 24) == 2 || *(_DWORD *)(a1 + 24) == 3 || *(_DWORD *)(a1 + 24) == 4 )
  {
    return 3;
  }
  else if ( *(_DWORD *)(a1 + 24) != 5 )
  {
    if ( *(_DWORD *)(a1 + 24) == 6 )
    {
      return 2;
    }
    else if ( *(_DWORD *)(a1 + 24) == 7 )
    {
      return 4;
    }
  }
  return v1;
}
