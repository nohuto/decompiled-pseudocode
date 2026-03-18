/*
 * XREFs of NVMeWriteBufferFirmwareDownloadCompletion @ 0x140025420
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeWriteBufferFirmwareDownloadCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  __int64 v4; // rdi
  _QWORD *v5; // rbx

  result = GetSrbExtension(a2);
  v4 = result;
  v5 = (_QWORD *)(result + 4176);
  if ( (*(_DWORD *)(v3 + 56) & 8) != 0 || !*v5 )
  {
    *(_DWORD *)v5 = 0;
  }
  else
  {
    result = StorPortExtendedFunction(1LL, v3, *v5, v3);
    *v5 = 0LL;
  }
  *(_BYTE *)(v4 + 4225) |= 8u;
  return result;
}
