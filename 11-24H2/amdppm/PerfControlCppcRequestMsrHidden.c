/*
 * XREFs of PerfControlCppcRequestMsrHidden @ 0x1400043C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

void __fastcall PerfControlCppcRequestMsrHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  int v5; // edx
  char v6; // cl
  unsigned int v7; // eax
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( a3 || a4 )
  {
    v8 = 0LL;
    if ( *(_BYTE *)(a1 + 126) )
    {
      v5 = (unsigned __int8)*(_DWORD *)(a1 + 64) << 8;
      LODWORD(v8) = v5;
    }
    else
    {
      v5 = 0;
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v5 |= (unsigned __int8)*(_DWORD *)(a1 + 64);
      LODWORD(v8) = v5;
    }
    v6 = *(_BYTE *)(a1 + 128);
    v7 = v5 | 0xFF000000;
    if ( v6 )
      LODWORD(v8) = v5 | 0xFF000000;
    if ( *(_BYTE *)(a1 + 125) )
    {
      if ( !v6 )
        v7 = v5;
      LODWORD(v8) = v7;
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_1400159A8)(
      *(unsigned int *)(*(_QWORD *)a1 + 84LL),
      *(unsigned int *)(a1 + 156),
      ~*(_QWORD *)(a1 + 184),
      v8);
    *(_QWORD *)(a1 + 176) = v8;
  }
}
