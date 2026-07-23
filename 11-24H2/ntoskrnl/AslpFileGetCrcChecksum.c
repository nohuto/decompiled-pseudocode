/*
 * XREFs of AslpFileGetCrcChecksum @ 0x14080D98C
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x14080D3E0 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlULongLongSub @ 0x140473334 (RtlULongLongSub.c)
 *     AslComputeCrc32 @ 0x140808DAC (AslComputeCrc32.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetCrcChecksum(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  int v4; // ecx
  unsigned int v5; // r8d
  _BYTE *v6; // rdx
  NTSTATUS v7; // ebx
  unsigned __int64 v8; // r11
  ULONGLONG v9; // rcx
  unsigned int v10; // edx
  int v11; // r10d
  ULONGLONG pullResult; // [rsp+60h] [rbp+18h] BYREF

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
    pullResult = v9;
    if ( v7 < 0 || (v7 = RtlULongLongSub(v9, 0x1000uLL, &pullResult), v7 < 0) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpFileGetCrcChecksum",
        4787,
        (unsigned int)"Overflow/underflow encountered computing position for CRC_CHECKSUM [%x]");
      return (unsigned int)v7;
    }
    v5 = v10;
    v6 = (_BYTE *)pullResult;
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
