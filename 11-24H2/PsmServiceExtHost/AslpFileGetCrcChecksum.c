/*
 * XREFs of AslpFileGetCrcChecksum @ 0x1800A0930
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x1800A0368 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlULongLongSub @ 0x18007191C (RtlULongLongSub.c)
 *     AslComputeCrc32 @ 0x18009D590 (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileGetCrcChecksum(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  int v4; // ecx
  unsigned int v5; // r8d
  _BYTE *v6; // rdx
  int v7; // ebx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  int v11; // r10d
  _BYTE *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = 0;
  if ( v3 >= 0x2000 )
  {
    AslComputeCrc32(0, *(_BYTE **)(a2 + 24), 0x1000u);
    v9 = v3 + v8;
    if ( v3 + v8 < v8 )
    {
      v9 = -1LL;
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
    }
    v13 = (_BYTE *)v9;
    if ( v7 < 0 || (v7 = RtlULongLongSub(v9, 0x1000uLL, (__int64 *)&v13), v7 < 0) )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)v7;
    }
    v5 = v10;
    v6 = v13;
    v4 = v11;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 32);
    v6 = *(_BYTE **)(a2 + 24);
  }
  *a1 = AslComputeCrc32(v4, v6, v5);
  return 0;
}
