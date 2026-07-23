/*
 * XREFs of _RtlMuiRegAddLIPParent @ 0x180148070
 * Callers:
 *     _RtlpMuiRegInitLIPLanguage @ 0x180148660 (_RtlpMuiRegInitLIPLanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800993D0 (RtlpMuiRegGetOrAddString.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlMuiRegAddLIPParent(__int64 a1, __int64 a2, unsigned int a3, const WCHAR *a4)
{
  __int64 v4; // rsi
  unsigned int v8; // edx
  __int16 v9; // r10
  __int64 v10; // rcx
  int v11; // r9d
  __int16 v12; // r11
  _WORD *v13; // r8
  int v14; // ecx
  DWORD Lcid; // [rsp+20h] [rbp-38h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-30h] BYREF
  __int16 v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  Lcid = 0;
  v18 = -1;
  String = 0LL;
  if ( !a1 || !a2 || a3 >= 4 || !a4 || !*a4 )
    return 3221225485LL;
  RtlInitUnicodeString(&String, a4);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    v8 = RtlpMuiRegGetOrAddString(a1, a4, 1, &v18);
    if ( (v8 & 0x80000000) == 0 )
    {
      v9 = v18;
      if ( v18 >= 0 )
      {
        v10 = *(_QWORD *)(a1 + 24);
        v11 = 0;
        v12 = Lcid;
        v13 = *(_WORD **)(v10 + 16);
        v14 = *(unsigned __int16 *)(v10 + 6);
        while ( v11 < v14 )
        {
          if ( (*v13 & 0x3024) == 0x20 )
          {
            if ( (((unsigned __int16)Lcid - 4096) & 0xFFFFFBFF) != 0 )
            {
              if ( v13[2] == (_WORD)Lcid )
              {
                if ( (__int16)v13[3] >= 0 && v13[3] != v18 )
                  return (unsigned int)-1073741823;
LABEL_16:
                if ( (v11 & 0x8000u) == 0 )
                {
                  *(_WORD *)(a2 + 8) = (2 << (2 * v4)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * v4));
                  *(_WORD *)(a2 + 2 * v4 + 12) = v11;
                  return v8;
                }
                break;
              }
            }
            else if ( v13[3] == v18 )
            {
              goto LABEL_16;
            }
          }
          ++v11;
          v13 += 14;
        }
        if ( (_WORD)Lcid )
        {
          *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & ~(3 << (2 * v4)) | (1 << (2 * v4));
          *(_WORD *)(a2 + 2 * v4 + 12) = v12;
          return v8;
        }
        if ( v18 > 0 )
        {
          *(_WORD *)(a2 + 8) = (3 << (2 * v4)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * v4));
          *(_WORD *)(a2 + 2 * v4 + 12) = v9;
          return v8;
        }
      }
    }
  }
  return (unsigned int)-1073741823;
}
