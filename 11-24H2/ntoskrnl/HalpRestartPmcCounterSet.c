/*
 * XREFs of HalpRestartPmcCounterSet @ 0x1404AD894
 * Callers:
 *     HalpRestartProfiling @ 0x1404AD860 (HalpRestartProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpRestartPmcCounterSet()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 **v3; // r11
  __int64 *i; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // ecx
  int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx

  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  v1 = 3 * v0;
  result = HalpCounterSetInfo;
  v3 = (__int64 **)(HalpCounterSetInfo + 8 * v1);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    v5 = 0LL;
    if ( *((_DWORD *)i + 5) )
    {
      while ( 1 )
      {
        v6 = 5 * v5;
        v7 = HIDWORD(i[5 * v5 + 5]);
        if ( !v7 )
          break;
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            break;
          v9 = __readmsr(i[5 * v5 + 6]);
          LODWORD(v10) = HIDWORD(v9);
          v9 = (unsigned int)v9;
          v10 = (unsigned int)v10;
        }
        else
        {
          v9 = __readpmc(i[5 * v5 + 6]);
          LODWORD(v10) = HIDWORD(v9);
          v9 = (unsigned int)v9;
          v10 = (unsigned int)v10;
        }
        result = (v10 << 32) | v9;
LABEL_10:
        v5 = (unsigned int)(v5 + 1);
        i[v6 + 3] = result;
        if ( (unsigned int)v5 >= *((_DWORD *)i + 5) )
          goto LABEL_11;
      }
      result = 0LL;
      goto LABEL_10;
    }
LABEL_11:
    ;
  }
  return result;
}
