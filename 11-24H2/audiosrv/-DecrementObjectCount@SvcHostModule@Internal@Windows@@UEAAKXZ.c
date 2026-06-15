/*
 * XREFs of ?DecrementObjectCount@SvcHostModule@Internal@Windows@@UEAAKXZ @ 0x18004AB10
 * Callers:
 *     ?DecrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ @ 0x1800CC470 (-DecrementObjectCount@SvcHostModule@Internal@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::SvcHostModule::DecrementObjectCount(Windows::Internal::SvcHostModule *this)
{
  __int64 result; // rax

  result = CoReleaseSharedService(*((unsigned int *)this + 14));
  if ( !(_DWORD)result )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
    return 0LL;
  }
  return result;
}
