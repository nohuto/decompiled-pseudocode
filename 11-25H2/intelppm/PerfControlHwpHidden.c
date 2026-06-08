/*
 * XREFs of PerfControlHwpHidden @ 0x140007420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfControlHwpHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-18h]

  if ( a4 && a3 )
  {
    v8 = 0LL;
    if ( *(_BYTE *)(a1 + 126) )
    {
      v5 = (unsigned __int8)*(_DWORD *)(a1 + 64);
      LODWORD(v8) = v5;
      v6 = v5;
    }
    else
    {
      v5 = 0;
      v6 = 0;
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v5 = v6 | ((unsigned __int8)*(_DWORD *)(a1 + 64) << 8);
      LODWORD(v8) = v5;
      v6 = v5;
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v5 = v6 | 0xFF000000;
      LODWORD(v8) = v6 | 0xFF000000;
    }
    if ( *(_BYTE *)(a1 + 125) )
      LODWORD(v8) = v5 & 0xFF00FFFF | ((unsigned __int8)*(_DWORD *)(a1 + 64) << 16);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))qword_140019558)(
             *(unsigned int *)(*(_QWORD *)a1 + 84LL),
             *(unsigned int *)(a1 + 156),
             ~*(_QWORD *)(a1 + 184),
             v8);
  }
  return result;
}
