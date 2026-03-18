/*
 * XREFs of DCompositionNotifyPendingPresent @ 0x140075320
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x14007C31C (DirectComposition--Memory--Allocate_0.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall DCompositionNotifyPendingPresent(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _RTL_GENERIC_TABLE *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // r9d
  __int64 i; // r8
  int v10; // eax
  int v11; // r14d
  void *v12; // rax
  void *v13; // rbp
  char *v14; // rcx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(W32GetDCompSessionState() + 24);
  if ( v4 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)v4);
    v5 = *(struct _RTL_GENERIC_TABLE **)(v4 + 8);
    Buffer[0] = a1;
    Buffer[1] = 0LL;
    v6 = RtlLookupElementGenericTable(v5, Buffer);
    if ( v6 )
    {
      v7 = v6[1];
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 20);
        for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
        {
          if ( a2 == *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8 * i) )
            goto LABEL_10;
        }
        v10 = *(_DWORD *)(v7 + 24);
        if ( v8 != v10 )
        {
LABEL_9:
          *(_QWORD *)(*(_QWORD *)(v7 + 72) + 8LL * (unsigned int)(*(_DWORD *)(v7 + 20))++) = a2;
LABEL_10:
          ++*(_DWORD *)(v7 + 16);
          goto LABEL_11;
        }
        v11 = v10 + 5;
        v12 = (void *)DirectComposition::Memory::Allocate_0(8LL * (unsigned int)(v10 + 5));
        v13 = v12;
        if ( v12 )
        {
          memmove(v12, *(const void **)(v7 + 72), 8LL * *(unsigned int *)(v7 + 20));
          v14 = *(char **)(v7 + 72);
          if ( v14 != (char *)(v7 + 28) )
            GreDeleteFastMutex(v14);
          *(_QWORD *)(v7 + 72) = v13;
          *(_DWORD *)(v7 + 24) = v11;
          goto LABEL_9;
        }
      }
    }
LABEL_11:
    ExReleaseResourceLite(*(PERESOURCE *)v4);
    KeLeaveCriticalRegion();
  }
}
