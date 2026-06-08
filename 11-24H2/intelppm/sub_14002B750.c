/*
 * XREFs of sub_14002B750 @ 0x14002B750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029DD0 @ 0x140029DD0 (sub_140029DD0.c)
 *     sub_14002BAB0 @ 0x14002BAB0 (sub_14002BAB0.c)
 *     sub_1400468E0 @ 0x1400468E0 (sub_1400468E0.c)
 *     sub_140046B48 @ 0x140046B48 (sub_140046B48.c)
 */

__int64 __fastcall sub_14002B750(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  char v4; // r14
  int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(); // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v1 = 0LL;
  v2 = 0;
  if ( !(_DWORD)qword_140019A90 )
  {
    v4 = 1;
    v2 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 45LL, &v11);
    if ( v2 < 0 )
    {
      v6 = sub_140046B48(0LL);
      v2 = v6;
      if ( v6 < 0 )
      {
        if ( v6 != -1073741637 )
          return (unsigned int)v2;
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      v4 = 0;
    }
    else
    {
      v5 = v11;
    }
    v8 = v5 | 2;
    if ( !sub_140029DD0() )
      v8 = v5;
    for ( LODWORD(qword_140019A90) = v8; v8; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
      {
        v9 = funcs_14002B7FD[v1];
        if ( v9 )
        {
          LOBYTE(v7) = v4;
          v2 = ((__int64 (__fastcall *)(__int64, __int64))v9)(a1, v7);
          if ( v2 < 0 )
            break;
        }
      }
      v1 = (unsigned int)(v1 + 1);
    }
  }
  return (unsigned int)v2;
}
