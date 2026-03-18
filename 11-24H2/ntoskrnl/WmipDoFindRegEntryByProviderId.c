/*
 * XREFs of WmipDoFindRegEntryByProviderId @ 0x140338F70
 * Callers:
 *     WmipFindRegEntryByProviderId @ 0x140338ED0 (WmipFindRegEntryByProviderId.c)
 *     IoWMIWriteEvent @ 0x14042E980 (IoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall WmipDoFindRegEntryByProviderId(int a1)
{
  _DWORD *result; // rax

  for ( result = WmipInUseRegEntryHead; result != (_DWORD *)&WmipInUseRegEntryHead; result = *(_DWORD **)result )
  {
    if ( result[14] == a1 && (int)result[12] >= 0 )
      return result;
  }
  return 0LL;
}
