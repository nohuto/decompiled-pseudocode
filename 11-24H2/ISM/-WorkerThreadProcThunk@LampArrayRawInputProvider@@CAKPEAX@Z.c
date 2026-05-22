/*
 * XREFs of ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180084BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180035A20 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060240 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProcThunk(LampArrayRawInputProvider *Parameter)
{
  DWORD v2; // edi
  HMODULE v3; // rbx

  if ( Parameter )
  {
    v2 = LampArrayRawInputProvider::WorkerThreadProc(Parameter);
    v3 = (HMODULE)*((_QWORD *)Parameter + 21);
    *((_QWORD *)Parameter + 21) = 0LL;
    LampArrayRawInputProvider::Release((ULONG_PTR)Parameter);
    FreeLibraryAndExitThread(v3, v2);
  }
  return 87LL;
}
