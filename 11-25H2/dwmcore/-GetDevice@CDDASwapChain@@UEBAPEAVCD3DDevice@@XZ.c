/*
 * XREFs of ?GetDevice@CDDASwapChain@@UEBAPEAVCD3DDevice@@XZ @ 0x1802D1710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDDASwapChain::GetDevice(CDDASwapChain *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  else
    return 0LL;
}
