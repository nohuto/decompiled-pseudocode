/*
 * XREFs of ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E73EC
 * Callers:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?UpdateLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402E6CD4 (-UpdateLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 *     ?ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E7568 (-ShouldIgnore@DripsBlockerTrackingHelper@@IEAA_NW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402E759C (-PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1402E7990 (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::RemoveProcessEntry(
        DripsBlockerTrackingHelper *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  DripsBlockerTrackingHelper *v8; // rcx
  const char *v9; // r10
  struct _EPROCESS *v10; // r11
  unsigned int i; // ebp
  __int64 v12; // r14
  SIZE_T v13; // rax
  unsigned int j; // esi
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // eax
  int v18; // eax
  SIZE_T Length; // [rsp+30h] [rbp-78h] BYREF
  _OWORD Source2[2]; // [rsp+38h] [rbp-70h] BYREF
  char v22; // [rsp+58h] [rbp-50h]

  v5 = 0;
  if ( !*((_BYTE *)a1 + 302080) )
    return 0LL;
  if ( !(unsigned __int8)DripsBlockerTrackingHelper::ShouldIgnore(a1, a5) )
  {
    Length = 0LL;
    v22 = 0;
    memset(Source2, 0, sizeof(Source2));
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(v8, v9, v10, (char *)Source2, 0x21u, &Length);
    for ( i = 0; i < 0x40; ++i )
    {
      v12 = 4720LL * i;
      if ( *((_BYTE *)a1 + v12 + 104) )
      {
        if ( *(_QWORD *)((char *)a1 + v12) == a2 )
        {
          v13 = RtlCompareMemory((char *)a1 + v12 + 8, Source2, Length);
          if ( v13 == Length )
          {
            for ( j = 0; j < *(_DWORD *)((char *)a1 + v12 + 44); ++j )
            {
              v15 = v12 + 72LL * j;
              if ( *(_DWORD *)((char *)a1 + v15 + 172) == a5 )
              {
                v16 = v12 + 72 * (j + 2LL);
                v17 = *(_DWORD *)((char *)a1 + v16);
                if ( !v17 )
                  return (unsigned int)-1073741275;
                v18 = v17 - 1;
                *(_DWORD *)((char *)a1 + v16) = v18;
                if ( !v18 )
                {
                  if ( *((_BYTE *)a1 + v15 + 112) == 1 )
                  {
                    DripsBlockerTrackingHelper::AddActiveTime(a1, i, j);
                    *((_BYTE *)a1 + v15 + 112) = 0;
                    *(_DWORD *)((char *)a1 + v16) = 0;
                  }
                  DripsBlockerTrackingHelper::UpdateLastActiveEntry(a1, i, j);
                }
                return v5;
              }
            }
          }
        }
      }
    }
    return (unsigned int)-1073741275;
  }
  return v5;
}
