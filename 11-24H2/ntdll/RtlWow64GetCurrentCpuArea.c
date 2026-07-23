/*
 * XREFs of RtlWow64GetCurrentCpuArea @ 0x1800D2EA0
 * Callers:
 *     RtlWow64GetCurrentMachine @ 0x1800D2910 (RtlWow64GetCurrentMachine.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1800D2FE0 (RtlGetExtendedContextLength2.c)
 *     RtlpGetLegacyContextLength @ 0x1800D3210 (RtlpGetLegacyContextLength.c)
 */

__int64 __fastcall RtlWow64GetCurrentCpuArea(_WORD *a1, __int64 *a2, _QWORD *a3)
{
  _WORD *v6; // rbp
  __int16 v7; // di
  ULONG v9; // ecx
  ULONG64 v10; // r10
  __int64 v11; // rcx
  _QWORD *v12; // rax
  ULONG ContextLength[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  ContextLength[0] = 0;
  v6 = NtCurrentTeb()->TlsSlots[1];
  v7 = v6[1];
  if ( v7 == 332 )
  {
    RtlpGetLegacyContextLength(0x10000LL, a2, &v14);
    v10 = MEMORY[0x7FFE03D8] & 0x40000000000009FCLL;
    if ( (MEMORY[0x7FFE03D8] & 0x40000000000009FCLL) != 0 )
      v9 = 65600;
  }
  else if ( v6[1] == 452 )
  {
    RtlpGetLegacyContextLength(0x200000LL, a2, &v14);
  }
  else if ( (unsigned __int16)v6[1] == 34404 )
  {
    RtlpGetLegacyContextLength(0x100000LL, a2, &v14);
  }
  else
  {
    if ( (unsigned __int16)v6[1] != 43620 )
      return 3221225485LL;
    RtlpGetLegacyContextLength(0x400000LL, a2, &v14);
  }
  RtlGetExtendedContextLength2(v9, ContextLength, v10);
  v11 = ~(v14 - 1LL) & ((unsigned __int64)v6 + v14 + 3);
  v12 = (_QWORD *)((v11 + ContextLength[0] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 )
    *a1 = v7;
  if ( a2 )
    *a2 = v11;
  if ( a3 )
    *a3 = *v12;
  return 0LL;
}
