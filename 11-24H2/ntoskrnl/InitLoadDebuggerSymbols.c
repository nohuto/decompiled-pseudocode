/*
 * XREFs of InitLoadDebuggerSymbols @ 0x140C0D7D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x14049EEC0 (DbgLoadImageSymbols.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall InitLoadDebuggerSymbols(__int64 a1, __int64 *a2)
{
  bool v2; // cc
  CHAR *v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // rdx
  CHAR v7; // al
  __int64 v9; // rax
  unsigned __int16 *v10; // rdx
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  STRING DestinationString; // [rsp+30h] [rbp-128h] BYREF
  CHAR SourceString[256]; // [rsp+40h] [rbp-118h] BYREF

  v2 = ++*((_DWORD *)a2 + 2) <= 3u;
  DestinationString = 0LL;
  if ( !v2 )
  {
    v4 = *(CHAR **)(a1 + 80);
    if ( *(_WORD *)v4 == 92 )
    {
      v5 = *(unsigned __int16 *)(a1 + 72) >> 1;
      if ( (unsigned __int64)v5 + 1 <= 0x100 )
      {
        v6 = 0LL;
        do
        {
          v7 = *v4;
          v4 += 2;
          SourceString[v6] = v7;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < v5 );
        if ( (unsigned int)v6 >= 0x100uLL )
          _report_rangecheckfailure();
        SourceString[v6] = 0;
LABEL_8:
        RtlInitAnsiString(&DestinationString, SourceString);
        DbgLoadImageSymbols((__int64)&DestinationString, *(_QWORD *)(a1 + 48), 0xFFFFFFFFLL);
      }
    }
    else
    {
      v9 = *a2;
      v10 = (unsigned __int16 *)(a1 + 88);
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(*(_QWORD *)(v9 + 200) + v11) );
      if ( ((unsigned __int64)*v10 >> 1) + 18 + v11 <= 0x100 )
      {
        v12 = RtlStringCbPrintfA(SourceString, 0x100uLL, "%sSystem32\\Drivers\\%wZ");
        if ( v12 < 0 )
          KeBugCheckEx(0x31u, v12, 3uLL, 0LL, 0LL);
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
