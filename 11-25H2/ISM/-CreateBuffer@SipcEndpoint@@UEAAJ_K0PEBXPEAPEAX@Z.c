/*
 * XREFs of ?CreateBuffer@SipcEndpoint@@UEAAJ_K0PEBXPEAPEAX@Z @ 0x18010C050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcEndpoint::CreateBuffer(SipcEndpoint *this, __int64 a2, __int64 a3, const void *a4, void **a5)
{
  __int64 v6; // r10

  *a5 = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFFFFFFFFFELL || (a3 == 0) != (a4 == 0LL) )
    return 2147942487LL;
  if ( *((_BYTE *)this + 48) != 1 )
    return 2147942405LL;
  v6 = *((_QWORD *)this + 2);
  if ( !v6 )
    return 2147549183LL;
  if ( *((_BYTE *)this + 60) )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 24LL))(*((_QWORD *)this + 2));
  return 2147944650LL;
}
