/*
 * XREFs of DrvDbGetDeviceIdDriverInfMatches @ 0x140951640
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x14092F690 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1404209E0 (RtlStringCchCopyExW.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1409518B0 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _RegRtlQueryInfoKey @ 0x140951A2C (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumValue @ 0x14095324C (_RegRtlEnumValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetDeviceIdDriverInfMatches(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6)
{
  _DWORD *v6; // r15
  void *v7; // rdi
  __int64 v8; // r12
  int InfoKey; // ebx
  int v10; // r14d
  char *Pool2; // rsi
  ULONG i; // r13d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // edi
  int v17; // r12d
  __int64 v18; // rax
  int v20; // edi
  int v21; // eax
  ULONG v22; // [rsp+40h] [rbp-18h] BYREF
  int v23; // [rsp+44h] [rbp-14h] BYREF
  __int64 v24[2]; // [rsp+48h] [rbp-10h] BYREF
  int v25; // [rsp+A0h] [rbp+48h] BYREF
  int v26; // [rsp+A4h] [rbp+4Ch]
  void *v27; // [rsp+A8h] [rbp+50h]
  __int64 v28; // [rsp+B0h] [rbp+58h]
  unsigned int v29; // [rsp+B8h] [rbp+60h]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v26 = HIDWORD(a1);
  v6 = (_DWORD *)a5;
  v7 = a2;
  v8 = a3;
  v22 = 0;
  *(_DWORD *)a5 = 0;
  v25 = 0;
  v24[0] = 0LL;
  v23 = 0;
  InfoKey = RegRtlQueryInfoKey((_DWORD)a2, 0, 0, (unsigned int)&v22, (__int64)&v25, 0LL);
  if ( InfoKey >= 0 )
  {
    v10 = v25 + 1;
    if ( v22 )
    {
      if ( a6 )
        v10 = v25 + 17;
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v25 = v10;
          if ( a6 )
          {
            LODWORD(a5) = 4;
            v13 = RegRtlEnumValue(v7, i, Pool2, (__int64)v24, &v23, (__int64)&a5);
            if ( v13 < 0 )
            {
              InfoKey = 0;
              if ( v13 != -2147483622 )
                InfoKey = v13;
              break;
            }
            if ( !v25 )
              goto LABEL_23;
            if ( LODWORD(v24[0]) == 3 )
            {
              if ( (_DWORD)a5 != 4 )
                goto LABEL_23;
            }
            else
            {
              v23 = 0;
            }
            InfoKey = DrvDbBuildDeviceIdDriverInfMatch(v14, &v23, &Pool2[2 * v25], (unsigned int)(v10 - v25));
            if ( InfoKey < 0 )
              goto LABEL_31;
            v15 = -1LL;
            do
              ++v15;
            while ( *(_WORD *)&Pool2[2 * v15] );
            v16 = v15 + 1;
          }
          else
          {
            InfoKey = RegRtlEnumValue(v7, i, Pool2, (__int64)v24, 0LL, 0LL);
            if ( InfoKey < 0 )
            {
              v21 = 0;
              if ( InfoKey != -2147483622 )
                v21 = InfoKey;
              InfoKey = v21;
              break;
            }
            v20 = v25;
            if ( !v25 )
            {
LABEL_23:
              InfoKey = -1073741595;
              goto LABEL_31;
            }
            *(_WORD *)&Pool2[2 * v25] = 0;
            v16 = v20 + 1;
          }
          if ( v8 )
          {
            v17 = v16 + HIDWORD(v24[0]);
            if ( v16 + HIDWORD(v24[0]) < v29 )
            {
              RtlStringCchCopyExW(
                (NTSTRSAFE_PWSTR)(v28 + 2LL * HIDWORD(v24[0])),
                v29 - HIDWORD(v24[0]),
                (NTSTRSAFE_PCWSTR)Pool2,
                0LL,
                0LL,
                0x900u);
              HIDWORD(v24[0]) = v17;
            }
            v8 = v28;
          }
          *v6 += v16;
          v7 = v27;
        }
        if ( InfoKey >= 0 )
        {
          v18 = (unsigned int)*v6;
          if ( (_DWORD)v18 )
          {
            *v6 = v18 + 1;
            if ( v8 && (int)v18 + 1 <= v29 )
              *(_WORD *)(v8 + 2 * v18) = 0;
            else
              InfoKey = -1073741789;
          }
          else
          {
            InfoKey = -1073741275;
          }
        }
LABEL_31:
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)InfoKey;
}
