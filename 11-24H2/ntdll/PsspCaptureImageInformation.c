/*
 * XREFs of PsspCaptureImageInformation @ 0x1800C590C
 * Callers:
 *     PsspCaptureVaSpaceInformation2 @ 0x1800C536C (PsspCaptureVaSpaceInformation2.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180162470 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspCaptureImageInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  _WORD v8[30]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+6Ch] [rbp-94h]
  _DWORD v10[6]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+A0h] [rbp-60h]
  int v13; // [rsp+C0h] [rbp-40h]
  int v14; // [rsp+C8h] [rbp-38h]

  memset_thunk_772440563353939046(v8, 0, 0x40uLL);
  memset_thunk_772440563353939046(v10, 0, 0xF8uLL);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = ZwReadVirtualMemory(a2, a3, v8, 64LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v8[0] != 23117 )
      return 3221225775LL;
    result = ZwReadVirtualMemory(a2, a3 + v9, v10, 248LL, 0LL);
    if ( (int)result >= 0 )
    {
      if ( v10[0] == 17744 )
      {
        if ( v11 == 267 )
        {
          v7 = HIDWORD(v12);
          goto LABEL_8;
        }
        if ( v11 == 523 )
        {
          v7 = v12;
LABEL_8:
          *(_QWORD *)(a1 + 8) = v7;
          *(_DWORD *)a1 = v10[2];
          *(_DWORD *)(a1 + 4) = v13;
          *(_DWORD *)(a1 + 16) = v14;
          return 0LL;
        }
      }
      return 3221225595LL;
    }
  }
  return result;
}
