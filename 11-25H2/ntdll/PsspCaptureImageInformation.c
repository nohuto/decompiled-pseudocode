/*
 * XREFs of PsspCaptureImageInformation @ 0x1800CA6BC
 * Callers:
 *     PsspCaptureVaSpaceInformation2 @ 0x1800CA11C (PsspCaptureVaSpaceInformation2.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x180163A00 (ZwReadVirtualMemory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall PsspCaptureImageInformation(__int64 a1, void *a2, char *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rax
  _WORD Buffer[30]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+6Ch] [rbp-94h]
  _DWORD v10[6]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+A0h] [rbp-60h]
  int v13; // [rsp+C0h] [rbp-40h]
  int v14; // [rsp+C8h] [rbp-38h]

  memset_thunk_772440563353939046(Buffer, 0, 0x40uLL);
  memset_thunk_772440563353939046(v10, 0, 0xF8uLL);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = ZwReadVirtualMemory(a2, a3, Buffer, 0x40uLL, 0LL);
  if ( result >= 0 )
  {
    if ( Buffer[0] != 23117 )
      return -1073741521;
    result = ZwReadVirtualMemory(a2, &a3[v9], v10, 0xF8uLL, 0LL);
    if ( result >= 0 )
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
          return 0;
        }
      }
      return -1073741701;
    }
  }
  return result;
}
