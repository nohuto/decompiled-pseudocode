/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x140022DA0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rbx
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  if ( *(_BYTE *)(v3 + 2) == 40 )
    v5 = *(_QWORD *)(v3 + 64);
  else
    v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v5 + 28);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( v6 >= *(_DWORD *)(SrbExtension + 4208) )
      v6 = *(_DWORD *)(SrbExtension + 4208);
    memmove((void *)(v5 + *(unsigned int *)(v5 + 44)), *(const void **)(SrbExtension + 4160), v6);
  }
  else
  {
    *(_BYTE *)(v3 + 3) = 1;
  }
  result = NVMeFreeDmaBuffer(
             a1,
             *(unsigned int *)(SrbExtension + 4208),
             (__int64 *)(SrbExtension + 4160),
             *(_QWORD *)(SrbExtension + 4168));
  *(_DWORD *)(SrbExtension + 4208) = 0;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  return result;
}
