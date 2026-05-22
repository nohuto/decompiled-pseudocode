/*
 * XREFs of ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180038F90
 * Callers:
 *     ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180080FB0 (-Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180084BC0 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800E07F8 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?Release@LampArrayRawInputProvider@@W7EAAKXZ @ 0x1800E1170 (-Release@LampArrayRawInputProvider@@W7EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBA@EAAKXZ @ 0x1800E1180 (-Release@LampArrayRawInputProvider@@WBA@EAAKXZ.c)
 *     ?Release@LampArrayRawInputProvider@@WBI@EAAKXZ @ 0x1800E1190 (-Release@LampArrayRawInputProvider@@WBI@EAAKXZ.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180039250 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E11A0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::Release(ULONG_PTR dwData)
{
  unsigned int v2; // ebx

  v2 = InputContext::Release((InputContext *)(dwData + 24));
  if ( v2 == 1 )
    LampArrayRawInputProvider::Shutdown(dwData);
  return v2;
}
