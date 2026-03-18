/*
 * XREFs of ?ClearDTEThread@tagTERMINAL@@QEAAXXZ @ 0x140162680
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1401A7B28 (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagTERMINAL::ClearDTEThread(tagTERMINAL *this)
{
  Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 8) = 0LL;
  if ( (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)this |= 0x20u;
}
