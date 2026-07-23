/*
 * XREFs of HvlpInitializeSvmIommuSupport @ 0x1405881D8
 * Callers:
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     HvlGetSystemPasidCapabilities @ 0x140584560 (HvlGetSystemPasidCapabilities.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 HvlpInitializeSvmIommuSupport()
{
  int v0; // ebx
  __int64 v1; // rcx
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0;
  HvlGetSystemPasidCapabilities((__int64)&v5);
  if ( (v5 & 1) == 0 )
    return 3221225659LL;
  v0 = HIDWORD(v5);
  if ( !HIDWORD(v5) )
    return 3221225659LL;
  qword_140E3EE50 = ExAllocatePool2(0x40uLL, 104LL * HIDWORD(v5), 0x204C5648u);
  v1 = qword_140E3EE50;
  if ( !qword_140E3EE50 )
    return 3221225626LL;
  dword_140E3EE48 = v0;
  v3 = 0;
  if ( v0 )
  {
    while ( 1 )
    {
      v4 = v1 + 104LL * v3;
      *(_DWORD *)v4 = v3;
      *(_QWORD *)(v4 + 32) = HvlpIommuPrqDpcRoutine;
      *(_DWORD *)(v4 + 8) = 275;
      *(_QWORD *)(v4 + 40) = v4;
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
      *(_QWORD *)(v4 + 96) = v4;
      *(_QWORD *)(v4 + 88) = HvlpProcessIommuPrq;
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_DWORD *)(v4 + 4) = 3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 72), HyperCriticalWorkQueue);
      if ( ++v3 >= dword_140E3EE48 )
        break;
      v1 = qword_140E3EE50;
    }
  }
  return 0LL;
}
