/*
 * XREFs of HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14055324C
 * Callers:
 *     HalpInterruptEnumerateUnmaskedInterrupts @ 0x14053E140 (HalpInterruptEnumerateUnmaskedInterrupts.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedSecondaryInterrupts(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // si
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 i; // r14
  int v11; // edx
  unsigned __int8 v12; // [rsp+78h] [rbp+20h]

  if ( !SecondaryIcServicesEnabled )
    return 3221225659LL;
  v6 = 1;
  v7 = HalpAcquireHighLevelLock(&SecondaryIcListSpinLock);
  v8 = SecondaryIcList;
  v12 = v7;
  do
  {
    if ( (__int64 *)v8 == &SecondaryIcList )
      break;
    v9 = 0;
    for ( i = *(_QWORD *)(v8 + 32); v9 < *(_DWORD *)(v8 + 20); ++v9 )
    {
      if ( *(_BYTE *)(v8 + 16 * (v9 + 10LL) + 12) )
      {
        v11 = *(_DWORD *)(v8 + 16);
        *(_WORD *)(a3 + 4) = 1;
        *(_DWORD *)(a3 + 16) = v9 + v11;
        *(_DWORD *)(a3 + 8) = *(_DWORD *)(v8 + 16 * (v9 + 10LL) + 4);
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v8 + 16 * (v9 + 10LL));
        if ( (int)guard_dispatch_icall_no_overrides(i) >= 0 )
        {
          v6 = guard_dispatch_icall_no_overrides(a2);
          if ( !v6 )
            break;
        }
      }
    }
    v8 = *(_QWORD *)v8;
  }
  while ( v6 );
  HalpReleaseHighLevelLock((__int64)&SecondaryIcListSpinLock, v12);
  return 0LL;
}
