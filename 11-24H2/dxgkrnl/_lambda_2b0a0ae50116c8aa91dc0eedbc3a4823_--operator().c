/*
 * XREFs of _lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator() @ 0x1401BD4FC
 * Callers:
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__&DxgkSampleDisplayState_ @ 0x14006CC50 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_2b0a0ae50116c8aa91dc0eedbc3a4823__-D.c)
 * Callees:
 *     _lambda_e321288189de26641183b6e313240338_::operator() @ 0x1401BDE20 (_lambda_e321288189de26641183b6e313240338_--operator().c)
 */

__int64 __fastcall lambda_2b0a0ae50116c8aa91dc0eedbc3a4823_::operator()(unsigned int ***a1, __int64 a2)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  unsigned int *v6; // rdx
  unsigned int *v7; // r8
  unsigned int v8; // r10d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int i; // r11d
  __int64 v16; // r10
  __int64 v17; // rcx

  v3 = 0;
  v5 = 0;
  v6 = **a1;
  *(_DWORD *)(a2 + 80) = *v6;
  *(_QWORD *)(a2 + 84) = 672LL;
  *(_DWORD *)(a2 + 92) = 0;
  if ( *v6 )
  {
    LODWORD(v7) = (_DWORD)v6;
    do
    {
      v8 = 0;
      v9 = 33LL * v5;
      do
      {
        v10 = 33LL * v8;
        if ( v6[v9 + 5] == v6[v10 + 5] && v6[v9 + 6] == v6[v10 + 6] )
          break;
        ++v8;
      }
      while ( v8 <= v5 );
      lambda_e321288189de26641183b6e313240338_::operator()(
        v5,
        v5,
        a2 + 216 * v5 + 96,
        (_DWORD)v7 + 4 + 132 * v5,
        v8 | 0xFE5C0000);
      ++v5;
      v7 = **a1;
      v6 = v7;
    }
    while ( v5 < *v7 );
  }
  v11 = *v6;
  if ( *v6 )
  {
    do
    {
      v12 = 216LL * v3;
      v13 = *(_QWORD *)(v12 + a2 + 96);
      if ( (v13 & 0x4000000000000LL) == 0 )
      {
        v14 = v13 | 0x4000000000000LL;
        *(_DWORD *)(v12 + a2 + 252) = v3;
        *(_QWORD *)(v12 + a2 + 96) = v14;
        for ( i = v3 + 1; ; ++i )
        {
          v11 = *v6;
          if ( i >= *v6 )
            break;
          v16 = v14;
          v17 = 216LL * i;
          if ( (v14 & 0x4000000000000LL) == 0
            && *(_DWORD *)(v17 + a2 + 212) == *(_DWORD *)(v12 + a2 + 212)
            && *(_DWORD *)(v17 + a2 + 216) == *(_DWORD *)(v12 + a2 + 216) )
          {
            *(_QWORD *)(v17 + a2 + 96) |= 0x4000000000000uLL;
            *(_DWORD *)(v17 + a2 + 252) = *(_DWORD *)(v12 + a2 + 252);
            v16 = *(_QWORD *)(v12 + a2 + 96);
          }
          v14 = v16;
        }
      }
      ++v3;
    }
    while ( v3 < v11 );
  }
  return 0LL;
}
