/*
 * XREFs of RtlpSetHeapDebuggingInformation @ 0x180142AE0
 * Callers:
 *     RtlSetHeapDebuggingInformation @ 0x180095C6C (RtlSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpActivateLowFragmentationHeap @ 0x1800A8DCC (RtlpActivateLowFragmentationHeap.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18011D844 (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHpHeapSetInterceptor @ 0x180157F5C (RtlpHpHeapSetInterceptor.c)
 */

__int64 __fastcall RtlpSetHeapDebuggingInformation(__int64 a1, __int64 a2)
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

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v4 = *(_DWORD *)(a1 + 24);
  else
    v4 = *(_DWORD *)(a1 + 144);
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( v4 )
      RtlpCallInterceptRoutine(v4, a1, 0LL, 7u, 0LL);
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
      RtlpHpHeapSetInterceptor(a1, HeapInterceptorIndex);
    else
      *(_DWORD *)(a1 + 144) = HeapInterceptorIndex;
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 16) != -571548178 && *(_DWORD *)(a2 + 12) )
  {
    if ( (v8 = (__int64 *)(a1 + 408), *(_BYTE *)(a1 + 418) == 2) && (v9 = *v8) != 0
      || (RtlpActivateLowFragmentationHeap(a1), *(_BYTE *)(a1 + 418) == 2) && (v9 = *v8) != 0 )
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
