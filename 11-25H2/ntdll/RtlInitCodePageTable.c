/*
 * XREFs of RtlInitCodePageTable @ 0x1800AFE70
 * Callers:
 *     RtlpInitCodePageTables @ 0x1800AFD0C (RtlpInitCodePageTables.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitCodePageTable(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  unsigned __int16 v6; // r11
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rcx
  __int64 v9; // r8
  __int16 v10; // ax

  v2 = 0LL;
  if ( a1 && a1[1] != 0xFDE9 )
  {
    v4 = *a1;
    v5 = v4 + 1;
    v6 = a1[v4] + v4;
    *(_WORD *)(a2 + 2) = a1[2];
    *(_WORD *)(a2 + 4) = a1[3];
    *(_WORD *)(a2 + 6) = a1[4];
    *(_WORD *)(a2 + 8) = a1[5];
    *(_WORD *)(a2 + 10) = a1[6];
    *(_QWORD *)(a2 + 14) = *(_QWORD *)(a1 + 7);
    *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
    v7 = &a1[v5];
    v8 = v7 + 256;
    *(_QWORD *)(a2 + 32) = v7;
    v9 = v7[256] != 0 ? 0x200 : 0;
    if ( *(unsigned __int16 *)((char *)v7 + v9 + 514) )
    {
      v10 = 1;
      v2 = (__int64)v8 + v9 + 4;
    }
    else
    {
      v10 = 0;
    }
    *(_QWORD *)(a2 + 56) = v2;
    *(_WORD *)(a2 + 12) = v10;
    *(_QWORD *)(a2 + 40) = &a1[v6 + 1];
    *(_WORD *)a2 = a1[1];
  }
  else
  {
    *(_OWORD *)a2 = Utf8TableInfo;
    *(_OWORD *)(a2 + 16) = xmmword_1801CF060;
    *(_OWORD *)(a2 + 32) = xmmword_1801CF070;
    *(_OWORD *)(a2 + 48) = unk_1801CF080;
  }
}
