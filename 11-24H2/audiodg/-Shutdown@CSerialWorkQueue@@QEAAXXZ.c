/*
 * XREFs of ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x140041508
 * Callers:
 *     _lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_ @ 0x1400414D0 (_lambda_c342fc516001507c28ba370cc30be3fa_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::Shutdown(CSerialWorkQueue *this)
{
  int v2; // eax

  if ( _Mtx_lock((CSerialWorkQueue *)((char *)this + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_5;
  }
  v2 = *((_DWORD *)this + 29);
  if ( v2 == 0x7FFFFFFF )
  {
LABEL_5:
    *((_DWORD *)this + 29) = v2 - 1;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x14004157ELL);
  }
  *((_BYTE *)this + 80) = 1;
  _Mtx_unlock((CSerialWorkQueue *)((char *)this + 88));
}
