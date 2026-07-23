/*
 * XREFs of ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$03$03@@SAKPEAU1@@Z @ 0x1405EF848
 * Callers:
 *     RtlpFlsAlloc @ 0x140787754 (RtlpFlsAlloc.c)
 * Callees:
 *     ??0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ @ 0x1405EF818 (--0RTLP_FLS_CALLBACK_ENTRY@@QEAA@XZ.c)
 *     RtlpFlsHeapAlloc @ 0x140A37C24 (RtlpFlsHeapAlloc.c)
 */

__int64 __fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,4,4>::SlotAllocate(__int64 a1)
{
  __int64 i; // rdi
  unsigned int *v3; // rdx
  int v4; // esi
  _OWORD *v5; // rax
  RTLP_FLS_CALLBACK_ENTRY *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r8d
  unsigned int v10; // r9d

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 4 )
      return (unsigned int)-1;
    v3 = *(unsigned int **)(a1 + 8 * i);
    if ( !v3 )
    {
      v4 = 1 << (i + 4);
      v5 = (_OWORD *)RtlpFlsHeapAlloc((unsigned int)(40 * v4 + 8));
      v3 = (unsigned int *)v5;
      if ( !v5 )
        return (unsigned int)-1;
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
      if ( v4 )
      {
        v6 = (RTLP_FLS_CALLBACK_ENTRY *)((char *)v5 + 8);
        do
        {
          RTLP_FLS_CALLBACK_ENTRY::RTLP_FLS_CALLBACK_ENTRY(v6);
          v6 = (RTLP_FLS_CALLBACK_ENTRY *)(v7 + 40);
        }
        while ( v8 != 1 );
      }
      *(_QWORD *)(a1 + 8 * i) = v3;
    }
    v9 = *v3;
    v10 = 1 << (i + 4);
    if ( *v3 < v10 )
      break;
  }
  while ( *(_QWORD *)&v3[10 * v9 + 4] )
    v9 = (v10 - 1) & (v9 + 1);
  ++*v3;
  return v9 | (1 << (i + 4));
}
