/*
 * XREFs of LdrpCorFixupImage @ 0x18010CA20
 * Callers:
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpCorFixupImage(unsigned __int64 a1)
{
  __int64 v1; // rax
  _WORD *v2; // rbx
  _QWORD *v3; // r14
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // eax
  unsigned __int16 v8; // ax
  _QWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+48h]
  int v12; // [rsp+90h] [rbp+50h] BYREF
  _WORD *v13; // [rsp+98h] [rbp+58h] BYREF

  v10 = a1;
  v11 = 0;
  v13 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v13);
  v1 = RtlImageDirectoryEntryToData(v10, 1, 0xEu, &v12);
  v2 = v13;
  if ( v13[12] != 267 || v13[2] != 332 || (*(_BYTE *)(v1 + 16) & 2) != 0 )
  {
    v8 = v13[2];
    if ( v8 < MEMORY[0x7FFE002C] || v8 > MEMORY[0x7FFE002E] )
      return (unsigned int)-1073741701;
    else
      return 0;
  }
  v3 = v13 + 60;
  v4 = (__int64)&v13[16 * (unsigned __int16)v13[3] + 12 + 4 * (unsigned __int16)v13[3]] + (unsigned __int16)v13[10];
  v9[0] = 4096LL;
  if ( v4 - v10 + 16 > 0x1000 )
    return 3221225595LL;
  result = ZwProtectVirtualMemory(-1LL, &v10, v9, 4LL);
  v6 = result;
  if ( (int)result >= 0 )
  {
    memmove(v2 + 68, v2 + 60, v4 - (_QWORD)v3);
    v7 = *((_DWORD *)v2 + 29);
    v2[10] += 16;
    *((_DWORD *)v2 + 33) = v7;
    *((_DWORD *)v2 + 32) = *((_DWORD *)v2 + 28);
    *v3 = *((unsigned int *)v2 + 27);
    *((_QWORD *)v2 + 14) = *((unsigned int *)v2 + 26);
    *((_QWORD *)v2 + 13) = *((unsigned int *)v2 + 25);
    *((_QWORD *)v2 + 12) = *((unsigned int *)v2 + 24);
    *((_QWORD *)v2 + 6) = *((unsigned int *)v2 + 13);
    v2[12] = 523;
    ZwProtectVirtualMemory(-1LL, &v10, v9, v11);
    return v6;
  }
  return result;
}
