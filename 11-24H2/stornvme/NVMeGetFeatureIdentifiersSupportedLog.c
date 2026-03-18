/*
 * XREFs of NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1400222F0 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1400065E0 (BuildGetLogPageCommand.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeGetFeatureIdentifiersSupportedLog(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 *v6; // r14
  void *v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 1104);
  v9 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 1560);
    if ( (*(_BYTE *)(result + 261) & 0x20) != 0 )
    {
      v6 = (__int64 *)(a1 + 4256);
      v7 = *(void **)(a1 + 4256);
      if ( v7 )
      {
        result = *(_QWORD *)(a1 + 4264);
        v9 = result;
        if ( !result )
          return result;
      }
      else
      {
        result = NVMeAllocateDmaBuffer(a1, 0x400u);
        v7 = (void *)*v6;
        if ( !*v6 )
          return result;
        *(_QWORD *)(a1 + 4264) = 0LL;
      }
      memset(v7, 0, 0x400uLL);
      LocalCommandReuse(a1, a1 + 1008);
      *(_BYTE *)(v2 + 4225) |= 3u;
      LOBYTE(v8) = 18;
      *(_WORD *)(v2 + 4212) = 0;
      BuildGetLogPageCommand(a1, v2, v8, 0x400u, v9, -1, 0LL, 0);
      *(_BYTE *)(v2 + 4225) |= 4u;
      *(_QWORD *)(v2 + 4160) = *v6;
      *(_QWORD *)(v2 + 4168) = v9;
      *(_DWORD *)(v2 + 4208) = 1024;
      ProcessCommand(a1, a1 + 1016);
      result = WaitForCommandComplete(a1, a1 + 1016, a2);
      if ( *(_BYTE *)(a1 + 1019) != 1 )
      {
        result = NVMeFreeDmaBuffer(a1, 1024LL, v6, *(_QWORD *)(a1 + 4264));
        *v6 = 0LL;
        *(_QWORD *)(a1 + 4264) = 0LL;
      }
    }
  }
  return result;
}
