/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x140026CF4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     Feature_VsFidTimeoutOverride__private_IsEnabledDeviceUsageNoInline @ 0x140017860 (Feature_VsFidTimeoutOverride__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall NVMeBuildPollingConfiguration(__int64 a1, unsigned __int8 a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // rdx
  char v6; // cl
  char v7; // cl
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  __int16 v17; // ax

  if ( *(_BYTE *)(a1 + 20) )
    return;
  LocalCommandReuse(a1, a1 + 1008);
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 1u;
  IsEnabledDeviceUsageNoInline = Feature_VsFidTimeoutOverride__private_IsEnabledDeviceUsageNoInline();
  v5 = *(_QWORD *)(a1 + 1104);
  v6 = *(_BYTE *)(v5 + 4225);
  if ( IsEnabledDeviceUsageNoInline )
    v7 = v6 | 2;
  else
    v7 = v6 & 0xFD;
  *(_BYTE *)(v5 + 4225) = v7;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v8 = *(_QWORD *)(a1 + 1104);
  v9 = *(_QWORD *)(a1 + 1664);
  *(_BYTE *)(v8 + 4096) = 10;
  *(_QWORD *)(v8 + 4120) = v9;
  *(_BYTE *)(v8 + 4136) = -48;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4192LL) = NVMeBuildDevicePollingConfiguration;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, a2);
  if ( *(_BYTE *)(a1 + 3752) )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 3752) = 1;
LABEL_8:
    v10 = *(_DWORD *)(a1 + 3776);
    if ( v10 )
    {
      if ( v10 > 0x64 )
        v10 = 100;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 64);
    }
    *(_DWORD *)(a1 + 3756) = v10;
    v11 = *(_DWORD *)(a1 + 3780);
    if ( !v11 )
      v11 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 3760) = v11;
    v12 = *(_DWORD *)(a1 + 3784);
    if ( (v12 & 1) == 0 )
    {
      v13 = *(_DWORD *)(a1 + 108) >> 1;
      v14 = *(_DWORD *)(a1 + 3764) ^ ((unsigned __int8)v13 ^ (unsigned __int8)*(_DWORD *)(a1 + 3764)) & 2;
      v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)v13) & 4 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v14 ^ (v14 ^ v13) & 4)) & 8;
      v16 = v15 ^ ((unsigned __int8)v13 ^ (unsigned __int8)v15) & 0x10 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v15 ^ (v13 ^ v15) & 0x10)) & 0x20;
      v12 = v16 ^ ((unsigned __int8)v13 ^ (unsigned __int8)v16) & 0x40 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(v16 ^ (v13 ^ v16) & 0x40)) & 0x80;
    }
    *(_DWORD *)(a1 + 3764) = v12;
  }
  if ( (unsigned int)Feature_VsFidTimeoutOverride__private_IsEnabledDeviceUsageNoInline()
    && *(_WORD *)(a1 + 3772) >= 0x101u )
  {
    v17 = *(_WORD *)(a1 + 3790);
    if ( v17 )
      *(_WORD *)(a1 + 3770) = v17;
  }
}
