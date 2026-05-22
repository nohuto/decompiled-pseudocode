/*
 * XREFs of ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180035A20
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800810C0 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180084BE0 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800E3728 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?Release@LampArrayRawInputProvider@@W7EAAKXZ @ 0x1800E40A0 (-Release@LampArrayRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBA@EAAKXZ @ 0x1800E40B0 (-Release@LampArrayRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBI@EAAKXZ @ 0x1800E40C0 (-Release@LampArrayRawInputProvider@@WBI@EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E40D0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Release(ULONG_PTR dwData)
{
  unsigned int v2; // ebx

  v2 = InputContext::Release((InputContext *)(dwData + 24));
  if ( v2 == 1 )
    LampArrayRawInputProvider::Shutdown(dwData);
  return v2;
}
