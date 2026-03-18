/*
 * XREFs of ??4?$RedirectedFieldlpfnWndProc@P6A_JPEAUtagWND@@I_K_J@Z@tagWND@@QEAAAEBQ6A_JPEAU1@I_K_J@ZAEBQ6A_J0I12@Z@Z @ 0x1C01FFB60
 * Callers:
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall tagWND::RedirectedFieldlpfnWndProc<__int64 (*)(tagWND *,unsigned int,unsigned __int64,__int64)>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 172) + 120LL) = *a2;
  return a2;
}
