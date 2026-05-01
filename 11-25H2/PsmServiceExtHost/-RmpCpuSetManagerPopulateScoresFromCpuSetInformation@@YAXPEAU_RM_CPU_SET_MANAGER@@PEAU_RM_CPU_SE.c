/*
 * XREFs of ?RmpCpuSetManagerPopulateScoresFromCpuSetInformation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18008B21C
 * Callers:
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18008B0AC (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 * Callees:
 *     ?RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z @ 0x18008A8EC (-RmpCpuSetManagerGetNextCandidateIndex@@YAEPEAK_KE@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpCpuSetManagerPopulateScoresFromCpuSetInformation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_SCORE *a2,
        int a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4,
        struct _SYSTEM_CPU_SET_INFORMATION *a5,
        unsigned int a6)
{
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  char *v12; // rdx
  unsigned __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rbx
  char v20; // r9
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // r10d
  int v27; // r11d
  unsigned int v28[4]; // [rsp+20h] [rbp-148h] BYREF
  _QWORD v29[32]; // [rsp+30h] [rbp-138h] BYREF

  v28[0] = 0;
  memset_0(v29, 0, sizeof(v29));
  v10 = 0;
  v11 = 0;
  if ( a6 )
  {
    while ( 1 )
    {
      v12 = (char *)a5 + v11;
      if ( !*((_DWORD *)v12 + 1) )
      {
        v13 = (unsigned __int8)v12[8];
        v14 = (unsigned int)(*((_DWORD *)v12 + 2) - 256) >> 16;
        v28[0] = (unsigned __int8)v12[8];
        v15 = *((_QWORD *)a1 + v14 + 43);
        if ( _bittest64(&v15, v13) )
        {
          v16 = 2LL * v10;
          v29[v14] |= 1LL << v13;
          v17 = *((_QWORD *)a2 + 2 * v10 + 1) & 0xFFFFFFFFFFFFFE01uLL;
          *((_DWORD *)a2 + 2 * v16) = v14;
          *((_DWORD *)a2 + 2 * v16 + 1) = v13;
          v18 = (*((_BYTE *)a4 + 268) & 4) != 0 ? v17 | (2LL * (unsigned __int8)v12[20]) : v17;
          ++v10;
          *((_QWORD *)a2 + v16 + 1) = v18;
          if ( v10 == a3 )
            break;
        }
      }
      v11 += *(_DWORD *)v12;
      if ( v11 >= a6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( v10 != a3 )
    {
      v19 = v29;
      v20 = (*((_DWORD *)a4 + 67) & 2) != 0;
      v21 = a1 - (struct _RM_CPU_SET_MANAGER *)v29;
      do
      {
        v22 = ~*v19 & *(_QWORD *)((char *)v19 + v21 + 344);
        while ( RmpCpuSetManagerGetNextCandidateIndex(v28, v22, v20) )
        {
          v23 = v28[0];
          v22 = v25 & ~(1LL << SLOBYTE(v28[0]));
          v24 = 2LL * v26;
          *((_DWORD *)a2 + 2 * v24) = v27;
          *((_DWORD *)a2 + 2 * v24 + 1) = v23;
        }
        ++v19;
      }
      while ( (unsigned int)(v27 + 1) < 0x20 );
    }
  }
}
