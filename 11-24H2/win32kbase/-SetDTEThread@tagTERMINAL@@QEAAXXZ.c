/*
 * XREFs of ?SetDTEThread@tagTERMINAL@@QEAAXXZ @ 0x1401626B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline @ 0x1401A7B28 (Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall tagTERMINAL::SetDTEThread(tagTERMINAL *this)
{
  Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 8) = **((_QWORD **)this + 2);
  if ( (unsigned int)Feature_TERMNOIO_CSRSS_Session_Fix__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)this |= 4u;
}
