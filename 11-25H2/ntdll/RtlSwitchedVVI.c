/*
 * XREFs of RtlSwitchedVVI @ 0x180038630
 * Callers:
 *     <none>
 * Callees:
 *     SwitchedRtlGetVersion @ 0x180038AB0 (SwitchedRtlGetVersion.c)
 *     RtlpVerCompare @ 0x180039B00 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x1800EC580 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  char v5; // bl
  __int64 result; // rax
  unsigned int v8; // ebp
  char v9; // cl
  __int64 v10; // rdi
  unsigned int v11; // eax
  char v12; // cl
  int v13; // edx
  bool v14; // al
  char v15; // al
  unsigned int v16; // eax
  char v17; // cl
  int v18; // esi
  int v19; // r14d
  int v20; // r12d
  unsigned int v21; // r10d
  int v22; // eax
  int v23; // r11d
  int v24; // eax
  int v25; // eax
  _BYTE v26[16]; // [rsp+30h] [rbp-168h] BYREF
  int v27; // [rsp+40h] [rbp-158h] BYREF
  _DWORD v28[68]; // [rsp+44h] [rbp-154h] BYREF
  unsigned __int16 v29; // [rsp+154h] [rbp-44h]
  unsigned __int16 v30; // [rsp+156h] [rbp-42h]
  unsigned __int16 v31; // [rsp+158h] [rbp-40h]
  unsigned __int8 v32; // [rsp+15Ah] [rbp-3Eh]

  v3 = 0;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  memset_thunk_772440563353939046(v28, 0, 0x118uLL);
  v27 = 284;
  result = SwitchedRtlGetVersion(&v27);
  if ( (_DWORD)result )
    return result;
  v8 = 0;
  if ( (v5 & 0x40) == 0 )
    goto LABEL_4;
  v19 = *(unsigned __int16 *)(a1 + 280);
  if ( !(_WORD)v19 )
    goto LABEL_4;
  v20 = v31;
  v21 = 0;
  while ( v21 < 0x10 )
  {
    if ( (v19 & (1 << v21)) == 0 )
      goto LABEL_50;
    if ( a3 >= 0 )
      return 3221225485LL;
    v22 = RtlpVerGetConditionMask(a3, 64LL) - 6;
    if ( !v22 )
    {
      if ( (v20 & v23) == 0 )
        return 3221225561LL;
      goto LABEL_50;
    }
    if ( v22 != 1 )
      return 3221225485LL;
    if ( (v20 & v23) != 0 )
    {
      v3 = 1;
      ++v21;
    }
    else
    {
LABEL_50:
      ++v21;
    }
  }
  if ( (unsigned int)RtlpVerGetConditionMask(a3, 64LL) == 7 && !v3 )
    return 3221225561LL;
LABEL_4:
  v9 = 1;
  LODWORD(v10) = 1;
  v26[0] = 1;
  if ( (v5 & 2) == 0 )
    goto LABEL_26;
  if ( a3 >= 0 )
  {
    LODWORD(v10) = (unsigned __int8)((unsigned __int64)a3 >> 4);
  }
  else
  {
    v11 = 2;
    v12 = 0;
    do
    {
      v11 >>= 1;
      ++v12;
    }
    while ( v11 );
    v10 = ((unsigned __int64)a3 >> (3 * v12 - 3)) & 7;
  }
  v13 = *(_DWORD *)(a1 + 4);
  v9 = v13 == v28[0];
  v26[0] = v13 == v28[0];
  if ( (_DWORD)v10 != 3 )
  {
    switch ( (_DWORD)v10 )
    {
      case 1:
        v14 = v28[0] == v13;
        break;
      case 2:
        v14 = v28[0] > v13;
        break;
      case 4:
        v14 = v28[0] < v13;
        break;
      case 5:
        v14 = v28[0] <= v13;
        break;
      default:
LABEL_16:
        if ( v13 != v28[0] )
          return 3221225561LL;
        goto LABEL_26;
    }
    if ( v14 )
      goto LABEL_20;
    goto LABEL_16;
  }
  if ( v28[0] < v13 )
    goto LABEL_16;
LABEL_20:
  if ( v13 != v28[0] )
  {
LABEL_21:
    if ( (v5 & 4) != 0 )
    {
      v24 = a3 >= 0 ? BYTE2(a3) : RtlpVerGetConditionMask(a3, 4LL);
      if ( !(unsigned __int8)RtlpVerCompare(v24, *(_DWORD *)(a1 + 12), v28[2], (unsigned int)v26, 0) )
        return 3221225561LL;
    }
    if ( (v5 & 8) != 0 )
    {
      v25 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 8LL);
      if ( !(unsigned __int8)RtlpVerCompare(v25, *(_DWORD *)(a1 + 16), v28[3], (unsigned int)v26, 0) )
        return 3221225561LL;
    }
    if ( v5 >= 0 )
      return 0LL;
    if ( a3 >= 0 )
    {
      v18 = 0;
    }
    else
    {
      v16 = 128;
      v17 = 0;
      do
      {
        v16 >>= 1;
        ++v17;
      }
      while ( v16 );
      v18 = ((unsigned __int64)a3 >> (3 * v17 - 3)) & 7;
    }
    if ( !(unsigned __int8)RtlpVerCompare(v18, *(unsigned __int8 *)(a1 + 282), v32, (unsigned int)v26, 0) )
      return (unsigned int)-1073741735;
    return v8;
  }
LABEL_26:
  if ( (v5 & 1) == 0 )
    goto LABEL_29;
  if ( (_DWORD)v10 == 1 )
  {
    if ( a3 >= 0 )
      LODWORD(v10) = (unsigned __int8)((unsigned __int64)a3 >> 2);
    else
      LODWORD(v10) = RtlpVerGetConditionMask(a3, 1LL);
  }
  v15 = RtlpVerCompare(v10, *(_DWORD *)(a1 + 8), v28[1], (unsigned int)v26, 1);
  v9 = v26[0];
  if ( !v15 )
  {
    if ( !v26[0] )
      return 3221225561LL;
  }
  else
  {
LABEL_29:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x20) != 0 )
  {
    if ( (_DWORD)v10 == 1 )
    {
      if ( a3 >= 0 )
        LODWORD(v10) = 0;
      else
        LODWORD(v10) = RtlpVerGetConditionMask(a3, 32LL);
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, *(unsigned __int16 *)(a1 + 276), v29, (unsigned int)v26, 0) )
    {
      v9 = v26[0];
      goto LABEL_34;
    }
    if ( !v26[0] )
      return 3221225561LL;
  }
  else
  {
LABEL_34:
    if ( !v9 )
      goto LABEL_21;
  }
  if ( (v5 & 0x10) == 0 )
    goto LABEL_21;
  if ( (_DWORD)v10 == 1 )
  {
    if ( a3 >= 0 )
      LODWORD(v10) = 0;
    else
      LODWORD(v10) = RtlpVerGetConditionMask(a3, 16LL);
  }
  if ( (unsigned __int8)RtlpVerCompare(v10, *(unsigned __int16 *)(a1 + 278), v30, (unsigned int)v26, 1) )
    goto LABEL_21;
  return 3221225561LL;
}
