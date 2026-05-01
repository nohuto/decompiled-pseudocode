/*
 * XREFs of ?RmpActivityHostFindByPsmId@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019300
 * Callers:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C818 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18005D798 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180018940 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
 */

__int64 __fastcall RmpActivityHostFindByPsmId(
        struct _RM_SERVICE_GLOBALS *a1,
        const wchar_t *a2,
        struct _RM_ACTIVITY_HOST **a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // r10
  int v9; // r9d
  __int64 v11; // rdi
  unsigned __int64 v12; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  v12 = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)a1, (unsigned __int64)a2);
  v7 = -1073741275;
  RtlAcquireSRWLockShared((char *)a1 + 32);
LABEL_2:
  v8 = v12 & (-1LL << (*((_BYTE *)a1 + 3348) & 0x1F));
  if ( v6 )
    goto LABEL_5;
  v9 = *((_DWORD *)a1 + 837) >> 5;
  if ( v9 )
  {
    v6 = *((_QWORD *)a1 + 419)
       + 8LL
       * ((37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v8)) & (unsigned int)(v9 - 1));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v8 == ((-1LL << (*((_BYTE *)a1 + 3348) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      {
        if ( !v6 )
          break;
        v11 = v6 - 1408;
        if ( !_wcsicmp(a2, (const wchar_t *)(v6 - 1408 + 88)) && !memcmp_0(a2 + 232, (const void *)(v11 + 552), 0x58uLL) )
        {
          v7 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16)) <= 1 )
            __fastfail(0xEu);
          *a3 = (struct _RM_ACTIVITY_HOST *)v11;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared((char *)a1 + 32);
  return v7;
}
