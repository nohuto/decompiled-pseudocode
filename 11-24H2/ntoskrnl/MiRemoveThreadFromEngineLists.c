/*
 * XREFs of MiRemoveThreadFromEngineLists @ 0x140413E2C
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140412BA0 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x140690A00 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x14041399C (MiUnlinkZeroThreadFromActiveDomain.c)
 *     MiDecrementZeroEngineThread @ 0x140413AA8 (MiDecrementZeroEngineThread.c)
 */

__int64 __fastcall MiRemoveThreadFromEngineLists(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 *v5; // r9
  __int64 *v6; // rcx
  __int64 **v7; // rcx

  v1 = a1[42];
  v3 = *(_QWORD *)(v1 + 176);
  result = MiUnlinkZeroThreadFromActiveDomain((__int64)a1);
  if ( a1[52] )
  {
    MiDecrementZeroEngineThread((__int64)a1);
    result = *v5;
    if ( *(__int64 **)(*v5 + 8) == v5 )
    {
      v6 = (__int64 *)v5[1];
      if ( (__int64 *)*v6 == v5 )
      {
        *v6 = result;
        *(_QWORD *)(result + 8) = v6;
        if ( !a1[41] )
        {
LABEL_7:
          --*(_DWORD *)(v1 + 4);
          return result;
        }
        result = v3 + 112;
        v7 = *(__int64 ***)(v3 + 120);
        if ( *v7 == (__int64 *)(v3 + 112) )
        {
          *v5 = result;
          v5[1] = (__int64)v7;
          *v7 = v5;
          *(_QWORD *)(v3 + 120) = v5;
          goto LABEL_7;
        }
      }
    }
    __fastfail(3u);
  }
  return result;
}
