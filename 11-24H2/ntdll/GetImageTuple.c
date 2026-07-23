/*
 * XREFs of GetImageTuple @ 0x1800E39FC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     GetModuleFullPathName @ 0x18007C3E8 (GetModuleFullPathName.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

char __fastcall GetImageTuple(int *a1, char *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  char *v7; // rax
  int v8; // edx
  int v9; // ecx
  unsigned int ModuleFullPathName; // eax
  unsigned int v12; // edx
  unsigned int i; // ecx

  if ( !a1 )
    return 0;
  v7 = (char *)a1 + a1[15];
  if ( *((_WORD *)v7 + 12) == 267 || *((_WORD *)v7 + 12) == 523 )
  {
    v8 = *((_DWORD *)v7 + 20);
    v9 = *((_DWORD *)v7 + 2);
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  *a4 = v9;
  *a5 = v8;
  ModuleFullPathName = (unsigned int)GetModuleFullPathName(a1, a2);
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
    memmove(a2, &a2[v12 + 1], 259 - v12);
  return 1;
}
