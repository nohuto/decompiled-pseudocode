/*
 * XREFs of Amd64FreeCounter @ 0x140568634
 * Callers:
 *     Amd64DisableMonitoring @ 0x140568320 (Amd64DisableMonitoring.c)
 *     Amd64InitializeCacheStatusEnhanced @ 0x140568914 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeCacheStatusOriginal @ 0x140568B50 (Amd64InitializeCacheStatusOriginal.c)
 *     Amd64InitializeDataFabricStatusEnhanced @ 0x140568D4C (Amd64InitializeDataFabricStatusEnhanced.c)
 *     Amd64InitializeDataFabricStatusOriginal @ 0x140568EDC (Amd64InitializeDataFabricStatusOriginal.c)
 *     Amd64InitializeProfilingEnhanced @ 0x140B52F18 (Amd64InitializeProfilingEnhanced.c)
 *     Amd64InitializeProfilingOriginal @ 0x140B534D8 (Amd64InitializeProfilingOriginal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64FreeCounter(unsigned int a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v4 = a1;
  result = KiProcessorBlock[v2];
  v6 = *(_QWORD *)(result + 88);
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v6 += 24LL;
        break;
      case 100:
        v6 += 48LL;
        break;
      case 101:
        v6 += 72LL;
        break;
      default:
        v6 = 0LL;
        break;
    }
  }
  v7 = *(_QWORD *)(v6 + 16);
  v8 = 6LL * a1;
  *(_DWORD *)(v7 + 8 * v8 + 36) = 0;
  *(_DWORD *)(v7 + 8 * v8 + 24) = 3;
  if ( !a2 )
  {
    result = *(_QWORD *)(v7 + 48 * v4 + 16);
    if ( *(_BYTE *)(result + 8) )
    {
      *(_BYTE *)(result + 8) = 0;
      result = 6LL * (unsigned int)(v4 + 1);
      *(_DWORD *)(v7 + 8 * result + 36) = 0;
      *(_DWORD *)(v7 + 8 * result + 24) = 3;
    }
  }
  return result;
}
