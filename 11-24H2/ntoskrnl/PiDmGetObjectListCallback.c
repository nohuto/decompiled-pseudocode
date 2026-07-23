/*
 * XREFs of PiDmGetObjectListCallback @ 0x1408CD240
 * Callers:
 *     PiDmListEnumObjectsWithCallback @ 0x1408CD070 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCmObjectMatchCallback @ 0x1408CD390 (PiDmCmObjectMatchCallback.c)
 */

__int64 __fastcall PiDmGetObjectListCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // esi
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v7; // r10
  unsigned int v8; // eax
  unsigned int v9; // r10d
  char *v10; // r11
  __int64 v11; // rdx
  const wchar_t *v12; // r8
  _WORD *v13; // rax
  __int64 v14; // r9
  signed __int64 v15; // r8
  __int16 v16; // cx
  _WORD *v17; // rcx
  __int64 v19; // rdx
  int matched; // eax
  char v21; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  *a3 = 0;
  v6 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))a2;
  v21 = 0;
  if ( !v6
    || ((v19 = *(_QWORD *)(a2 + 8), v6 != PiDmCmObjectMatchCallback)
      ? (matched = guard_dispatch_icall_no_overrides(a1, v19))
      : (matched = PiDmCmObjectMatchCallback(a1, v19, &v21)),
        (v4 = matched, matched >= 0) && v21) )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v7) );
    v8 = *(_DWORD *)(a2 + 24);
    v9 = v7 + 1;
    *(_DWORD *)(a2 + 28) += v9;
    if ( v8 > v9 )
    {
      v10 = *(char **)(a2 + 16);
      v11 = v8;
      v12 = *(const wchar_t **)(a1 + 16);
      if ( !v10 && v8 || v8 > 0x7FFFFFFFuLL )
        goto LABEL_25;
      if ( !v12 )
        v12 = &SourceString;
      if ( v8 )
      {
        v13 = *(_WORD **)(a2 + 16);
        v14 = 2147483646 - v11;
        v15 = (char *)v12 - v10;
        do
        {
          if ( !(v14 + v11) )
            break;
          v16 = *(_WORD *)((char *)v13 + v15);
          if ( !v16 )
            break;
          *v13++ = v16;
          --v11;
        }
        while ( v11 );
        v17 = v13 - 1;
        if ( v11 )
          v17 = v13;
        *v17 = 0;
        if ( !v11 )
LABEL_25:
          *(_WORD *)v10 = 0;
      }
      *(_QWORD *)(a2 + 16) += 2LL * v9;
      *(_DWORD *)(a2 + 24) -= v9;
    }
  }
  return v4;
}
