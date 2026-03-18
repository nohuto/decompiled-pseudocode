/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x140140FF0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z @ 0x140141044 (-CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 MouseProcessor; // rax
  unsigned int v3; // ebx
  __int64 v4; // xmm0_8
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  MouseProcessor = anonymous_namespace_::GetMouseProcessor(a1);
  v3 = 0;
  if ( MouseProcessor )
  {
    v4 = *(_QWORD *)a1;
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v4;
    return (unsigned __int8)CMouseProcessor::CanAccessMouseOwner(MouseProcessor, &v6) != 0;
  }
  return v3;
}
