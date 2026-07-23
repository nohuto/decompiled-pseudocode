/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x1801441D0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x18000116C (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpActivateLowFragmentationHeap @ 0x180037C0C (RtlpActivateLowFragmentationHeap.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011F114 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x18015950C (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 *HeapHandle, __int64 a2)
{
  int v4; // ecx
  __int64 (__fastcall *v5)(); // rcx
  unsigned __int16 HeapInterceptorIndex; // ax
  int v7; // r10d
  __int64 *v8; // rsi
  __int64 v9; // rcx
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    v4 = *((_DWORD *)HeapHandle + 6);
  else
    v4 = *((_DWORD *)HeapHandle + 36);
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( v4 )
      RtlpCallInterceptRoutine(v4, HeapHandle, 0LL, 7u, 0LL);
    v5 = (__int64 (__fastcall *)())RtlpStackTraceDatabaseLogPrefix;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)())a2;
    if ( !*(_QWORD *)a2 )
      goto LABEL_13;
  }
  HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(v5);
  if ( HeapInterceptorIndex )
  {
    if ( v7 == -571548178 )
      RtlpHpHeapSetInterceptor(HeapHandle, HeapInterceptorIndex);
    else
      *((_DWORD *)HeapHandle + 36) = HeapInterceptorIndex;
  }
LABEL_13:
  if ( *((_DWORD *)HeapHandle + 4) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    if ( (v8 = HeapHandle + 51, *((_BYTE *)HeapHandle + 418) == 2) && (v9 = *v8) != 0
      || (RtlpActivateLowFragmentationHeap(HeapHandle), *((_BYTE *)HeapHandle + 418) == 2) && (v9 = *v8) != 0 )
    {
      v10 = (_BYTE *)(v9 + 679);
      v11 = 129LL;
      do
      {
        v12 = *(_QWORD *)(a2 + 24);
        if ( !v12 && !*(_QWORD *)(a2 + 32)
          || (v13 = *(unsigned __int16 *)(v10 - 3), v13 >= v12 >> 4) && v13 <= *(_QWORD *)(a2 + 32) >> 4 )
        {
          *v10 ^= (*v10 ^ (2 * *(_BYTE *)(a2 + 12))) & 6;
        }
        v10 += 4;
        --v11;
      }
      while ( v11 );
    }
  }
  return 0LL;
}
