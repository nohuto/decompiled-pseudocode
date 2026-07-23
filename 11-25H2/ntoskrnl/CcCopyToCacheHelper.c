/*
 * XREFs of CcCopyToCacheHelper @ 0x140404E90
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     HviCopyMemoryNonTemporal @ 0x140404F44 (HviCopyMemoryNonTemporal.c)
 *     HviCopyMemory @ 0x14040513C (HviCopyMemory.c)
 *     RtlFlushNonVolatileMemory @ 0x1404F89F0 (RtlFlushNonVolatileMemory.c)
 *     RtlCopyMemoryNonTemporal @ 0x1406A8770 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

bool *__fastcall CcCopyToCacheHelper(__int64 a1, void *a2, const void *a3, unsigned int a4, char a5, bool *a6)
{
  int v7; // ebx
  SIZE_T v8; // rsi
  bool *result; // rax
  DWORD v10; // eax
  NTSTATUS v11; // edi

  v7 = *(_DWORD *)(a1 + 152) & 0x40000000;
  if ( a5 )
  {
    if ( !v7 )
    {
      HviCopyMemory(a2, a3, a4);
      goto LABEL_4;
    }
    v10 = HviCopyMemoryNonTemporal(a2, a3, a4);
    goto LABEL_7;
  }
  v8 = a4;
  if ( !v7 )
  {
    memmove(a2, a3, a4);
    goto LABEL_4;
  }
  v11 = 0;
  if ( a4 < 8uLL )
  {
    memmove(a2, a3, a4);
    v10 = RtlFlushNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, a2, v8, 0);
LABEL_7:
    v11 = v10;
    goto LABEL_8;
  }
  RtlCopyMemoryNonTemporal(a2, a3, a4);
LABEL_8:
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
LABEL_4:
  result = a6;
  *a6 = v7 == 0;
  return result;
}
