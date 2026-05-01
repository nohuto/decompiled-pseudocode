/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18003A570
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800183C8 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A714 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA5C (-HampHostCompleteQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        int a4,
        int *a5,
        _QWORD *a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // r12
  __int64 v12; // r8
  int v13; // eax
  char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  int v17; // ebx
  ULONG v18; // eax
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  PSID Sid; // [rsp+30h] [rbp-D0h]
  wchar_t *Source; // [rsp+38h] [rbp-C8h]
  wchar_t Destination[232]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[68]; // [rsp+210h] [rbp+110h] BYREF
  int v25; // [rsp+254h] [rbp+154h]
  int v26; // [rsp+258h] [rbp+158h]
  __int64 v27; // [rsp+260h] [rbp+160h]

  Sid = a3;
  Source = a2;
  if ( a8 <= 1 && a7 )
  {
    v11 = a7;
    do
    {
      if ( a8 )
      {
        P = 0LL;
        RmpAcquireGlobalLock();
        LOBYTE(v12) = 2;
        v13 = RmpActivityHostFindByHostId(*(_QWORD *)(a1 + 120), *a6, v12, &P);
        v14 = (char *)P;
        if ( v13 >= 0 )
        {
          HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64), 0);
          HampHostCompleteQuiesce((struct _RM_HAM_ACTIVITY_HOST *)(v14 + 64));
          HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)(v14 + 64));
        }
        RmpReleaseGlobalLock();
        if ( v14 )
          RmpObjectRelease(v14, v15);
      }
      else
      {
        v16 = *a6;
        v17 = *a5;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, Source);
        memset_0(v24, 0, sizeof(v24));
        v18 = RtlLengthSid(Sid);
        memcpy_0(v24, Sid, v18);
        v25 = a4;
        v26 = v17;
        v27 = v16;
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (ExecutionModel::ResourceManager *)(a1 - 8),
          (struct _RM_PSM_HOST_INFO *)Destination);
      }
      ++a6;
      ++a5;
      --v11;
    }
    while ( v11 );
  }
}
