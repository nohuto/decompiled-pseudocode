/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x14001A970
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiUpdatePriorityTables @ 0x14001A910 (VidSchiUpdatePriorityTables.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x14004FDAC (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14000D3D0 (McTemplateK0piixqq_EtwWriteTransfer.c)
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  char v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 780));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 3012));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1836));
  if ( (unsigned int)(*(_DWORD *)(a1 + 48) - 4) > 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1840));
  if ( !*(_DWORD *)(a1 + 48) && (*(_DWORD *)(a1 + 72) & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *(unsigned int *)(a1 + 168) + 3432) + 3244LL));
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 784));
  ++*(_DWORD *)(v2 + 780);
  ++*(_DWORD *)(v5 + 3008);
  ++*(_DWORD *)(v7 + 776);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 112), v2, *(_QWORD *)(v2 + 144), *(_QWORD *)(v2 + 160));
  WdLogGlobalForLineNumber = 16309;
  v8 = *(__int64 **)(v2 + 672);
  result = a1 + 32;
  if ( *v8 != v2 + 664 )
    __fastfail(3u);
  *(_QWORD *)result = v2 + 664;
  *(_QWORD *)(a1 + 40) = v8;
  *v8 = result;
  *(_QWORD *)(v2 + 672) = result;
  if ( *(_DWORD *)(v2 + 780) == 1 )
  {
    *(_QWORD *)(v2 + 648) = a1;
    v10 = ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1) | *(_DWORD *)(v2 + 644) & 0xFFFFFFFE;
    v11 = 0;
    *(_DWORD *)(v2 + 644) = v10;
    if ( *(_DWORD *)(a1 + 48) == 3 )
      v11 = 2;
    v12 = v10 & 0xFFFFFFFD | v11;
    v13 = 0;
    *(_DWORD *)(v2 + 644) = v12;
    v14 = 0;
    if ( *(_DWORD *)(a1 + 48) == 7 )
      v13 = 4;
    v15 = v12 & 0xFFFFFFFB | v13;
    *(_DWORD *)(v2 + 644) = v15;
    if ( *(_DWORD *)(a1 + 48) == 6 )
      v14 = 8;
    *(_DWORD *)(v2 + 644) = v15 & 0xFFFFFFF7 | v14;
    result = *(unsigned int *)(v2 + 184);
    if ( (result & 0x200) == 0 )
    {
      result = *(unsigned int *)(v2 + 184);
      if ( (result & 8) == 0 )
      {
        result = *(unsigned int *)(v2 + 184);
        if ( (result & 4) == 0 )
        {
          result = *(unsigned int *)(v2 + 184);
          if ( (result & 0x10) == 0 )
          {
            result = *(unsigned int *)(v2 + 184);
            if ( (result & 0x40) == 0 )
            {
              result = *(unsigned int *)(v2 + 184);
              if ( (result & 0x80u) == 0LL )
              {
                result = *(unsigned int *)(v2 + 184);
                if ( (result & 0x100) == 0 )
                {
                  result = *(unsigned int *)(v2 + 184);
                  if ( (result & 0x20) == 0 )
                  {
                    if ( !*(_DWORD *)(v2 + 184)
                      && _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 0, 0) >= 2 )
                    {
                      v16 = *(_QWORD *)(v2 + 96);
                      v17 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v16 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v16 + 24) + 32LL),
                        &v17);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 16403LL);
                    *a2 = result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( bTracingEnabled )
  {
    if ( (byte_140081241 & 2) != 0 )
      return McTemplateK0piixqq_EtwWriteTransfer();
  }
  return result;
}
