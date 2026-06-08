/*
 * XREFs of sub_14000C380 @ 0x14000C380
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14000C380(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // r8
  _DWORD *v16; // r9
  __int64 v17; // r10
  __int64 v18; // rcx
  unsigned int v19; // eax

  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 3008))(qword_140019128, a1);
  v8 = 0;
  v10 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
                      qword_140019128,
                      v7,
                      off_140018040)
                  + 224);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 56);
    v12 = *(unsigned int *)(v11 + 64);
    v13 = 12 * v12 + 40;
    if ( a4 )
      *a4 = v13;
    if ( a2 >= v13 )
    {
      sub_140010680(a3, 0LL, v13);
      v14 = 0;
      a3[1] = *(_DWORD *)(*(_QWORD *)(v11 + 56) + 16LL);
      a3[9] = v12;
      if ( (_DWORD)v12 )
      {
        v15 = 0LL;
        v16 = a3 + 12;
        v17 = v12;
        do
        {
          v18 = *(_QWORD *)(v11 + 56);
          v15 += 32LL;
          *(v16 - 2) = *(_DWORD *)(v15 + v18 - 16);
          *(v16 - 1) = *(unsigned __int8 *)(v15 + v18 - 7);
          *v16 = *(unsigned __int8 *)(v15 + v18 - 8);
          v16 += 3;
          v19 = *(unsigned __int16 *)(v15 + v18 - 6);
          if ( v14 > v19 )
            v19 = v14;
          v14 = v19;
          --v17;
        }
        while ( v17 );
      }
      a3[7] = v14;
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v9) = 3;
      sub_140003D28(off_140018050->DeviceExtension, v9, 3, 13, (__int64)&unk_140013468);
    }
    return (unsigned int)-1073741163;
  }
  return v8;
}
