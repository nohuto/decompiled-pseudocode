/*
 * XREFs of MiInitializeIoPageNodeArray @ 0x140484F5C
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeIoPageNodeArray(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  int v3; // eax
  unsigned int v4; // eax
  unsigned __int64 v5; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 512LL;
  do
  {
    v3 = v1++ & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1);
    v4 = 2 * (v3 - *(_DWORD *)(a1 + 24));
    v5 = (unsigned __int64)v4 >> 5;
    result = (3 << (v4 & 0x1F)) | *(_DWORD *)(a1 + 4 * v5 + 44) & (unsigned int)~(3 << (v4 & 0x1F));
    *(_DWORD *)(a1 + 4 * v5 + 44) = result;
    --v2;
  }
  while ( v2 );
  return result;
}
