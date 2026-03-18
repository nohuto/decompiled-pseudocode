/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140091014
 * Callers:
 *     PowerUnDimMonitor @ 0x140090E48 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1400920B8 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x140141F74 (PowerDimMonitor.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1400913E0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     TlgAggregateFlush @ 0x1401536A4 (TlgAggregateFlush.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(__int64 a1)
{
  struct _DIM_UNDIM_TELEMETRY_DATA *v1; // rbx
  int v2; // ecx
  __int64 v3; // rcx
  bool v4; // zf
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  bool v11; // [rsp+60h] [rbp-20h] BYREF
  bool v12[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v13; // [rsp+64h] [rbp-1Ch] BYREF
  int v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h] BYREF
  char v17; // [rsp+B8h] [rbp+38h] BYREF
  char v18; // [rsp+C0h] [rbp+40h] BYREF
  char v19; // [rsp+C8h] [rbp+48h] BYREF

  v1 = (struct _DIM_UNDIM_TELEMETRY_DATA *)a1;
  if ( (unsigned int)dword_14029ADF8 > 5 )
  {
    a1 = 0x400000000100LL;
    if ( (qword_14029AE08 & 0x400000000100LL) != 0 && (qword_14029AE10 & 0x400000000100LL) == qword_14029AE10 )
    {
      v2 = *(_DWORD *)(W32GetUserSessionState(0x400000000100LL) + 2896);
      v17 = *((_BYTE *)v1 + 6);
      v18 = *((_BYTE *)v1 + 5);
      v19 = *((_BYTE *)v1 + 4);
      v13 = v2;
      v11 = *(_DWORD *)(W32GetUserGdiSessionState() + 36) != 0;
      v4 = *(_WORD *)(W32GetUserSessionState(v3) + 69008) == 0;
      v14 = *(_DWORD *)v1;
      v12[0] = v4;
      v15 = 16779264LL;
      v16 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v5,
        (unsigned int)&unk_140275099,
        v6,
        (unsigned int)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)v12,
        (__int64)&v11,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v13);
    }
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 608) )
  {
    v10 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(W32GetUserSessionState(v7) + 608) = v10;
  }
  v8 = *(_QWORD *)(W32GetUserSessionState(v7) + 608);
  if ( MEMORY[0xFFFFF78000000008] > v8 )
  {
    v9 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(W32GetUserSessionState(v8) + 608) = v9;
    TlgAggregateFlush();
  }
}
