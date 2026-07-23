/*
 * XREFs of RtlTlsAlloc @ 0x1800B1410
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x1800B0DA8 (RtlpHpEnvTlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x180032C60 (RtlSetBits.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpTlsHeapAlloc @ 0x1800B16E0 (RtlpTlsHeapAlloc.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlTlsAlloc(_DWORD *a1)
{
  struct _TEB *v1; // rdi
  _PEB *ProcessEnvironmentBlock; // rbp
  _RTL_BITMAP *TlsBitmap; // r11
  int v5; // r10d
  unsigned int v6; // esi
  _QWORD *v7; // r9
  __int64 *v8; // rbx
  __int64 i; // rax
  unsigned int v10; // ebx
  void **TlsExpansionSlots; // rsi
  _RTL_BITMAP *TlsExpansionBitmap; // r10
  int v13; // r9d
  ULONG v14; // r11d
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 *v17; // rbx
  __int64 j; // rax
  __int64 v19; // rbx
  ULONG v21; // ebx
  void **v22; // rax
  void **v23; // rbx

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  while ( 1 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    TlsBitmap = ProcessEnvironmentBlock->TlsBitmap;
    v5 = ((__int64)TlsBitmap->Buffer & 4) != 0LL ? 0x20 : 0;
    v6 = v5 + TlsBitmap->SizeOfBitMap - 1;
    v7 = (_QWORD *)((char *)TlsBitmap->Buffer - (((__int64)TlsBitmap->Buffer & 4) != 0 ? 4 : 0));
    if ( TlsBitmap->SizeOfBitMap )
    {
      v8 = (__int64 *)((char *)TlsBitmap->Buffer - (((__int64)TlsBitmap->Buffer & 4) != 0 ? 4 : 0));
      for ( i = *v7 | ((1LL << v5) - 1); i == -1; i = *v8 )
      {
        if ( ++v8 > &v7[(unsigned __int64)v6 >> 6] )
          goto LABEL_8;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v10 = i + ((unsigned int)(v8 - v7) << 6);
      if ( v10 != -1 && v10 <= v6 )
      {
        v19 = v10 - v5;
        if ( (_DWORD)v19 != -1 )
        {
          RtlSetBits(TlsBitmap, v19, 1u);
          RtlLeaveCriticalSection(&FastPebLock);
          v1->TlsSlots[v19] = 0LL;
LABEL_17:
          *a1 = v19;
          return 0LL;
        }
      }
    }
LABEL_8:
    TlsExpansionSlots = v1->TlsExpansionSlots;
    if ( TlsExpansionSlots )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    v22 = (void **)RtlpTlsHeapAlloc();
    v23 = v22;
    if ( !v22 )
      return 3221225495LL;
    memset_thunk_772440563353939046(v22, 0, 0x2000uLL);
    v1->TlsExpansionSlots = v23;
  }
  TlsExpansionBitmap = ProcessEnvironmentBlock->TlsExpansionBitmap;
  v13 = ((__int64)TlsExpansionBitmap->Buffer & 4) != 0LL ? 0x20 : 0;
  v14 = v13 + TlsExpansionBitmap->SizeOfBitMap - 1;
  v15 = ((__int64)TlsExpansionBitmap->Buffer & 4) != 0 ? 4 : 0;
  v16 = (_QWORD *)((char *)TlsExpansionBitmap->Buffer - v15);
  if ( !TlsExpansionBitmap->SizeOfBitMap )
    goto LABEL_19;
  v17 = (__int64 *)((char *)TlsExpansionBitmap->Buffer - v15);
  for ( j = *v16 | ((1LL << v13) - 1); j == -1; j = *v17 )
  {
    if ( ++v17 > &v16[(unsigned __int64)v14 >> 6] )
      goto LABEL_19;
  }
  _BitScanForward64((unsigned __int64 *)&j, ~j);
  v21 = j + ((unsigned int)(v17 - v16) << 6);
  if ( v21 <= v14 )
  {
    if ( v21 != -1 )
    {
      v21 -= v13;
      if ( v21 != -1 )
        RtlSetBits(ProcessEnvironmentBlock->TlsExpansionBitmap, v21, 1u);
    }
  }
  else
  {
LABEL_19:
    v21 = -1;
  }
  RtlLeaveCriticalSection(&FastPebLock);
  if ( v21 != -1 )
  {
    TlsExpansionSlots[v21] = 0LL;
    LODWORD(v19) = v21 + 64;
    goto LABEL_17;
  }
  return 3221225495LL;
}
