/*
 * XREFs of HsaSetDevicePasidTable @ 0x140570C40
 * Callers:
 *     <none>
 * Callees:
 *     HsaUpdateDeviceTableEntry @ 0x14043E974 (HsaUpdateDeviceTableEntry.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 *__fastcall HsaSetDevicePasidTable(__int64 a1, __int64 a2, char a3, char a4)
{
  int *v8; // rax
  __int64 *result; // rax
  __int64 v10; // [rsp+38h] [rbp-90h]
  __int64 v11; // [rsp+40h] [rbp-88h]
  int v12; // [rsp+50h] [rbp-78h] BYREF
  int v13; // [rsp+54h] [rbp-74h]
  int v14; // [rsp+80h] [rbp-48h]

  memset_0(&v12, 0, 0x70uLL);
  if ( a4 )
  {
    v8 = 0LL;
  }
  else
  {
    if ( a3 )
    {
      result = (__int64 *)*(unsigned int *)(a1 + 172);
      v12 = 1;
      if ( (_DWORD)result == 2 )
      {
        v13 = 1;
      }
      else
      {
        if ( (_DWORD)result != 1 )
          return result;
        v13 = 0;
        v14 = 0;
      }
    }
    else
    {
      v14 = *(_DWORD *)(*(_QWORD *)(a2 + 48) + 32LL);
    }
    v8 = &v12;
  }
  return HsaUpdateDeviceTableEntry(
           a1,
           *(unsigned int **)(a2 + 40),
           *(_QWORD *)(a2 + 48),
           0,
           (__int64)v8,
           0,
           0,
           v10,
           v11,
           0LL);
}
