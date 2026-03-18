/*
 * XREFs of EtwpApplyTransientFilters @ 0x140837304
 * Callers:
 *     EtwpNotifyGuid @ 0x140836EE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14083B040 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x140A7DE18 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x140A7F474 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x140A7F91C (EtwpApplyPackageIdFilter.c)
 */

bool __fastcall EtwpApplyTransientFilters(__int64 a1, _QWORD *a2)
{
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx

  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 1;
  v5 = (_DWORD *)a2[1];
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
    {
      if ( v5[i + 1] == *(_DWORD *)(v6 + 464) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( (unsigned __int8)EtwpApplyExeFilter(a1, a2[2]) && (unsigned __int8)EtwpApplyContainerFilter(a1, a2[5]) )
      return (unsigned __int8)EtwpApplyPackageIdFilter(a1, a2[3], a2[4]) != 0;
  }
  return 0;
}
