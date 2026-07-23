/*
 * XREFs of IoGetLoadedDriverInfo @ 0x1404A6EC8
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     IoFillTriageDumpBuffer @ 0x14058E2EC (IoFillTriageDumpBuffer.c)
 * Callees:
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 */

__int64 __fastcall IoGetLoadedDriverInfo(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  int v4; // edi
  int i; // esi
  int v8; // eax
  __int64 result; // rax

  v3 = (PVOID *)PsLoadedModuleList;
  v4 = 0;
  for ( i = 0; ; i += v8 + 9 )
  {
    if ( v3 == &PsLoadedModuleList )
    {
      *a2 = v4;
      result = 0LL;
      *a3 = i;
      return result;
    }
    if ( !(unsigned __int8)IopIsAddressRangeValid(v3, 160LL)
      || !(unsigned __int8)IopIsAddressRangeValid(v3[12], *((unsigned __int16 *)v3 + 44)) )
    {
      break;
    }
    v8 = *((unsigned __int16 *)v3 + 44);
    ++v4;
    v3 = (PVOID *)*v3;
  }
  return 3221225473LL;
}
