/*
 * XREFs of ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x180122BF4
 * Callers:
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x180122D98 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YAXAEAUPool@CEndpointResourcePool@Sarm@@AEAI1AEA_J@Z @ 0x180122B90 (--$_Construct_in_place@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YAXAEAUPool@CEndpoin.c)
 */

_QWORD *__fastcall std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
        _QWORD *a1,
        unsigned int *a2,
        int *a3,
        __int64 *a4)
{
  _DWORD *v8; // rax
  __int64 v9; // r11
  _QWORD *result; // rax

  v8 = operator new(0x30uLL);
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Sarm::CEndpointResourcePool::Pool>::`vftable';
    std::_Construct_in_place<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
      (__int64)(v8 + 4),
      a2,
      a3,
      a4);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 16;
  result = a1;
  a1[1] = v9;
  return result;
}
