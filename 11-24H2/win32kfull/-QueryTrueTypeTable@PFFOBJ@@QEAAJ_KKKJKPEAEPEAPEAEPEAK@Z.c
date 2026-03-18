/*
 * XREFs of ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400B29FC
 * Callers:
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x14030E550 (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400B2C5C (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryTrueTypeTable(
        PFFOBJ *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 *a7,
        unsigned __int8 **a8,
        unsigned int *a9)
{
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v13; // rdx
  unsigned int v14; // ebp
  ULONG_PTR *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *); // rbx
  unsigned int v19; // r15d
  __int64 i; // rcx
  ULONG_PTR *v21; // rsi
  ULONG_PTR v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rbx

  v9 = a4;
  v10 = a3;
  v11 = a2;
  if ( !(unsigned int)PFFOBJ::bCheckFntFileInfo(this) )
    return 0xFFFFFFFFLL;
  v13 = *(_QWORD *)this;
  v14 = -1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, unsigned __int8 *, unsigned __int8 **, unsigned int *))(v17 + 3064);
  if ( (*(_DWORD *)(v17 + 40) & 0x2000) != 0 )
  {
    v19 = *(_DWORD *)(v13 + 36);
    if ( v19 <= 3 )
    {
      if ( (*(_DWORD *)(v13 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( (*(_DWORD *)(*(_QWORD *)this + 52LL) & 0x2000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
      {
        v21 = *(ULONG_PTR **)(*(_QWORD *)this + 208LL);
        v22 = v21[i];
        if ( !*(_BYTE *)(v22 + 45) && *(_BYTE *)(v22 + 44) && !*(_QWORD *)(v22 + 48) )
        {
          while ( 1 )
          {
            if ( (unsigned int)v16 >= v19 )
            {
              LODWORD(v16) = v19;
              v15 = *(ULONG_PTR **)(*(_QWORD *)this + 208LL);
              goto LABEL_16;
            }
            v23 = (unsigned int)v16;
            if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v21[v16]) )
              break;
            v16 = (unsigned int)(v16 + 1);
          }
          if ( (_DWORD)v16 )
          {
            do
            {
              EngUnmapFontFileFD(*v21++);
              --v23;
            }
            while ( v23 );
          }
          LODWORD(v16) = 0;
LABEL_16:
          v10 = a3;
          break;
        }
      }
      v11 = a2;
    }
    v9 = a4;
  }
  if ( a7 )
    *a7 = 0;
  if ( v18 )
    v14 = v18(v11, v10, v9, a5, a6, a7, a8, a9);
  if ( (_DWORD)v16 )
  {
    v24 = (unsigned int)v16;
    do
    {
      EngUnmapFontFileFD(*v15++);
      --v24;
    }
    while ( v24 );
  }
  return v14;
}
