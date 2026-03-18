/*
 * XREFs of ?IsAdaptersFirstPathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x14018BB98
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x14032018C (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCD_TOPOLOGY::IsAdaptersFirstPathByModality(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // r9
  unsigned __int16 v3; // r8
  __int64 v4; // rcx
  int v5; // r11d
  int v6; // r10d
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  if ( !v2 || !*(_WORD *)(v2 + 20) )
    return 0;
  v4 = 296LL * a2;
  v5 = *(_DWORD *)(v4 + v2 + 72);
  v6 = *(_DWORD *)(v4 + v2 + 76);
  while ( 1 )
  {
    v7 = 296LL * v3;
    if ( *(_DWORD *)(v7 + v2 + 72) == v5 && *(_DWORD *)(v7 + v2 + 76) == v6 )
      break;
    ++v3;
  }
  return v3 == a2;
}
