/*
 * XREFs of EmonConfigureCounter @ 0x140558B40
 * Callers:
 *     EmonDisableMonitoringEnhanced @ 0x140558CF0 (EmonDisableMonitoringEnhanced.c)
 *     EmonDisableMonitoringOriginal @ 0x140558DC0 (EmonDisableMonitoringOriginal.c)
 *     EmonEnableMonitoringEnhanced @ 0x140558E90 (EmonEnableMonitoringEnhanced.c)
 *     EmonEnableMonitoringOriginal @ 0x140558FF0 (EmonEnableMonitoringOriginal.c)
 *     EmonRestartProfilingInternalEnhanced @ 0x14055BD10 (EmonRestartProfilingInternalEnhanced.c)
 *     EmonRestartProfilingInternalOriginal @ 0x14055BE2C (EmonRestartProfilingInternalOriginal.c)
 * Callees:
 *     <none>
 */

void __fastcall EmonConfigureCounter(int a1, int a2, char a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned __int64 v8; // r9
  char v9; // cl
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rax

  if ( a2 )
  {
    if ( a2 != 1 )
      return;
    v8 = __readmsr(0x38Fu);
    v9 = 4 * a1;
    v10 = ~(15LL << (4 * (unsigned __int8)a1)) & __readmsr(0x38Du);
    if ( a3 )
    {
      v10 |= a5;
      if ( a6 )
        v10 |= 8LL << v9;
      if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
        v11 = (1LL << EmonFixedCounterResolution) - 1;
      else
        v11 = -1LL;
      __writemsr(a1 + 777, v11 & -(a4 & -(__int64)(a6 != 0)));
      _bittestandset64((__int64 *)&v8, (unsigned int)(a1 + 32));
    }
    else
    {
      _bittestandreset64((__int64 *)&v8, (unsigned int)(a1 + 32));
    }
    __writemsr(0x38Fu, v8);
    LODWORD(v12) = v10;
    v13 = HIDWORD(v10);
    v14 = 909;
    goto LABEL_19;
  }
  if ( !a3 )
  {
    LODWORD(v12) = 0;
    v14 = a1 + 390;
    LODWORD(v13) = 0;
    goto LABEL_19;
  }
  if ( (unsigned int)EmonCounterResolution < 0x40 )
    v15 = (1LL << EmonCounterResolution) - 1;
  else
    v15 = -1LL;
  __writemsr(a1 + 193, v15 & -(a4 & -(__int64)(a6 != 0)));
  __writemsr(a1 + 390, a5 | (a6 != 0 ? 5242880 : 0x400000));
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v14 = 911;
    v12 = __readmsr(0x38Fu) | (1LL << a1);
    v13 = HIDWORD(v12);
LABEL_19:
    __writemsr(v14, __PAIR64__(v13, v12));
  }
}
