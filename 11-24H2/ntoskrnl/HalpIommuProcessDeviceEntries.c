/*
 * XREFs of HalpIommuProcessDeviceEntries @ 0x14056ED68
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HalpIommuProcessDeviceEntries(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // r12
  _BYTE *v4; // rsi
  int Memory; // ebx
  _BYTE *v6; // r15
  _BYTE *v7; // r12
  char v8; // r11
  _BYTE *v9; // r13
  _BYTE *v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // r10
  _BYTE *v13; // r9
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  int v16; // ecx
  ULONG v17; // edx
  char v18; // al
  ULONG v19; // r8d
  char v20; // r8
  ULONG v21; // ebp
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // rcx
  ULONG v26; // edx
  __int64 v28[11]; // [rsp+20h] [rbp-58h] BYREF
  char v32; // [rsp+98h] [rbp+20h]

  v3 = *(unsigned __int16 *)(a2 + 2);
  v4 = (_BYTE *)(a2 + 40);
  Memory = 0;
  v6 = 0LL;
  v28[0] = 0LL;
  v7 = (_BYTE *)(a2 + v3);
  v8 = 0;
  *a3 = 0;
  v32 = 0;
  v9 = 0LL;
  v10 = a3;
  v11 = (_BYTE *)a2;
  v12 = a1;
  while ( v4 < v7 )
  {
    v13 = v4;
    if ( v7 == v4 )
      return (unsigned int)-1073741811;
    if ( (unsigned __int8)(*v11 - 16) <= 1u )
    {
      if ( *v4 > 0x7Fu )
        return (unsigned int)-1073741811;
      v14 = *v4;
    }
    else
    {
      v14 = *v4;
      if ( *v4 == 0xF0 )
      {
        if ( (unsigned __int64)(v7 - v4) < 0x16 )
          return (unsigned int)-1073741811;
        v9 = v4;
        LODWORD(v15) = (unsigned __int8)v4[21] + 22;
        goto LABEL_13;
      }
      if ( v14 > 0x7Fu )
        return (unsigned int)-1073741811;
    }
    v15 = 1LL << ((v14 >> 6) + 2);
LABEL_13:
    if ( (unsigned int)v15 > (unsigned __int64)(v7 - v4) )
      return (unsigned int)-1073741811;
    v4 += (unsigned int)v15;
    if ( v6 )
    {
      if ( v14 != 4 )
        return (unsigned int)-1073741811;
      v16 = *(unsigned __int16 *)(v13 + 1);
      v17 = *(unsigned __int16 *)(v6 + 1);
      if ( (unsigned __int16)v16 < (unsigned __int16)v17 )
        return (unsigned int)-1073741811;
      v18 = *v6;
      if ( *v6 == 3 )
        goto LABEL_22;
      if ( v18 == 67 )
      {
        v17 = *(unsigned __int16 *)(v6 + 5);
        v19 = 1;
      }
      else
      {
        if ( v18 != 71 )
        {
          Memory = -1073741811;
LABEL_24:
          v6 = 0LL;
          goto LABEL_25;
        }
LABEL_22:
        v19 = v16 - v17 + 1;
      }
      RtlSetBits((PRTL_BITMAP)(v12 + 184), v17, v19);
      v8 = v32;
      v12 = a1;
      goto LABEL_24;
    }
    v20 = v8;
    v8 = 0;
    v32 = 0;
    if ( v14 > 0x40u )
    {
      switch ( v14 )
      {
        case 0x42u:
          v26 = *(unsigned __int16 *)(v13 + 5);
LABEL_50:
          RtlSetBits((PRTL_BITMAP)(v12 + 184), v26, 1u);
          v12 = a1;
          v11 = (_BYTE *)a2;
          v8 = 0;
          break;
        case 0x43u:
          goto LABEL_48;
        case 0x46u:
LABEL_47:
          v26 = *(unsigned __int16 *)(v13 + 1);
          goto LABEL_50;
        case 0x47u:
LABEL_48:
          v6 = v13;
          goto LABEL_25;
        case 0xF0u:
          if ( v9[20] != 2 )
          {
            *v10 = 1;
            goto LABEL_25;
          }
          v21 = *(unsigned __int16 *)(v9 + 1);
          RtlSetBits((PRTL_BITMAP)(v12 + 184), v21, 1u);
          Memory = ExtEnvAllocateMemory(v22, 0x20u, v28);
          if ( Memory < 0 )
            return (unsigned int)Memory;
          v24 = (_QWORD *)v28[0];
          *(_DWORD *)(v28[0] + 24) = v21;
          Memory = ExtEnvAllocateMemory(v23, (unsigned int)(unsigned __int8)v9[21] + 1, v24 + 2);
          if ( Memory < 0 )
            return (unsigned int)Memory;
          memmove((void *)v24[2], v9 + 22, (unsigned __int8)v9[21]);
          v12 = a1;
          v25 = *(_QWORD **)(a1 + 232);
          if ( *v25 != a1 + 224 )
            __fastfail(3u);
          v8 = 0;
          *v24 = a1 + 224;
          v24[1] = v25;
          *v25 = v24;
          *(_QWORD *)(a1 + 232) = v24;
          v11 = (_BYTE *)a2;
          v10 = a3;
          break;
        default:
LABEL_40:
          v8 = 1;
          v32 = 1;
          goto LABEL_25;
      }
    }
    else
    {
      v11 = (_BYTE *)a2;
      if ( v14 != 64 && v14 && v14 != 1 )
      {
        if ( v14 == 2 )
          goto LABEL_47;
        if ( v14 == 3 )
          goto LABEL_48;
        if ( v14 != 4 )
          goto LABEL_40;
        if ( !v20 )
          return (unsigned int)-1073741811;
LABEL_25:
        v11 = (_BYTE *)a2;
      }
    }
  }
  if ( v6 )
    return (unsigned int)-1073741811;
  return (unsigned int)Memory;
}
