/*
 * XREFs of HalpInterruptMarkProcessorStarted @ 0x14053F388
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x140553F2C (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptMarkProcessorStarted(int a1)
{
  char v2; // bp
  char v3; // r9
  unsigned int v4; // r10d
  unsigned int Group; // esi
  unsigned __int8 GroupIndex; // r14
  unsigned int v7; // ebx
  char v8; // r11
  ULONG_PTR v9; // r8
  int v10; // edx
  unsigned int i; // edx
  unsigned __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp+10h]

  HIBYTE(v13) = 0;
  if ( HalpInterruptProcessorStateInitialized )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    Group = KeGetCurrentPrcb()->Group;
    LOWORD(v13) = Group;
    GroupIndex = KeGetCurrentPrcb()->GroupIndex;
    BYTE2(v13) = GroupIndex;
    v7 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      while ( 1 )
      {
        v8 = 0;
        v9 = HalpInterruptProcessorState + ((unsigned __int64)v4 << 6);
        if ( *(_BYTE *)(v9 + 12) || !(_WORD)Group && !GroupIndex )
          v8 = 1;
        v10 = (unsigned int)HalpInterruptGicVersion < 3
            ? *(_DWORD *)v9
            : (*(_QWORD *)(v9 + 48) >> 8) ^ (*(_DWORD *)(v9 + 48) ^ (*(_QWORD *)(v9 + 48) >> 8)) & 0xFFFFFF;
        if ( v8 && v10 == a1 )
          break;
        if ( *(_BYTE *)(v9 + 13) && (*(_DWORD *)v9 & v7) == (a1 & v7) )
          v3 = 1;
        if ( v2 )
          goto LABEL_22;
LABEL_23:
        if ( ++v4 >= (unsigned int)HalpInterruptProcessorCount )
          goto LABEL_24;
      }
      if ( !*(_BYTE *)(v9 + 13) )
        _InterlockedAdd(&HalpInterruptProcessorsStarted, 1u);
      *(_BYTE *)(v9 + 15) = 1;
      *(_BYTE *)(v9 + 13) = 1;
      *(_DWORD *)(v9 + 16) = v13;
      *(_DWORD *)(v9 + 20) = KeGetPcr()->Prcb.Number;
      if ( !(_WORD)Group && !GroupIndex )
        *(_BYTE *)(v9 + 12) = 1;
      v2 = 1;
LABEL_22:
      if ( v3 )
        goto LABEL_24;
      goto LABEL_23;
    }
LABEL_24:
    for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
    {
      v12 = HalpInterruptDynamicProcessorState + ((unsigned __int64)i << 6);
      if ( *(_BYTE *)(v12 + 12) && *(_DWORD *)v12 == a1 )
      {
        *(_BYTE *)(v12 + 13) = 1;
        *(_DWORD *)(v12 + 16) = v13;
        *(_DWORD *)(v12 + 20) = KeGetPcr()->Prcb.Number;
        break;
      }
    }
    if ( !v3 )
      ++HalpInterruptPackagesStarted;
    if ( Group > HalpInterruptMaxGroupStarted )
      HalpInterruptMaxGroupStarted = Group;
  }
}
