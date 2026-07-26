/*
 * XREFs of ndisWppExtendedCallback @ 0x1400C5414
 * Callers:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1400C4F04 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1400C547C (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x14008F170 (__report_rangecheckfailure.c)
 */

unsigned __int8 __fastcall ndisWppExtendedCallback(char a1, int a2, char a3)
{
  unsigned __int8 result; // al
  int v6; // ecx
  __int64 v7; // r8
  char v8; // dl

  result = 0;
  if ( a1 )
  {
    v6 = 1;
    while ( result < 0x20u )
    {
      v7 = result;
      if ( (v6 & a2) != 0 )
      {
        v8 = a3;
      }
      else
      {
        if ( result >= 0x20uLL )
          goto LABEL_12;
        v8 = 0;
      }
      ++result;
      ndisWppEnabledLevelPerFlag[v7] = v8;
      v6 *= 2;
    }
  }
  else
  {
    while ( result < 0x20u )
    {
      if ( result >= 0x20uLL )
LABEL_12:
        _report_rangecheckfailure();
      ndisWppEnabledLevelPerFlag[result++] = 0;
    }
  }
  return result;
}
