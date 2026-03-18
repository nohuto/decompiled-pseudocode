/*
 * XREFs of ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1400B7060
 * Callers:
 *     ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1400B6F24 (-vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1401FB840 (vLinkEudcPFEsWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFEOBJ::bCheckFamilyName(PFEOBJ *this, const unsigned __int16 *a2, int a3, int *a4)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rax
  bool v10; // zf
  const wchar_t *v11; // rbx
  _BOOL8 result; // rax
  int v13; // edx
  __int64 v14; // rcx

  if ( a4 )
    *a4 = 0;
  v8 = (const wchar_t *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL));
  if ( a3 && *v8 == 64 )
    ++v8;
  if ( !_wcsicmp(a2, v8) )
    return 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL) & 0x8000000) == 0 )
    return 0LL;
  v9 = -1LL;
  do
    v10 = v8[++v9] == 0;
  while ( !v10 );
  v11 = &v8[v9 + 1];
  result = 0LL;
  do
  {
    if ( !*v11 )
      break;
    if ( a3 && *v11 == 64 )
      ++v11;
    v13 = _wcsicmp(a2, v11);
    v14 = -1LL;
    do
      v10 = v11[++v14] == 0;
    while ( !v10 );
    v11 += v14 + 1;
    result = v13 == 0;
  }
  while ( v13 );
  if ( a4 )
    *a4 = result;
  return result;
}
