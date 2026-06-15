/*
 * XREFs of ?GetFormatCount@CAPOWrapperClient@@UEAAJPEAI@Z @ 0x1800AC020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::GetFormatCount(CAPOWrapperClient *this, unsigned int *a2)
{
  if ( *((_DWORD *)this + 12) )
    return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 2) + 88LL))(
             *((_QWORD *)this + 2),
             a2);
  else
    return 2147500034LL;
}
