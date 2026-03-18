/*
 * XREFs of NVMeDirectiveStreamsGetStatus @ 0x1400279FC
 * Callers:
 *     IoctlStorageStreamsGetOpenStreams @ 0x14002158C (IoctlStorageStreamsGetOpenStreams.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x140006710 (SetPrpFromBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeDirectiveStreamsGetStatus(__int64 a1, int a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned __int16 *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // ebx
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  if ( !a4 )
    return 3238002694LL;
  if ( !a3 )
    return 3238002694LL;
  v9 = a5;
  if ( !a5 )
    return 3238002694LL;
  *a4 = 0;
  LocalCommandReuse(a1, a1 + 1008);
  v10 = *(_QWORD *)(a1 + 1104);
  v11 = 2 * a3 + 2;
  NVMeAllocateDmaBuffer(a1, v11);
  if ( !v17 )
    return 3238002691LL;
  if ( (v11 & 3) != 0 )
  {
    if ( 2 * a3 != -2 )
      memset(v17, 0, v11);
  }
  else if ( v11 >> 2 )
  {
    memset(v17, 0, 4LL * (v11 >> 2));
  }
  if ( !(unsigned int)SetPrpFromBuffer(a1, v10, 0LL, v11) )
    goto LABEL_18;
  *(_BYTE *)(v10 + 4225) |= 7u;
  *(_DWORD *)(v10 + 4100) = a2;
  *(_DWORD *)(v10 + 4136) = (v11 >> 2) - 1;
  *(_QWORD *)(v10 + 4192) = NVMeDirectiveCompletion;
  *(_BYTE *)(v10 + 4096) = 26;
  *(_WORD *)(v10 + 4140) = 258;
  SrbAssignQueueId(a1, a1 + 1016);
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    v13 = (unsigned __int16 *)v17;
    v14 = *(unsigned __int16 *)v17;
    *a4 = v14;
    if ( a3 < v14 )
    {
      v16 = -1056964604;
    }
    else
    {
      v15 = 0LL;
      if ( v14 )
      {
        do
        {
          *(_DWORD *)(v9 + 4 * v15) = v13[v15 + 1];
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *v13 );
      }
      v16 = 0;
    }
  }
  else
  {
LABEL_18:
    v13 = (unsigned __int16 *)v17;
    v16 = -1056964607;
  }
  if ( v13 )
    NVMeFreeDmaBuffer(a1, v11, (__int64 *)&v17, 0LL);
  return v16;
}
