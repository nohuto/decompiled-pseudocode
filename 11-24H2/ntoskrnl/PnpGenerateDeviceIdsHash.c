/*
 * XREFs of PnpGenerateDeviceIdsHash @ 0x140A43E5C
 * Callers:
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x1403FAB40 (NLS_UPCASE.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __fastcall PnpGenerateDeviceIdsHash(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edi
  unsigned int v4; // ebp
  const WCHAR **v5; // rsi
  const WCHAR *v7; // rbx
  NTSTATUS result; // eax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v10; // r11d
  wchar_t *Buffer; // r15
  __int64 Flink; // r12
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // ax
  int v15; // r11d
  int v16; // r10d
  __int64 v17; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF

  v19[0] = a1;
  *a3 = 0;
  DestinationString = 0LL;
  v3 = 0;
  v19[1] = a2;
  v4 = 0;
  v5 = (const WCHAR **)v19;
  do
  {
    v7 = *v5;
    result = 0;
    if ( *v5 )
    {
      while ( 1 )
      {
        result = 0;
        if ( !*v7 )
          break;
        result = RtlInitUnicodeStringEx(&DestinationString, v7);
        if ( result < 0 )
          return result;
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        Buffer = DestinationString.Buffer;
        Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
        if ( DestinationString.Length >> 1 )
        {
          do
          {
            v13 = *Buffer++;
            v14 = NLS_UPCASE(Flink, v13);
            v10 = v14 + 65599 * v15;
          }
          while ( v16 != 1 );
        }
        v3 += v10;
        v17 = -1LL;
        do
          ++v17;
        while ( v7[v17] );
        v7 += v17 + 1;
        if ( !v7 )
        {
          result = 0;
          break;
        }
      }
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
  *a3 = v3;
  return result;
}
