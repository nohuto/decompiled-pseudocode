/*
 * XREFs of RtlpReadExtendedContext @ 0x1409219A0
 * Callers:
 *     KyRaiseException @ 0x1403D4170 (KyRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiContinuePreviousModeUser @ 0x1403D49D0 (KiContinuePreviousModeUser.c)
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     PspWow64GetContextThread @ 0x140992510 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlpCopyExtendedContext @ 0x1403D4F10 (RtlpCopyExtendedContext.c)
 *     RtlpValidateContextFlags @ 0x1403D5250 (RtlpValidateContextFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     RtlpReadExtendedContextLayout @ 0x140921CC0 (RtlpReadExtendedContextLayout.c)
 */

__int64 __fastcall RtlpReadExtendedContext(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6)
{
  __int64 v8; // r14
  _OWORD *v9; // rbx
  __int64 result; // rax
  int v11; // ecx
  char v12; // si
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  unsigned int *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  int v27; // [rsp+34h] [rbp-64h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h]
  int v29; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+44h] [rbp-54h]
  _OWORD v31[2]; // [rsp+48h] [rbp-50h] BYREF

  v27 = 0;
  v29 = 0;
  memset(v31, 0, sizeof(v31));
  v8 = 0LL;
  v28 = 0LL;
  v9 = v31;
  if ( a6 )
    v9 = a6;
  result = RtlpValidateContextFlags(a4, (__int64)&v27);
  if ( (int)result >= 0 )
  {
    v12 = v27;
    if ( (v27 & 4) != 0 )
      return 3221225659LL;
    result = RtlpReadExtendedContextLayout(v11, a4, a5, v27, (__int64)v9);
    if ( (int)result >= 0 )
    {
      if ( (a4 & 0x10000) != 0 )
      {
        v13 = 4;
        v8 = a5 + 716;
        v28 = a5 + 716;
      }
      else if ( (a4 & 0x100000) != 0 )
      {
        v13 = 16;
        v8 = a5 + 1232;
        v28 = a5 + 1232;
      }
      else if ( (a4 & 0x200000) != 0 )
      {
        v13 = 8;
        v8 = a5 + 416;
        v28 = a5 + 416;
      }
      else if ( (a4 & 0x400000) != 0 )
      {
        v13 = 16;
        v8 = a5 + 912;
        v28 = a5 + 912;
      }
      else
      {
        v13 = v29;
      }
      if ( (v12 & 1) != 0 )
      {
        v20 = *((unsigned int *)v9 + 3);
        if ( (_DWORD)v20 )
        {
          v21 = *((int *)v9 + 2);
          if ( ((unsigned int)(v13 - 1) & (unsigned __int64)(v21 + v8)) != 0 )
            ExRaiseDatatypeMisalignment();
          v22 = v8 + v21 + v20;
          if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 + v8 )
          {
            v12 = v27;
            v8 = v28;
          }
        }
      }
      if ( (v12 & 2) != 0 )
      {
        v23 = *((unsigned int *)v9 + 5);
        if ( (_DWORD)v23 )
        {
          v24 = *((int *)v9 + 4);
          v25 = v24 + v8;
          if ( (((_BYTE)v24 + (_BYTE)v8) & 0x3F) != 0 )
            ExRaiseDatatypeMisalignment();
          v14 = v8 + v23 + v24;
          if ( v14 > 0x7FFFFFFF0000LL || v14 < v25 )
          {
            v12 = v27;
            v8 = v28;
          }
        }
      }
      result = RtlpCopyExtendedContext(a2, a3, 0LL, a4, v8, (__int64)v9);
      v15 = result;
      v30 = result;
      if ( (int)result >= 0 )
      {
        v16 = (unsigned int *)(a3 + *(int *)(a3 + 8));
        if ( (a4 & 0x10000) == 0 )
        {
          if ( (a4 & 0x100000) != 0 )
          {
            v16[12] = a4;
LABEL_14:
            if ( (v12 & 2) != 0 )
            {
              v17 = a3 + *(int *)(a3 + 16);
              v18 = *(_QWORD *)v17 & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0xFFFFFFFFFFFFFFFCuLL;
              *(_QWORD *)v17 = v18;
              if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
              {
                v19 = *(_QWORD *)(v17 + 8) & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL);
                *(_QWORD *)(v17 + 8) = v19;
                if ( (~v19 & v18) != 0 )
                  return 3221225485LL;
              }
              else
              {
                *(_QWORD *)(v17 + 8) = 0LL;
              }
              *(_OWORD *)(v17 + 16) = 0LL;
              *(_OWORD *)(v17 + 32) = 0LL;
              *(_OWORD *)(v17 + 48) = 0LL;
            }
            return v15;
          }
          if ( (a4 & 0x200000) == 0 && (a4 & 0x400000) == 0 )
            goto LABEL_14;
        }
        *v16 = a4;
        goto LABEL_14;
      }
    }
  }
  return result;
}
