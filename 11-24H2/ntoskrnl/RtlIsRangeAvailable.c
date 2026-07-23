/*
 * XREFs of RtlIsRangeAvailable @ 0x140A20350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsRangeAvailable @ 0x140A20400 (RtlpIsRangeAvailable.c)
 */

__int64 __fastcall RtlIsRangeAvailable(__int64 *a1, int a2, int a3, int a4, char a5, __int64 a6, __int64 a7, _BYTE *a8)
{
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  char v11; // cl
  __int64 v13; // rax
  char v14; // [rsp+20h] [rbp-58h]
  __int64 *v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-18h]
  int v18; // [rsp+68h] [rbp-10h]
  int v19; // [rsp+6Ch] [rbp-Ch]

  v8 = *((_DWORD *)a1 + 6);
  v19 = 0;
  v18 = v8;
  v9 = (__int64 *)*a1;
  v15 = a1;
  if ( v9 == a1 )
  {
    *a8 = 1;
  }
  else
  {
    v10 = (__int64)(v9 - 5);
    if ( (*((_BYTE *)v9 - 6) & 1) != 0 )
    {
      v13 = v10 + 16;
      v10 = *(_QWORD *)(v10 + 16) - 40LL;
      v16 = v13;
    }
    else
    {
      v16 = 0LL;
    }
    v17 = v10;
    v11 = a4 & 2;
    v14 = a4 & 1;
    LOBYTE(a4) = a5;
    *a8 = RtlpIsRangeAvailable((unsigned int)&v15, a2, a3, a4, v14, v11, 1, a6, a7);
  }
  return 0LL;
}
