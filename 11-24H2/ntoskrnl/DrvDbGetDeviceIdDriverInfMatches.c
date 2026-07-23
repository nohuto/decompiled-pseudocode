/*
 * XREFs of DrvDbGetDeviceIdDriverInfMatches @ 0x14097EBEC
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x1409256C0 (DrvDbGetDeviceIdMappedProperty.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     _RegRtlEnumValue @ 0x14097E62C (_RegRtlEnumValue.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x14097EE5C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _RegRtlQueryInfoKey @ 0x14097EFD8 (_RegRtlQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned int v11; // eax
  char *Pool2; // rsi
  ULONG i; // r13d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // edi
  int v18; // r12d
  __int64 v19; // rax
  int v21; // edi
  int v22; // eax
  ULONG v23; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+44h] [rbp-14h] BYREF
  __int64 v25[2]; // [rsp+48h] [rbp-10h] BYREF
  int v26; // [rsp+A0h] [rbp+48h] BYREF
  int v27; // [rsp+A4h] [rbp+4Ch]
  void *v28; // [rsp+A8h] [rbp+50h]
  __int64 v29; // [rsp+B0h] [rbp+58h]
  unsigned int v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v27 = HIDWORD(a1);
  v6 = (_DWORD *)a5;
  v7 = a2;
  v8 = a3;
  v23 = 0;
  *(_DWORD *)a5 = 0;
  v26 = 0;
  v25[0] = 0LL;
  v24 = 0;
  InfoKey = RegRtlQueryInfoKey((_DWORD)a2, 0, 0, (unsigned int)&v23, (__int64)&v26, 0LL);
  if ( InfoKey >= 0 )
  {
    v10 = v26 + 1;
    if ( v23 )
    {
      v11 = v26 + 1;
      if ( a6 )
      {
        v11 = v26 + 17;
        v10 = v26 + 17;
      }
      Pool2 = (char *)ExAllocatePool2(0x100uLL, 2LL * v11, 0x42444450u);
      if ( Pool2 )
      {
        for ( i = 0; i < v23; ++i )
        {
          v26 = v10;
          if ( a6 )
          {
            LODWORD(a5) = 4;
            v14 = RegRtlEnumValue(v7, i, Pool2, &v26, v25, &v24, (unsigned int *)&a5);
            if ( v14 < 0 )
            {
              InfoKey = 0;
              if ( v14 != -2147483622 )
                InfoKey = v14;
              break;
            }
            if ( !v26 )
              goto LABEL_23;
            if ( LODWORD(v25[0]) == 3 )
            {
              if ( (_DWORD)a5 != 4 )
                goto LABEL_23;
            }
            else
            {
              v24 = 0;
            }
            InfoKey = DrvDbBuildDeviceIdDriverInfMatch(v15, &v24, &Pool2[2 * v26], (unsigned int)(v10 - v26));
            if ( InfoKey < 0 )
              goto LABEL_31;
            v16 = -1LL;
            do
              ++v16;
            while ( *(_WORD *)&Pool2[2 * v16] );
            v17 = v16 + 1;
          }
          else
          {
            InfoKey = RegRtlEnumValue(v7, i, Pool2, &v26, v25, 0LL, 0LL);
            if ( InfoKey < 0 )
            {
              v22 = 0;
              if ( InfoKey != -2147483622 )
                v22 = InfoKey;
              InfoKey = v22;
              break;
            }
            v21 = v26;
            if ( !v26 )
            {
LABEL_23:
              InfoKey = -1073741595;
              goto LABEL_31;
            }
            *(_WORD *)&Pool2[2 * v26] = 0;
            v17 = v21 + 1;
          }
          if ( v8 )
          {
            v18 = v17 + HIDWORD(v25[0]);
            if ( v17 + HIDWORD(v25[0]) < v30 )
            {
              RtlStringCchCopyExW(
                (NTSTRSAFE_PWSTR)(v29 + 2LL * HIDWORD(v25[0])),
                v30 - HIDWORD(v25[0]),
                (NTSTRSAFE_PCWSTR)Pool2,
                0LL,
                0LL,
                0x900u);
              HIDWORD(v25[0]) = v18;
            }
            v8 = v29;
          }
          *v6 += v17;
          v7 = v28;
        }
        if ( InfoKey >= 0 )
        {
          v19 = (unsigned int)*v6;
          if ( (_DWORD)v19 )
          {
            *v6 = v19 + 1;
            if ( v8 && (int)v19 + 1 <= v30 )
              *(_WORD *)(v8 + 2 * v19) = 0;
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
