/*
 * XREFs of IoctlQueryEnduranceInformation @ 0x140020DA0
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall IoctlQueryEnduranceInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // r15d
  __int64 SrbDataBuffer; // r13
  _DWORD *v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int *v12; // [rsp+A0h] [rbp+18h] BYREF
  __int64 SrbExtension; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v12 = 0LL;
  v4 = 0;
  SrbExtension = GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v12);
  v7 = (_DWORD *)(SrbDataBuffer + 28);
  v8 = *v12;
  if ( *v12 >= 0x54 )
  {
    v10 = v8 - 28;
    if ( (v10 & 3) != 0 )
    {
      if ( v10 )
        memset(v7, 0, v10);
    }
    else
    {
      v11 = v10 >> 2;
      if ( v11 )
        memset(v7, 0, 4LL * v11);
    }
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    v2 = -1056964605;
  }
  else
  {
    if ( v8 < 0x24 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v4 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  *(_DWORD *)(SrbDataBuffer + 32) = 56;
  *v7 = 56;
  result = v2;
  *(_DWORD *)(SrbDataBuffer + 24) = v4;
  return result;
}
