/*
 * XREFs of InitProcessSystemDpi @ 0x14023DBD0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall InitProcessSystemDpi(__int64 a1)
{
  __int64 ThreadTeb; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  BOOL v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int *Address; // [rsp+88h] [rbp+20h]
  _QWORD *Addressa; // [rsp+88h] [rbp+20h]

  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 720LL);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb();
    Address = (unsigned int *)(ThreadTeb + 0x2000);
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    Addressa = (_QWORD *)Address[12];
    ProbeForRead(Addressa, 0x488uLL, 4u);
    v3 = Addressa[60];
  }
  v4 = v3 & 0x40000000000000LL;
  v5 = v3 & 0x20000000000000LL;
  FastGetProfileDwordEx(0LL, 4LL, L"EnablePerProcessSystemDPI", 0LL);
  if ( v4 )
    v8 = 0;
  else
    v8 = v5 != 0;
  if ( v8 )
  {
    v9 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v7, v6) + 104) + 40LL) + 64LL);
    *(_WORD *)(a1 + 272) = v9;
    return GetDpiServerInfoForDpi(v9);
  }
  else
  {
    result = *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928) + 6998LL);
    *(_WORD *)(a1 + 272) = result;
  }
  return result;
}
