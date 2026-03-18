/*
 * XREFs of VidSchGetSchedulingLogSize @ 0x1400A7E8C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?VidSchiGetSchedulingLogBufferSize@@YA_KI@Z @ 0x140051D64 (-VidSchiGetSchedulingLogBufferSize@@YA_KI@Z.c)
 */

__int64 __fastcall VidSchGetSchedulingLogSize(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned int v2; // r8d
  unsigned int v3; // edx
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rax
  int SchedulingLogBufferSize; // eax
  int v8; // r8d

  v1 = *(_DWORD *)(a1 + 80);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    v4 = *(_DWORD *)(a1 + 760);
    v5 = *(_QWORD *)(a1 + 688);
    do
    {
      if ( v3 >= v4 )
        v6 = v5;
      else
        v6 = v5 + 8LL * v3;
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 12LL) & 2) != 0 )
      {
        SchedulingLogBufferSize = VidSchiGetSchedulingLogBufferSize(0x2000);
        v2 = SchedulingLogBufferSize + v8;
      }
      ++v3;
    }
    while ( v3 < v1 );
  }
  return v2;
}
