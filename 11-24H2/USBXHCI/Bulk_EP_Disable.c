/*
 * XREFs of Bulk_EP_Disable @ 0x140038BD0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 */

char __fastcall Bulk_EP_Disable(__int64 a1)
{
  char result; // al
  signed __int32 v3; // ecx

  for ( result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 40));
        result;
        result = Controller_IsControllerAccessible(*(_QWORD *)(a1 + 40)) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 1004LL) == 1 )
    {
      _m_prefetchw((const void *)(a1 + 108));
      v3 = _InterlockedOr((volatile signed __int32 *)(a1 + 108), 0);
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 108);
    }
    result = v3 - 1;
    if ( ((v3 - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( v3 )
        _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
      return result;
    }
  }
  return result;
}
