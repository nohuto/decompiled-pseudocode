/*
 * XREFs of ?_SortNormOrder@CCD_SET_STRING_ID@@AEAAXII@Z @ 0x140340C90
 * Callers:
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1403409AC (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 * Callees:
 *     ?_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z @ 0x140340358 (-_CompareDescriptors@CCD_SET_STRING_ID@@AEBAHII@Z.c)
 */

void __fastcall CCD_SET_STRING_ID::_SortNormOrder(CCD_SET_STRING_ID *this, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // r14
  int v7; // edi
  unsigned int i; // esi
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r15
  int v11; // eax
  __int64 v12; // [rsp+68h] [rbp+20h]

  if ( a3 )
  {
    v3 = 0LL;
    v6 = a3;
    v7 = 1;
    do
    {
      for ( i = v7; i <= a3; ++i )
      {
        v12 = *((_QWORD *)this + 3);
        v9 = *(_WORD *)(v12 + v3 + 6);
        v10 = *(_WORD *)(v12 + 8LL * i + 6);
        v11 = CCD_SET_STRING_ID::_CompareDescriptors(this, v9);
        if ( v11 > 0 || !v11 && v9 > v10 )
        {
          *(_WORD *)(v12 + v3 + 6) = v10;
          *(_WORD *)(*((_QWORD *)this + 3) + 8LL * i + 6) = v9;
        }
      }
      ++v7;
      v3 += 8LL;
      --v6;
    }
    while ( v6 );
  }
}
