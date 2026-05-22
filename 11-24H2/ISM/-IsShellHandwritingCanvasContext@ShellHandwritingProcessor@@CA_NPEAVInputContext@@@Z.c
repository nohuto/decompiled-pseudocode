/*
 * XREFs of ?IsShellHandwritingCanvasContext@ShellHandwritingProcessor@@CA_NPEAVInputContext@@@Z @ 0x1801AEFC0
 * Callers:
 *     ?OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AF060 (-OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

bool __fastcall ShellHandwritingProcessor::IsShellHandwritingCanvasContext(struct InputContext *a1)
{
  HWND v1; // rcx
  WCHAR ClassName[264]; // [rsp+30h] [rbp-228h] BYREF

  v1 = *(HWND *)(*((_QWORD *)a1 + 22) + 80LL);
  return v1
      && GetClassNameW(v1, ClassName, 260)
      && CompareStringOrdinal(L"ShellHandwritingCanvas {18E91349-E229-4995-8049-7437243BBCC3}", -1, ClassName, -1, 1) == 2;
}
