/*
 * XREFs of NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8
 * Callers:
 *     NVMeGetControllerInitiatedTelemetry @ 0x1400281F0 (NVMeGetControllerInitiatedTelemetry.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     GetControllerMaxTransferSize @ 0x1400065A0 (GetControllerMaxTransferSize.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommandForTelemetryLog @ 0x14001F064 (BuildGetLogPageCommandForTelemetryLog.c)
 *     memmove @ 0x1400311C0 (memmove.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeGetControllerInitiatedTelemetryLog(__int64 a1, unsigned int a2)
{
  size_t v2; // rsi
  unsigned int ControllerMaxTransferSize; // eax
  __int64 v5; // rcx
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  unsigned int DmaBuffer; // edi
  __int64 v10; // r9
  _OWORD *v11; // rcx
  unsigned int v12; // edx
  unsigned int v13; // r13d
  unsigned int v14; // r13d
  __int64 v15; // rbx
  unsigned int v16; // r8d
  __int64 v17; // rbx
  unsigned int v18; // r8d
  __int64 v19; // r13
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  int v24; // [rsp+28h] [rbp-28h]
  unsigned int v25; // [rsp+90h] [rbp+40h]
  void *Src; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+58h]

  v2 = a2;
  ControllerMaxTransferSize = GetControllerMaxTransferSize((_DWORD *)a1);
  v6 = (_QWORD *)(v5 + 3976);
  v7 = 512;
  Src = 0LL;
  v27 = 0LL;
  v25 = 512;
  v8 = ControllerMaxTransferSize;
  DmaBuffer = StorPortExtendedFunction(0LL, v5, (unsigned int)v2, 1701672526LL);
  if ( !DmaBuffer )
  {
    v11 = (_OWORD *)*v6;
    if ( *v6 )
    {
      if ( (v2 & 3) != 0 )
      {
        if ( (_DWORD)v2 )
          memset(v11, 0, v2);
      }
      else if ( (unsigned int)v2 >> 2 )
      {
        memset(v11, 0, 4LL * ((unsigned int)v2 >> 2));
      }
      v12 = v8;
      *(_DWORD *)(a1 + 3984) = v2;
      if ( (unsigned int)v2 < v8 )
        v12 = v2;
      DmaBuffer = NVMeAllocateDmaBuffer(a1, v12);
      if ( !DmaBuffer )
      {
        if ( !Src )
          return DmaBuffer;
        while ( v7 < (unsigned int)v2 )
        {
          v13 = v8;
          if ( (unsigned int)v2 - v7 < v8 )
            v13 = v2 - v7;
          v14 = v13 & 0xFFFFFE00;
          if ( !v14 )
          {
            DmaBuffer = -1056964598;
            goto LABEL_23;
          }
          LocalCommandReuse(a1, a1 + 1008);
          v15 = *(_QWORD *)(a1 + 1072);
          LOBYTE(v16) = 8;
          *(_BYTE *)(v15 + 4225) |= 3u;
          *(_WORD *)(v15 + 4212) = 0;
          BuildGetLogPageCommandForTelemetryLog(a1, v15, v16, v14, v27, v24, v25, 0, 1u);
          *(_BYTE *)(v15 + 4225) |= 4u;
          *(_QWORD *)(v15 + 4160) = Src;
          *(_QWORD *)(v15 + 4168) = v27;
          *(_DWORD *)(v15 + 4208) = v14;
          ProcessCommand(a1, a1 + 1016);
          WaitForCommandComplete(a1, a1 + 1016, 1u);
          if ( *(_BYTE *)(a1 + 1019) != 1 )
            goto LABEL_18;
          memmove((void *)(*v6 + v25), Src, v14);
          v7 = v14 + v25;
          v25 += v14;
        }
        LocalCommandReuse(a1, a1 + 1008);
        v17 = *(_QWORD *)(a1 + 1072);
        LOBYTE(v18) = 8;
        *(_BYTE *)(v17 + 4225) |= 3u;
        *(_WORD *)(v17 + 4212) = 0;
        BuildGetLogPageCommandForTelemetryLog(a1, v17, v18, 0x200u, v27, v24, 0LL, 1, *(_BYTE *)(a1 + 148) & 1);
        v19 = 4LL;
        *(_BYTE *)(v17 + 4225) |= 4u;
        *(_QWORD *)(v17 + 4160) = Src;
        *(_QWORD *)(v17 + 4168) = v27;
        *(_DWORD *)(v17 + 4208) = 512;
        ProcessCommand(a1, a1 + 1016);
        WaitForCommandComplete(a1, a1 + 1016, 1u);
        if ( *(_BYTE *)(a1 + 1019) != 1 )
        {
LABEL_18:
          DmaBuffer = -1056964607;
          goto LABEL_23;
        }
        v20 = (_OWORD *)*v6;
        v21 = Src;
        do
        {
          *v20 = *v21;
          v20[1] = v21[1];
          v20[2] = v21[2];
          v20[3] = v21[3];
          v20[4] = v21[4];
          v20[5] = v21[5];
          v20[6] = v21[6];
          v20 += 8;
          v22 = v21[7];
          v21 += 8;
          *(v20 - 1) = v22;
          --v19;
        }
        while ( v19 );
      }
    }
  }
LABEL_23:
  if ( Src )
  {
    if ( (unsigned int)v2 < v8 )
      v8 = v2;
    NVMeFreeDmaBuffer(a1, v8, (__int64 *)&Src, v27);
  }
  if ( DmaBuffer )
  {
    if ( *v6 )
      StorPortExtendedFunction(1LL, a1, *v6, v10);
    *(_OWORD *)v6 = 0LL;
  }
  return DmaBuffer;
}
