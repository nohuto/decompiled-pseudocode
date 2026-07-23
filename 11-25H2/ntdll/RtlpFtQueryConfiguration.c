/*
 * XREFs of RtlpFtQueryConfiguration @ 0x18014755C
 * Callers:
 *     RtlGetFeatureToggleConfiguration @ 0x180147260 (RtlGetFeatureToggleConfiguration.c)
 *     RtlNotifyFeatureToggleUsage @ 0x1801473D0 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011E080 (RtlQueryInternalFeatureConfiguration.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFtQueryConfiguration(unsigned int a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // eax
  int v5; // ebx
  char v6; // cl
  int v7; // eax
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+6Ch] [rbp+14h]

  v13 = HIDWORD(a2);
  v2 = a2;
  RtlRunOnceExecuteOnce(&_ft_g_init_once, (PRTL_RUN_ONCE_INIT_FN)RtlpFtInitOnceCallback, 0LL, 0LL);
  v12 = 0LL;
  HIDWORD(v10) = HIDWORD(v2);
  v11 = 0LL;
  v4 = RtlQueryInternalFeatureConfiguration(a1, (v13 & 0xE000000) != 0x2000000, &v12, &v11);
  if ( v4 == -2147483614 )
    return v2;
  if ( !v4 )
  {
    HIDWORD(v10) = HIDWORD(v2);
    if ( _ft_g_isTestReadyMedia && (v13 & 0x1000000) != 0 )
    {
      v6 = BYTE4(v11);
      v7 = (DWORD1(v11) >> 4) & 3;
      if ( v7 == 1 )
      {
LABEL_9:
        LODWORD(v2) = v2 | 0x20;
LABEL_15:
        if ( v6 < 0 )
          LODWORD(v2) = v2 | 0x100;
        if ( (BYTE12(v11) & 2) != 0 )
          LODWORD(v2) = v2 | 0x80;
        v5 = v2 & 0xFFFFFFF0;
        goto LABEL_20;
      }
      if ( v7 != 2 )
        goto LABEL_15;
    }
    else
    {
      v6 = BYTE4(v11);
      v8 = (DWORD1(v11) >> 4) & 3;
      if ( v8 != 1 )
      {
        if ( v8 != 2 )
          goto LABEL_15;
        goto LABEL_9;
      }
    }
    LODWORD(v2) = v2 | 0x10;
    goto LABEL_15;
  }
  if ( v4 == 279 && SBYTE4(v11) < 0 )
  {
    v5 = v2 | 0x100;
LABEL_20:
    LODWORD(v10) = v5;
    return v10;
  }
  return v2;
}
