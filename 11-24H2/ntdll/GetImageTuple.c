/*
 * XREFs of GetImageTuple @ 0x1800AE238
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     GetModuleFullPathName @ 0x1800AFB48 (GetModuleFullPathName.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

char __fastcall GetImageTuple(__int64 a1, _BYTE *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int ModuleFullPathName; // eax
  int v12; // edx
  int i; // ecx

  if ( !a1 )
    return 0;
  v7 = a1 + *(int *)(a1 + 60);
  if ( *(_WORD *)(v7 + 24) == 267 || *(_WORD *)(v7 + 24) == 523 )
  {
    v8 = *(_DWORD *)(v7 + 80);
    v9 = *(_DWORD *)(v7 + 8);
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  *a4 = v9;
  *a5 = v8;
  ModuleFullPathName = GetModuleFullPathName(a1, a2);
  if ( !ModuleFullPathName )
    return 0;
  v12 = ModuleFullPathName - 1;
  for ( i = ModuleFullPathName - 1; i; --i )
  {
    if ( a2[i] == 92 )
    {
      v12 = i;
      break;
    }
  }
  if ( v12 != 259 )
    memmove(a2, &a2[v12 + 1], (unsigned int)(259 - v12));
  return 1;
}
