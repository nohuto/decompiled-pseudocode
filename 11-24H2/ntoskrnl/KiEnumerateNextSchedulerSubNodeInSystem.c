/*
 * XREFs of KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300
 * Callers:
 *     KiRemoveForceParkedProcessorsFromAffinity @ 0x14042B3A0 (KiRemoveForceParkedProcessorsFromAffinity.c)
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     KiGetNumberOfActiveSubNodes @ 0x14042C3A8 (KiGetNumberOfActiveSubNodes.c)
 *     KiChooseTargetProcessor @ 0x1404DE410 (KiChooseTargetProcessor.c)
 *     KiConfigureCooperativeIdleSearchContextTargets @ 0x1405B3B28 (KiConfigureCooperativeIdleSearchContextTargets.c)
 *     KiGetNextClockOwner @ 0x1405B781C (KiGetNextClockOwner.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KiEnumerateNextSchedulerSubNodeInSystem(unsigned __int16 *a1, _QWORD *a2)
{
  unsigned __int64 *v4; // rbp
  int v5; // r8d
  __int64 v6; // r10
  int v7; // r15d
  int v8; // r9d
  __int64 v9; // r14
  int v10; // r8d
  unsigned __int64 *v11; // rax
  char v12; // dl
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v14; // rcx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // edx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  char v23; // dl

  v4 = (unsigned __int64 *)(a1 + 8);
  while ( 1 )
  {
    v5 = (unsigned __int8)v4 & 7;
    v6 = 0LL;
    if ( 8 - (unsigned __int64)((unsigned __int8)v4 & 7) <= 4 )
    {
      v8 = 8 - v5;
      v7 = (4 - (8 - (_BYTE)v5)) & 7;
      v9 = 4LL - (unsigned int)(v7 + 8 - v5);
    }
    else
    {
      v7 = 0;
      v8 = 4;
      v9 = 0LL;
    }
    v10 = 0;
    v11 = v4;
    if ( v8 )
    {
      do
      {
        v12 = *(_BYTE *)v11;
        v11 = (unsigned __int64 *)((char *)v11 + 1);
        ++v10;
        v6 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
        --v8;
      }
      while ( v8 );
      v4 = (unsigned __int64 *)(a1 + 8);
    }
    if ( v9 )
    {
      v21 = ((unsigned __int64)(v9 - 1) >> 3) + 1;
      v10 += 8 * v21;
      do
      {
        v22 = *v11++;
        v6 += (unsigned int)__popcnt(v22);
        --v21;
      }
      while ( v21 );
    }
    for ( ; v7; --v7 )
    {
      v23 = *(_BYTE *)v11;
      v11 = (unsigned __int64 *)((char *)v11 + 1);
      ++v10;
      v6 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v23);
    }
    if ( v6 )
      break;
    v16 = *a1;
    if ( a1[1] )
    {
      v19 = (unsigned __int16)KeNumberNodes;
      v20 = *((_DWORD *)a1 + 1) + 1;
      *((_DWORD *)a1 + 1) = v20;
      if ( v20 == v19 )
      {
LABEL_19:
        *a1 = -1;
        return 2147483674LL;
      }
      v17 = *(unsigned int *)(qword_140E2DC10 + 4LL * (unsigned int)(v20 + v19 * v16));
    }
    else
    {
      v17 = *a1;
      a1[1] = 1;
    }
    if ( (_DWORD)v17 == -1 )
      goto LABEL_19;
    v18 = KeNodeBlock[v17];
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *((_QWORD *)a1 + 1) = v18;
    RtlCopyVolatileMemory(a1 + 8, (const void *)(v18 + 16), 0x10uLL);
  }
  FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(a1 + 8);
  _bittestandreset64((signed __int64 *)a1 + 2, FirstSetRightGroupMask);
  v14 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL * FirstSetRightGroupMask + 32);
  if ( !v14 )
    return 2147483674LL;
  *a2 = v14;
  return 0LL;
}
