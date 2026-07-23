/*
 * XREFs of RtlpFlsAlloc @ 0x140787754
 * Callers:
 *     PspTlsAlloc @ 0x14077A658 (PspTlsAlloc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1405EF848 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z @ 0x1405EF920 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rax

  v6 = (char *)KeAbPreAcquire((__int64)&PspTlsContext, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PspTlsContext, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PspTlsContext, v6, (__int64)&PspTlsContext);
  v9 = 0;
  if ( v8 )
    v8[10] = 1;
  v10 = 8LL;
  while ( 1 )
  {
    v11 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotAllocate((__int64)(&PspTlsContext + 1));
    if ( v11 == -1 )
    {
      v9 = -1073741801;
      goto LABEL_25;
    }
    v12 = v11 - 16;
    if ( v11 != 16 )
      break;
    _BitScanReverse((unsigned int *)&v13, 0x10u);
    v14 = *(&PspTlsContext + (unsigned int)(v13 - 4) + 1);
    if ( v14 )
      v15 = v14 + 8 * (((1 << v13) ^ 0x10u) + 4LL * ((1 << v13) ^ 0x10u) + 2);
    else
      v15 = 8LL;
    *(_QWORD *)v15 = -1LL;
  }
  if ( v12 >= 0xF0 )
  {
    v9 = -1073741801;
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotFree((__int64)(&PspTlsContext + 1), v11);
LABEL_25:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext);
    KeAbPostRelease((ULONG_PTR)&PspTlsContext);
    return v9;
  }
  _BitScanReverse(&v16, v11);
  v17 = v11 ^ (1 << v16);
  v18 = *(&PspTlsContext + v16 - 3);
  if ( v18 )
  {
    v19 = v18 + 8 * (v17 + 4 * v17 + 3);
    v10 = v18 + 8 * (v17 + 4 * v17 + 2);
  }
  else
  {
    v19 = 16LL;
  }
  if ( !a3 )
    a3 = -1LL;
  *(_QWORD *)v10 = a3;
  *(_QWORD *)v19 = 0LL;
  if ( v12 > dword_140E28228 )
    dword_140E28228 = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspTlsContext, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspTlsContext);
  KeAbPostRelease((ULONG_PTR)&PspTlsContext);
  *a5 = v12;
  return v9;
}
