/*
 * XREFs of RtlInitializeImageSystemOverride @ 0x14093C4E0
 * Callers:
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C5C968 (MiApplyFunctionOverrideToBootDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeImageSystemOverride(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // r9d
  int v6; // edx
  unsigned int v7; // eax
  __int64 result; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r10

  v3 = dword_140E2D8E0[0];
  *(_OWORD *)a1 = 0LL;
  v4 = (a2 + 4095) & 0xFFFFF000;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  if ( v4 + v3 + 4095 < 0x7FFFFFFF )
  {
    v9 = (_DWORD *)a1;
    v10 = 4LL;
    do
    {
      *v9 = v3 + v4 + *(_DWORD *)((char *)RtlSystemOverrideInformation + (_QWORD)v9 - a1);
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  if ( (KeFeatureBits & 1) != 0 )
    v6 = *((_DWORD *)Base + 21);
  else
    v6 = *((_DWORD *)Base + 22);
  v7 = dword_140E375EC + dword_140E375F0 + v6 + a2;
  if ( v7 < 0x7FFFFFFF )
    *(_DWORD *)(a1 + 16) = v7;
  if ( a3 )
  {
    *(_DWORD *)a1 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 44);
  }
  result = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  return result;
}
