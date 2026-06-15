/*
 * XREFs of ??$_Construct_in_place@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YAXAEAUPool@CEndpointResourcePool@Sarm@@AEAI1AEA_J@Z @ 0x180122B90
 * Callers:
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x180122BF4 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::_Construct_in_place<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        __int64 *a4)
{
  unsigned __int64 result; // rax
  __int64 v6; // rcx
  int v7; // r9d

  result = *a2;
  v6 = *a4;
  v7 = *a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = 1500000LL;
  *(_DWORD *)(a1 + 16) = result;
  *(_DWORD *)(a1 + 20) = v7;
  if ( v6 > 0 )
  {
    result = ((__int64)((unsigned __int128)((v6 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 14)
           + ((unsigned __int64)((unsigned __int128)((v6 + 99999) * (__int128)0x29F16B11C6D1E109LL) >> 64) >> 63)
           + 1;
    *(_QWORD *)(a1 + 8) = 100000 * result;
  }
  return result;
}
