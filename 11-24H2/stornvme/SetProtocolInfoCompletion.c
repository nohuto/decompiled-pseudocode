/*
 * XREFs of SetProtocolInfoCompletion @ 0x140026670
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

__int64 __fastcall SetProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r9
  const void *v7; // rdx

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v6 = *(_QWORD *)(v4 + 64);
  else
    v6 = *(_QWORD *)(v4 + 24);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(result + 4208);
    result = *(unsigned int *)(result + 4208);
    if ( (_DWORD)result )
    {
      v7 = *(const void **)(v5 + 4160);
      if ( v7 )
        result = (__int64)memmove((void *)(v6 + 36 + *(unsigned int *)(v6 + 52)), v7, (unsigned int)result);
    }
  }
  else
  {
    *(_DWORD *)(v6 + 56) = 0;
  }
  if ( *(_QWORD *)(v5 + 4160) )
    result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(v5 + 4208), (__int64 *)(v5 + 4160), *(_QWORD *)(v5 + 4168));
  *(_DWORD *)(v5 + 4208) = 0;
  *(_QWORD *)(v5 + 4160) = 0LL;
  *(_BYTE *)(v5 + 4225) |= 8u;
  return result;
}
