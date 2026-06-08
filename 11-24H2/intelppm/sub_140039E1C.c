/*
 * XREFs of sub_140039E1C @ 0x140039E1C
 * Callers:
 *     sub_140039440 @ 0x140039440 (sub_140039440.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     sub_140046E08 @ 0x140046E08 (sub_140046E08.c)
 */

__int64 __fastcall sub_140039E1C(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r15d
  unsigned int *Pool2; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // rdi
  char v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // ecx
  unsigned __int16 v14; // r9
  unsigned int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ebx
  __int64 v20; // rsi
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+80h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 1132);
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 12 * v2 + 4, 1919119952LL);
  v5 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *Pool2 = v2;
  v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 18LL, Pool2);
  v6 = v7;
  if ( v7 < 0 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 4u, 2u, 0xCu, (__int64)&unk_140014AE0, v7);
    goto LABEL_61;
  }
  v9 = 0LL;
  v10 = 0;
  v6 = -1073741811;
  while ( (unsigned int)v9 < v2 )
  {
    v11 = *(_QWORD *)(a1 + 280);
    if ( (v11 & 0x200000000LL) == 0 && (v5[3 * v9 + 1] & 0x78) == 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v14 = 13;
        goto LABEL_38;
      }
LABEL_61:
      ExFreePoolWithTag(v5, 0x72637250u);
      return v6;
    }
    if ( (v11 & 0x200) == 0 && (v5[3 * v9 + 1] & 0x78) != 0 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_61;
      v14 = 14;
      goto LABEL_38;
    }
    v12 = v5[3 * v9 + 1];
    if ( (v12 & 0x78) != 0 )
    {
      v13 = v5[3 * v9 + 1] & 1;
      if ( (v12 & 1) == 0 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_61;
        v14 = 15;
        goto LABEL_38;
      }
      if ( (v12 & 2) == 0 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_61;
        v14 = 16;
        goto LABEL_38;
      }
      if ( (v12 & 4) == 0 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_61;
        v14 = 17;
        goto LABEL_38;
      }
      if ( (v12 & 0x80u) == 0 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_61;
        v14 = 18;
        goto LABEL_38;
      }
    }
    else
    {
      if ( v5[3 * v9 + 2] == -1 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_61;
        v14 = 19;
LABEL_38:
        LODWORD(v22) = v9;
        sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, v14, (__int64)&unk_140014AE0, v22);
        goto LABEL_61;
      }
      v13 = v5[3 * v9 + 1] & 1;
    }
    if ( (v12 & 0x81) == 0x80 )
    {
      v6 = -1073741637;
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_61;
      v14 = 20;
      goto LABEL_38;
    }
    if ( v13 )
      v10 = 1;
    v24 = v10;
    if ( (_DWORD)v9 )
    {
      v8 = v5[3 * v9 + 2];
      v15 = v5[3 * (unsigned int)(v9 - 1) + 2];
      if ( v8 == -1 )
      {
        if ( v15 != -1 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_61;
          v16 = 21;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v8 < v15 )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_61;
          v16 = 22;
LABEL_29:
          LODWORD(v23) = v9 - 1;
          LODWORD(v22) = v9;
          sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 1u, v16, (__int64)&unk_140014AE0, v22, v23);
          goto LABEL_61;
        }
        if ( v15 == -1 && off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LODWORD(v23) = v9 - 1;
          LODWORD(v22) = v9;
          sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x17u, (__int64)&unk_140014AE0, v22, v23);
          v10 = v24;
        }
      }
      if ( v5[3 * v9 + 3] < v5[3 * (unsigned int)(v9 - 1) + 3] )
      {
        v6 = -1073741637;
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_61;
        v16 = 24;
        goto LABEL_29;
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
  if ( !v10 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v8) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v8, 1, 25, (__int64)&unk_140014AE0);
    }
    v6 = -1073741637;
    goto LABEL_61;
  }
  v17 = ExAllocatePool2(64LL, 16 * v2, 1919119952LL);
  v18 = v17;
  if ( !v17 )
  {
    v6 = -1073741670;
    goto LABEL_61;
  }
  v19 = 0;
  if ( v2 )
  {
    v20 = v17;
    do
    {
      sub_140046E08(a1, v19++, 28LL, v20);
      v20 += 16LL;
    }
    while ( v19 < v2 );
  }
  v6 = 0;
  *(_QWORD *)(a1 + 1152) = v18;
  *a2 = v5;
  return v6;
}
