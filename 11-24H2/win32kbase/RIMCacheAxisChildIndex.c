/*
 * XREFs of RIMCacheAxisChildIndex @ 0x14012A1B4
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x140129E5C (RIMRetrieveLinkCollection.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, struct _HIDP_PREPARSED_DATA *a2, unsigned int a3, int a4)
{
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int16 v15; // r13
  __int64 v16; // r15
  __int16 v17; // cx
  USHORT v19; // bx
  __int64 v20; // r15
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  USHORT v22; // cx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v24; // [rsp+44h] [rbp-D4h]
  USHORT ReportCount; // [rsp+46h] [rbp-D2h]
  int v26; // [rsp+48h] [rbp-D0h]
  __int64 v27; // [rsp+50h] [rbp-C8h]
  PHIDP_PREPARSED_DATA v28; // [rsp+58h] [rbp-C0h]
  __int64 v29; // [rsp+60h] [rbp-B8h]
  __int64 v30; // [rsp+68h] [rbp-B0h]
  __int64 v31; // [rsp+70h] [rbp-A8h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-98h] BYREF

  v28 = a2;
  v27 = a1;
  v6 = a4;
  v26 = a4;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v7 = *(_QWORD *)(a1 + 768);
  ValueCapsLength[0] = 1;
  v8 = *(unsigned __int16 *)(v7 + 4);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(unsigned __int16 *)(v9 + 24 * v8 + 4);
  v11 = 0;
  *(_WORD *)(v7 + 8) = 0;
  v12 = Win32AllocPoolZInitImpl(256LL, 8LL * a3, 0x77637352u);
  v31 = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = 3 * v10;
    *(_QWORD *)(v7 + 24) = v12;
    v15 = 0;
    v24 = 0;
    v30 = 3 * v10;
    if ( *(_WORD *)(v9 + 24 * v10 + 6) )
    {
      do
      {
        if ( !(_WORD)v8 )
          break;
        v16 = 3LL * (unsigned __int16)v8;
        v29 = v16;
        if ( *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 6) )
        {
          if ( v26 )
          {
            v19 = *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 10);
            if ( v19 )
            {
              v20 = v27;
              PreparsedData = v28;
              do
              {
                ValueCapsLength[0] = 1;
                if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, v19, 0x30u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
                {
                  ReportCount = ValueCaps.ReportCount;
                  ValueCapsLength[0] = 1;
                  if ( HidP_GetSpecificValueCaps(HidP_Input, 1u, v19, 0x31u, &ValueCaps, ValueCapsLength, PreparsedData) == 1114112 )
                  {
                    v22 = ValueCaps.ReportCount;
                    if ( (_WORD)v8 == *(_WORD *)(v7 + 4) )
                    {
                      *(_WORD *)(v7 + 8) = v19;
                      v11 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v7 + 24) + 8LL * (unsigned __int16)v8 + 2) = v19;
                    if ( v22 == ReportCount && ReportCount == 2 )
                      *(_DWORD *)(v20 + 368) |= 0x200u;
                  }
                }
                v19 = *(_WORD *)(v9 + 24LL * v19 + 8);
              }
              while ( v19 );
              v16 = v29;
              v15 = v24;
              v14 = v30;
              v13 = v31;
            }
          }
        }
        v17 = v8;
        v8 = *(unsigned __int16 *)(v9 + 8 * v16 + 8);
        if ( (_WORD)v8 )
          *(_WORD *)(v13 + 8 * v8 + 4) = v17;
        else
          *(_WORD *)(v7 + 6) = v17;
        v24 = ++v15;
      }
      while ( v15 < *(_WORD *)(v9 + 8 * v14 + 6) );
      v6 = v26;
    }
    if ( !v6 )
      return 1;
  }
  return v11;
}
