/*
 * XREFs of NvmeControllerUpdateResumeLatencyTolerance @ 0x140132B18
 * Callers:
 *     NvmeControllerPowerActive @ 0x1401323E8 (NvmeControllerPowerActive.c)
 *     NvmeControllerPowerSetFState @ 0x140132460 (NvmeControllerPowerSetFState.c)
 *     NvmeControllerPowerSettingChangeNotification @ 0x140132680 (NvmeControllerPowerSettingChangeNotification.c)
 *     NvmeControllerSystemPowerHint @ 0x140132A30 (NvmeControllerSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeControllerUpdateResumeLatencyTolerance(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // eax

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(a1 + 1048);
  v3 = *(_QWORD *)(v1 + 160);
  v4 = *(_DWORD *)(v3 + 188);
  if ( *(_DWORD *)(v3 + 136) == 1 )
  {
    v5 = *(_DWORD *)(v2 + 72);
    if ( v5 == -1 )
      v5 = *(_DWORD *)(v3 + 192);
  }
  else
  {
    v5 = *(_DWORD *)(v2 + 68);
    if ( v5 == -1 )
    {
      v6 = *(_QWORD *)(v3 + 8);
      v7 = *(_DWORD *)(v6 + 68);
      if ( v7 && v7 < *(_DWORD *)(v6 + 16) - 1 && (v8 = *(_DWORD *)(v3 + 204), v4 <= v8) )
      {
        v9 = *(_DWORD *)(v3 + 4);
        v5 = v9 + 1;
        if ( v8 > v9 )
          v5 = *(_DWORD *)(v3 + 204);
      }
      else
      {
        v5 = *(_DWORD *)(v3 + 196);
      }
    }
  }
  *(_DWORD *)(v3 + 188) = v5;
  return v4 != v5;
}
