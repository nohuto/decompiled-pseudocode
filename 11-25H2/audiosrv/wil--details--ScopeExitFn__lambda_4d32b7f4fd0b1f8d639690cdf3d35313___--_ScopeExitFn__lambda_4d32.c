/*
 * XREFs of wil::details::ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___::_ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___ @ 0x18007E3E8
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$8 @ 0x180163221 (_BuildDeviceGraphForStream_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___::_ScopeExitFn__lambda_4d32b7f4fd0b1f8d639690cdf3d35313___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 144) = 0LL;
  }
  return result;
}
