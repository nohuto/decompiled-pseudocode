/*
 * XREFs of RtlVerifyVersionInfo @ 0x1800ABEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     RtlpVerCompare @ 0x1800AACC0 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x1800ACEC0 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  bool v8; // al
  int ConditionMask; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int i; // r10d
  int v15; // eax
  unsigned __int16 v16; // r11
  bool v17[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19[68]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v20; // [rsp+154h] [rbp+54h]
  unsigned __int16 v21; // [rsp+156h] [rbp+56h]
  unsigned __int16 v22; // [rsp+158h] [rbp+58h]
  unsigned __int8 v23; // [rsp+15Ah] [rbp+5Ah]

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset_thunk_772440563353939046(v19, 0, 0x118uLL);
  v18 = 284;
  result = RtlGetVersion(&v18);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 && *(_WORD *)(a1 + 280) )
    {
      for ( i = 0; i < 0x10; ++i )
      {
        if ( (*(unsigned __int16 *)(a1 + 280) & (1 << i)) != 0 )
        {
          if ( a3 >= 0 )
            return 3221225485LL;
          v15 = RtlpVerGetConditionMask(a3, 64LL) - 6;
          if ( v15 )
          {
            if ( v15 != 1 )
              return 3221225485LL;
            if ( (v22 & v16) != 0 )
              v6 = 1;
          }
          else if ( (v22 & v16) == 0 )
          {
            return 3221225561LL;
          }
        }
      }
      if ( (unsigned int)RtlpVerGetConditionMask(a3, 64LL) == 7 && !v6 )
        return 3221225561LL;
    }
    v8 = 1;
    v17[0] = 1;
    ConditionMask = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        ConditionMask = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        ConditionMask = RtlpVerGetConditionMask(a3, 2LL);
      v10 = !RtlpVerCompare(ConditionMask, *(_DWORD *)(a1 + 4), v19[0], v17, 0);
      v8 = v17[0];
      if ( v10 )
      {
        if ( !v17[0] )
          return 3221225561LL;
      }
      else if ( !v17[0] )
      {
        goto LABEL_27;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_14;
    if ( ConditionMask == 1 )
    {
      if ( a3 >= 0 )
        ConditionMask = (unsigned __int8)((unsigned __int64)a3 >> 2);
      else
        ConditionMask = RtlpVerGetConditionMask(a3, 1LL);
    }
    v10 = !RtlpVerCompare(ConditionMask, *(_DWORD *)(a1 + 8), v19[1], v17, 1);
    v8 = v17[0];
    if ( v10 )
    {
      if ( !v17[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_14:
      if ( !v8 )
        goto LABEL_27;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( ConditionMask == 1 )
      {
        if ( a3 >= 0 )
          ConditionMask = 0;
        else
          ConditionMask = RtlpVerGetConditionMask(a3, 32LL);
      }
      if ( !RtlpVerCompare(ConditionMask, *(unsigned __int16 *)(a1 + 276), v20, v17, 0) )
      {
        if ( !v17[0] )
          return 3221225561LL;
        goto LABEL_22;
      }
      v8 = v17[0];
    }
    if ( v8 )
    {
LABEL_22:
      if ( (v4 & 0x10) != 0 )
      {
        if ( ConditionMask == 1 )
        {
          if ( a3 < 0 )
            ConditionMask = RtlpVerGetConditionMask(a3, 16LL);
          else
            ConditionMask = 0;
        }
        if ( !RtlpVerCompare(ConditionMask, *(unsigned __int16 *)(a1 + 278), v21, v17, 1) )
          return 3221225561LL;
      }
    }
LABEL_27:
    if ( (v4 & 4) == 0
      || (a3 >= 0 ? (v11 = BYTE2(a3)) : (v11 = RtlpVerGetConditionMask(a3, 4LL)),
          RtlpVerCompare(v11, *(_DWORD *)(a1 + 12), v19[2], v17, 0)) )
    {
      if ( (v4 & 8) == 0
        || (a3 >= 0 ? (v12 = 0) : (v12 = RtlpVerGetConditionMask(a3, 8LL)),
            RtlpVerCompare(v12, *(_DWORD *)(a1 + 16), v19[3], v17, 0)) )
      {
        if ( v4 >= 0 )
          return 0LL;
        if ( a3 >= 0 )
          v13 = 0;
        else
          v13 = RtlpVerGetConditionMask(a3, 128LL);
        return !RtlpVerCompare(v13, *(unsigned __int8 *)(a1 + 282), v23, v17, 0) ? 0xC0000059 : 0;
      }
    }
    return 3221225561LL;
  }
  return result;
}
