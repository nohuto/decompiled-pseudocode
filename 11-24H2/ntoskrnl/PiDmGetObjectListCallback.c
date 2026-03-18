/*
 * XREFs of PiDmGetObjectListCallback @ 0x1408CF850
 * Callers:
 *     PiDmListEnumObjectsWithCallback @ 0x1408CF680 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PiDmCmObjectMatchCallback @ 0x1408CF9A0 (PiDmCmObjectMatchCallback.c)
 */

__int64 __fastcall PiDmGetObjectListCallback(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v8; // r10
  unsigned int v9; // eax
  unsigned int v10; // r10d
  char *v11; // r11
  __int64 v12; // rdx
  const wchar_t *v13; // r8
  _WORD *v14; // rax
  __int64 v15; // r9
  signed __int64 v16; // r8
  __int16 v17; // cx
  _WORD *v18; // rcx
  __int64 v20; // rdx
  int matched; // eax
  char v22; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  *a3 = 0;
  v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))a2;
  v22 = 0;
  if ( !v7
    || ((v20 = *(_QWORD *)(a2 + 8), v7 != PiDmCmObjectMatchCallback)
      ? (matched = guard_dispatch_icall_no_overrides(a1, v20, &v22, a4))
      : (matched = PiDmCmObjectMatchCallback(a1, v20, &v22)),
        (v5 = matched, matched >= 0) && v22) )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v8) );
    v9 = *(_DWORD *)(a2 + 24);
    v10 = v8 + 1;
    *(_DWORD *)(a2 + 28) += v10;
    if ( v9 > v10 )
    {
      v11 = *(char **)(a2 + 16);
      v12 = v9;
      v13 = *(const wchar_t **)(a1 + 16);
      if ( !v11 && v9 || v9 > 0x7FFFFFFFuLL )
        goto LABEL_25;
      if ( !v13 )
        v13 = &SourceString;
      if ( v9 )
      {
        v14 = *(_WORD **)(a2 + 16);
        v15 = 2147483646 - v12;
        v16 = (char *)v13 - v11;
        do
        {
          if ( !(v15 + v12) )
            break;
          v17 = *(_WORD *)((char *)v14 + v16);
          if ( !v17 )
            break;
          *v14++ = v17;
          --v12;
        }
        while ( v12 );
        v18 = v14 - 1;
        if ( v12 )
          v18 = v14;
        *v18 = 0;
        if ( !v12 )
LABEL_25:
          *(_WORD *)v11 = 0;
      }
      *(_QWORD *)(a2 + 16) += 2LL * v10;
      *(_DWORD *)(a2 + 24) -= v10;
    }
  }
  return v5;
}
