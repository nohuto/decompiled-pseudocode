/*
 * XREFs of ViTargetAddCountersCallback @ 0x140B8D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViTargetAddCountersCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    if ( *(_QWORD *)v2 == *(_QWORD *)a2 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v3 + 96) += *(_DWORD *)(v2 + 112);
      *(_DWORD *)(v3 + 100) += *(_DWORD *)(v2 + 116);
      *(_DWORD *)(v3 + 104) += *(_DWORD *)(v2 + 120);
      *(_DWORD *)(v3 + 108) += *(_DWORD *)(v2 + 124);
      *(_QWORD *)(v3 + 112) += *(_QWORD *)(v2 + 128);
      *(_QWORD *)(v3 + 120) += *(_QWORD *)(v2 + 136);
      *(_QWORD *)(v3 + 128) += *(_QWORD *)(v2 + 144);
      *(_QWORD *)(v3 + 136) += *(_QWORD *)(v2 + 152);
      if ( *(_DWORD *)(a2 + 16) )
      {
        v4 = (_QWORD *)(v3 + 168);
        *(_DWORD *)(v3 + 144) += *(_DWORD *)(v2 + 160);
        v5 = 10LL;
        *(_DWORD *)(v3 + 148) += *(_DWORD *)(v2 + 164);
        *(_DWORD *)(v3 + 152) += *(_DWORD *)(v2 + 168);
        *(_DWORD *)(v3 + 156) += *(_DWORD *)(v2 + 172);
        *(_DWORD *)(v3 + 160) += *(_DWORD *)(v2 + 176);
        *(_DWORD *)(v3 + 164) += *(_DWORD *)(v2 + 180);
        v6 = v2 - v3;
        do
        {
          *v4 += *(_QWORD *)((char *)v4 + v6 + 16);
          ++v4;
          --v5;
        }
        while ( v5 );
      }
    }
  }
  return 1LL;
}
