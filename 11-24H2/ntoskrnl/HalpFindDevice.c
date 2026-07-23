/*
 * XREFs of HalpFindDevice @ 0x140B77770
 * Callers:
 *     HalpKdReleaseDebuggingDevice @ 0x140B77A20 (HalpKdReleaseDebuggingDevice.c)
 *     HalpKdSetupDebuggingDevice @ 0x140B77A80 (HalpKdSetupDebuggingDevice.c)
 *     HalpRegisterDeviceInUse @ 0x140B77C94 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 */

__int64 *__fastcall HalpFindDevice(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rbx
  __int64 *v3; // r14
  char v4; // bp
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // eax
  const wchar_t *v10; // rdx

  v1 = (__int64 *)qword_140F8EF88;
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  while ( v1 != &qword_140F8EF88 )
  {
    v6 = v1[2];
    v3 = v1;
    v7 = *(_DWORD *)(a1 + 220);
    if ( *(_DWORD *)(v6 + 220) != v7 )
      goto LABEL_13;
    if ( v7 )
    {
      v9 = *(_DWORD *)(a1 + 232);
      if ( *(_DWORD *)(v6 + 232) != v9 )
        goto LABEL_13;
      if ( !*(_QWORD *)(a1 + 224) )
        goto LABEL_13;
      v10 = *(const wchar_t **)(v6 + 224);
      if ( !v10 )
        goto LABEL_13;
      v8 = wcsncmp(*(const wchar_t **)(a1 + 224), v10, v9) == 0;
    }
    else
    {
      if ( *(_DWORD *)v6 != *(_DWORD *)a1 || *(_DWORD *)(v6 + 4) != *(_DWORD *)(a1 + 4) )
        goto LABEL_13;
      v8 = *(_WORD *)(v6 + 8) == *(_WORD *)(a1 + 8);
    }
    if ( v8 )
    {
      v4 = 1;
      break;
    }
LABEL_13:
    v1 = (__int64 *)*v1;
  }
  if ( v4 == 1 )
    return v3;
  return (__int64 *)v2;
}
