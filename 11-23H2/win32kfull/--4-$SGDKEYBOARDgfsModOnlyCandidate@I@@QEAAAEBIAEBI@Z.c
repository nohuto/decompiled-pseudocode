/*
 * XREFs of ??4?$SGDKEYBOARDgfsModOnlyCandidate@I@@QEAAAEBIAEBI@Z @ 0x1C01BF8B4
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall SGDKEYBOARDgfsModOnlyCandidate<unsigned int>::operator=(__int64 a1, int *a2)
{
  int v2; // ebx

  v2 = *a2;
  *(_DWORD *)(SGDGetUserSessionState(a1) + 13828) = v2;
  return a2;
}
