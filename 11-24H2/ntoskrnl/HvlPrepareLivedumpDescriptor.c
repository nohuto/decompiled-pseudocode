/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x140587784
 * Callers:
 *     IopLiveDumpAllocateExtraBuffers @ 0x14059595C (IopLiveDumpAllocateExtraBuffers.c)
 * Callees:
 *     HvlSetupLiveDumpBuffer @ 0x140589A9C (HvlSetupLiveDumpBuffer.c)
 *     VslAbortLiveDump @ 0x140589E60 (VslAbortLiveDump.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058BB50 (VslpAddLiveDumpBufferChunk.c)
 *     VslpLiveDumpStart @ 0x14058BD78 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14058BE04 (VslpSetupLiveDumpBuffer.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(
        PVOID *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        __int64 a9)
{
  int v11; // r8d
  PVOID *v12; // rsi
  int v13; // ebx
  unsigned int v14; // edi

  v11 = BufferChunkSizeInPages;
  v12 = a1;
  if ( VslVsmEnabled )
  {
    v13 = VslpLiveDumpStart(a2, a3, (unsigned int)BufferChunkSizeInPages);
    if ( v13 >= 0 )
    {
      v14 = a3 + a2;
      if ( v14 )
      {
        while ( 1 )
        {
          v13 = VslpAddLiveDumpBufferChunk(*v12);
          if ( v13 < 0 )
            break;
          ++v12;
          if ( !--v14 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v13 = VslpSetupLiveDumpBuffer(a5, a6, (_DWORD)a7, (_DWORD)a8, a9);
        if ( v13 >= 0 )
          return (unsigned int)v13;
      }
      VslAbortLiveDump();
    }
  }
  else
  {
    *a7 = 0LL;
    *a8 = 0LL;
    return (unsigned int)HvlSetupLiveDumpBuffer((_DWORD)a1, a2, v11, a5, a6, a9);
  }
  return (unsigned int)v13;
}
