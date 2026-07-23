/*
 * XREFs of ExpQueryModuleInformationImageEx @ 0x140A8F600
 * Callers:
 *     <none>
 * Callees:
 *     ExpConvertLdrEntryToModuleInfo @ 0x140A8F6A4 (ExpConvertLdrEntryToModuleInfo.c)
 */

__int64 __fastcall ExpQueryModuleInformationImageEx(int a1, __int64 a2)
{
  _WORD *v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax

  v3 = *(_WORD **)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 20);
  v5 = v4 + 320;
  if ( v4 + 320 < v4 )
  {
    result = 3221225473LL;
    *(_DWORD *)a2 = -1073741823;
  }
  else
  {
    *(_DWORD *)(a2 + 20) = v5;
    if ( *(_DWORD *)(a2 + 16) < v5 )
    {
      **(_DWORD **)(a2 + 24) = v5;
      *(_DWORD *)a2 = -1073741820;
    }
    else
    {
      *v3 = 320;
      ExpConvertLdrEntryToModuleInfo(*(_DWORD *)(a2 + 32), a1, *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 40), (__int64)v3);
      v3[160] = 0;
      *(_QWORD *)(a2 + 8) = v3 + 160;
    }
    ++*(_DWORD *)(a2 + 36);
    return 0LL;
  }
  return result;
}
