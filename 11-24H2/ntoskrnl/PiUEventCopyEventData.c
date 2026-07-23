/*
 * XREFs of PiUEventCopyEventData @ 0x1408575B0
 * Callers:
 *     PiUEventHandleGetEvent @ 0x140857350 (PiUEventHandleGetEvent.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _CmValidateDeviceInterfaceName @ 0x1408C77C0 (_CmValidateDeviceInterfaceName.c)
 */

__int64 __fastcall PiUEventCopyEventData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r10
  int v7; // eax
  _WORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  const void *v16; // rdx
  _WORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // edi
  __int64 v21; // rcx
  _WORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // edi
  const void *v26; // rdx
  _WORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  bool v30; // zf
  size_t v31; // r8
  _WORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r10
  unsigned int v35; // r11d
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  pcchLength = 0LL;
  v5 = 0;
  if ( a2 < 0x40 )
    return (unsigned int)-1073741789;
  v6 = a3 + 72;
  if ( *(_DWORD *)(a3 + 72) > a2 )
    return (unsigned int)-1073741789;
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(a3 + 76);
  *(_BYTE *)(a1 + 5) = *(_BYTE *)(a3 + 77);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 96);
  *(_OWORD *)(a1 + 12) = *(_OWORD *)(a3 + 80);
  v7 = *(_DWORD *)(a3 + 96);
  if ( v7 == 3 )
  {
    v8 = (_WORD *)(a3 + 136);
    if ( a3 == -136 )
      return (unsigned int)-1073741811;
    v9 = 200LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    v5 = -1073741811;
    if ( v9 )
    {
      v5 = 0;
      v10 = 200 - v9;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v9 && v10 )
    {
      v11 = v6 + ((2 * (_DWORD)v10 + 89) & 0xFFFFFFF8);
      v12 = *(unsigned __int16 *)(v11 + 10) - 36;
      v13 = v12 + 60;
      if ( a2 >= v12 + 60 )
      {
        *(_OWORD *)(a1 + 36) = *(_OWORD *)(v11 + 12);
        v14 = *(_DWORD *)(v11 + 40);
        *(_DWORD *)(a1 + 56) = v12;
        *(_DWORD *)(a1 + 52) = v14;
        memmove((void *)(a1 + 60), (const void *)(v11 + 44), v12);
        *(_DWORD *)(a1 + 28) = 1;
        *(_DWORD *)a1 = v13;
        return v5;
      }
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    switch ( v7 )
    {
      case 1:
        *(_DWORD *)(a1 + 52) = -1;
        *(_DWORD *)(a1 + 28) = 1;
        *(_DWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 36) = 0LL;
        *(_DWORD *)a1 = 60;
        return v5;
      case 2:
        v16 = (const void *)(a3 + 144);
        if ( a3 == -144 )
          return (unsigned int)-1073741811;
        v17 = (_WORD *)(a3 + 144);
        v18 = 0x7FFFLL;
        do
        {
          if ( !*v17 )
            break;
          ++v17;
          --v18;
        }
        while ( v18 );
        v5 = -1073741811;
        if ( v18 )
        {
          v5 = 0;
          v19 = 0x7FFF - v18;
        }
        else
        {
          v19 = 0LL;
        }
        if ( !v18 )
          return v5;
        v20 = 2 * v19 + 54;
        if ( a2 < v20 )
          return (unsigned int)-1073741789;
        *(_OWORD *)(a1 + 36) = *(_OWORD *)(v6 + 56);
        memmove((void *)(a1 + 52), v16, 2 * v19 + 2);
        v5 = CmValidateDeviceInterfaceName(v21, a1 + 52);
        if ( (v5 & 0x80000000) == 0 )
        {
          *(_QWORD *)(a1 + 52) = *(_QWORD *)L"\\\\?\\";
          *(_DWORD *)(a1 + 28) = 0;
          *(_DWORD *)a1 = v20;
        }
        return v5;
      case 4:
        v26 = (const void *)(a3 + 128);
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v32 = (_WORD *)(a3 + 128);
        v33 = 200LL;
        do
        {
          if ( !*v32 )
            break;
          ++v32;
          --v33;
        }
        while ( v33 );
        v5 = -1073741811;
        if ( v33 )
        {
          v5 = 0;
          v29 = 200 - v33;
        }
        else
        {
          v29 = 0LL;
        }
        v30 = v33 == 0;
        goto LABEL_43;
      case 9:
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v22 = (_WORD *)(a3 + 128);
        v23 = 200LL;
        do
        {
          if ( !*v22 )
            break;
          ++v22;
          --v23;
        }
        while ( v23 );
        v5 = -1073741811;
        if ( v23 )
        {
          v5 = 0;
          v24 = 200 - v23;
        }
        else
        {
          v24 = 0LL;
        }
        if ( !v23 )
          return v5;
        v25 = 2 * v24 + 38;
        if ( a2 < v25 )
          return (unsigned int)-1073741789;
        memmove((void *)(a1 + 36), (const void *)(a3 + 128), 2 * v24 + 2);
        *(_DWORD *)(a1 + 28) = 3;
        goto LABEL_35;
      case 10:
        v5 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a3 + 128), 0xC8uLL, &pcchLength);
        if ( (v5 & 0x80000000) != 0 )
          return v5;
        v25 = 2 * pcchLength + 38;
        if ( v35 < v25 )
          return (unsigned int)-1073741789;
        v31 = 2 * pcchLength + 2;
        v26 = (const void *)(v34 + 56);
        goto LABEL_64;
      case 11:
        v26 = (const void *)(a3 + 128);
        if ( a3 == -128 )
          return (unsigned int)-1073741811;
        v27 = (_WORD *)(a3 + 128);
        v28 = 200LL;
        do
        {
          if ( !*v27 )
            break;
          ++v27;
          --v28;
        }
        while ( v28 );
        v5 = -1073741811;
        if ( v28 )
        {
          v5 = 0;
          v29 = 200 - v28;
        }
        else
        {
          v29 = 0LL;
        }
        v30 = v28 == 0;
LABEL_43:
        if ( v30 )
          return v5;
        v25 = 2 * v29 + 38;
        if ( a2 < v25 )
          return (unsigned int)-1073741789;
        v31 = 2 * v29 + 2;
LABEL_64:
        memmove((void *)(a1 + 36), v26, v31);
        *(_DWORD *)(a1 + 28) = 2;
LABEL_35:
        *(_DWORD *)a1 = v25;
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
  return v5;
}
