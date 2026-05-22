/*
 * XREFs of ?SetCapture@MPCInputProviderBase@@UEAAXPEAUIMPCTarget@@_N@Z @ 0x1800C13B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 */

void __fastcall MPCInputProviderBase::SetCapture(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 450, (__int64)a2);
  *((_BYTE *)this + 3624) = a3;
}
