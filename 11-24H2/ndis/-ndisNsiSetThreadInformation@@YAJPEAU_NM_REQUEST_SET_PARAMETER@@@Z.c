/*
 * XREFs of ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140087D20
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1400C81B0 (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x140162110 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x140166F40 (NdisSetThreadObjectCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetThreadInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  int v3; // eax

  if ( *((_DWORD *)a1 + 15) )
    return 3221225474LL;
  if ( !*((_DWORD *)a1 + 14)
    && (!(unsigned int)Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledDeviceUsageNoInline() || *((_QWORD *)a1 + 5)) )
  {
    v3 = *((_DWORD *)a1 + 13);
    if ( !v3 )
      return NdisSetThreadObjectCompartmentId(KeGetCurrentThread(), **((unsigned int **)a1 + 5));
    if ( v3 == 4 )
      return NdisSetThreadObjectCompartmentScope(KeGetCurrentThread(), **((unsigned int **)a1 + 5));
  }
  return 3221225485LL;
}
