/*
 * XREFs of KiBuildShareCountListForSubNodeByAffinity @ 0x14045A690
 * Callers:
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int8 __fastcall KiBuildShareCountListForSubNodeByAffinity(
        void *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v5; // ebp
  unsigned __int8 result; // al
  unsigned __int8 i; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int8 *v16; // r8
  unsigned __int8 j; // dl

  v5 = a2;
  result = (unsigned __int8)memset_0(a1, 0, 0x40uLL);
  for ( i = 0; i < 0x40u; ++i )
  {
    if ( _bittest64(&a4, i) )
    {
      v11 = KiProcessorBlock[*((unsigned int *)qword_140F216A8 + 64 * v5 + (unsigned int)i)];
      v12 = *(unsigned __int8 *)(v11 + 208);
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          v14 = *(_QWORD *)(v11 + 36448);
        }
        else
        {
          switch ( a5 )
          {
            case 2:
              v13 = 40720LL;
              break;
            case 3:
              v13 = 40128LL;
              break;
            case 4:
              v13 = 35856LL;
              break;
            default:
              __fastfail(5u);
          }
          if ( (unsigned __int16)v12 >= *(_WORD *)(v11 + v13) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v11 + v13 + 8 * v12 + 8);
        }
      }
      else
      {
        v14 = *(_QWORD *)(v11 + 200);
      }
      v15 = a3 & v14;
      v16 = (unsigned __int8 *)a1;
      for ( j = 0; j < 0x40u; ++j )
      {
        result = j;
        if ( _bittest64(&v15, j) )
        {
          result = *v16 + 1;
          *v16 = result;
        }
        ++v16;
      }
    }
  }
  return result;
}
