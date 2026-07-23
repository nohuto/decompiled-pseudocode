/*
 * XREFs of KiTryPopulateLogicalProcessorInformation @ 0x14032DDF8
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x14032DFF0 (KeQueryLogicalProcessorRelationship.c)
 * Callees:
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

__int64 __fastcall KiTryPopulateLogicalProcessorInformation(
        struct _KAFFINITY_EX *a1,
        struct _KAFFINITY_EX *a2,
        char a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int v9; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ebp
  __int64 result; // rax
  unsigned __int16 v16; // dx
  $B38C3B1372D6E954799962D5DD404846 *v17; // r8
  __int64 Count; // r9
  bool v19; // zf
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // cx
  __int64 v22; // rdx

  v9 = 0;
  v13 = 0;
  v14 = 0;
  if ( a3 || !KiAndAffinityExNoResult(a2, a1) )
  {
    KeOrAffinityEx2(a2, a1, a2);
    v16 = 0;
    if ( a1->Count )
    {
      v17 = &a1->8;
      Count = a1->Count;
      do
      {
        v19 = v17->Bitmap[0] == 0;
        v20 = v16 + 1;
        v17 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v17 + 8);
        if ( v19 )
          v20 = v16;
        v16 = v20;
        --Count;
      }
      while ( Count );
    }
    v13 = (16 * v16 + 39) & 0xFFFFFFF8;
    if ( v13 + a7 <= a6 )
    {
      v21 = 0;
      *(_WORD *)(a5 + 30) = v16;
      v22 = a5 + 32;
      *(_DWORD *)a5 = a4;
      *(_DWORD *)(a5 + 4) = v13;
      *(_WORD *)(a5 + 8) = 0;
      *(_OWORD *)(a5 + 10) = 0LL;
      for ( *(_DWORD *)(a5 + 26) = 0; v21 < a1->Count; ++v21 )
      {
        if ( a1->Bitmap[v21] )
        {
          *(_OWORD *)v22 = 0LL;
          *(_WORD *)(v22 + 8) = v21;
          *(_QWORD *)v22 = a1->Bitmap[v21];
          v22 += 16LL;
        }
      }
      v14 = v13;
    }
    else
    {
      v9 = -1073741820;
    }
  }
  result = v9;
  *a9 = v14;
  *a8 = v13;
  return result;
}
