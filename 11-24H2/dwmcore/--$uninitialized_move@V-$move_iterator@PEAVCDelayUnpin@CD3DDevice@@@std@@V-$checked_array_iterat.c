/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802B88B0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180245388 (-ensure_extra_capacity@-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@de.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@Z @ 0x180245770 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@_J@std@@YA-A_TAEA.c)
 *     ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z @ 0x1802B8A84 (--0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
        __int64 a1,
        const struct CD3DDevice::CDelayUnpin *a2,
        const struct CD3DDevice::CDelayUnpin *a3,
        _QWORD *a4)
{
  const struct CD3DDevice::CDelayUnpin *v4; // rbx
  CD3DDevice::CDelayUnpin *v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = (CD3DDevice::CDelayUnpin *)std::_Get_unwrapped_n<stdext::checked_array_iterator<D2D1::Matrix3x2F *> &,__int64>(
                                    a4,
                                    0xAAAAAAAAAAAAAAABuLL * ((a3 - a2) >> 3));
  while ( v4 != a3 )
  {
    CD3DDevice::CDelayUnpin::CDelayUnpin(v8, v4);
    v8 = (CD3DDevice::CDelayUnpin *)((char *)v8 + 24);
    v4 = (const struct CD3DDevice::CDelayUnpin *)((char *)v4 + 24);
  }
  result = a1;
  a4[2] = 0xAAAAAAAAAAAAAAABuLL * (((__int64)v8 - *a4) >> 3);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
